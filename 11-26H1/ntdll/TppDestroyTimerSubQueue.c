/*
 * XREFs of TppDestroyTimerSubQueue @ 0x1800FF334
 * Callers:
 *     TppPoolpFree @ 0x180039308 (TppPoolpFree.c)
 *     TppInitializeTimerQueue @ 0x180085FB8 (TppInitializeTimerQueue.c)
 * Callees:
 *     NtClose @ 0x18015F020 (NtClose.c)
 */

NTSTATUS __fastcall TppDestroyTimerSubQueue(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax

  NtClose(*(HANDLE *)(a1 + 32));
  v2 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 96) = 0LL;
  result = NtClose(v2);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
