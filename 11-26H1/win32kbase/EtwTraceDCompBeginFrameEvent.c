/*
 * XREFs of EtwTraceDCompBeginFrameEvent @ 0x140133A60
 * Callers:
 *     NtDCompositionBeginFrame @ 0x1401B2540 (NtDCompositionBeginFrame.c)
 * Callees:
 *     McTemplateK0px_EtwWriteTransfer @ 0x140133A90 (McTemplateK0px_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceDCompBeginFrameEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0px_EtwWriteTransfer(a1, &DCompBeginFrameEvent, a3, a1, a2);
  return result;
}
