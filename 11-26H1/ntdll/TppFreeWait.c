/*
 * XREFs of TppFreeWait @ 0x1800D7420
 * Callers:
 *     <none>
 * Callees:
 *     TppDestroyTimer @ 0x1800D7474 (TppDestroyTimer.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 */

LOGICAL __fastcall TppFreeWait(HANDLE *BaseAddress)
{
  ULONG v2; // edx

  TppDestroyTimer();
  NtClose(BaseAddress[46]);
  v2 = TppHeapTag;
  BaseAddress[56] = 0LL;
  return RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, v2 + 1835008, BaseAddress);
}
