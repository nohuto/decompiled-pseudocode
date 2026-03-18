/*
 * XREFs of GetLastTopMostWindow @ 0x140065958
 * Callers:
 *     CalcForegroundInsertAfter @ 0x140023FF0 (CalcForegroundInsertAfter.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x140064EE4 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     ?_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z @ 0x140169118 (-_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z.c)
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1401955C4 (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1401A77E4 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagCVR@@@Z @ 0x1402326A0 (-CheckTopmost@@YAHPEAUtagCVR@@@Z.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x140232848 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     LinkWindow @ 0x1402B6200 (LinkWindow.c)
 * Callees:
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetThreadDesktopWindow @ 0x1401785A0 (GetThreadDesktopWindow.c)
 */

__int64 __fastcall GetLastTopMostWindow(__int64 a1, __int64 a2)
{
  __int64 ThreadDesktopWindow; // rax
  __int64 v3; // rdx
  __int64 i; // r8
  struct tagTHREADINFO *v5; // rax

  if ( !a1 || (ThreadDesktopWindow = GetDesktopWindow(a1)) == 0 )
  {
    v5 = PtiCurrent(a1, a2);
    ThreadDesktopWindow = GetThreadDesktopWindow(v5);
    if ( !ThreadDesktopWindow )
      return 0LL;
  }
  v3 = *(_QWORD *)(ThreadDesktopWindow + 112);
  if ( !v3 || (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 24LL) & 8) == 0 )
    return 0LL;
  for ( i = *(_QWORD *)(v3 + 88); i && (*(_BYTE *)(*(_QWORD *)(i + 40) + 24LL) & 8) != 0; i = *(_QWORD *)(i + 88) )
    v3 = i;
  return v3;
}
