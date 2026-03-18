/*
 * XREFs of NVMeIceConfigureSrbExclusionAddress @ 0x1400317D4
 * Callers:
 *     NVMeWriteBufferFirmwareDownload @ 0x140002A30 (NVMeWriteBufferFirmwareDownload.c)
 *     NVMeCompletionDpcRoutine @ 0x1400096D0 (NVMeCompletionDpcRoutine.c)
 *     ProcessCommandInSpecificQueue @ 0x14000A910 (ProcessCommandInSpecificQueue.c)
 *     BootPartitionDownload @ 0x140019764 (BootPartitionDownload.c)
 *     FirmwareDownload @ 0x14001A63C (FirmwareDownload.c)
 *     NVMeFirmwareDownloadCompletion @ 0x14001D8B0 (NVMeFirmwareDownloadCompletion.c)
 *     NVMeWriteBufferFirmwareDownloadCompletion @ 0x1400208A0 (NVMeWriteBufferFirmwareDownloadCompletion.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     GetSrbScsiData @ 0x14000EE70 (GetSrbScsiData.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     NVMeIceConfigureExclusionAddress @ 0x1400315BC (NVMeIceConfigureExclusionAddress.c)
 */

__int64 __fastcall NVMeIceConfigureSrbExclusionAddress(__int64 a1, __int64 a2, char a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // ebp
  __int64 SrbExtension; // r8
  __int64 PhysicalAddress; // rax
  unsigned int v11; // edx
  __int64 SrbDataBuffer; // rax
  unsigned int v14; // [rsp+F0h] [rbp+8h] BYREF
  unsigned int *v15; // [rsp+108h] [rbp+20h] BYREF

  v15 = 0LL;
  v14 = 0;
  if ( (*(_DWORD *)(a1 + 4344) & 4) == 0 )
    goto LABEL_2;
  v7 = 24LL;
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v7 = 12LL;
  v8 = *(_DWORD *)(v7 + a2);
  if ( (v8 & 0xC0) == 0 )
  {
LABEL_2:
    v6 = -1056964602;
    goto LABEL_12;
  }
  SrbExtension = GetSrbExtension(a2);
  if ( (unsigned __int8)*(_DWORD *)(SrbExtension + 4096) == 9 )
  {
    PhysicalAddress = *(_QWORD *)(SrbExtension + 4120);
    v11 = 4096;
    goto LABEL_15;
  }
  SrbDataBuffer = GetSrbDataBuffer(a2, &v15);
  PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, SrbDataBuffer, &v14);
  if ( PhysicalAddress )
  {
    v11 = *v15;
    if ( *v15 )
    {
      if ( v14 < v11 )
        goto LABEL_11;
    }
    else
    {
      v11 = v14;
    }
LABEL_15:
    v6 = NVMeIceConfigureExclusionAddress(a1, PhysicalAddress, v11, (v8 & 0x80) != 0, (v8 & 0x40) != 0, a3);
    if ( !v6 )
      return v6;
    goto LABEL_12;
  }
LABEL_11:
  v6 = -1056964605;
LABEL_12:
  if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
  {
    GetSrbScsiData(a2, 0LL, 0LL, 0LL, 0LL);
    StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
  }
  return v6;
}
