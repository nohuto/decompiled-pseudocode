/*
 * XREFs of EtwTraceBeginPointerFrameCoalesce @ 0x1401779D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140066268 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceBeginPointerFrameCoalesce(__int64 a1, char a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (_DWORD)a3 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x40000) != 0 )
      return McTemplateK0qqq_EtwWriteTransfer(a1, &BeginPointerFrameDelegateCoalesce, a3, a1, a2, 0);
  }
  else if ( (Microsoft_Windows_Win32kEnableBits & 0x40000) != 0 )
  {
    return McTemplateK0qqq_EtwWriteTransfer(a1, &BeginPointerFrameCoalesce, a3, a1, a2, 0);
  }
  return result;
}
