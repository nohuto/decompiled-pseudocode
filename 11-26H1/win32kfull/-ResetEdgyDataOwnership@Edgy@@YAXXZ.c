/*
 * XREFs of ?ResetEdgyDataOwnership@Edgy@@YAXXZ @ 0x1401E3128
 * Callers:
 *     ResetEdgyDataOwnershipForCurrentThread @ 0x1401E3110 (ResetEdgyDataOwnershipForCurrentThread.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall Edgy::ResetEdgyDataOwnership(Edgy *this, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx

  if ( *(_QWORD *)(W32GetUserSessionState(this, a2) + 19176) )
  {
    v5 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 19176);
    if ( *(_QWORD *)(v5 + 248) )
    {
      v6 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19176);
      v8 = PtiCurrent(v7);
      v10 = *(_QWORD *)(v6 + 248);
      if ( *(struct tagTHREADINFO **)(v10 + 288) == v8 )
      {
        v11 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19176);
        *(_QWORD *)(*(_QWORD *)(v11 + 248) + 288LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v12) + 19176) + 248LL) + 16LL) = 0;
      }
    }
  }
}
