/*
 * XREFs of EtwTraceFlipManagerWaitForFrameFlipAway @ 0x1401DB280
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qxxq_EtwWriteTransfer @ 0x1401DC520 (McTemplateK0qxxq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerWaitForFrameFlipAway(int a1, _QWORD *a2, int a3, char a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qxxq_EtwWriteTransfer(a1, (unsigned int)&FlipManagerWaitForFrameFlipAway, a3, a1, *a2, a3, a4);
  return result;
}
