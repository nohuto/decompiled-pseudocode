/*
 * XREFs of ProcessorConfigure @ 0x1400DCB8C
 * Callers:
 *     AcpiIrqLibConfigureLibrary @ 0x1400D7BD8 (AcpiIrqLibConfigureLibrary.c)
 * Callees:
 *     <none>
 */

__int64 ProcessorConfigure()
{
  ProcessorReserveIdtEntries = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD))ProcessorpReserveIdtEntriesApic;
  ProcessorFindIdtEntries = (__int64)ProcessorpFindIdtEntriesApic;
  return KeRegisterProcessorChangeCallback((PPROCESSOR_CALLBACK_FUNCTION)ProcessorpAddInstanceCallback, 0LL, 0) == 0LL
       ? 0xC0000001
       : 0;
}
