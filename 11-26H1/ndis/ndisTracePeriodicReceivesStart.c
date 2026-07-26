/*
 * XREFs of ndisTracePeriodicReceivesStart @ 0x14008D3F0
 * Callers:
 *     ndisSwitchMiniportReceiveFunction @ 0x14001BBA0 (ndisSwitchMiniportReceiveFunction.c)
 *     ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x140030330 (-ndisPeriodicReceivesWorker@@YAXPEAX@Z.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x14006ED90 (ndisEmptyPeriodicReceivesQueue.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x14006D960 (McTemplateK0q_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall ndisTracePeriodicReceivesStart(__int64 a1)
{
  unsigned __int64 v2; // rax
  NTSTATUS result; // eax
  __int64 v4; // rcx
  _WORD WnodeEventItem[2]; // [rsp+20h] [rbp-48h] BYREF
  char v6; // [rsp+24h] [rbp-44h]
  __int16 v7; // [rsp+25h] [rbp-43h]
  char v8; // [rsp+27h] [rbp-41h]
  __int64 v9; // [rsp+28h] [rbp-40h]
  __int64 v10; // [rsp+30h] [rbp-38h]
  GUID v11; // [rsp+38h] [rbp-30h]
  int v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+4Ch] [rbp-1Ch]
  int v14; // [rsp+50h] [rbp-18h]
  unsigned int Number; // [rsp+54h] [rbp-14h]

  v13 = 0x20000;
  WnodeEventItem[1] = 0;
  v7 = 0;
  v8 = 0;
  v10 = 0LL;
  v12 = 0;
  WnodeEventItem[0] = 56;
  v2 = *(_QWORD *)(a1 + 4024);
  v6 = 20;
  v14 = (v2 >> 24) & 0xFFFFFF;
  v11 = EtwGuidNdisReceive;
  Number = KeGetPcr()->Prcb.Number;
  v9 = qword_14011EF98;
  result = IoWMIWriteEvent(WnodeEventItem);
  if ( (byte_14011D045 & 2) != 0 )
    return McTemplateK0q_EtwWriteTransfer(
             v4,
             &QueuedReceiveStart,
             (const GUID *)(a1 + 4008),
             (*(_QWORD *)(a1 + 4024) >> 24) & 0xFFFFFF);
  return result;
}
