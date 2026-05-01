/*
 * XREFs of ?ResultFromWin32FromStatus@@YAJJ@Z @ 0x18005B968
 * Callers:
 *     ?_RegisterForLauncherVisibilityNotifications@CImmersiveMode@@AEAAJXZ @ 0x18005A334 (-_RegisterForLauncherVisibilityNotifications@CImmersiveMode@@AEAAJXZ.c)
 *     ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x18005B8F0 (-QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z.c)
 * Callees:
 *     <none>
 */

signed int __fastcall ResultFromWin32FromStatus(NTSTATUS a1)
{
  signed int result; // eax

  result = RtlNtStatusToDosError(a1);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
