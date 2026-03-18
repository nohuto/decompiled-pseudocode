/*
 * XREFs of EtwTraceScreenSaverProcessEvent @ 0x1401B857C
 * Callers:
 *     DestroyProcessInfo @ 0x140162224 (DestroyProcessInfo.c)
 *     xxxCreateThreadInfo @ 0x140162D44 (xxxCreateThreadInfo.c)
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x140078A24 (McTemplateK0d_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceScreenSaverProcessEvent(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &ScreenSaverProcessEvent, a3, a1);
  return result;
}
