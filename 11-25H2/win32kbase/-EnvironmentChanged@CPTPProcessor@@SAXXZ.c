/*
 * XREFs of ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x14012F640
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x14012F2E0 (UpdateTPCurrentActiveState.c)
 *     RIMSetExtendedPointerDeviceProperty @ 0x1401EC504 (RIMSetExtendedPointerDeviceProperty.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ??9?$SGHIDgpHidInput@PEAVCHidInput@@@@QEBA_NAEBQEAVCHidInput@@@Z @ 0x14014E678 (--9-$SGHIDgpHidInput@PEAVCHidInput@@@@QEBA_NAEBQEAVCHidInput@@@Z.c)
 *     CBaseInput::ForEachDevice__lambda_af0f51c40a51d89eadb224966593ace4___ @ 0x140210F78 (CBaseInput--ForEachDevice__lambda_af0f51c40a51d89eadb224966593ace4___.c)
 */

void __fastcall CPTPProcessor::EnvironmentChanged(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct W32_PUSH_LOCK *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  if ( (unsigned __int8)SGHIDgpHidInput<CHidInput *>::operator!=(a1, &v9) )
  {
    if ( *(_BYTE *)(W32GetUserSessionState(v2, v1) + 3080) )
    {
      v5 = *(struct W32_PUSH_LOCK **)(*(_QWORD *)(W32GetUserSessionState(v4, v3) + 16840) + 1232LL);
      W32AcquirePushLockSharedEx(v5, 0);
      UserSessionState = W32GetUserSessionState(v7, v6);
      CBaseInput::ForEachDevice__lambda_af0f51c40a51d89eadb224966593ace4___(*(_QWORD *)(UserSessionState + 16840));
      ExReleasePushLockSharedEx(v5, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
