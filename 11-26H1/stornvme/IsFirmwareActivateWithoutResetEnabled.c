/*
 * XREFs of IsFirmwareActivateWithoutResetEnabled @ 0x14001CD3C
 * Callers:
 *     NVMeWriteBufferFirmwareActivate @ 0x140002940 (NVMeWriteBufferFirmwareActivate.c)
 *     FirmwareActivate @ 0x14001A3D8 (FirmwareActivate.c)
 *     NVMeFirmwareActivateCompletion @ 0x14001D5A0 (NVMeFirmwareActivateCompletion.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x140020630 (NVMeWriteBufferFirmwareActivateCompletion.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsFirmwareActivateWithoutResetEnabled(__int64 a1)
{
  __int64 v1; // rax
  char v2; // dl

  v1 = *(_QWORD *)(a1 + 1560);
  v2 = 0;
  if ( v1 && (*(_BYTE *)(v1 + 260) & 0x10) != 0 )
    return (*(_BYTE *)(a1 + 56) & 0x20) == 0;
  return v2;
}
