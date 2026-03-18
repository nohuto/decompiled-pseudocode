/*
 * XREFs of ScsiPersistentReserveOut @ 0x140022838
 * Callers:
 *     ScsiToNVMe @ 0x140002FA0 (ScsiToNVMe.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002E20 (NVMeSetSenseData.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     NVMeReservationAcquireCommand @ 0x14001ECE4 (NVMeReservationAcquireCommand.c)
 *     NVMeReservationRegisterAndMoveCommand @ 0x14001EEA4 (NVMeReservationRegisterAndMoveCommand.c)
 *     NVMeReservationRegisterCommand @ 0x14001F050 (NVMeReservationRegisterCommand.c)
 *     NVMeReservationReleaseCommand @ 0x14001F23C (NVMeReservationReleaseCommand.c)
 */

__int64 __fastcall ScsiPersistentReserveOut(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // r10
  char v5; // r8
  char v7; // cl
  unsigned int v8; // ebx
  char v9; // al
  unsigned __int8 v10; // cl
  __int64 SrbDataBuffer; // rdx
  int v12; // r8d
  char v13; // r9
  __int64 v14; // r11
  char v16; // r9
  unsigned __int16 v18; // [rsp+50h] [rbp+18h]
  _DWORD *v19; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  v5 = a3[2];
  if ( (v5 & 0xF) != 1 && (v5 & 0xF) != 3 && (v5 & 0xF) != 5 && (v5 & 0xF) != 6 && (v5 & 0xFu) - 7 >= 2 )
  {
    v7 = a3[1] & 0x1F;
    if ( v7 == 1 || ((v7 - 2) & 0xFC) == 0 && v7 != 3 )
      goto LABEL_9;
  }
  if ( (v5 & 0xF0) != 0 )
  {
    v9 = a3[1] & 0x1F;
    if ( v9 )
    {
      if ( v9 != 3 && (unsigned __int8)(v9 - 6) > 1u )
        return (unsigned int)-1056964602;
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 520LL) & 0x20) == 0
    || (*(_BYTE *)(a2 + 2) != 40 ? (v10 = *(_BYTE *)(a2 + 7)) : (v10 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10)),
        !*(_BYTE *)(*(_QWORD *)(a1 + 8LL * v10 + 1672) + 112LL)) )
  {
    v8 = -1056964602;
    NVMeSetSenseData(a2, 6, 5, 0x24u);
    return v8;
  }
  HIBYTE(v18) = a3[7];
  LOBYTE(v18) = a3[8];
  v19 = 0LL;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v19);
  if ( *v19 < (unsigned int)v18 )
  {
    v8 = -1056964604;
    goto LABEL_10;
  }
  if ( (*(_BYTE *)(SrbDataBuffer + 20) & 8) == 0 )
  {
    if ( (a3[1] & 0x1F) != 0 )
    {
      switch ( a3[1] & 0x1F )
      {
        case 1:
          return (unsigned int)NVMeReservationAcquireCommand(v14, v3, v12, v13, 0);
        case 2:
          return (unsigned int)NVMeReservationReleaseCommand(v14, v3, v12, v13, 0);
        case 3:
          return (unsigned int)NVMeReservationReleaseCommand(v14, v3, v12, v13, 1u);
        case 4:
          return (unsigned int)NVMeReservationAcquireCommand(v14, v3, v12, v13, 1u);
        case 5:
          return (unsigned int)NVMeReservationAcquireCommand(v14, v3, v12, v13, 2u);
      }
      if ( (a3[1] & 0x1F) != 6 )
      {
        if ( (a3[1] & 0x1F) != 7 )
        {
          NVMeSetSenseData(v3, 6, 5, 0x24u);
          return (unsigned int)-1056964602;
        }
        return (unsigned int)NVMeReservationRegisterAndMoveCommand(v14, v3, v12);
      }
      v16 = 1;
    }
    else
    {
      v16 = 0;
    }
    return (unsigned int)NVMeReservationRegisterCommand(v14, v3, v12, v16);
  }
LABEL_9:
  v8 = -1056964602;
LABEL_10:
  *(_BYTE *)(v3 + 3) = 6;
  return v8;
}
