/*
 * XREFs of RaDsmLedStatusToNtStatus @ 0x140091CFC
 * Callers:
 *     NvmeDsmGetSupportedLedState @ 0x14008FA2C (NvmeDsmGetSupportedLedState.c)
 *     RaidDsmGetLedState @ 0x140093B34 (RaidDsmGetLedState.c)
 *     RaidDsmGetSupportedLedState @ 0x140093BEC (RaidDsmGetSupportedLedState.c)
 *     RaidDsmSetLedState @ 0x140093D6C (RaidDsmSetLedState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaDsmLedStatusToNtStatus(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return 0LL;
  v1 = a1 - 1;
  if ( !v1 )
    return 3221225659LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 3221225485LL;
  v3 = v2 - 1;
  if ( v3 && (unsigned int)(v3 - 1) >= 2 )
    return 3221225473LL;
  else
    return 3221225860LL;
}
