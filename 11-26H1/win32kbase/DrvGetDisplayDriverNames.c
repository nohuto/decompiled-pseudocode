/*
 * XREFs of DrvGetDisplayDriverNames @ 0x14000DD90
 * Callers:
 *     DrvBuildDevmodeList @ 0x140150FE4 (DrvBuildDevmodeList.c)
 *     DrvEscapeRemoteDrivers @ 0x1401973A0 (DrvEscapeRemoteDrivers.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019DDA0 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

unsigned int *__fastcall DrvGetDisplayDriverNames(__int64 a1)
{
  _WORD *v1; // rax
  unsigned int *v3; // rdi
  int v4; // esi
  unsigned int v5; // r14d
  unsigned int *v6; // rbx
  __int64 v7; // rax

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
    v3 = (unsigned int *)PALLOCNOZ(v4 + 24 * v5 + 26, 1936876615LL);
    if ( v3 )
    {
      v6 = &v3[6 * v5 + 6];
      memmove(v6, *(const void **)(a1 + 200), (unsigned int)(v4 + 2));
      v7 = 0LL;
      *v3 = 0;
      while ( *(_WORD *)v6 )
      {
        *(_QWORD *)&v3[4 * v7 + 4] = v6;
        if ( *v3 >= v5 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 151;
          return v3;
        }
        *(_QWORD *)&v3[4 * *v3 + 2] = *(_QWORD *)(a1 + 136);
        v7 = *v3 + 1;
        *v3 = v7;
        while ( *(_WORD *)v6 )
          v6 = (unsigned int *)((char *)v6 + 2);
        v6 = (unsigned int *)((char *)v6 + 2);
      }
    }
  }
  return v3;
}
