/*
 * XREFs of RawQueryVolumeInformation @ 0x14091A99C
 * Callers:
 *     RawDispatch @ 0x140919E90 (RawDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     RawQueryFsDeviceInfo @ 0x140805A30 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsVolumeInfo @ 0x14091AA98 (RawQueryFsVolumeInfo.c)
 *     FsRtlGetSectorSizeInformation @ 0x140A2EE50 (FsRtlGetSectorSizeInformation.c)
 *     RawQueryFsSizeInfo @ 0x140B28108 (RawQueryFsSizeInfo.c)
 */

__int64 __fastcall RawQueryVolumeInformation(__int64 a1, IRP *a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 MasterIrp; // r8
  int v7; // eax
  int SectorSizeInformation; // ebx
  unsigned int v9; // eax
  unsigned int v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(a3 + 8);
  MasterIrp = (__int64)a2->AssociatedIrp.MasterIrp;
  v11 = v3;
  switch ( *(_DWORD *)(a3 + 16) )
  {
    case 1:
      v7 = RawQueryFsVolumeInfo(a1, *(_QWORD *)(a3 + 48), MasterIrp, &v11);
LABEL_3:
      v3 = v11;
      SectorSizeInformation = v7;
      break;
    case 3:
      v7 = RawQueryFsSizeInfo(a1, *(_QWORD *)(a3 + 48), MasterIrp, &v11);
      goto LABEL_3;
    case 4:
      v7 = RawQueryFsDeviceInfo(a1, *(_QWORD *)(a3 + 48), MasterIrp, &v11);
      goto LABEL_3;
    case 5:
      if ( v3 >= 0x12 )
      {
        *(_QWORD *)MasterIrp = 0LL;
        v3 -= 18;
        *(_DWORD *)(MasterIrp + 8) = 6;
        SectorSizeInformation = 0;
        *(_DWORD *)(MasterIrp + 12) = *(_DWORD *)L"RAW";
        *(_WORD *)(MasterIrp + 16) = aRaw[2];
      }
      else
      {
        SectorSizeInformation = -2147483643;
      }
      break;
    case 0xB:
      SectorSizeInformation = FsRtlGetSectorSizeInformation(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 200) + 16LL));
      if ( SectorSizeInformation >= 0 )
        v3 -= 28;
      break;
    default:
      SectorSizeInformation = -1073741811;
      break;
  }
  v9 = *(_DWORD *)(a3 + 8) - v3;
  a2->IoStatus.Status = SectorSizeInformation;
  a2->IoStatus.Information = v9;
  IofCompleteRequest(a2, 1);
  return (unsigned int)SectorSizeInformation;
}
