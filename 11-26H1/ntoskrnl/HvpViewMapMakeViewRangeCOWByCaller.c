/*
 * XREFs of HvpViewMapMakeViewRangeCOWByCaller @ 0x1408B93E8
 * Callers:
 *     HvpViewMapMigrateCOWData @ 0x14085C9CC (HvpViewMapMigrateCOWData.c)
 *     HvpViewMapCOWAndUnsealRange @ 0x1408B9378 (HvpViewMapCOWAndUnsealRange.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x1404A2CD4 (CmSiProtectViewOfSection.c)
 *     HvcallpNoHypervisorPresent @ 0x1404E6190 (HvcallpNoHypervisorPresent.c)
 *     HvpViewMapReleaseChargesAndUnlockViewPages @ 0x1408B95E4 (HvpViewMapReleaseChargesAndUnlockViewPages.c)
 *     HvpViewMapTouchPages @ 0x1408B98D0 (HvpViewMapTouchPages.c)
 */

__int64 __fastcall HvpViewMapMakeViewRangeCOWByCaller(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  int v8; // r14d
  __int64 i; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // [rsp+60h] [rbp+8h] BYREF

  v4 = a3;
  v17 = 0;
  v8 = CmSiProtectViewOfSection(a1, *(__int64 **)(a1 + 24), a2[7] + a3 - a2[3], a4 - a3, 8u, (__int64)&v17);
  if ( v8 >= 0 )
  {
    for ( i = v4; i < a4; i += 4096LL )
    {
      if ( (*((_BYTE *)a2 + ((unsigned __int64)(i - a2[3]) >> 12) + 72) & 2) == 0 )
      {
        v14 = HvcallpNoHypervisorPresent();
        LOBYTE(v16) = 1;
        v8 = HvpViewMapTouchPages(a2[7] + v15, v14, v16);
        if ( v8 < 0 )
        {
          while ( v4 < a4 )
          {
            if ( (*((_BYTE *)a2 + ((unsigned __int64)(v4 - a2[3]) >> 12) + 72) & 6) == 0 )
              CmSiProtectViewOfSection(
                v4 - a2[3],
                *(__int64 **)(a1 + 24),
                v4 - a2[3] + a2[7],
                4096LL,
                0x80000002,
                (__int64)&v17);
            v4 += 4096LL;
          }
          return (unsigned int)v8;
        }
      }
    }
    while ( v4 < a4 )
    {
      v10 = v4 - a2[3];
      v11 = v10 + a2[7];
      v12 = v10 >> 12;
      *((_BYTE *)a2 + (v10 >> 12) + 72) |= 0xAu;
      if ( (*((_BYTE *)a2 + (v10 >> 12) + 72) & 0x10) != 0 )
      {
        HvpViewMapReleaseChargesAndUnlockViewPages(v10, *(_QWORD *)(a1 + 24), v11, 4096LL);
        *((_BYTE *)a2 + v12 + 72) &= ~0x10u;
        --a2[8];
        *((_BYTE *)a2 + v12 + 72) |= 4u;
      }
      v4 += 4096LL;
    }
    return 0;
  }
  return (unsigned int)v8;
}
