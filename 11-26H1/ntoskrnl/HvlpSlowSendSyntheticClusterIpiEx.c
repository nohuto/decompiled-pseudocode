/*
 * XREFs of HvlpSlowSendSyntheticClusterIpiEx @ 0x1403E6070
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x14024F9D0 (HvlSendSyntheticClusterIpi.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032B890 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032B970 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032BB00 (HvcallInitiateHypercall.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1403E77FC (HvlpAffinityToHvProcessorSet.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall HvlpSlowSendSyntheticClusterIpiEx(__int64 a1, int a2)
{
  _DWORD *v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  __int16 v10; // bx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int128 v15; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v17; // [rsp+40h] [rbp-C8h]
  _BYTE v18[176]; // [rsp+48h] [rbp-C0h] BYREF

  v16 = 0LL;
  LODWORD(v17) = 0;
  v15 = 0LL;
  v4 = HvlpAcquireHypercallPage((__int64)&v15, 1, (__int64)v18, 88LL);
  v5 = HvlpAffinityToHvProcessorSet(a1, v4 + 2, (v15 & 2) != 0 ? 64 : 4072);
  if ( v5 == -1 )
  {
    HvlpReleaseHypercallPage((unsigned int *)&v15, v6, v7, v8);
    v4 = HvlpAcquireHypercallPage((__int64)&v15, 1, 0LL, 0LL);
    v5 = HvlpAffinityToHvProcessorSet(a1, v4 + 2, 4072LL);
  }
  v9 = v17;
  v4[1] = 0;
  *v4 = a2;
  v10 = HvcallInitiateHypercall(((v5 + 7) << 14) & 0x3FE0000 | 0x15LL, v9);
  HvlpReleaseHypercallPage((unsigned int *)&v15, v11, v12, v13);
  return v10 != 0 ? 0xC0000001 : 0;
}
