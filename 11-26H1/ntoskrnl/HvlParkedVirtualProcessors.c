/*
 * XREFs of HvlParkedVirtualProcessors @ 0x1402F4108
 * Callers:
 *     PpmParkReportMask @ 0x1402F3DC0 (PpmParkReportMask.c)
 * Callees:
 *     HvlpAffinityToHvProcessorSet @ 0x1402F46DC (HvlpAffinityToHvProcessorSet.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 HvlParkedVirtualProcessors()
{
  int v0; // eax
  __int64 v2; // rax
  int v3; // eax
  __int64 v4; // rax
  __int128 v5; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v6; // [rsp+48h] [rbp-B8h]
  __int64 v7; // [rsp+50h] [rbp-B0h]
  _BYTE v8[160]; // [rsp+60h] [rbp-A0h] BYREF

  v6 = 0LL;
  LODWORD(v7) = 0;
  v5 = 0LL;
  memset_0(v8, 0, sizeof(v8));
  if ( (HvlEnlightenments & 0x80u) == 0 || (unsigned __int64)((HvlpFlags >> 8) & 0xF) + 3 >= 0xE )
  {
    v2 = HvlpAcquireHypercallPage(&v5, 1LL, v8, 80LL);
    v3 = HvlpAffinityToHvProcessorSet(&PpmPerfCoreParkingMask, v2, (v5 & 2) != 0 ? 64 : 4080);
    if ( v3 == -1 )
    {
      HvlpReleaseHypercallPage(&v5);
      v4 = HvlpAcquireHypercallPage(&v5, 1LL, 0LL, 0LL);
      v3 = HvlpAffinityToHvProcessorSet(&PpmPerfCoreParkingMask, v4, 4080LL);
    }
    HvcallInitiateHypercall(((v3 + 7) << 14) & 0x3FE0000 | 9u, v7, 0LL);
    return HvlpReleaseHypercallPage(&v5);
  }
  else
  {
    v0 = HvlpAffinityToHvProcessorSet(&PpmPerfCoreParkingMask, v8, 96LL);
    return HvcallFastExtended(((v0 + 7) << 14) & 0x3FE0000 | 0x10009u, (unsigned int)v8, v0 + 16, 0, 0);
  }
}
