/*
 * XREFs of MiInPageGapPage @ 0x14038E580
 * Callers:
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 *     MiValidateInPageEntries @ 0x14038E1C0 (MiValidateInPageEntries.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiInPageGapPage(__int64 a1)
{
  return (*(_DWORD *)(a1 + 32) & 0x70000) == 0x70000 && *(_QWORD *)(a1 + 8) == -3LL;
}
