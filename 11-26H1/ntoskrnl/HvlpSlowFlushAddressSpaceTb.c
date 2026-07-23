/*
 * XREFs of HvlpSlowFlushAddressSpaceTb @ 0x1404629F0
 * Callers:
 *     KiFlushAddressSpaceTb @ 0x140251858 (KiFlushAddressSpaceTb.c)
 *     MiIssueFlushTbEntire @ 0x1402519A0 (MiIssueFlushTbEntire.c)
 *     KeFlushCurrentTbOnly @ 0x140251FE8 (KeFlushCurrentTbOnly.c)
 *     KeFlushTb @ 0x140252130 (KeFlushTb.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HvlpPrepareFlushHeader @ 0x140462AA0 (HvlpPrepareFlushHeader.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlpSlowFlushAddressSpaceTb(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v12; // [rsp+20h] [rbp-68h] BYREF
  __int64 v13; // [rsp+30h] [rbp-58h]
  unsigned __int64 v14; // [rsp+38h] [rbp-50h]
  __int64 v15; // [rsp+40h] [rbp-48h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  LODWORD(v14) = 0;
  v6 = HvlpAcquireHypercallPage((__int64)&v12, 1, (__int64)&v15, 24LL);
  LOBYTE(v7) = a3;
  HvlpPrepareFlushHeader(v6, a1, a2, v7);
  HvcallInitiateHypercall(2LL, v14);
  return HvlpReleaseHypercallPage((unsigned int *)&v12, v8, v9, v10);
}
