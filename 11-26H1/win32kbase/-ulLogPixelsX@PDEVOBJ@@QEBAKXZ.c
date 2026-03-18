/*
 * XREFs of ?ulLogPixelsX@PDEVOBJ@@QEBAKXZ @ 0x14016AF74
 * Callers:
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1401805B0 (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140085350 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall PDEVOBJ::ulLogPixelsX(PDEVOBJ *this, __int64 a2)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  int v4; // ecx

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext((__int64)this, a2);
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) == 0 )
    return *(unsigned int *)(*(_QWORD *)this + 2160LL);
  v4 = CurrentThreadDpiAwarenessContext & 0xF;
  if ( v4 == 1 || v4 == 2 )
    return *(unsigned int *)(*(_QWORD *)this + 2160LL);
  else
    return (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
}
