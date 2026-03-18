/*
 * XREFs of NtUserSetSysColors @ 0x140174FA0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CreateProfileUserName@@YAPEAU_UNICODE_STRING@@PEAU?$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1?Win32FreePool@@YAXPEAX@Z@@@Z @ 0x1400A9270 (-CreateProfileUserName@@YAPEAU_UNICODE_STRING@@PEAU-$Win32RawOptionalLockedItemAlways@UtagPROFIL.c)
 *     xxxSetSysColors @ 0x1400AAAB0 (xxxSetSysColors.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ??1?$Win32RawOptionalLockedItemAlways@X$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1400D00F8 (--1-$Win32RawOptionalLockedItemAlways@X$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400E2330 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ??0?$Win32RawLockedItemNoCleanup@K$0A@@@QEAA@PEAKP6AXPEAX@Z@Z @ 0x140155970 (--0-$Win32RawLockedItemNoCleanup@K$0A@@@QEAA@PEAKP6AXPEAX@Z@Z.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ??1?$Win32RawLockedItemNoCleanup@K$0A@@@QEAA@XZ @ 0x1401A0E34 (--1-$Win32RawLockedItemNoCleanup@K$0A@@@QEAA@XZ.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A53B4 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A8AA8 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401AC114 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserSetSysColors(__int64 a1, const void *a2, const void *a3, unsigned int a4)
{
  char *v6; // rdi
  char *v7; // r14
  _QWORD *UserSessionState; // r15
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  struct tagTHREADINFO *v13; // rsi
  bool v14; // r9
  bool v15; // r9
  __int64 v16; // rcx
  int v17; // esi
  __int64 v18; // rdx
  int v20; // eax
  __int64 v21; // rsi
  char *v22; // rax
  __int64 v23; // rcx
  char *v24; // rax
  __int64 v25; // rcx
  _DWORD v26[8]; // [rsp+48h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter2[3]; // [rsp+68h] [rbp-70h] BYREF
  _QWORD v28[3]; // [rsp+80h] [rbp-58h] BYREF
  _QWORD v29[3]; // [rsp+98h] [rbp-40h] BYREF
  unsigned int v30; // [rsp+E0h] [rbp+8h]

  v30 = a1;
  v6 = 0LL;
  v7 = 0LL;
  v26[0] = 0x2000;
  v26[1] = -1;
  v26[2] = 0;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
            UserSessionState,
            0LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  }
  else
  {
    LOBYTE(v9) = 1;
    v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, v9);
  }
  v11 = v10;
  UserSessionState[3] = v10;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v11 )
      goto LABEL_9;
    *(_BYTE *)(v11 + 1708) = 1;
  }
  if ( v11 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2461), v12);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_9:
  v13 = PtiCurrent();
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( tagPROCESSINFO::HasUILimit(*((tagPROCESSINFO **)v13 + 58), 8u)
      || !UIPrivilegeIsolation::CheckAccessEx(
            (UIPrivilegeIsolation *)(*((_QWORD *)v13 + 58) + 864LL),
            (const struct tagUIPI_INFO *)v26,
            0LL,
            v15) )
    {
LABEL_12:
      v17 = 0;
      UserSetLastError(5);
      goto LABEL_13;
    }
  }
  else
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v13 + 132, 0, 0) & 0x20000000) != 0 )
      v20 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 58) + 752LL) + 24LL) & 8;
    else
      v20 = 0;
    if ( v20
      || !UIPrivilegeIsolation::CheckAccessEx(
            (UIPrivilegeIsolation *)(*((_QWORD *)v13 + 58) + 864LL),
            (const struct tagUIPI_INFO *)v26,
            0LL,
            v14) )
    {
      goto LABEL_12;
    }
    v6 = 0LL;
    v7 = 0LL;
  }
  if ( v30 )
  {
    v21 = 4LL * v30;
    if ( v21 )
    {
      if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = (__int64)a2 + v21;
      if ( v21 )
      {
        if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = (__int64)a3 + v21;
      }
    }
    v22 = (char *)Win32AllocPoolWithQuotaZInitImpl(v16, 4LL * v30, 0x72637355u);
    v6 = v22;
    if ( !v22 )
      ExRaiseStatus(-1073741801);
    RtlCopyVolatileMemory(v22, a2, 4LL * v30);
    v24 = (char *)Win32AllocPoolWithQuotaZInitImpl(v23, 4LL * v30, 0x76637355u);
    v7 = v24;
    if ( !v24 )
      ExRaiseStatus(-1073741801);
    RtlCopyVolatileMemory(v24, a3, 4LL * v30);
  }
  Win32RawLockedItemNoCleanup<unsigned long,0>::Win32RawLockedItemNoCleanup<unsigned long,0>(v29, (__int64)v6);
  Win32RawLockedItemNoCleanup<unsigned long,0>::Win32RawLockedItemNoCleanup<unsigned long,0>(v28, (__int64)v7);
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  CreateProfileUserName(BugCheckParameter2);
  v17 = xxxSetSysColors(v25, v30, v6, v7, a4);
  Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>((__int64)BugCheckParameter2);
  Win32RawLockedItemNoCleanup<unsigned long,0>::~Win32RawLockedItemNoCleanup<unsigned long,0>(v28);
  Win32RawLockedItemNoCleanup<unsigned long,0>::~Win32RawLockedItemNoCleanup<unsigned long,0>(v29);
  if ( v6 )
    GreDeleteFastMutex(v6);
  if ( v7 )
    GreDeleteFastMutex(v7);
LABEL_13:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v18);
  return v17;
}
