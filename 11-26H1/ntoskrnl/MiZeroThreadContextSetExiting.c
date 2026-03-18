/*
 * XREFs of MiZeroThreadContextSetExiting @ 0x14047CFF0
 * Callers:
 *     MiBackgroundZeroNodePages @ 0x1404976C0 (MiBackgroundZeroNodePages.c)
 *     MiZeroThreadEnterWaitState @ 0x1404ECD84 (MiZeroThreadEnterWaitState.c)
 *     MiZeroThreadStopZeroing @ 0x1404F5FB8 (MiZeroThreadStopZeroing.c)
 * Callees:
 *     MiSetZeroPageThreadPriority @ 0x14047D034 (MiSetZeroPageThreadPriority.c)
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
