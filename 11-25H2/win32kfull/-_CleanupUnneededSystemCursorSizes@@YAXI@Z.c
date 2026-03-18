/*
 * XREFs of ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x1401D1E64
 * Callers:
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1401B79FC (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x14007A464 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1401D1FFC (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 */

void __fastcall _CleanupUnneededSystemCursorSizes(struct tagCURSOR *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ebp
  __int64 v4; // rsi
  struct tagCURSOR *DPICursor; // rax
  struct tagCURSOR *v6; // rdi
  __int64 UserGdiSessionState; // rax
  __int64 ProcessWin32Process; // rax

  v2 = 0LL;
  v3 = (unsigned int)a1;
  v4 = 19LL;
  do
  {
    a1 = *(struct tagCURSOR **)(W32GetUserSessionState(a1, a2) + v2 + 21880);
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
          if ( ProcessWin32Process )
            ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
          FixupGlobalCursor(v6, ProcessWin32Process);
          _DestroyCursor(v6, 0LL);
        }
      }
    }
    v2 += 552LL;
    --v4;
  }
  while ( v4 );
}
