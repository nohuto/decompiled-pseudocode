/*
 * XREFs of ReferenceDwmApiPort @ 0x1400486C0
 * Callers:
 *     UserNotifyDisplayChange @ 0x14007F1A0 (UserNotifyDisplayChange.c)
 *     xxxResetDisplayDevice @ 0x14007F460 (xxxResetDisplayDevice.c)
 *     SetConnectCompletedState @ 0x140186370 (SetConnectCompletedState.c)
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

__int64 ReferenceDwmApiPort()
{
  int v0; // edx
  int v1; // ecx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 UserSessionState; // rax
  __int64 v5; // rbx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  if ( (unsigned int)GET_USERCRIT_DISPOSITION() )
  {
    UserSessionState = W32GetUserSessionState(v1, v0, v2);
    v5 = *(_QWORD *)(UserSessionState + 70560);
    if ( v5 )
      ObfReferenceObject(*(PVOID *)(UserSessionState + 70560));
  }
  else
  {
    EnterSharedCrit(0LL, 1LL, v2, v3);
    v10 = W32GetUserSessionState(v8, v7, v9);
    v5 = *(_QWORD *)(v10 + 70560);
    if ( v5 )
      ObfReferenceObject(*(PVOID *)(v10 + 70560));
    UserSessionSwitchLeaveCritWithNonPaged(v12, v11, v13, v14);
  }
  return v5;
}
