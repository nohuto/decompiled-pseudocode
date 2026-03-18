/*
 * XREFs of HvResetLogFileStatusAll @ 0x140B282A8
 * Callers:
 *     CmpFlushHive @ 0x1408B321C (CmpFlushHive.c)
 *     HvpPerformLogFileRecovery @ 0x140AEB2A8 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     <none>
 */

void __fastcall HvResetLogFileStatusAll(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 168) == 1 )
    *(_BYTE *)(a1 + 192) = 0;
  else
    *(_WORD *)(a1 + 192) = 0;
}
