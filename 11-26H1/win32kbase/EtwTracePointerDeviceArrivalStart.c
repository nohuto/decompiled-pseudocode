/*
 * XREFs of EtwTracePointerDeviceArrivalStart @ 0x140196300
 * Callers:
 *     RIMAllocateHidDesc @ 0x1401AE930 (RIMAllocateHidDesc.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x140064480 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTracePointerDeviceArrivalStart(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &PointerDeviceArrivalStart, &W32kControlGuid);
  return result;
}
