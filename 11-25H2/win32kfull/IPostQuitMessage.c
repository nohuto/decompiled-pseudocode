/*
 * XREFs of IPostQuitMessage @ 0x1401C7DC4
 * Callers:
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x140127104 (-TerminateDesktopThreads@@YAXXZ.c)
 *     _PostQuitMessage @ 0x1401C7DA0 (_PostQuitMessage.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 * Callees:
 *     SetWakeBit @ 0x1400338D0 (SetWakeBit.c)
 */

__int64 __fastcall IPostQuitMessage(__int64 a1, int a2)
{
  EtwTraceWakePump(a1, 0LL, 18LL);
  _InterlockedOr((volatile signed __int32 *)(a1 + 528), 0x40000000u);
  *(_DWORD *)(a1 + 624) = a2;
  SetWakeBit(a1, 264LL);
  return 1LL;
}
