/*
 * XREFs of RtlpHpHeapCompact @ 0x1800618B0
 * Callers:
 *     RtlpFlushHeapsCallback @ 0x1800020C0 (RtlpFlushHeapsCallback.c)
 *     RtlpHpGCTimerEnumProcessHeapsCallback @ 0x180060000 (RtlpHpGCTimerEnumProcessHeapsCallback.c)
 *     RtlCompactHeap @ 0x180103B80 (RtlCompactHeap.c)
 * Callees:
 *     RtlpHpSegContextCompact @ 0x180061944 (RtlpHpSegContextCompact.c)
 *     RtlpHpLfhContextCompact @ 0x180061B2C (RtlpHpLfhContextCompact.c)
 *     RtlpHpVsContextCompact @ 0x180061C90 (RtlpHpVsContextCompact.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x180121080 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 */

__int64 __fastcall RtlpHpHeapCompact(__int64 a1, unsigned int a2)
{
  unsigned int *v4; // rcx
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // r8

  v4 = (unsigned int *)(a1 + 20);
  __writegsqword(0x250u, (unsigned __int64)v4);
  v5 = *v4;
  if ( (v5 & 0x10) != 0 )
  {
    v7 = *(unsigned int *)(a1 + 224);
    if ( (_DWORD)v7 != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
      RtlpHpEnvAcquireGlobalLockSharedContended(v4, v5, v7);
  }
  RtlpHpVsContextCompact(a1 + 704);
  RtlpHpLfhContextCompact(a1 + 896, a2);
  RtlpHpSegContextCompact(a1 + 320);
  RtlpHpSegContextCompact(a1 + 512);
  result = 0LL;
  __writegsqword(0x250u, 0LL);
  return result;
}
