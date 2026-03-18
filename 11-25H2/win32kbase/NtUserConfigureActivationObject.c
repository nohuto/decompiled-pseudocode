/*
 * XREFs of NtUserConfigureActivationObject @ 0x14013ABD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CD3B0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?ConfigureActivationObject@ForegroundManagement@@YAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@W4ACTIVATION_OBJECT_STATE@@3@Z @ 0x1400E397C (-ConfigureActivationObject@ForegroundManagement@@YAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REA.c)
 *     ValidateHbwnd @ 0x140121970 (ValidateHbwnd.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CheckProcessForeground@ForegroundManagement@@YA_NK@Z @ 0x1401A9C40 (-CheckProcessForeground@ForegroundManagement@@YA_NK@Z.c)
 *     ?QueryActivationObjectData@CActivationObjectManager@@QEAAJAEBU_LUID@@PEAU_tagActivationObjectData@@@Z @ 0x1401A9E08 (-QueryActivationObjectData@CActivationObjectManager@@QEAAJAEBU_LUID@@PEAU_tagActivationObjectDat.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 */

__int64 __fastcall NtUserConfigureActivationObject(void *Src, __int64 a2, unsigned int a3, int a4, int a5)
{
  unsigned int v7; // r15d
  _QWORD *UserSessionState; // rsi
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // zf
  ULONG v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned int CurrentProcessId; // eax
  unsigned int v23; // edx
  NTSTATUS v24; // eax
  struct _LUID v26; // [rsp+40h] [rbp-58h] BYREF
  struct _LUID v27; // [rsp+48h] [rbp-50h] BYREF
  __int128 v28; // [rsp+58h] [rbp-40h] BYREF
  __int128 v29; // [rsp+68h] [rbp-30h]

  v7 = a2;
  UserSessionState = (_QWORD *)W32GetUserSessionState(Src, a2);
  v11 = 0;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v12 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
            UserSessionState,
            0LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  }
  else
  {
    LOBYTE(v10) = 1;
    v12 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, v10);
  }
  v13 = v12;
  UserSessionState[3] = v12;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v13 )
      goto LABEL_9;
    *(_BYTE *)(v13 + 1708) = 1;
  }
  if ( v13 )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_9:
  v27 = 0LL;
  RtlCopyFromUser(&v27, Src, 8uLL);
  v26 = v27;
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      v16 = (unsigned int)IsCurrentProcessDwm() == 0;
      goto LABEL_12;
    }
LABEL_21:
    v17 = 87;
    goto LABEL_14;
  }
  if ( a3 != 1 )
  {
    if ( !a3 )
      goto LABEL_23;
    goto LABEL_21;
  }
  v28 = 0LL;
  v29 = 0LL;
  v19 = W32GetUserSessionState(v15, v14);
  if ( (int)CActivationObjectManager::QueryActivationObjectData(
              *(CActivationObjectManager **)(v19 + 18864),
              &v26,
              (struct _tagActivationObjectData *)&v28) < 0 )
    goto LABEL_21;
  if ( HIDWORD(v29) != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    goto LABEL_13;
  v21 = ValidateHbwnd(*((__int64 *)&v28 + 1), v20);
  if ( !v21 )
    goto LABEL_21;
  if ( *(_QWORD *)(v21 + 136) )
    goto LABEL_23;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  v16 = !ForegroundManagement::CheckProcessForeground((ForegroundManagement *)(CurrentProcessId & 0xFFFFFFFC), v23);
LABEL_12:
  if ( v16 )
  {
LABEL_13:
    v17 = 5;
    goto LABEL_14;
  }
LABEL_23:
  v24 = ForegroundManagement::ConfigureActivationObject((__int64)&v26, v7, a3, a4, a5);
  if ( v24 >= 0 )
  {
    v11 = 1;
    goto LABEL_26;
  }
  v17 = RtlNtStatusToDosError(v24);
LABEL_14:
  UserSetLastError(v17);
LABEL_26:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v18);
  return v11;
}
