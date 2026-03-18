/*
 * XREFs of PopFxDeliverDevicePowerRequired @ 0x1403B3CC4
 * Callers:
 *     PopFxProcessWork @ 0x1403AEEC0 (PopFxProcessWork.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x1404D4C60 (PopFxIdleTimeoutDpcRoutine.c)
 *     PopFxDeviceWork @ 0x1405054E0 (PopFxDeviceWork.c)
 * Callees:
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140219E80 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxCompleteDevicePowerRequired @ 0x1403B2E44 (PopFxCompleteDevicePowerRequired.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopFxDeliverDevicePowerRequired(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  if ( *(_DWORD *)(BugCheckParameter2 + 36) == 2 )
  {
    PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(BugCheckParameter2 + 48), 0, 1u);
    if ( *(_QWORD *)(BugCheckParameter2 + 136) )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter2 + 192), v4, v5);
    else
      _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 36));
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFFFBF);
  }
  return PopFxCompleteDevicePowerRequired(BugCheckParameter2, a2);
}
