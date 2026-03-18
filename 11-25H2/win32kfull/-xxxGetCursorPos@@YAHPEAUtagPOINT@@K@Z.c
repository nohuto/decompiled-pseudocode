/*
 * XREFs of ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x14005FDAC
 * Callers:
 *     NtUserGetCursorPos @ 0x14005FD60 (NtUserGetCursorPos.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     CheckWinstaAttributeAccess @ 0x14005FF00 (CheckWinstaAttributeAccess.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall xxxGetCursorPos(struct tagPOINT *a1, __int64 a2)
{
  int v2; // ebx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 SavedCursorPosition; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagPOINT v12; // rbx
  __int64 v13; // rax
  struct tagPOINT *v14; // rdx

  v2 = a2;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v4 = *CurrentThreadNonPaged;
  else
    v4 = 0LL;
  if ( !(unsigned int)CheckWinstaAttributeAccess(2u) )
    return 0LL;
  if ( *(_QWORD *)(v4 + 496) )
  {
    v6 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19144);
    if ( *(_QWORD *)(v4 + 496) != v6 )
    {
      UserSetLastError(5);
      return 0LL;
    }
  }
  v7 = v2 - 1;
  if ( v7 )
  {
    if ( v7 == 1 )
      goto LABEL_8;
    return 0LL;
  }
  if ( (unsigned __int8)IsSpatialDelegationEnabledForThread(v4) )
  {
    SavedCursorPosition = GetSavedCursorPosition();
    goto LABEL_9;
  }
LABEL_8:
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v6);
  SavedCursorPosition = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
LABEL_9:
  v12 = (struct tagPOINT)SavedCursorPosition;
  v13 = -PsGetCurrentProcessWow64Process(v11, v10);
  v14 = a1;
  if ( ((v13 != 0 ? 0 : 3) & (unsigned int)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v14 = (struct tagPOINT *)MmUserProbeAddress;
  LOBYTE(v14->x) = v14->x;
  HIBYTE(v14->y) = HIBYTE(v14->y);
  *a1 = v12;
  return 1LL;
}
