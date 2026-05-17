/*
 * XREFs of RtlpHpHeapCompact @ 0x180016180
 * Callers:
 *     RtlpHpGCTimerEnumProcessHeapsCallback @ 0x1800148D0 (RtlpHpGCTimerEnumProcessHeapsCallback.c)
 *     RtlpFlushHeapsCallback @ 0x180016FE0 (RtlpFlushHeapsCallback.c)
 *     RtlCompactHeap @ 0x180104800 (RtlCompactHeap.c)
 * Callees:
 *     RtlpHpSegContextCompact @ 0x180016214 (RtlpHpSegContextCompact.c)
 *     RtlpHpLfhContextCompact @ 0x1800163FC (RtlpHpLfhContextCompact.c)
 *     RtlpHpVsContextCompact @ 0x180016560 (RtlpHpVsContextCompact.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x1801212E4 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 */

__int64 __fastcall RtlpHpHeapCompact(__int64 a1, unsigned int a2)
{
  _DWORD *v4; // rcx
  __int64 result; // rax

  v4 = (_DWORD *)(a1 + 20);
  __writegsqword(0x250u, (unsigned __int64)v4);
  if ( (*v4 & 0x10) != 0 && *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
    RtlpHpEnvAcquireGlobalLockSharedContended();
  RtlpHpVsContextCompact(a1 + 704);
  RtlpHpLfhContextCompact(a1 + 896, a2);
  RtlpHpSegContextCompact(a1 + 320);
  RtlpHpSegContextCompact(a1 + 512);
  result = 0LL;
  __writegsqword(0x250u, 0LL);
  return result;
}
