/*
 * XREFs of EtwTraceGreMovePointerBegin @ 0x14012D930
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140066268 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceGreMovePointerBegin(__int64 a1, char a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0qqq_EtwWriteTransfer(a1, &GreMovePointerBegin, a3, a1, a2, a3);
  return result;
}
