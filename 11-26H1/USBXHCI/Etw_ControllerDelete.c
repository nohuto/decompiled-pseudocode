/*
 * XREFs of Etw_ControllerDelete @ 0x14004F408
 * Callers:
 *     Controller_WdfEvtCleanupCallback @ 0x140044470 (Controller_WdfEvtCleanupCallback.c)
 * Callees:
 *     McTemplateK0pqqqqqqqsssxqqqt_EtwWriteTransfer @ 0x14004FF60 (McTemplateK0pqqqqqqqsssxqqqt_EtwWriteTransfer.c)
 */

__int64 __fastcall Etw_ControllerDelete(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    return McTemplateK0pqqqqqqqsssxqqqt_EtwWriteTransfer(
             (int)a2 + 714,
             (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_DELETE,
             (int)a2 + 709,
             *(_QWORD *)(a2 + 8),
             *(_DWORD *)(a2 + 644),
             *(_DWORD *)(a2 + 660),
             *(_WORD *)(a2 + 664),
             *(_WORD *)(a2 + 668),
             *(_WORD *)(a2 + 648),
             *(_WORD *)(a2 + 652),
             *(_BYTE *)(a2 + 656),
             a2 + 704,
             a2 + 709,
             a2 + 714,
             *(_QWORD *)(a2 + 728),
             *(_DWORD *)(a2 + 864),
             *(_DWORD *)(a2 + 792),
             *(_DWORD *)(a2 + 176),
             *(_BYTE *)(a2 + 1000));
  return result;
}
