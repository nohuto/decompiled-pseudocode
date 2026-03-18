/*
 * XREFs of GreGetStockObject @ 0x140084170
 * Callers:
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 *     CleanupGDI @ 0x1400805CC (CleanupGDI.c)
 *     bInitICM @ 0x1402F4C30 (bInitICM.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1400853E0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 */

__int64 __fastcall GreGetStockObject(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // esi
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  int v9; // eax
  __int64 result; // rax

  v2 = (int)a1;
  LOBYTE(v3) = 18;
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(a1, a2);
  if ( CurrentThreadWin32Thread )
  {
    v6 = *CurrentThreadWin32Thread;
    if ( *CurrentThreadWin32Thread )
    {
      if ( *(_QWORD *)(v6 + 400) )
        CaptureAndValidateUserModeDpiAwarenessContext(*CurrentThreadWin32Thread);
      if ( *(_DWORD *)(v6 + 392) )
      {
        LOBYTE(v3) = *(_DWORD *)(v6 + 392);
      }
      else
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
        if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
          v3 = *(_DWORD *)(CurrentProcessWin32Process + 268);
      }
    }
  }
  v8 = *(_QWORD *)(W32GetSessionState(v5) + 88);
  if ( (unsigned int)v2 > 0x10
    || (v9 = 74752, !_bittest(&v9, v2))
    || (v3 & 0xF) != 0
    || (result = *(_QWORD *)(*(_QWORD *)(v8 + 3096) + 8 * v2)) == 0 )
  {
    if ( (_DWORD)v2 == 17 || (unsigned int)v2 > 0x15 )
      return 0LL;
    else
      return *(_QWORD *)(*(_QWORD *)(v8 + 3088) + 8 * v2);
  }
  return result;
}
