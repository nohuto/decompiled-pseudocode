/*
 * XREFs of ScsiPersistentReserveIn @ 0x140022748
 * Callers:
 *     ScsiToNVMe @ 0x140002FA0 (ScsiToNVMe.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002E20 (NVMeSetSenseData.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     NVMeReservationReportCapabilities @ 0x14001F3C0 (NVMeReservationReportCapabilities.c)
 *     NVMeReservationReportStatus @ 0x14001F5D4 (NVMeReservationReportStatus.c)
 */

__int64 __fastcall ScsiPersistentReserveIn(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 v5; // r11
  unsigned int v6; // ebx
  unsigned __int8 v7; // r8
  unsigned __int8 v9; // cl
  unsigned __int16 v11; // [rsp+50h] [rbp+18h]
  _DWORD *v12; // [rsp+58h] [rbp+20h] BYREF

  HIBYTE(v11) = *(_BYTE *)(a3 + 7);
  LOBYTE(v11) = *(_BYTE *)(a3 + 8);
  v12 = 0LL;
  GetSrbDataBuffer(a2, &v12);
  if ( *v12 >= (unsigned int)v11 )
  {
    v7 = *(_BYTE *)(v3 + 1) & 0x1F;
    if ( v7 == 2 )
    {
      return (unsigned int)NVMeReservationReportCapabilities(v5, v4, v11);
    }
    else
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v5 + 1560) + 520LL) & 0x20) == 0 )
        goto LABEL_8;
      if ( (v7 & 0xFC) != 0 )
      {
        v6 = -1056964602;
        NVMeSetSenseData(v4, 6, 5, 0x24u);
        return v6;
      }
      v9 = *(_BYTE *)(v4 + 2) == 40 ? *(_BYTE *)(*(unsigned int *)(v4 + 52) + v4 + 10) : *(_BYTE *)(v4 + 7);
      if ( !*(_BYTE *)(*(_QWORD *)(v5 + 8LL * v9 + 1672) + 112LL) )
      {
LABEL_8:
        v6 = -1056964602;
        goto LABEL_3;
      }
      return (unsigned int)NVMeReservationReportStatus(v5, v4, v7, v11, 0);
    }
  }
  v6 = -1056964604;
LABEL_3:
  *(_BYTE *)(v4 + 3) = 6;
  return v6;
}
