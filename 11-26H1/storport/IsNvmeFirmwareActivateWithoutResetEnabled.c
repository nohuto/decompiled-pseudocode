/*
 * XREFs of IsNvmeFirmwareActivateWithoutResetEnabled @ 0x1400D1B20
 * Callers:
 *     NvmeAdapterFirmwareActivateIoctl @ 0x1400D5D1C (NvmeAdapterFirmwareActivateIoctl.c)
 *     NvmeAdapterFirmwareActivateIoctlCompletion @ 0x1400D62D0 (NvmeAdapterFirmwareActivateIoctlCompletion.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsNvmeFirmwareActivateWithoutResetEnabled(__int64 a1)
{
  __int64 v1; // rax
  char v2; // dl
  __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 592);
  v2 = 0;
  if ( v1 )
  {
    if ( (*(_BYTE *)(v1 + 260) & 0x10) != 0 )
    {
      v3 = *(_QWORD *)(a1 + 1048);
      if ( v3 )
        return (*(_BYTE *)(v3 + 24) & 0x20) == 0;
    }
  }
  return v2;
}
