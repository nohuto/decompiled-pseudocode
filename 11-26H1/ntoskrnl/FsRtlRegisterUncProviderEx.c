/*
 * XREFs of FsRtlRegisterUncProviderEx @ 0x140790D20
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpRegisterUncProvider @ 0x140790F6C (FsRtlpRegisterUncProvider.c)
 */

NTSTATUS __stdcall FsRtlRegisterUncProviderEx(
        PHANDLE MupHandle,
        PCUNICODE_STRING RedirDevName,
        PDEVICE_OBJECT DeviceObject,
        FSRTL_UNC_PROVIDER_FLAGS Flags)
{
  _DWORD v5[6]; // [rsp+20h] [rbp-18h] BYREF

  v5[1] = Flags;
  v5[0] = 16842760;
  return FsRtlpRegisterUncProvider(RedirDevName, DeviceObject, v5, MupHandle);
}
