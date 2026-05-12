/*
 * XREFs of sub_140182FF0 @ 0x140182FF0
 * Callers:
 *     DllInitialize @ 0x1400A3DE0 (DllInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

char sub_140182FF0()
{
  int (__fastcall *SystemRoutineAddress)(__int64, __int64 (__fastcall **)(PDRIVER_OBJECT), __int64); // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"DifRegisterClassDriverPlugin");
  SystemRoutineAddress = (int (__fastcall *)(__int64, __int64 (__fastcall **)(PDRIVER_OBJECT), __int64))MmGetSystemRoutineAddress(&DestinationString);
  if ( SystemRoutineAddress )
    LOBYTE(SystemRoutineAddress) = SystemRoutineAddress(43LL, &off_140148350, 384LL) >= 0;
  return (char)SystemRoutineAddress;
}
