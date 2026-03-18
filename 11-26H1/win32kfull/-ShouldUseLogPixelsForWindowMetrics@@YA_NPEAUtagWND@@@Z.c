/*
 * XREFs of ?ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z @ 0x14004DA2C
 * Callers:
 *     UpdateWindowMonitor @ 0x14004BA40 (UpdateWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 */

char __fastcall ShouldUseLogPixelsForWindowMetrics(struct tagWND *a1, __int64 a2)
{
  char v3; // bl
  int v4; // ecx
  __int64 v5; // r9
  __int64 TopLevelWindow; // rax
  int v7; // ebx

  v3 = 0;
  v4 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF;
  if ( v4 == 3 )
    return 1;
  if ( v4 == 2 )
  {
    if ( (unsigned int)IsTopLevelWindow(a1, a2) )
    {
      v7 = *(_DWORD *)(v5 + 380) >> 19;
      return v7 & 1;
    }
    TopLevelWindow = GetTopLevelWindow(v5);
    if ( TopLevelWindow )
    {
      v7 = *(_DWORD *)(TopLevelWindow + 380) >> 20;
      return v7 & 1;
    }
  }
  return v3;
}
