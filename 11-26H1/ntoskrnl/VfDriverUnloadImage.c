/*
 * XREFs of VfDriverUnloadImage @ 0x140C4CD98
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 * Callees:
 *     VfTargetDriversRemove @ 0x1403C1B48 (VfTargetDriversRemove.c)
 *     VfIsVerifierEnabled @ 0x1404F5560 (VfIsVerifierEnabled.c)
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x14051E9C0 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     VfVolatileClearDifRuleClass @ 0x14064B544 (VfVolatileClearDifRuleClass.c)
 *     VfSuspectDriversUnloadCallback @ 0x140C3EE74 (VfSuspectDriversUnloadCallback.c)
 *     VfFreeMemoryNotification @ 0x140C4B358 (VfFreeMemoryNotification.c)
 *     VfThunkCheckDriverUnloading @ 0x140C4CE1C (VfThunkCheckDriverUnloading.c)
 */

void __fastcall VfDriverUnloadImage(__int64 a1)
{
  if ( (unsigned int)VfIsVerifierEnabled() )
  {
    DifObjTrkQeuryInvokeDeleteRange(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), 0LL, 0);
    VfFreeMemoryNotification(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64));
  }
  VfThunkCheckDriverUnloading(a1);
  VfTargetDriversRemove(a1);
  if ( (*(_DWORD *)(a1 + 104) & 0x2000000) != 0 )
    VfSuspectDriversUnloadCallback(a1);
  if ( VfDifRunningWithoutReboot )
  {
    if ( (__int64 *)VfSuspectDriversList == &VfSuspectDriversList )
      VfVolatileClearDifRuleClass();
  }
}
