/*
 * XREFs of HvlpSlowSendSyntheticClusterIpiEx @ 0x1402F2F54
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x140251330 (HvlSendSyntheticClusterIpi.c)
 * Callees:
 *     HvlpAffinityToHvProcessorSet @ 0x1402F46DC (HvlpAffinityToHvProcessorSet.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlpSlowSendSyntheticClusterIpiEx(__int64 a1, int a2)
{
  _DWORD *v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int16 v7; // bx
  __int128 v9; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v10; // [rsp+38h] [rbp-D0h]
  __int64 v11; // [rsp+40h] [rbp-C8h]
  _BYTE v12[176]; // [rsp+48h] [rbp-C0h] BYREF

  v10 = 0LL;
  LODWORD(v11) = 0;
  v9 = 0LL;
  v4 = (_DWORD *)HvlpAcquireHypercallPage(&v9, 1LL, v12, 88LL);
  v5 = HvlpAffinityToHvProcessorSet(a1, v4 + 2, (v9 & 2) != 0 ? 64 : 4072);
  if ( v5 == -1 )
  {
    HvlpReleaseHypercallPage(&v9);
    v4 = (_DWORD *)HvlpAcquireHypercallPage(&v9, 1LL, 0LL, 0LL);
    v5 = HvlpAffinityToHvProcessorSet(a1, v4 + 2, 4072LL);
  }
  v6 = v11;
  v4[1] = 0;
  *v4 = a2;
  v7 = HvcallInitiateHypercall(((v5 + 7) << 14) & 0x3FE0000 | 0x15LL, v6, 0LL);
  HvlpReleaseHypercallPage(&v9);
  return v7 != 0 ? 0xC0000001 : 0;
}
