/*
 * XREFs of EtwTraceDitWaitForRitDisEngagement @ 0x14015A270
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x14003FE10 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceDitWaitForRitDisEngagement(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &DitWaitForRitDisEngagement, &W32kControlGuid);
  return result;
}
