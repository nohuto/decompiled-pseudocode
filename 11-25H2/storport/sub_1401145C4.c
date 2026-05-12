/*
 * XREFs of sub_1401145C4 @ 0x1401145C4
 * Callers:
 *     DllInitialize @ 0x1400A3DE0 (DllInitialize.c)
 * Callees:
 *     <none>
 */

PVOID sub_1401145C4()
{
  PVOID result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"IoGetDriverProxyFeatures");
  result = MmGetSystemRoutineAddress(&DestinationString);
  qword_140168E00 = (__int64 (__fastcall *)(_QWORD, _QWORD))result;
  if ( result )
  {
    RtlInitUnicodeString(&DestinationString, L"IoCreateDriverProxyExtension");
    qword_140168E10 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
    RtlInitUnicodeString(&DestinationString, L"IoRegisterDriverProxyEndpoints");
    qword_140168E18 = (__int64)MmGetSystemRoutineAddress(&DestinationString);
    RtlInitUnicodeString(&DestinationString, L"IoGetDriverProxyEndpointWrapper");
    result = MmGetSystemRoutineAddress(&DestinationString);
    qword_140168E08 = (__int64 (__fastcall *)(_QWORD, _QWORD))result;
  }
  return result;
}
