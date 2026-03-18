/*
 * XREFs of XilUsbDevice_WriteDoorbell @ 0x14000ED60
 * Callers:
 *     Control_Transfer_MapIntoRing @ 0x14000F2D0 (Control_Transfer_MapIntoRing.c)
 *     Isoch_Stage_MapIntoRing @ 0x14001B410 (Isoch_Stage_MapIntoRing.c)
 * Callees:
 *     McTemplateK0uqq_EtwWriteTransfer @ 0x14000EDE0 (McTemplateK0uqq_EtwWriteTransfer.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x140038F28 (XilUsbDevice_SendRequestToRingDoorbell.c)
 */

int *__fastcall XilUsbDevice_WriteDoorbell(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v5; // ebx
  int *result; // rax
  signed __int32 v7[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( *(_QWORD *)(a1 + 168) )
  {
    v5 = ((_DWORD)a3 << 16) | (unsigned __int8)a2;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      McTemplateK0uqq_EtwWriteTransfer(a1, a2, a3, *(unsigned __int8 *)(a1 + 143), a2, a3);
    result = *(int **)(a1 + 168);
    *result = v5;
    _InterlockedOr(v7, 0);
  }
  else if ( a4 )
  {
    return (int *)XilUsbDevice_SendRequestToRingDoorbell(a1 + 616);
  }
  return result;
}
