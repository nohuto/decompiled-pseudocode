/*
 * XREFs of NtGdiCreateRectRgn @ 0x14008EAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x140010450 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140011FD0 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x140013C70 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     HmgPentryFromPobj @ 0x14001AA80 (HmgPentryFromPobj.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14001F850 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x14001F87C (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     HmgInsertObjectInternal @ 0x14001F910 (HmgInsertObjectInternal.c)
 *     HmgFreeObjectAttr @ 0x14008E9D0 (HmgFreeObjectAttr.c)
 *     HmgAllocateObjectAttr @ 0x14008EC40 (HmgAllocateObjectAttr.c)
 *     ?GreEncodeUserModePointer@@YAPEAXPEAX@Z @ 0x14008EE10 (-GreEncodeUserModePointer@@YAPEAXPEAX@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  __int64 v4; // rcx
  LONG left; // ecx
  LONG top; // ecx
  struct HOBJ__ *inserted; // rax
  struct HOBJ__ *v9; // rsi
  void *v10; // rdi
  unsigned int v11; // r9d
  unsigned int v12; // r8d
  void *ObjectAttr; // rdi
  struct OBJECT *v14; // rbx
  struct OBJECT *v15; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v16[32]; // [rsp+28h] [rbp-48h] BYREF
  struct OBJECT *v17; // [rsp+48h] [rbp-28h]
  struct _RECTL v18; // [rsp+50h] [rbp-20h] BYREF

  v18.left = a1;
  v4 = a1 & 0xF8000000;
  v18.top = a2;
  v18.right = a3;
  v18.bottom = a4;
  if ( (_DWORD)v4 != 0 && (_DWORD)v4 != -134217728
    || (v11 = a4 & 0xF8000000) != 0 && v11 != -134217728
    || (v12 = a3 & 0xF8000000) != 0 && v12 != -134217728
    || (a2 & 0xF8000000) != 0 && (a2 & 0xF8000000) != 0xF8000000 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    v9 = 0LL;
    ObjectAttr = (void *)HmgAllocateObjectAttr(v4);
    if ( ObjectAttr && (RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v15), (v14 = v15) != 0LL) )
    {
      left = v18.left;
      if ( v18.left > v18.right )
      {
        v18.left = v18.right;
        v18.right = left;
      }
      top = v18.top;
      if ( v18.top > v18.bottom )
      {
        v18.top = v18.bottom;
        v18.bottom = top;
      }
      RGNOBJ::vSet((RGNOBJ *)&v15, &v18);
      HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v16);
      inserted = 0LL;
      if ( v17 || (inserted = HmgInsertObjectInternal(v14, 1, 4u)) == 0LL )
      {
        v9 = inserted;
        RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v15);
        HmgFreeObjectAttr((__int64)ObjectAttr);
      }
      else
      {
        v17 = v14;
        v9 = inserted;
        v10 = GreEncodeUserModePointer(ObjectAttr);
        *(_QWORD *)(HmgPentryFromPobj(v14) + 16) = v10;
      }
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v16);
    }
    else
    {
      EngSetLastError(8u);
    }
    return v9;
  }
}
