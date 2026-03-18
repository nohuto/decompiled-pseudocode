/*
 * XREFs of HvlParkedVirtualProcessors @ 0x1403E7228
 * Callers:
 *     PpmParkReportMask @ 0x1403E6EE0 (PpmParkReportMask.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032B890 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032B970 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032BB00 (HvcallInitiateHypercall.c)
 *     HvcallFastExtended @ 0x14032BFB0 (HvcallFastExtended.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1403E77FC (HvlpAffinityToHvProcessorSet.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 HvlParkedVirtualProcessors()
{
  int v0; // eax
  _QWORD *v2; // rax
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v11; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v13; // [rsp+50h] [rbp-B0h]
  _BYTE v14[160]; // [rsp+60h] [rbp-A0h] BYREF

  v12 = 0LL;
  LODWORD(v13) = 0;
  v11 = 0LL;
  memset_0(v14, 0, sizeof(v14));
  if ( (HvlEnlightenments & 0x80u) == 0 || (unsigned __int64)((HvlpFlags >> 8) & 0xF) + 3 >= 0xE )
  {
    v2 = HvlpAcquireHypercallPage((__int64)&v11, 1, (__int64)v14, 80LL);
    v3 = HvlpAffinityToHvProcessorSet(&PpmPerfCoreParkingMask, v2, (v11 & 2) != 0 ? 64 : 4080);
    if ( v3 == -1 )
    {
      HvlpReleaseHypercallPage((unsigned int *)&v11, v4, v5, v6);
      v7 = HvlpAcquireHypercallPage((__int64)&v11, 1, 0LL, 0LL);
      v3 = HvlpAffinityToHvProcessorSet(&PpmPerfCoreParkingMask, v7, 4080LL);
    }
    HvcallInitiateHypercall(((v3 + 7) << 14) & 0x3FE0000 | 9u, v13);
    return HvlpReleaseHypercallPage((unsigned int *)&v11, v8, v9, v10);
  }
  else
  {
    v0 = HvlpAffinityToHvProcessorSet(&PpmPerfCoreParkingMask, v14, 96LL);
    return HvcallFastExtended(((v0 + 7) << 14) & 0x3FE0000 | 0x10009LL, (unsigned __int64)v14, v0 + 16, 0LL, 0);
  }
}
