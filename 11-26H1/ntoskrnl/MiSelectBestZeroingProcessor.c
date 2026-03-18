/*
 * XREFs of MiSelectBestZeroingProcessor @ 0x1403E8AC4
 * Callers:
 *     MiMoveBackgroundZeroThreads @ 0x1403E84D0 (MiMoveBackgroundZeroThreads.c)
 *     MiBackgroundZeroNodePages @ 0x1404976C0 (MiBackgroundZeroNodePages.c)
 *     MiZeroThreadEnterWaitState @ 0x1404ECD84 (MiZeroThreadEnterWaitState.c)
 * Callees:
 *     MiZeroRemainOnProcessor @ 0x1403E8CEC (MiZeroRemainOnProcessor.c)
 *     MiDecrementZeroEngineThread @ 0x1403E8DCC (MiDecrementZeroEngineThread.c)
 *     MiUnlinkZeroThreadFromActiveDomain @ 0x1403E8E94 (MiUnlinkZeroThreadFromActiveDomain.c)
 *     MiAssignBackgroundZeroThreadToProcessor @ 0x1403E8F54 (MiAssignBackgroundZeroThreadToProcessor.c)
 *     MiFindBestZeroingProcessor @ 0x1403E9158 (MiFindBestZeroingProcessor.c)
 *     MiStartBackgroundZeroTimer @ 0x14070EAF4 (MiStartBackgroundZeroTimer.c)
 */

__int64 __fastcall MiSelectBestZeroingProcessor(__int64 a1, __int64 a2)
{
  char v4; // si
  unsigned int v5; // esi
  bool v7; // zf
  _OWORD v8[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h]
  __int64 v10; // [rsp+50h] [rbp-18h]

  v4 = ~(unsigned __int8)(*(_DWORD *)(a2 + 128) >> 5);
  v10 = 0LL;
  v5 = v4 & 1;
  memset(v8, 0, sizeof(v8));
  v9 = 0LL;
  if ( !(unsigned int)MiZeroRemainOnProcessor(a2, v5) )
  {
    if ( *(_QWORD *)(a2 + 96) )
      MiUnlinkZeroThreadFromActiveDomain(a2);
    if ( *(_DWORD *)(a1 + 12) > *(_DWORD *)(a1 + 8) )
    {
      MiDecrementZeroEngineThread(a2);
      return 0LL;
    }
    MiFindBestZeroingProcessor(v8, a1, v5, 0LL);
    v7 = DWORD2(v9) == 5;
    ++*(_DWORD *)(a1 + 4LL * SDWORD2(v9) + 380);
    if ( v7 )
    {
      if ( (unsigned int)MiDecrementZeroEngineThread(a2) )
        MiStartBackgroundZeroTimer(*(_QWORD *)(a1 + 136));
      return 0LL;
    }
    ++*(_DWORD *)(a1 + 256);
    MiAssignBackgroundZeroThreadToProcessor(a2, a1, v8);
  }
  return 1LL;
}
