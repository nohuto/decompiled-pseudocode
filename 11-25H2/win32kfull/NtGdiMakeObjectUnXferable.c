/*
 * XREFs of NtGdiMakeObjectUnXferable @ 0x1402633B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082AC4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x140082B20 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x1400D79B4 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiMakeObjectUnXferable(HDC a1)
{
  __int64 v2; // rdx
  HSEMAPHORE v3; // rbx
  struct _GRETHREAD *v4; // rax
  bool v5; // zf
  HSEMAPHORE v7; // rbx
  struct _GRETHREAD *v8; // rax
  _QWORD v9[11]; // [rsp+20h] [rbp-58h] BYREF
  HSEMAPHORE v10; // [rsp+80h] [rbp+8h] BYREF

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  SEMOBJ<20>::SEMOBJ<20>((Gre::Base *)&v10);
  v2 = (BYTE2(a1) & 0x1Fu) - 1;
  if ( (BYTE2(a1) & 0x1F) == 1 )
  {
    LOBYTE(v2) = BYTE2(a1) & 0x1F;
    if ( (unsigned int)HmgMarkUnXferable(a1, v2) )
    {
      DCOBJ::DCOBJ((DCOBJ *)v9, a1);
      if ( v9[0] )
        *(_DWORD *)(v9[0] + 2112LL) = 0;
      DCOBJ::~DCOBJ((DCOBJ *)v9);
      v7 = v10;
      if ( v10 )
      {
        EtwTraceGreLockReleaseSemaphore(L"Hmgr", v10);
        v8 = GreGetCurrentThreadCrossSessionCheck();
        if ( v8 )
        {
          v5 = (*((_BYTE *)v8 + 28))-- == 1;
          if ( v5 )
            *(_QWORD *)v8 &= ~0x100000uLL;
          if ( !*(_QWORD *)v8 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v7);
      }
      return 1LL;
    }
  }
  v3 = v10;
  if ( v10 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Hmgr", v10);
    v4 = GreGetCurrentThreadCrossSessionCheck();
    if ( v4 )
    {
      v5 = (*((_BYTE *)v4 + 28))-- == 1;
      if ( v5 )
        *(_QWORD *)v4 &= ~0x100000uLL;
      if ( !*(_QWORD *)v4 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v3);
  }
  return 0LL;
}
