/*
 * XREFs of EtwTraceStopProcessQueuedMouseEvents @ 0x140064420
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x140064480 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceStopProcessQueuedMouseEvents(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &StopProcessQueuedMouseEvents, &W32kControlGuid);
  return result;
}
