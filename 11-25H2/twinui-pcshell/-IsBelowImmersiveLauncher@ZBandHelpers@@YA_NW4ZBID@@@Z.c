/*
 * XREFs of ?IsBelowImmersiveLauncher@ZBandHelpers@@YA_NW4ZBID@@@Z @ 0x18005E4D4
 * Callers:
 *     ?ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x18005F3A0 (-ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANG.c)
 *     ?ActiveZBandChangedForMonitor@CJumpViewExperienceManager@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x1801E0FD0 (-ActiveZBandChangedForMonitor@CJumpViewExperienceManager@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_C.c)
 *     _lambda_898c08e1df1d86c3a23ee6020b72647e_::operator() @ 0x1802FDAE0 (_lambda_898c08e1df1d86c3a23ee6020b72647e_--operator().c)
 *     ?ActiveZBandChangedForMonitor@CTaskContinuityActivitiesExperienceManager@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x180372A50 (-ActiveZBandChangedForMonitor@CTaskContinuityActivitiesExperienceManager@@UEAAJKKPEAUIImmersiveM.c)
 * Callees:
 *     <none>
 */

char __fastcall ZBandHelpers::IsBelowImmersiveLauncher(int a1)
{
  char v1; // dl
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  v1 = 0;
  v2 = a1 - 1;
  if ( !v2 )
    return 1;
  v3 = v2 - 4;
  if ( !v3 )
    return 1;
  v4 = v3 - 3;
  if ( !v4 )
    return 1;
  v5 = v4 - 1;
  if ( !v5 )
    return 1;
  v6 = v5 - 1;
  if ( !v6 || (unsigned int)(v6 - 1) < 2 )
    return 1;
  return v1;
}
