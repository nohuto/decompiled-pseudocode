/*
 * XREFs of StorCopyNVMeFirmwareRevision @ 0x14004FCB8
 * Callers:
 *     RaidUnitGetHardwareIds @ 0x1400A7A78 (RaidUnitGetHardwareIds.c)
 *     StorProcessNVMeEnumeratorFillInfo @ 0x1400C72B8 (StorProcessNVMeEnumeratorFillInfo.c)
 *     NvmeControllerFabricFirmwareGetInfoIoctl @ 0x1400F30B8 (NvmeControllerFabricFirmwareGetInfoIoctl.c)
 *     NvmeNamespaceGetHardwareIds @ 0x140106680 (NvmeNamespaceGetHardwareIds.c)
 *     NvmeNamespacePopulateInquiryStandardData @ 0x140117744 (NvmeNamespacePopulateInquiryStandardData.c)
 *     StorUnitAssignNVMeIdentity @ 0x140191D30 (StorUnitAssignNVMeIdentity.c)
 *     NvmeNamespaceGetStorageDeviceProperty @ 0x1401BDC3C (NvmeNamespaceGetStorageDeviceProperty.c)
 * Callees:
 *     <none>
 */

char __fastcall StorCopyNVMeFirmwareRevision(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r10d
  int v4; // ebx
  unsigned int v5; // r9d
  __int64 i; // r11
  __int64 v7; // rax
  _BYTE *v8; // rcx

  v3 = 0;
  v4 = 0;
  v5 = 7;
  for ( i = 7LL; i >= 0; --i )
  {
    LOBYTE(v7) = *(_BYTE *)(a1 + i + 64) - 33;
    if ( (unsigned __int8)v7 <= 0x5Du && ++v4 == a3 )
      break;
    if ( !i )
      break;
    --v5;
  }
  if ( v5 < 8 )
  {
    v8 = (_BYTE *)((int)v5 + a1 + 64);
    do
    {
      LOBYTE(v7) = *v8 - 33;
      if ( (unsigned __int8)v7 <= 0x5Du )
      {
        v7 = v3++;
        *(_BYTE *)(v7 + a2) = *v8;
        if ( v3 >= a3 )
          break;
      }
      ++v5;
      ++v8;
    }
    while ( v5 < 8 );
  }
  return v7;
}
