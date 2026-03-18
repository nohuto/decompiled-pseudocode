/*
 * XREFs of PopCapabilityCheck @ 0x1405107A4
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x140A91900 (RtlCapabilityCheck.c)
 */

char __fastcall PopCapabilityCheck(wchar_t *a1)
{
  __int64 v1; // rdx
  wchar_t *v2; // rax
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 )
  {
    String2 = 0LL;
    v1 = 0x7FFFLL;
    v2 = a1;
    do
    {
      if ( !*v2 )
        break;
      ++v2;
      --v1;
    }
    while ( v1 );
    if ( v1 )
    {
      String2.Buffer = a1;
      String2.Length = -2 - 2 * v1;
      String2.MaximumLength = -2 * v1;
      RtlCapabilityCheck(0LL, &String2);
    }
  }
  return 0;
}
