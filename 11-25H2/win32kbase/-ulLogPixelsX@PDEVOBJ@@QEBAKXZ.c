/*
 * XREFs of ?ulLogPixelsX@PDEVOBJ@@QEBAKXZ @ 0x14012D2D4
 * Callers:
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x14014527C (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140042BB0 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall PDEVOBJ::ulLogPixelsX(PDEVOBJ *this)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) != 0 && (CurrentThreadDpiAwarenessContext & 0xF) - 1 > 1 )
    return (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
  else
    return *(unsigned int *)(*(_QWORD *)this + 2160LL);
}
