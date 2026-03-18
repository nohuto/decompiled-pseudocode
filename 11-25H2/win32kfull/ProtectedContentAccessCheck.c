/*
 * XREFs of ProtectedContentAccessCheck @ 0x140061BD0
 * Callers:
 *     ValidateNewParent @ 0x140061A04 (ValidateNewParent.c)
 * Callees:
 *     IsWindowContentProtected @ 0x14001D640 (IsWindowContentProtected.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetTopLevelWindow @ 0x140038170 (_GetTopLevelWindow.c)
 */

__int64 __fastcall ProtectedContentAccessCheck(__int64 a1)
{
  __int64 TopLevelWindow; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx

  TopLevelWindow = GetTopLevelWindow(a1);
  v3 = TopLevelWindow;
  if ( !TopLevelWindow )
    return 1LL;
  v4 = *(_QWORD *)(TopLevelWindow + 40);
  if ( *(char *)(v4 + 232) < 0 )
  {
    v4 = *(_QWORD *)(TopLevelWindow + 16);
    if ( *(_QWORD *)(v4 + 1592) )
      v3 = *(_QWORD *)(v4 + 1592);
  }
  if ( !(unsigned int)IsWindowContentProtected(v3, v4) )
    return 1LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
  v8 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v8 = v7 & CurrentProcessWin32Process;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 464LL);
  if ( v9 == v8 )
    return 1LL;
  if ( v9 == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL) )
    return (*((_DWORD *)PtiCurrent(v9, v7) + 340) >> 18) & 1;
  return 0LL;
}
