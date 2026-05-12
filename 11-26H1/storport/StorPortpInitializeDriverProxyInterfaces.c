/*
 * XREFs of StorPortpInitializeDriverProxyInterfaces @ 0x140118FE8
 * Callers:
 *     DllInitialize @ 0x1400ACAB0 (DllInitialize.c)
 * Callees:
 *     <none>
 */

PVOID StorPortpInitializeDriverProxyInterfaces()
{
  PVOID result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"IoGetDriverProxyFeatures");
  result = MmGetSystemRoutineAddress(&DestinationString);
  GetDriverProxyFeatures = (__int64)result;
  if ( result )
  {
    RtlInitUnicodeString(&DestinationString, L"IoCreateDriverProxyExtension");
    CreateDriverProxyExt = (__int64)MmGetSystemRoutineAddress(&DestinationString);
    RtlInitUnicodeString(&DestinationString, L"IofGetDriverProxyWrapperFromEndpoint");
    GetDrvrPxyWrapperFromEndpoint = (__int64 (*)(void))MmGetSystemRoutineAddress(&DestinationString);
    RtlInitUnicodeString(&DestinationString, L"IoHotSwapDriverProxyEndpoints");
    result = MmGetSystemRoutineAddress(&DestinationString);
    SwapDrvrPxyEndpoints = (__int64)result;
  }
  return result;
}
