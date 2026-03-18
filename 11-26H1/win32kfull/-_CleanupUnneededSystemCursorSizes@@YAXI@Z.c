/*
 * XREFs of ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x140152C84
 * Callers:
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1401BFAEC (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x140029000 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x140152264 (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 */

void __fastcall _CleanupUnneededSystemCursorSizes(struct tagCURSOR *a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // ebp
  __int64 v4; // rsi
  struct tagCURSOR *DPICursor; // rax
  struct tagCURSOR *v6; // rdi
  __int64 UserGdiSessionState; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v9; // rdx

  v2 = 0LL;
  v3 = (int)a1;
  v4 = 19LL;
  do
  {
    a1 = *(struct tagCURSOR **)(W32GetUserSessionState(a1, a2) + v2 + 21912);
    if ( a1 )
    {
      DPICursor = FindDPICursor(a1, v3);
      v6 = DPICursor;
      if ( DPICursor )
      {
        if ( DPICursor != a1 )
        {
          UserGdiSessionState = W32GetUserGdiSessionState(a1);
          ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(UserGdiSessionState + 40));
          v9 = ProcessWin32Process;
          if ( ProcessWin32Process )
            v9 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
          FixupGlobalCursor(v6, v9);
          _DestroyCursor(v6, 0LL);
        }
      }
    }
    v2 += 552LL;
    --v4;
  }
  while ( v4 );
}
