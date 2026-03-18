/*
 * XREFs of _RegRtlSetValue @ 0x14095027C
 * Callers:
 *     _SysCtxOpenControlSet @ 0x1408102E0 (_SysCtxOpenControlSet.c)
 *     _RegRtlCopyTreeInternal @ 0x140810CA0 (_RegRtlCopyTreeInternal.c)
 *     _CmAddDeviceToContainerWorker @ 0x14094F44C (_CmAddDeviceToContainerWorker.c)
 *     _PnpCtxRegSetValue @ 0x140950248 (_PnpCtxRegSetValue.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140A58EDC (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     ZwSetValueKey @ 0x14069BD40 (ZwSetValueKey.c)
 */

int __fastcall RegRtlSetValue(HANDLE KeyHandle, const WCHAR *a2, ULONG a3, void *a4, ULONG DataSize)
{
  int result; // eax
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  ValueName = 0LL;
  result = RtlInitUnicodeStringEx(&ValueName, a2);
  if ( result >= 0 )
    return ZwSetValueKey(KeyHandle, &ValueName, 0, a3, a4, DataSize);
  return result;
}
