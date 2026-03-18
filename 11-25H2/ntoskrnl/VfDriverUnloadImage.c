/*
 * XREFs of VfDriverUnloadImage @ 0x140B7A5E0
 * Callers:
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 * Callees:
 *     VfTargetDriversRemove @ 0x1403EB31C (VfTargetDriversRemove.c)
 *     VfIsVerifierEnabled @ 0x1404BD130 (VfIsVerifierEnabled.c)
 *     VfVolatileClearDifRuleClass @ 0x140608910 (VfVolatileClearDifRuleClass.c)
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x14060BED0 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     VfSuspectDriversUnloadCallback @ 0x140B8AF64 (VfSuspectDriversUnloadCallback.c)
 *     VfFreeMemoryNotification @ 0x140B97A9C (VfFreeMemoryNotification.c)
 *     VfThunkCheckDriverUnloading @ 0x140B98F34 (VfThunkCheckDriverUnloading.c)
 */

__int64 *__fastcall VfDriverUnloadImage(__int64 a1)
{
  __int64 *result; // rax

  if ( (unsigned int)VfIsVerifierEnabled() )
  {
    DifObjTrkQeuryInvokeDeleteRange(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), 0LL, 0);
    VfFreeMemoryNotification(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64));
  }
  VfThunkCheckDriverUnloading(a1);
  result = (__int64 *)VfTargetDriversRemove(a1);
  if ( (*(_DWORD *)(a1 + 104) & 0x2000000) != 0 )
    result = (__int64 *)VfSuspectDriversUnloadCallback(a1);
  if ( VfDifRunningWithoutReboot )
  {
    result = &VfSuspectDriversList;
    if ( (__int64 *)VfSuspectDriversList == &VfSuspectDriversList )
      return (__int64 *)VfVolatileClearDifRuleClass();
  }
  return result;
}
