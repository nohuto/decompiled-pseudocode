/*
 * XREFs of ReferenceDwmApiPort @ 0x14003F9B0
 * Callers:
 *     xxxResetDisplayDevice @ 0x1400AB7F0 (xxxResetDisplayDevice.c)
 *     UserNotifyDisplayChange @ 0x1400AC800 (UserNotifyDisplayChange.c)
 *     SetConnectCompletedState @ 0x140150C60 (SetConnectCompletedState.c)
 *     xxxUserSetDisplayConfig @ 0x1401683C0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x14003F600 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 ReferenceDwmApiPort()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  __int64 v3; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  char v8; // [rsp+30h] [rbp+8h] BYREF

  if ( IS_USERCRIT_OWNED_AT_ALL() )
  {
    UserSessionState = W32GetUserSessionState(v1, v0);
    v3 = *(_QWORD *)(UserSessionState + 70568);
    if ( v3 )
      ObfReferenceObject(*(PVOID *)(UserSessionState + 70568));
  }
  else
  {
    EnterLeaveCritShared::EnterLeaveCritShared(&v8, 1LL);
    v7 = W32GetUserSessionState(v6, v5);
    v3 = *(_QWORD *)(v7 + 70568);
    if ( v3 )
      ObfReferenceObject(*(PVOID *)(v7 + 70568));
    UserSessionSwitchLeaveCritWithNonPaged(0LL);
  }
  return v3;
}
