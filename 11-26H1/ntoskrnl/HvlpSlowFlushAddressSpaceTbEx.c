/*
 * XREFs of HvlpSlowFlushAddressSpaceTbEx @ 0x1402F3498
 * Callers:
 *     KiFlushAddressSpaceTb @ 0x140251858 (KiFlushAddressSpaceTb.c)
 *     MiIssueFlushTbEntire @ 0x1402519A0 (MiIssueFlushTbEntire.c)
 *     KeFlushCurrentTbOnly @ 0x140251FE8 (KeFlushCurrentTbOnly.c)
 *     KeFlushTb @ 0x140252130 (KeFlushTb.c)
 * Callees:
 *     HvlpAffinityToHvProcessorSet @ 0x1402F46DC (HvlpAffinityToHvProcessorSet.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlpSlowFlushAddressSpaceTbEx(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // r9
  unsigned int v7; // r8d
  _QWORD *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int128 v12; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-E0h]
  __int64 v14; // [rsp+40h] [rbp-D8h]
  _BYTE v15[192]; // [rsp+48h] [rbp-D0h] BYREF

  v13 = 0LL;
  LODWORD(v14) = 0;
  v12 = 0LL;
  v6 = (_QWORD *)HvlpAcquireHypercallPage(&v12, 1LL, v15, 96LL);
  *v6 = a1;
  v7 = a3 == 0 ? 4 : 0;
  v8 = v6 + 2;
  v9 = v7 | 2;
  if ( a1 )
    v9 = v7;
  v6[1] = v9;
  v10 = HvlpAffinityToHvProcessorSet(a2, v6 + 2, (v12 & 2) != 0 ? 64 : 4064);
  if ( v10 == -1 )
    v10 = HvlpAffinityToHvProcessorSet(0LL, v8, 0LL);
  HvcallInitiateHypercall(((v10 + 7) << 14) & 0x3FE0000 | 0x13u, v14, 0LL);
  return HvlpReleaseHypercallPage(&v12);
}
