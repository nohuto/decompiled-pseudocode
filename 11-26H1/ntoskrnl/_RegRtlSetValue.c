/*
 * XREFs of _RegRtlSetValue @ 0x14090AB48
 * Callers:
 *     _SysCtxOpenControlSet @ 0x14089CA30 (_SysCtxOpenControlSet.c)
 *     _RegRtlCopyTreeInternal @ 0x14089D400 (_RegRtlCopyTreeInternal.c)
 *     _PnpCtxRegSetValue @ 0x14090AB14 (_PnpCtxRegSetValue.c)
 *     _CmAddDeviceToContainerWorker @ 0x140AE82D0 (_CmAddDeviceToContainerWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140AF342C (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     ZwSetValueKey @ 0x140723FF0 (ZwSetValueKey.c)
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
