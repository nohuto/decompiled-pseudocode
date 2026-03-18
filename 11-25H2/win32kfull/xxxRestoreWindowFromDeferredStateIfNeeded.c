/*
 * XREFs of xxxRestoreWindowFromDeferredStateIfNeeded @ 0x140284CA8
 * Callers:
 *     NtUserRestoreWindowDpiChanges @ 0x140221420 (NtUserRestoreWindowDpiChanges.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1400654C0 (xxxNotifyMonitorChanged.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1402847CC (_SetDeferredDpiStateForWindowAndChildren.c)
 */

__int64 __fastcall xxxRestoreWindowFromDeferredStateIfNeeded(__int64 a1)
{
  struct tagRECT *v1; // rdi
  unsigned __int16 v3; // si
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebp
  __int64 UserSessionState; // rax

  v1 = 0LL;
  v3 = *(_WORD *)(*(_QWORD *)(a1 + 40) + 286LL);
  if ( !v3 )
    return 0LL;
  if ( IsTopLevelWindow(a1) || !*(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 286LL) )
  {
    result = SetDeferredDpiStateForWindowAndChildren((__int64 *)a1, 0LL, 1);
    v6 = *(_QWORD *)(a1 + 40);
    v7 = result;
    if ( v3 == *(_WORD *)(v6 + 284) )
    {
      *(_DWORD *)(a1 + 380) &= ~0x40000u;
    }
    else
    {
      UserSessionState = W32GetUserSessionState(v6, v5);
      if ( GetProp(a1, *(unsigned __int16 *)(UserSessionState + 41334), 1u) )
        v1 = (struct tagRECT *)(*(_QWORD *)(a1 + 40) + 88LL);
      xxxNotifyMonitorChanged((struct tagWND *)a1, v1, 0LL, v3);
      return v7;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 380) &= ~0x40u;
    return 1LL;
  }
  return result;
}
