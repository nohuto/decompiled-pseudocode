/*
 * XREFs of IommuInitializeLibrary @ 0x14059ECE4
 * Callers:
 *     HalpIommuInitSystem @ 0x140BF16E0 (HalpIommuInitSystem.c)
 * Callees:
 *     IommupHvInitializeLibrary @ 0x140CBAB84 (IommupHvInitializeLibrary.c)
 */

__int64 IommuInitializeLibrary()
{
  *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.WaitRegister.Flags = &IommuInterfaceStateChangeCallbackPushLock.SchedulingGroup;
  IommuInterfaceStateChangeCallbackPushLock.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)&IommuInterfaceStateChangeCallbackPushLock.SchedulingGroup;
  IommuInterfaceStateChangeCallbackPushLock.StateSaveArea = 0LL;
  if ( HalpHvIommu )
    IommupHvInitializeLibrary();
  return 0LL;
}
