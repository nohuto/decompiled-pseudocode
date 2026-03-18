/*
 * XREFs of GreGetClipBox @ 0x14003ACA0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x140086930 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012FA0 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x14001B740 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     bCvtPts1 @ 0x140038594 (bCvtPts1.c)
 *     ?QuickInitXform@DC@@QEAA?AVEXFORMOBJ@@K@Z @ 0x140039640 (-QuickInitXform@DC@@QEAA-AVEXFORMOBJ@@K@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x14003AC1C (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x14003AC58 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14003BBF4 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14003D020 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14003FDEC (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140040038 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x140117A28 (-bInFullScreen@DC@@QEBAHXZ.c)
 */

__int64 __fastcall GreGetClipBox(HDC a1, __int64 a2, int a3)
{
  unsigned int v5; // edi
  DC *v6; // r10
  struct REGION *v7; // rax
  DC *v8; // r10
  __int128 v9; // xmm0
  int v10; // edx
  int v11; // r9d
  int v12; // r8d
  __int64 v13; // rax
  DC *v14; // rsi
  DC *v16; // rcx
  int v17; // eax
  int v18; // ecx
  struct REGION *v19; // [rsp+28h] [rbp-E0h] BYREF
  DC *v20[14]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v21[160]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v22; // [rsp+170h] [rbp+68h] BYREF

  v5 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v20, a1);
  if ( v20[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v21);
    if ( !(unsigned int)DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v21, (__int64 **)v20, 1) )
    {
      v16 = v20[0];
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      if ( !*((_QWORD *)v16 + 62) || (unsigned int)DC::bInFullScreen(v16) )
        v5 = 1;
      goto LABEL_17;
    }
    if ( DC::prgnRao(v20[0]) )
      v7 = DC::prgnRao(v6);
    else
      v7 = DC::prgnVisSnap(v6);
    v9 = *(_OWORD *)((char *)v7 + 52);
    v19 = v7;
    *(_OWORD *)a2 = v9;
    v10 = *(_DWORD *)(a2 + 8);
    if ( *(_DWORD *)a2 >= v10 || (v11 = *(_DWORD *)(a2 + 12), v12 = *(_DWORD *)(a2 + 4), v12 >= v11) )
    {
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
LABEL_16:
      v5 = RGNOBJ::iComplexity((RGNOBJ *)&v19);
LABEL_17:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v21);
      goto LABEL_18;
    }
    v13 = *((_DWORD *)v8 + 10) & 1;
    *(_DWORD *)a2 -= *((_DWORD *)v8 + 2 * v13 + 254);
    *(_DWORD *)(a2 + 8) = v10 - *((_DWORD *)v8 + 2 * v13 + 254);
    *(_DWORD *)(a2 + 4) = v12 - *((_DWORD *)v8 + 2 * v13 + 255);
    *(_DWORD *)(a2 + 12) = v11 - *((_DWORD *)v8 + 2 * v13 + 255);
    if ( a3 )
    {
      DC::QuickInitXform((__int64)v8, &v22, -2147482622);
      if ( v22 )
      {
        v8 = v20[0];
        v14 = v20[0];
        if ( (*(_BYTE *)(v22 + 32) & 0x43) == 0x43 )
          goto LABEL_12;
        if ( (unsigned int)bCvtPts1(v22, a2, 2LL) )
        {
          v8 = v20[0];
LABEL_12:
          if ( (*(_DWORD *)(*((_QWORD *)v14 + 122) + 108LL) & 1) != 0 )
          {
            ++*(_DWORD *)a2;
            ++*(_DWORD *)(a2 + 8);
          }
          goto LABEL_15;
        }
      }
      v8 = v20[0];
    }
LABEL_15:
    if ( (*(_DWORD *)(*((_QWORD *)v8 + 122) + 108LL) & 1) != 0 )
    {
      v17 = *(_DWORD *)(a2 + 8);
      v18 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > v17 )
      {
        *(_DWORD *)a2 = v17;
        *(_DWORD *)(a2 + 8) = v18;
      }
    }
    goto LABEL_16;
  }
LABEL_18:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v20);
  return v5;
}
