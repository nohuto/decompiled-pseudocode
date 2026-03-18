/*
 * XREFs of VfDriverUnloadImage @ 0x140C46D88
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 * Callees:
 *     VfTargetDriversRemove @ 0x1403B7C48 (VfTargetDriversRemove.c)
 *     VfIsVerifierEnabled @ 0x1404FC020 (VfIsVerifierEnabled.c)
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x14051C810 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     VfVolatileClearDifRuleClass @ 0x140647964 (VfVolatileClearDifRuleClass.c)
 *     VfSuspectDriversUnloadCallback @ 0x140C38E64 (VfSuspectDriversUnloadCallback.c)
 *     VfFreeMemoryNotification @ 0x140C45348 (VfFreeMemoryNotification.c)
 *     VfThunkCheckDriverUnloading @ 0x140C46E0C (VfThunkCheckDriverUnloading.c)
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
