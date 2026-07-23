/*
 * XREFs of HvlpFastFlushAddressSpaceTbEx @ 0x1402F38FC
 * Callers:
 *     KiFlushAddressSpaceTb @ 0x140251858 (KiFlushAddressSpaceTb.c)
 *     MiIssueFlushTbEntire @ 0x1402519A0 (MiIssueFlushTbEntire.c)
 *     KeFlushCurrentTbOnly @ 0x140251FE8 (KeFlushCurrentTbOnly.c)
 *     KeFlushTb @ 0x140252130 (KeFlushTb.c)
 * Callees:
 *     HvlpAffinityToHvProcessorSet @ 0x1402F46DC (HvlpAffinityToHvProcessorSet.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlpFastFlushAddressSpaceTbEx(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  int v4; // eax
  _QWORD v6[2]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v7[96]; // [rsp+50h] [rbp-78h] BYREF

  v6[0] = a1;
  v3 = (a3 != 0 ? 0 : 4) | 2u;
  if ( a1 )
    v3 = a3 != 0 ? 0 : 4;
  v6[1] = v3;
  v4 = HvlpAffinityToHvProcessorSet(a2, v7, 80LL);
  return HvcallFastExtended(((v4 + 7) << 14) & 0x3FE0000 | 0x10013u, (unsigned int)v6, v4 + 32, 0, 0);
}
