/*
 * XREFs of PnprQuiesceDevices @ 0x140BF80F0
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1407B0E20 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x140BF8BF0 (PnprQuiesceWorker.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PoStartPartitionReplace @ 0x1407D414C (PoStartPartitionReplace.c)
 *     PoStartPowerStateTasks @ 0x1409F5614 (PoStartPowerStateTasks.c)
 *     PoInitializeBroadcast @ 0x140AC752C (PoInitializeBroadcast.c)
 *     PoBlockConsoleSwitch @ 0x140B56AC0 (PoBlockConsoleSwitch.c)
 *     PnprGetMillisecondCounter @ 0x140BF76E4 (PnprGetMillisecondCounter.c)
 *     PoBroadcastSystemState @ 0x140C0BF20 (PoBroadcastSystemState.c)
 */

__int64 __fastcall PnprQuiesceDevices(int *a1)
{
  __int64 v1; // rbx
  int started; // esi
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rbx

  v1 = PnprContext;
  *(_DWORD *)(v1 + 33328) = PnprGetMillisecondCounter(0);
  memset_0(a1, 0, 0x50uLL);
  a1[15] = 2;
  *a1 = -2013265920;
  a1[17] = -2013265920;
  a1[16] = 5;
  a1[8] = PoBlockConsoleSwitch((__int64)(a1 + 10));
  started = PoStartPowerStateTasks((__int64)(a1 + 10));
  if ( started >= 0 )
  {
    PoStartPartitionReplace((__int64)(a1 + 10), a1[8]);
    a1[2] = 5;
    a1[4] = 1;
    a1[1] = 1;
    a1[6] = *a1;
    a1[3] = 5;
    a1[5] = 2;
    started = PoInitializeBroadcast();
    if ( started >= 0 )
    {
      *((_BYTE *)a1 + 30) = 3;
      PoBroadcastSystemState(a1 + 1);
      *((_BYTE *)a1 + 30) = 2;
      started = PoBroadcastSystemState(a1 + 1);
      if ( started >= 0 )
        goto LABEL_16;
      v7 = 1839;
    }
    else
    {
      v7 = 1821;
    }
    v8 = PnprContext;
    v9 = *(_DWORD *)(PnprContext + 33288);
    if ( !v9 )
      v9 = v7;
    *(_DWORD *)(PnprContext + 33288) = v9;
    v10 = *(_DWORD *)(v8 + 33292);
    if ( !v10 )
      v10 = 7;
    *(_DWORD *)(v8 + 33292) = v10;
  }
  else
  {
    v4 = PnprContext;
    v5 = *(_DWORD *)(PnprContext + 33288);
    if ( !v5 )
      v5 = 1798;
    v6 = *(_DWORD *)(PnprContext + 33292);
    *(_DWORD *)(PnprContext + 33288) = v5;
    if ( !v6 )
      v6 = 7;
    *(_DWORD *)(v4 + 33292) = v6;
  }
LABEL_16:
  v11 = PnprContext;
  *(_DWORD *)(v11 + 33332) = PnprGetMillisecondCounter(0);
  return (unsigned int)started;
}
