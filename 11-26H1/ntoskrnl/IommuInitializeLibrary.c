/*
 * XREFs of IommuInitializeLibrary @ 0x14059C564
 * Callers:
 *     HalpIommuInitSystem @ 0x140BEB6E0 (HalpIommuInitSystem.c)
 * Callees:
 *     IommupHvInitializeLibrary @ 0x140CB4B44 (IommupHvInitializeLibrary.c)
 */

__int64 IommuInitializeLibrary()
{
  *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.SystemCallNumber = (char *)&IommuInterfaceStateChangeCallbackPushLock.116
                                                                         + 4;
  *($353D57E818BB6F967B4B818D974CF463 *)((char *)&IommuInterfaceStateChangeCallbackPushLock.116 + 4) = ($353D57E818BB6F967B4B818D974CF463)((char *)&IommuInterfaceStateChangeCallbackPushLock.116 + 4);
  IommuInterfaceStateChangeCallbackPushLock.SchedulingGroup = 0LL;
  if ( HalpHvIommu )
    IommupHvInitializeLibrary();
  return 0LL;
}
