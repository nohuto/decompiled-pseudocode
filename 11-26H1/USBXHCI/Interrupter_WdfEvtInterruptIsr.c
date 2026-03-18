/*
 * XREFs of Interrupter_WdfEvtInterruptIsr @ 0x14003AB70
 * Callers:
 *     <none>
 * Callees:
 *     XilRegister_WriteUlong @ 0x140008FA4 (XilRegister_WriteUlong.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000FCC0 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000FED0 (Controller_LowerAndTrackIrql.c)
 *     Interrupter_DeferToDpcOrWorkItem @ 0x140028B00 (Interrupter_DeferToDpcOrWorkItem.c)
 *     Controller_CheckForFrameOverlowEventFromIsr @ 0x14002AFB0 (Controller_CheckForFrameOverlowEventFromIsr.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002D650 (McTemplateK0pq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

char __fastcall Interrupter_WdfEvtInterruptIsr(__int64 a1, int a2)
{
  __int64 v4; // rbx
  char v5; // r14
  char v6; // di
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int *v10; // rdx
  int Ulong; // eax
  int *v12; // rdx
  signed __int32 v14[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+20h] [rbp-28h]

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B178);
  v5 = 0;
  v6 = 1;
  v7 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 88LL);
  if ( KeGetCurrentIrql() < 2u )
    v5 = Controller_RaiseAndTrackIrql(*(_QWORD *)(v4 + 8));
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
  {
    v9 = *(_QWORD *)(v4 + 8);
    LODWORD(v15) = *(_DWORD *)(v4 + 32);
    McTemplateK0pq_EtwWriteTransfer((unsigned int)v15, &USBXHCI_ETW_EVENT_INTERRUPT_V2, v8, *(_QWORD *)(v9 + 8), v15);
  }
  Controller_CheckForFrameOverlowEventFromIsr(*(_QWORD *)(v4 + 8));
  if ( !a2 && (*(_DWORD *)(v4 + 112) & 1) == 0 )
  {
    v10 = *(unsigned int **)(v4 + 24);
    if ( *(_BYTE *)(v7 + 137) )
      Ulong = *v10;
    else
      Ulong = XilRegister_ReadUlong(v7, v10);
    if ( (Ulong & 1) == 0 )
    {
      v6 = 0;
      goto LABEL_16;
    }
    v12 = *(int **)(v4 + 24);
    if ( *(_BYTE *)(v7 + 137) )
    {
      *v12 = Ulong;
      _InterlockedOr(v14, 0);
    }
    else
    {
      XilRegister_WriteUlong(v7, v12, Ulong);
    }
  }
  ++*(_DWORD *)(v4 + 40);
  Interrupter_DeferToDpcOrWorkItem(a1);
LABEL_16:
  if ( v5 && KeGetCurrentIrql() == 2 )
    Controller_LowerAndTrackIrql(*(_QWORD **)(v4 + 8));
  return v6;
}
