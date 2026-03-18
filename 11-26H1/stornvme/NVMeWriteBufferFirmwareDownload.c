/*
 * XREFs of NVMeWriteBufferFirmwareDownload @ 0x140002A30
 * Callers:
 *     ScsiToNVMe @ 0x140002FA0 (ScsiToNVMe.c)
 * Callees:
 *     GetControllerMaxTransferSize @ 0x140001580 (GetControllerMaxTransferSize.c)
 *     NVMeSetSenseData @ 0x140002E20 (NVMeSetSenseData.c)
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     FillClippedSGL @ 0x14001A2F8 (FillClippedSGL.c)
 *     GetFirmwareGranularity @ 0x14001AEA4 (GetFirmwareGranularity.c)
 *     NVMeQueueWorkItem @ 0x14001EC70 (NVMeQueueWorkItem.c)
 *     NVMeIceConfigureSrbExclusionAddress @ 0x1400317D4 (NVMeIceConfigureSrbExclusionAddress.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeWriteBufferFirmwareDownload(_DWORD *a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int8 *v5; // r8
  __int64 v6; // r9
  __int64 SrbExtension; // r14
  unsigned int v8; // ebx
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int FirmwareGranularity; // eax
  unsigned int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // r9
  unsigned int v19; // r15d
  __int64 ScatterGatherList; // rax
  __int64 v21; // r8
  __int64 v22; // [rsp+20h] [rbp-38h]
  void *v23; // [rsp+70h] [rbp+18h] BYREF

  v23 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  v8 = v5[5] | ((v5[4] | (v5[3] << 8)) << 8);
  v9 = v5[8] | ((v5[7] | (v5[6] << 8)) << 8);
  if ( (v5[5] & 3) != 0 || (v5[8] & 3) != 0 )
  {
    LOBYTE(v6) = 36;
    LOBYTE(v5) = 5;
    LOBYTE(v4) = 6;
    NVMeSetSenseData(a2, v4, v5, v6);
    return 3238002694LL;
  }
  if ( v9 > (unsigned int)GetControllerMaxTransferSize(a1) )
    goto LABEL_4;
  if ( (a1[6] & 0x800) == 0 )
  {
    NVMeQueueWorkItem(v11, NVMeControllerValidateFirmwareActivateCapability, 0LL);
    a1[6] |= 0x800u;
  }
  FirmwareGranularity = GetFirmwareGranularity(a1);
  v12 = FirmwareGranularity;
  if ( FirmwareGranularity )
  {
    v10 = v9 % FirmwareGranularity;
    if ( v9 % FirmwareGranularity )
    {
LABEL_4:
      LOBYTE(v13) = 36;
      LOBYTE(v12) = 5;
      LOBYTE(v10) = 21;
      NVMeSetSenseData(a2, v10, v12, v13);
      return 3238002694LL;
    }
  }
  if ( (a1[14] & 8) != 0 )
  {
    *(_DWORD *)(SrbExtension + 4176) = v8;
  }
  else
  {
    v16 = (((unsigned int)GetControllerMaxTransferSize(a1) - 1) >> 12) + 2;
    StorPortExtendedFunction(0LL, a1, 24 * v16 + 16, 1701672526LL, &v23);
    if ( !v23 )
    {
      v18 = 0LL;
LABEL_18:
      LOBYTE(v17) = 38;
      NVMeSetSenseData(a2, v17, 0LL, v18);
      return 3238002691LL;
    }
    v19 = (24 * v16 + 16) >> 2;
    if ( v19 )
      memset(v23, 0, 4LL * v19);
    ScatterGatherList = StorPortGetScatterGatherList(a1, a2);
    if ( !(unsigned __int8)FillClippedSGL(ScatterGatherList, v23, v16, 0LL) )
    {
      if ( v23 )
      {
        StorPortExtendedFunction(1LL, a1, v23, v18, v22);
        v23 = 0LL;
      }
      LOBYTE(v18) = 36;
      goto LABEL_18;
    }
    *(_QWORD *)(SrbExtension + 4176) = v23;
  }
  *(_BYTE *)(SrbExtension + 4225) |= 3u;
  SrbAssignQueueId(a1, a2);
  *(_DWORD *)(SrbExtension + 4136) = (v9 >> 2) - 1;
  *(_BYTE *)(SrbExtension + 4096) = 17;
  *(_DWORD *)(SrbExtension + 4140) = v8 >> 2;
  *(_QWORD *)(SrbExtension + 4192) = NVMeWriteBufferFirmwareDownloadCompletion;
  if ( (a1[1086] & 4) == 0 )
    return 0LL;
  LOBYTE(v21) = 1;
  return NVMeIceConfigureSrbExclusionAddress(a1, a2, v21);
}
