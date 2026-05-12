/*
 * XREFs of SpVerifierInitialization @ 0x14018FA88
 * Callers:
 *     DllInitialize @ 0x1400ACAB0 (DllInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

char SpVerifierInitialization()
{
  int (__fastcall *SystemRoutineAddress)(__int64, __int64 (__fastcall **)(PDRIVER_OBJECT), __int64); // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"DifRegisterClassDriverPlugin");
  SystemRoutineAddress = (int (__fastcall *)(__int64, __int64 (__fastcall **)(PDRIVER_OBJECT), __int64))MmGetSystemRoutineAddress(&DestinationString);
  if ( SystemRoutineAddress )
    LOBYTE(SystemRoutineAddress) = SystemRoutineAddress(43LL, &StorPortVerifierFunctionTable, 384LL) >= 0;
  return (char)SystemRoutineAddress;
}
