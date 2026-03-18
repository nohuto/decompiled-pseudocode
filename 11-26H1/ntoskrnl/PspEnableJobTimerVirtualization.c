/*
 * XREFs of PspEnableJobTimerVirtualization @ 0x1407F7C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspEnableJobTimerVirtualization(__int64 a1)
{
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 1552), 0x12u);
  return 0LL;
}
