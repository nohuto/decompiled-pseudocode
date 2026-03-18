/*
 * XREFs of ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400EE958
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x14007FE94 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x1400F1384 (rimLidClosedPolicyUpdateStateAndApply.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x140124D70 (--$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z.c)
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14016959C (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     rimDisplayOffPolicyUpdateStateAndApply @ 0x140184450 (rimDisplayOffPolicyUpdateStateAndApply.c)
 *     UserPowerInfoCallout @ 0x1401B1014 (UserPowerInfoCallout.c)
 * Callees:
 *     <none>
 */

void __fastcall DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::~ObjectLock<>(__int64 a1)
{
  PERESOURCE *v2; // rcx

  if ( *(_BYTE *)(a1 + 40) )
  {
    v2 = *(PERESOURCE **)a1;
    if ( v2 )
      ExReleaseResourceAndLeaveCriticalRegion(*v2);
    *(_BYTE *)(a1 + 40) = 0;
  }
}
