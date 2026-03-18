/*
 * XREFs of PfpSetParameter @ 0x1407C7FA8
 * Callers:
 *     PfpSetBaseTime @ 0x1407C7EE8 (PfpSetBaseTime.c)
 *     PfSetSuperfetchInformation @ 0x140B5DB14 (PfSetSuperfetchInformation.c)
 *     PfpParametersInitialize @ 0x140CCE460 (PfpParametersInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x140723FF0 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall PfpSetParameter(HANDLE KeyHandle, const WCHAR *a2, __int64 a3, void *a4, ULONG DataSize)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  if ( KeyHandle )
    return ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, a4, DataSize);
  else
    return -1073741811;
}
