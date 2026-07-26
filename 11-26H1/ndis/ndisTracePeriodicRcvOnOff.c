/*
 * XREFs of ndisTracePeriodicRcvOnOff @ 0x1400C54F0
 * Callers:
 *     ndisSwitchMiniportReceiveFunction @ 0x14001BBA0 (ndisSwitchMiniportReceiveFunction.c)
 *     ndisReceiveQueueingOff @ 0x14001BE70 (ndisReceiveQueueingOff.c)
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x140034820 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 *     ndisReceiveQueueingOn @ 0x140071110 (ndisReceiveQueueingOn.c)
 * Callees:
 *     memset @ 0x1400EA4C0 (memset.c)
 */

NTSTATUS __fastcall ndisTracePeriodicRcvOnOff(__int64 a1, char a2, int a3, __int64 a4)
{
  _QWORD WnodeEventItem[10]; // [rsp+20h] [rbp-50h] BYREF

  memset(WnodeEventItem, 0, sizeof(WnodeEventItem));
  HIDWORD(WnodeEventItem[5]) = 0x20000;
  BYTE4(WnodeEventItem[0]) = 19;
  BYTE4(WnodeEventItem[6]) = a2;
  WnodeEventItem[8] = a4;
  LODWORD(WnodeEventItem[7]) = a3;
  *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
  LODWORD(WnodeEventItem[9]) = KeGetPcr()->Prcb.Number;
  LOWORD(WnodeEventItem[0]) = 80;
  if ( a1 )
    LODWORD(WnodeEventItem[6]) = (*(_QWORD *)(a1 + 4024) >> 24) & 0xFFFFFF;
  WnodeEventItem[1] = qword_14011EF98;
  return IoWMIWriteEvent(WnodeEventItem);
}
