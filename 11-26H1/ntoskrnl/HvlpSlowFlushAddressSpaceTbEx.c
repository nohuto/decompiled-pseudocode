/*
 * XREFs of HvlpSlowFlushAddressSpaceTbEx @ 0x1403E65B8
 * Callers:
 *     KiFlushAddressSpaceTb @ 0x14024FEF8 (KiFlushAddressSpaceTb.c)
 *     MiIssueFlushTbEntire @ 0x140250040 (MiIssueFlushTbEntire.c)
 *     KeFlushCurrentTbOnly @ 0x140250688 (KeFlushCurrentTbOnly.c)
 *     KeFlushTb @ 0x1402507D0 (KeFlushTb.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032B890 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032B970 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032BB00 (HvcallInitiateHypercall.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1403E77FC (HvlpAffinityToHvProcessorSet.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall HvlpSlowFlushAddressSpaceTbEx(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // r9
  unsigned int v7; // r8d
  _QWORD *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int128 v15; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-E0h]
  unsigned __int64 v17; // [rsp+40h] [rbp-D8h]
  _BYTE v18[192]; // [rsp+48h] [rbp-D0h] BYREF

  v16 = 0LL;
  LODWORD(v17) = 0;
  v15 = 0LL;
  v6 = HvlpAcquireHypercallPage((__int64)&v15, 1, (__int64)v18, 96LL);
  *v6 = a1;
  v7 = a3 == 0 ? 4 : 0;
  v8 = v6 + 2;
  v9 = v7 | 2;
  if ( a1 )
    v9 = v7;
  v6[1] = v9;
  v10 = HvlpAffinityToHvProcessorSet(a2, v6 + 2, (v15 & 2) != 0 ? 64 : 4064);
  if ( v10 == -1 )
    v10 = HvlpAffinityToHvProcessorSet(0LL, v8, 0LL);
  HvcallInitiateHypercall(((v10 + 7) << 14) & 0x3FE0000 | 0x13u, v17);
  return HvlpReleaseHypercallPage((unsigned int *)&v15, v11, v12, v13);
}
