/*
 * XREFs of sub_14017B6B8 @ 0x14017B6B8
 * Callers:
 *     StorPortInitialize @ 0x14006FFB0 (StorPortInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

PVOID sub_14017B6B8()
{
  PVOID result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v2; // [rsp+50h] [rbp+10h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"PsGetVersion");
  qword_1401685E8 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiTraceMessage");
  qword_1401685A0 = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiQueryTraceInformation");
  qword_1401686A0 = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  result = qword_1401685E8;
  dword_140168640 = 2;
  if ( qword_1401685E8 )
    result = (PVOID)qword_1401685E8(&v2, 0LL, 0LL, 0LL);
  if ( v2 >= 6 )
  {
    RtlInitUnicodeString(&DestinationString, L"EtwRegisterClassicProvider");
    result = MmGetSystemRoutineAddress(&DestinationString);
    qword_140168568 = (__int64)result;
    if ( result )
    {
      RtlInitUnicodeString(&DestinationString, L"EtwUnregister");
      result = MmGetSystemRoutineAddress(&DestinationString);
      qword_1401686F8 = (__int64)result;
      dword_140168640 = 4;
    }
  }
  return result;
}
