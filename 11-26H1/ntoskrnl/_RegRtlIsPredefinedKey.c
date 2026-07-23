/*
 * XREFs of _RegRtlIsPredefinedKey @ 0x140979188
 * Callers:
 *     _RegRtlQueryKeyPathName @ 0x1408A3D28 (_RegRtlQueryKeyPathName.c)
 *     _RegRtlCreateTreeTransacted @ 0x140978CD8 (_RegRtlCreateTreeTransacted.c)
 *     _RegRtlCreateKeyTransacted @ 0x140979034 (_RegRtlCreateKeyTransacted.c)
 *     _PnpSetPropertyWorker @ 0x1409ACBB4 (_PnpSetPropertyWorker.c)
 *     _CmAddDeviceToContainerWorker @ 0x140AE6180 (_CmAddDeviceToContainerWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140AE67D8 (_CmCreateOrdinalInstanceKey.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140AF5C1C (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 * Callees:
 *     <none>
 */

bool __fastcall RegRtlIsPredefinedKey(__int64 a1)
{
  return (unsigned __int64)(a1 - 0x80000000LL) <= 6 || a1 == 2147483655LL;
}
