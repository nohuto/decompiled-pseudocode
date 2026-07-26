/*
 * XREFs of NdisMDeregisterInterrupt @ 0x1400DC730
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisWaitForDpcCompletion@@YAXPECJPECEPEAU_KEVENT@@@Z @ 0x1400C80C4 (-ndisWaitForDpcCompletion@@YAXPECJPECEPEAU_KEVENT@@@Z.c)
 */

void __stdcall NdisMDeregisterInterrupt(PNDIS_MINIPORT_INTERRUPT Interrupt)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+30h] [rbp-18h] BYREF

  Miniport = Interrupt->Miniport;
  Parameters = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      14,
      (struct _GUID *)&WPP_b57355dc9ebc301c1304e623da4026ea_Traceguids,
      (char)Miniport);
  if ( Interrupt->InterruptObject )
  {
    if ( _InterlockedExchangeAdd(&Miniport->RegisteredInterrupts, 0xFFFFFFFF) == 1 )
      _InterlockedOr((volatile signed __int32 *)&Interrupt->Miniport->Flags, 0x20u);
    Parameters.ConnectionContext.Generic = Interrupt->InterruptObject;
    Parameters.Version = 1;
    IoDisconnectInterruptEx(&Parameters);
    ndisWaitForDpcCompletion(
      &Interrupt->DpcCount,
      (volatile unsigned __int8 *)&Interrupt->8,
      &Interrupt->DpcsCompletedEvent);
    Interrupt->Miniport->Interrupt = 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      15,
      (struct _GUID *)&WPP_b57355dc9ebc301c1304e623da4026ea_Traceguids,
      (char)Interrupt->Miniport);
}
