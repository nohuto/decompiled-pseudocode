/*
 * XREFs of RIMHandlePowerDeviceRemoval @ 0x14014B934
 * Callers:
 *     rimDoRimDevChange @ 0x140033D40 (rimDoRimDevChange.c)
 *     RIMUnregisterForInput @ 0x14009DC10 (RIMUnregisterForInput.c)
 * Callees:
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     RIMHandleTTMDeviceRemoval @ 0x1401F6A34 (RIMHandleTTMDeviceRemoval.c)
 */

__int64 __fastcall RIMHandlePowerDeviceRemoval(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  if ( !isChildPartition(a1, a2) && *(_BYTE *)W32GetUserGdiSessionState(v3) )
    return RIMHandleTTMDeviceRemoval(a1);
  else
    return 0LL;
}
