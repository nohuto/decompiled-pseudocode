/*
 * XREFs of _anonymous_namespace_::HandlePointerCursorSideOp @ 0x14005ECC0
 * Callers:
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x14005EC10 (-OnPointerCursorOperation@@YAXXZ.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x14004D350 (zzzUpdateCursorImage.c)
 *     _anonymous_namespace_::xxxSwitchCursors @ 0x140123C6C (_anonymous_namespace_--xxxSwitchCursors.c)
 *     TransitionCursorSuppressionState @ 0x140123E50 (TransitionCursorSuppressionState.c)
 *     _anonymous_namespace_::xxxRestoreMouseCursors @ 0x140125C04 (_anonymous_namespace_--xxxRestoreMouseCursors.c)
 *     ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x1401D16C0 (-xxxEnsureAllDpiCursors@@YAXXZ.c)
 *     Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline @ 0x140273F20 (Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall anonymous_namespace_::HandlePointerCursorSideOp(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  int v4; // ett
  __int16 v5; // bx
  __int64 v6; // rcx
  _BOOL8 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx

  v2 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 36312);
  _m_prefetchw((const void *)(v2 + 100));
  LODWORD(result) = *(_DWORD *)(v2 + 100);
  do
  {
    v4 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 100), 0, result);
  }
  while ( v4 != (_DWORD)result );
  v5 = result;
  if ( (result & 1) != 0 )
  {
    EnterCrit(1LL, 0LL);
    anonymous_namespace_::xxxRestoreMouseCursors();
    result = UserSessionSwitchLeaveCrit(v6);
  }
  if ( (v5 & 0x700) != 0 )
  {
    EnterCrit(1LL, 0LL);
    if ( (v5 & 0x100) != 0 )
    {
      v7 = 1LL;
      v8 = 1LL;
    }
    else
    {
      v7 = (v5 & 0x400) != 0;
      v8 = 0LL;
    }
    anonymous_namespace_::xxxSwitchCursors(v7, v8);
    v11 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 36312);
    *(_DWORD *)(v11 + 80) = 0;
    result = UserSessionSwitchLeaveCrit(v11);
  }
  if ( (v5 & 2) != 0 )
  {
    EnterCrit(1LL, 0LL);
    UserSessionState = W32GetUserSessionState(v13, v12);
    switch ( *(_DWORD *)(UserSessionState + 36340) )
    {
      case 4:
        v15 = 8LL;
        break;
      case 5:
        v15 = 1LL;
        break;
      case 6:
        v15 = 2LL;
        break;
      case 7:
        v15 = 3LL;
        break;
      default:
LABEL_20:
        if ( (unsigned int)Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline() )
          zzzUpdateCursorImage(v17, v16);
        result = UserSessionSwitchLeaveCrit(v17);
        goto LABEL_23;
    }
    TransitionCursorSuppressionState(v15);
    goto LABEL_20;
  }
LABEL_23:
  if ( (v5 & 4) != 0 )
  {
    EnterCrit(1LL, 0LL);
    xxxEnsureAllDpiCursors();
    return UserSessionSwitchLeaveCrit(v18);
  }
  return result;
}
