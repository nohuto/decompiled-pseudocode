/*
 * XREFs of EtwTraceEndPointerFrameCoalesce @ 0x140065460
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140066268 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceEndPointerFrameCoalesce(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( a3 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x40000) != 0 )
      return McTemplateK0qqq_EtwWriteTransfer(a1, (unsigned int)&EndPointerFrameDelegateCoalesce, a3, a1, a2, 0);
  }
  else if ( (Microsoft_Windows_Win32kEnableBits & 0x40000) != 0 )
  {
    return McTemplateK0qqq_EtwWriteTransfer(a1, (unsigned int)&EndPointerFrameCoalesce, 0, a1, a2, 0);
  }
  return result;
}
