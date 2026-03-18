/*
 * XREFs of NtUserSetManipulationInputTarget @ 0x140174C80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400A038C (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CD3B0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400E2330 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x14018900C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall NtUserSetManipulationInputTarget(
        unsigned int a1,
        void *a2,
        unsigned int a3,
        char *a4,
        void *Src,
        int a6)
{
  __int64 v7; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *UserSessionState; // rdi
  __int64 v12; // rdx
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // rdx
  char *v19; // rcx
  void *v20; // rdi
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+50h] [rbp-1A8h] BYREF
  void (__fastcall *v28)(char *); // [rsp+60h] [rbp-198h]
  void *v29; // [rsp+70h] [rbp-188h]
  void *v30; // [rsp+78h] [rbp-180h]
  _OWORD v31[9]; // [rsp+88h] [rbp-170h] BYREF
  _OWORD v32[9]; // [rsp+120h] [rbp-D8h] BYREF

  v7 = a3;
  v29 = a2;
  memset(v32, 0, sizeof(v32));
  UserSessionState = (_QWORD *)W32GetUserSessionState(v10, v9);
  v13 = 0;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v14 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
            UserSessionState,
            0LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  }
  else
  {
    LOBYTE(v12) = 1;
    v14 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, v12);
  }
  v15 = v14;
  UserSessionState[3] = v14;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v15 )
      goto LABEL_9;
    *(_BYTE *)(v15 + 1708) = 1;
  }
  if ( v15 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2461), v16);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_9:
  if ( !(unsigned int)IsCurrentProcessDwm() )
  {
    v17 = 5;
LABEL_11:
    UserSetLastError(v17);
    goto LABEL_23;
  }
  if ( !(_DWORD)v7 )
  {
    v17 = 87;
    goto LABEL_11;
  }
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  memset(v31, 0, sizeof(v31));
  RtlCopyFromUser(v31, Src, 0x90uLL);
  v19 = (char *)v32;
  v32[0] = v31[0];
  v32[1] = v31[1];
  v32[2] = v31[2];
  v32[3] = v31[3];
  v32[4] = v31[4];
  v32[5] = v31[5];
  v32[6] = v31[6];
  v32[7] = v31[7];
  v32[8] = v31[8];
  if ( 4 * v7 )
  {
    if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
      ExRaiseDatatypeMisalignment();
    v19 = &a4[4 * v7];
  }
  v20 = (void *)Win32AllocPoolWithQuotaZInitImpl((__int64)v19, 4 * v7, 0x6E616D55u);
  v30 = v20;
  if ( v20 )
  {
    if ( v28 != (void (__fastcall *)(char *))-1LL )
    {
      BugCheckParameter4 = PtiCurrent();
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v20, (ULONG_PTR)BugCheckParameter4);
    }
    v22 = PtiCurrent();
    BugCheckParameter2[0] = *((_QWORD *)v22 + 48);
    *((_QWORD *)v22 + 48) = BugCheckParameter2;
    BugCheckParameter2[1] = (ULONG_PTR)v20;
    v28 = GreDeleteFastMutex;
    RtlCopyVolatileMemory(v20, a4, 4 * v7);
    v25 = W32GetUserSessionState(v24, v23);
    v13 = CTouchProcessor::SetManipulationInputTarget(
            *(CTouchProcessor **)(v25 + 3256),
            a1,
            v7,
            (unsigned int *)v20,
            v29,
            (struct TELEMETRY_POINTER_FRAME_TIMES *)v32,
            a6);
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  }
  else
  {
    UserSetLastError(8);
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  }
LABEL_23:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v18);
  return v13;
}
