/*
 * XREFs of DrvGetDisplayDriverNames @ 0x14011D910
 * Callers:
 *     DrvBuildDevmodeList @ 0x14004BF38 (DrvBuildDevmodeList.c)
 *     DrvEscapeRemoteDrivers @ 0x1401586B0 (DrvEscapeRemoteDrivers.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     PALLOCNOZ @ 0x14004B924 (PALLOCNOZ.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

unsigned int *__fastcall DrvGetDisplayDriverNames(__int64 a1)
{
  _WORD *v1; // rax
  unsigned int *v3; // rdi
  int v4; // esi
  unsigned int v5; // r14d
  __int64 v6; // rax
  _WORD *v7; // rbx
  __int64 v8; // rax

  v1 = *(_WORD **)(a1 + 200);
  v3 = 0LL;
  v4 = 0;
  if ( v1 )
  {
    v5 = 0;
    while ( *v1 )
    {
      ++v5;
      do
      {
        ++v1;
        v4 += 2;
      }
      while ( *v1 );
      ++v1;
      v4 += 2;
    }
    v6 = PALLOCNOZ(v4 + 24 * v5 + 26, 1936876615LL);
    v3 = (unsigned int *)v6;
    if ( v6 )
    {
      v7 = (_WORD *)(v6 + 24LL * (v5 + 1));
      memmove(v7, *(const void **)(a1 + 200), (unsigned int)(v4 + 2));
      v8 = 0LL;
      *v3 = 0;
      while ( *v7 )
      {
        *(_QWORD *)&v3[4 * v8 + 4] = v7;
        if ( *v3 >= v5 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2754;
          return v3;
        }
        *(_QWORD *)&v3[4 * *v3 + 2] = *(_QWORD *)(a1 + 136);
        v8 = *v3 + 1;
        *v3 = v8;
        while ( *v7 )
          ++v7;
        ++v7;
      }
    }
  }
  return v3;
}
