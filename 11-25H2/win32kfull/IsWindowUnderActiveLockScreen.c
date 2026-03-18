/*
 * XREFs of IsWindowUnderActiveLockScreen @ 0x140169524
 * Callers:
 *     ?_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z @ 0x140169118 (-_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x140169380 (DCELogicalSpeedTopLevelHitTest.c)
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWindowUnderActiveLockScreen(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = 0;
  if ( *(_QWORD *)(a1 + 24)
    && *(_DWORD *)(W32GetUserSessionState(a1, a2) + 66092)
    && *(_QWORD *)(W32GetUserSessionState(v5, v4) + 62976) != *(_QWORD *)(a1 + 24)
    && *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) != 2
    && *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) != 3
    && *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) != 14
    && *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) != 17 )
  {
    return *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) != 18;
  }
  return v2;
}
