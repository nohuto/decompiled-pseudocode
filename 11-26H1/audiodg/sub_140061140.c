/*
 * XREFs of sub_140061140 @ 0x140061140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_140061140(__int64 a1, HANDLE *a2)
{
  BOOL result; // eax

  RtlPublishWnfStateData(0x2821B2CA3BC08B5LL, 0LL, 0LL, 0LL, *a2);
  NtSetInformationProcess(*a2, ProcessVmCounters|0x40, 0LL, 0);
  RtlPublishWnfStateData(0x2821B2CA3BC2875LL, 0LL, a1 + 560, 4LL, 0LL);
  result = CloseHandle(*a2);
  *a2 = 0LL;
  return result;
}
