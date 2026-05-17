/*
 * XREFs of TppFreeWait @ 0x1800DA460
 * Callers:
 *     <none>
 * Callees:
 *     TppDestroyTimer @ 0x1800DA4B4 (TppDestroyTimer.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 */

__int64 __fastcall TppFreeWait(__int64 a1)
{
  TppDestroyTimer();
  NtClose(*(HANDLE *)(a1 + 368));
  *(_QWORD *)(a1 + 448) = 0LL;
  return RtlFreeHeap_0();
}
