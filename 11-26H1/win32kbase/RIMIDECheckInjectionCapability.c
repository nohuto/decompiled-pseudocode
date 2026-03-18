/*
 * XREFs of RIMIDECheckInjectionCapability @ 0x140207378
 * Callers:
 *     NtUserInjectMouseInput @ 0x14018E9E0 (NtUserInjectMouseInput.c)
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401E2960 (NtUserCreateSyntheticPointerDevice2.c)
 *     NtUserInitializeGenericHidInjection @ 0x1401E4FC0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1401E5550 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInjectKeyboardInput @ 0x1401E6330 (NtUserInjectKeyboardInput.c)
 *     NtUserSetFeatureReportResponse @ 0x1401E89E0 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIDECheckInjectionCapability(__int64 a1)
{
  unsigned int v1; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"inputInjection");
  v1 = 0;
  LOBYTE(v4) = 0;
  if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v4) >= 0 )
    return (unsigned __int8)v4;
  return v1;
}
