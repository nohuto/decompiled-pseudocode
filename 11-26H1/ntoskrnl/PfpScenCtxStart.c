/*
 * XREFs of PfpScenCtxStart @ 0x1407C6060
 * Callers:
 *     PfInitializeSuperfetch @ 0x140CCE038 (PfInitializeSuperfetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     PfpCreateEventInternal @ 0x1407C802C (PfpCreateEventInternal.c)
 */

__int64 __fastcall PfpScenCtxStart(__int64 a1)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\SuperfetchScenarioNotify");
  return PfpCreateEventInternal(&DestinationString, 0LL, 656LL, a1 + 64);
}
