/*
 * XREFs of RIMHandlePowerDeviceRemoval @ 0x14018364C
 * Callers:
 *     rimDoRimDevChange @ 0x140096D74 (rimDoRimDevChange.c)
 *     RIMUnregisterForInput @ 0x140129F90 (RIMUnregisterForInput.c)
 * Callees:
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     RIMHandleTTMDeviceRemoval @ 0x140211A54 (RIMHandleTTMDeviceRemoval.c)
 */

__int64 __fastcall RIMHandlePowerDeviceRemoval(__int64 a1, int a2, int a3)
{
  __int64 v4; // rcx

  if ( isChildPartition(a1, a2, a3) || !*(_BYTE *)W32GetUserGdiSessionState(v4) )
    return 0LL;
  else
    return RIMHandleTTMDeviceRemoval(a1);
}
