/*
 * XREFs of ?ResetEdgyDataOwnership@Edgy@@YAXXZ @ 0x1401B2028
 * Callers:
 *     ResetEdgyDataOwnershipForCurrentThread @ 0x1401B2010 (ResetEdgyDataOwnershipForCurrentThread.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall Edgy::ResetEdgyDataOwnership(Edgy *this, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx

  if ( *(_QWORD *)(W32GetUserSessionState(this, a2) + 19144) )
  {
    v5 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 19144);
    if ( *(_QWORD *)(v5 + 248) )
    {
      v6 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19144);
      v9 = PtiCurrent(v8, v7);
      v11 = *(_QWORD *)(v6 + 248);
      if ( *(struct tagTHREADINFO **)(v11 + 288) == v9 )
      {
        v12 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19144);
        *(_QWORD *)(*(_QWORD *)(v12 + 248) + 288LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v12, v13) + 19144) + 248LL) + 16LL) = 0;
      }
    }
  }
}
