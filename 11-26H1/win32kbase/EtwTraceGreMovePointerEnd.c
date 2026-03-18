/*
 * XREFs of EtwTraceGreMovePointerEnd @ 0x14012D970
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140066268 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceGreMovePointerEnd(__int64 a1, char a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0qqq_EtwWriteTransfer(a1, (const EVENT_DESCRIPTOR *)"P", a3, a1, a2, a3);
  return result;
}
