/*
 * XREFs of EtwTracePointerDeviceReadStop @ 0x1401045D0
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x140125744 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x14003FE10 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTracePointerDeviceReadStop(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, (const EVENT_DESCRIPTOR *)"n", &W32kControlGuid);
  return result;
}
