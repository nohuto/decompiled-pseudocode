/*
 * XREFs of FirmwareDownload @ 0x14001A63C
 * Callers:
 *     IoctlFirmwareProcess @ 0x14001B93C (IoctlFirmwareProcess.c)
 * Callees:
 *     GetControllerMaxTransferSize @ 0x140001580 (GetControllerMaxTransferSize.c)
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     FillClippedSGL @ 0x14001A2F8 (FillClippedSGL.c)
 *     GetFirmwareGranularity @ 0x14001AEA4 (GetFirmwareGranularity.c)
 *     NVMeQueueWorkItem @ 0x14001EC70 (NVMeQueueWorkItem.c)
 *     NVMeIceConfigureSrbExclusionAddress @ 0x1400317D4 (NVMeIceConfigureSrbExclusionAddress.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall FirmwareDownload(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 SrbExtension; // rbx
  __int64 SrbDataBuffer; // rax
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  char v13; // bl
  unsigned int ControllerMaxTransferSize; // eax
  unsigned __int64 v16; // r8
  unsigned int FirmwareGranularity; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rcx
  int v22; // eax
  _QWORD v23[8]; // [rsp+D8h] [rbp-40h] BYREF
  unsigned int v24; // [rsp+138h] [rbp+20h]

  v3 = 0;
  SrbExtension = GetSrbExtension(a2);
  SrbDataBuffer = GetSrbDataBuffer(a2, v23);
  v7 = SrbDataBuffer;
  v8 = SrbDataBuffer + *(unsigned int *)(SrbDataBuffer + 44);
  if ( *(_DWORD *)v8 == 2 && *(_DWORD *)(v8 + 4) >= 0x20u )
    v9 = SrbDataBuffer + *(unsigned int *)(SrbDataBuffer + 44);
  else
    v9 = 0LL;
  v10 = *(unsigned int *)(SrbDataBuffer + 48);
  if ( v9 )
  {
    if ( (unsigned int)v10 < 0x20 )
      goto LABEL_10;
    v11 = *(_QWORD *)(v9 + 16);
    v12 = v11 + 32;
  }
  else
  {
    if ( (unsigned int)v10 < 0x18 )
      goto LABEL_10;
    v11 = *(_QWORD *)(v8 + 16);
    v12 = v11 + 24;
  }
  if ( v10 < v12 || !v11 || (*(_BYTE *)(v8 + 8) & 3) != 0 || (*(_QWORD *)(v8 + 16) & 3) != 0 )
    goto LABEL_10;
  ControllerMaxTransferSize = GetControllerMaxTransferSize((_DWORD *)a1);
  if ( v16 > ControllerMaxTransferSize )
  {
    *(_DWORD *)(v7 + 20) = 4;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(a1 + 24) & 0x800) == 0 )
  {
    NVMeQueueWorkItem(a1, NVMeControllerValidateFirmwareActivateCapability, 0LL);
    *(_DWORD *)(a1 + 24) |= 0x800u;
  }
  FirmwareGranularity = GetFirmwareGranularity(a1);
  if ( FirmwareGranularity )
  {
    if ( *(_QWORD *)(v8 + 16) % (unsigned __int64)FirmwareGranularity )
    {
LABEL_10:
      *(_DWORD *)(v7 + 20) = 3;
LABEL_11:
      v3 = -1056964602;
      v13 = 21;
      goto LABEL_12;
    }
  }
  if ( (*(_DWORD *)(a1 + 56) & 8) == 0 )
  {
    v24 = (((unsigned int)GetControllerMaxTransferSize((_DWORD *)a1) - 1) >> 12) + 2;
    StorPortExtendedFunction(0LL, a1, 24 * v24 + 16, 1701672526LL);
    *(_DWORD *)(v7 + 20) = 1;
    v13 = 4;
    v3 = -1056964605;
LABEL_12:
    *(_BYTE *)(a2 + 3) = v13;
    if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
      StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
    return v3;
  }
  v18 = *(_DWORD *)(v7 + 44);
  if ( v9 )
    v19 = v18 + 32;
  else
    v19 = v18 + 24;
  *(_DWORD *)(SrbExtension + 4176) = v19;
  *(_BYTE *)(SrbExtension + 4225) |= 3u;
  SrbAssignQueueId(a1, a2);
  v21 = *(_QWORD *)(v8 + 8) >> 2;
  v22 = (*(_QWORD *)(v8 + 16) >> 2) - 1;
  *(_BYTE *)(SrbExtension + 4096) = 17;
  *(_DWORD *)(SrbExtension + 4136) = v22;
  *(_DWORD *)(SrbExtension + 4140) = v21;
  *(_QWORD *)(SrbExtension + 4192) = NVMeFirmwareDownloadCompletion;
  v13 = 4;
  if ( (*(_DWORD *)(a1 + 4344) & 4) != 0 )
  {
    LOBYTE(v20) = 1;
    v3 = NVMeIceConfigureSrbExclusionAddress(a1, a2, v20);
    if ( v3 )
      goto LABEL_12;
  }
  return v3;
}
