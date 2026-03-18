/*
 * XREFs of _RegRtlIsPredefinedKey @ 0x14093216C
 * Callers:
 *     _RegRtlQueryKeyPathName @ 0x1408112B8 (_RegRtlQueryKeyPathName.c)
 *     _RegRtlCreateTreeTransacted @ 0x140931CBC (_RegRtlCreateTreeTransacted.c)
 *     _RegRtlCreateKeyTransacted @ 0x14093201C (_RegRtlCreateKeyTransacted.c)
 *     _CmAddDeviceToContainerWorker @ 0x14094F44C (_CmAddDeviceToContainerWorker.c)
 *     _PnpSetPropertyWorker @ 0x140953DFC (_PnpSetPropertyWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140A58EDC (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140A5E0F0 (_CmCreateOrdinalInstanceKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall RegRtlIsPredefinedKey(__int64 a1)
{
  return (unsigned __int64)(a1 - 0x80000000LL) <= 6 || a1 == 2147483655LL;
}
