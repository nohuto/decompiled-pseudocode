/*
 * XREFs of NtGdiGetDCObject @ 0x14016A340
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x140087BA4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetDCObject(HDC a1, int a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  int v7; // esi
  Gre::Base *v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  __int64 v10; // rdx
  __int64 *v12; // rax
  _QWORD v13[3]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C8h]
  __int128 v15; // [rsp+98h] [rbp-70h] BYREF
  __int64 v16; // [rsp+A8h] [rbp-60h]
  int v17; // [rsp+B0h] [rbp-58h]
  _QWORD v18[14]; // [rsp+B8h] [rbp-50h] BYREF

  v4 = 0LL;
  if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() != 1 || a1 != (HDC)-589410304LL )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v13, a1);
    v5 = (_QWORD *)v13[0];
    if ( v13[0] )
    {
      v6 = *(_QWORD *)(v13[0] + 976LL);
      v7 = *(_DWORD *)(v6 + 152);
      if ( (v7 & 0x1000) != 0 )
      {
        GreDCSelectBrush(v13[0], *(_QWORD *)(v6 + 160));
        v5 = (_QWORD *)v13[0];
      }
      if ( (v7 & 0x2000) != 0 )
      {
        GreDCSelectPen(v5, *(_QWORD *)(v5[122] + 168LL));
        v5 = (_QWORD *)v13[0];
      }
      if ( a2 != 655360 )
      {
        if ( a2 == 327680 )
        {
          DLODCOBJ::DLODCOBJ((DLODCOBJ *)v18);
          v16 = 0LL;
          v15 = 0LL;
          v17 = 0;
          v18[0] = 0LL;
          memset(&v18[10], 0, 24);
          DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)&v15, (struct XDCOBJ *)v13);
          v9 = Gre::Base::Globals(v8);
          v10 = *(_QWORD *)(v13[0] + 496LL);
          if ( v10 )
          {
            if ( v14 )
              v10 = v14;
          }
          else
          {
            v10 = *((_QWORD *)v9 + 533);
          }
          v4 = *(_QWORD *)(v10 + 32);
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v15);
          goto LABEL_13;
        }
        if ( a2 == 0x80000 )
        {
          v4 = v5[10];
          goto LABEL_13;
        }
        if ( a2 != 5242880 )
        {
          if ( a2 == 0x100000 )
          {
            v12 = (__int64 *)v5[17];
            goto LABEL_24;
          }
          if ( a2 != 3145728 )
            goto LABEL_13;
        }
        v12 = (__int64 *)v5[18];
LABEL_24:
        v4 = *v12;
        goto LABEL_13;
      }
      v4 = *(_QWORD *)(v5[122] + 296LL);
    }
LABEL_13:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v13);
    return v4;
  }
  if ( a2 == 655360 )
    return GreGetStockObject(13LL);
  return v4;
}
