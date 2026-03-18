/*
 * XREFs of BootPartitionDownload @ 0x140019764
 * Callers:
 *     IoctlFirmwareProcess @ 0x14001B93C (IoctlFirmwareProcess.c)
 * Callees:
 *     GetControllerMaxTransferSize @ 0x140001580 (GetControllerMaxTransferSize.c)
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     FillClippedSGL @ 0x14001A2F8 (FillClippedSGL.c)
 *     GetFirmwareGranularity @ 0x14001AEA4 (GetFirmwareGranularity.c)
 *     NVMeIceConfigureSrbExclusionAddress @ 0x1400317D4 (NVMeIceConfigureSrbExclusionAddress.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall BootPartitionDownload(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 SrbExtension; // rbx
  _DWORD *SrbDataBuffer; // rbp
  __int64 v7; // r13
  unsigned __int64 v8; // rax
  __int64 *v9; // rsi
  __int64 v10; // r8
  unsigned int ControllerMaxTransferSize; // eax
  unsigned __int64 v12; // r8
  unsigned int FirmwareGranularity; // eax
  unsigned __int64 v14; // r8
  char v15; // bl
  __int64 v16; // r8
  __int64 v17; // rcx
  int v18; // eax
  __int64 v20; // [rsp+138h] [rbp+20h] BYREF

  v3 = 0;
  SrbExtension = GetSrbExtension(a2);
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v20);
  v7 = (unsigned int)SrbDataBuffer[11];
  v8 = (unsigned int)SrbDataBuffer[12];
  if ( (unsigned int)v8 < 0x28
    || (v9 = (__int64 *)((char *)SrbDataBuffer + v7 + 24), v10 = *v9, v8 < *v9 + 40)
    || !v10
    || *(_DWORD *)((char *)SrbDataBuffer + v7) != 1 )
  {
    SrbDataBuffer[5] = 3;
    goto LABEL_17;
  }
  if ( ((*((_BYTE *)SrbDataBuffer + v7 + 16) | (unsigned __int8)v10) & 3) != 0 )
    goto LABEL_10;
  ControllerMaxTransferSize = GetControllerMaxTransferSize((_DWORD *)a1);
  if ( v12 > ControllerMaxTransferSize )
  {
    SrbDataBuffer[5] = 4;
LABEL_17:
    v3 = -1056964602;
    v15 = 21;
    goto LABEL_18;
  }
  FirmwareGranularity = GetFirmwareGranularity(a1);
  if ( FirmwareGranularity )
  {
    if ( v14 % FirmwareGranularity )
    {
LABEL_10:
      SrbDataBuffer[5] = 8;
      goto LABEL_17;
    }
  }
  if ( (*(_DWORD *)(a1 + 56) & 8) != 0 )
  {
    *(_DWORD *)(SrbExtension + 4176) = v7 + 32;
    *(_BYTE *)(SrbExtension + 4225) |= 3u;
    SrbAssignQueueId(a1, a2);
    v17 = *(_QWORD *)((char *)SrbDataBuffer + v7 + 16) >> 2;
    v18 = ((unsigned __int64)*v9 >> 2) - 1;
    *(_BYTE *)(SrbExtension + 4096) = 17;
    *(_DWORD *)(SrbExtension + 4136) = v18;
    *(_DWORD *)(SrbExtension + 4140) = v17;
    *(_QWORD *)(SrbExtension + 4192) = NVMeFirmwareDownloadCompletion;
    v15 = 4;
    if ( (*(_DWORD *)(a1 + 4344) & 4) == 0 )
      return v3;
    LOBYTE(v16) = 1;
    v3 = NVMeIceConfigureSrbExclusionAddress(a1, a2, v16);
    if ( !v3 )
      return v3;
  }
  else
  {
    LODWORD(v20) = (((unsigned int)GetControllerMaxTransferSize((_DWORD *)a1) - 1) >> 12) + 2;
    StorPortExtendedFunction(0LL, a1, (unsigned int)(24 * v20 + 16), 1701672526LL);
    v15 = 4;
    SrbDataBuffer[5] = 1;
    v3 = -1056964605;
  }
LABEL_18:
  *(_BYTE *)(a2 + 3) = v15;
  if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
    StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
  return v3;
}
