/*
 * XREFs of ?ResultFromWin32FromStatus@@YAJJ@Z @ 0x1800D87C4
 * Callers:
 *     ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x1800D8754 (-QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z.c)
 *     ?_RegisterForLauncherVisibilityNotifications@CImmersiveMode@@AEAAJXZ @ 0x1800DA400 (-_RegisterForLauncherVisibilityNotifications@CImmersiveMode@@AEAAJXZ.c)
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
