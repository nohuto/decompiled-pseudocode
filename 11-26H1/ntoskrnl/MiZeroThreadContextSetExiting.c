/*
 * XREFs of MiZeroThreadContextSetExiting @ 0x140476960
 * Callers:
 *     MiBackgroundZeroNodePages @ 0x140491210 (MiBackgroundZeroNodePages.c)
 *     MiZeroThreadEnterWaitState @ 0x1404E6364 (MiZeroThreadEnterWaitState.c)
 *     MiZeroThreadStopZeroing @ 0x1404EF578 (MiZeroThreadStopZeroing.c)
 * Callees:
 *     MiSetZeroPageThreadPriority @ 0x1404769A4 (MiSetZeroPageThreadPriority.c)
 */

__int64 __fastcall MiZeroThreadContextSetExiting(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 128) |= 4u;
  MiSetZeroPageThreadPriority(a1, 12LL, 1LL);
  result = *(_DWORD *)(a1 + 128) | 8u;
  *(_DWORD *)(a1 + 128) = result;
  return result;
}
