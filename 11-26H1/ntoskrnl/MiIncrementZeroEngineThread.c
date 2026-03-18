/*
 * XREFs of MiIncrementZeroEngineThread @ 0x1405017CC
 * Callers:
 *     MiWakeAllZeroingThreads @ 0x14050DB8C (MiWakeAllZeroingThreads.c)
 *     MiInsertNewZeroThread @ 0x1405161C8 (MiInsertNewZeroThread.c)
 *     MiAddZeroingThread @ 0x14051F7F0 (MiAddZeroingThread.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     MiUpdateBackgroundZeroingActive @ 0x14051FD0C (MiUpdateBackgroundZeroingActive.c)
 */

LONG __fastcall MiIncrementZeroEngineThread(__int64 a1, int a2)
{
  LONG result; // eax
  __int64 v4; // rcx
  __int64 v5; // r10

  result = *(_DWORD *)(a1 + 128);
  if ( (result & 2) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 128) &= ~2u;
    if ( !a2 )
    {
      if ( *(_DWORD *)v4 )
        *(_DWORD *)(a1 + 128) |= 0x20u;
    }
    ++*(_DWORD *)(v4 + 12);
    MiUpdateBackgroundZeroingActive(*(_QWORD *)(v4 + 136));
    return KeSetEvent((PRKEVENT)(v5 + 136), 0, 0);
  }
  return result;
}
