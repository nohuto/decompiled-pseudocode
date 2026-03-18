/*
 * XREFs of NtUserSetManipulationInputTarget @ 0x140195D40
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400D0658 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400D7D60 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400FB7B4 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x140108F24 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14024BC90 (RtlCopyVolatileMemory.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall NtUserSetManipulationInputTarget(int a1, void *a2, unsigned int a3, void *Src, void *Srca, int a6)
{
  __int64 v7; // rsi
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  _QWORD *UserSessionState; // rbx
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // edi
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 CurrentProcessWow64Process; // rax
  int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rcx
  void *v28; // rbx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v30; // rax
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  __int64 v34; // rax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+50h] [rbp-188h] BYREF
  void (__fastcall *v37)(char *, __int64, __int64, __int64); // [rsp+60h] [rbp-178h]
  void *v38; // [rsp+68h] [rbp-170h]
  _OWORD v39[9]; // [rsp+70h] [rbp-168h] BYREF
  _OWORD v40[9]; // [rsp+100h] [rbp-D8h] BYREF

  v7 = a3;
  memset(v40, 0, sizeof(v40));
  UserSessionState = (_QWORD *)W32GetUserSessionState(v11, v10, v12);
  v14 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          UserSessionState,
          0LL,
          0LL,
          _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v14;
  v18 = 0;
  if ( v14 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v15, v17);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( !(unsigned int)IsCurrentProcessDwm(v16) )
  {
    v19 = 5;
LABEL_5:
    UserSetLastError(v19);
    goto LABEL_13;
  }
  if ( !(_DWORD)v7 )
  {
    v19 = 87;
    goto LABEL_5;
  }
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  memset(v39, 0, sizeof(v39));
  RtlCopyFromUser(v39, Srca, 0x90uLL);
  v40[0] = v39[0];
  v40[1] = v39[1];
  v40[2] = v39[2];
  v40[3] = v39[3];
  v40[4] = v39[4];
  v40[5] = v39[5];
  v40[6] = v39[6];
  v40[7] = v39[7];
  v40[8] = v39[8];
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v40, 128LL);
  ProbeForRead(Src, 4 * v7, CurrentProcessWow64Process != 0 ? 1 : 4);
  v28 = (void *)Win32AllocPoolWithQuotaZInitImpl(v25, 4 * v7, 0x6E616D55u);
  v38 = v28;
  if ( v28 )
  {
    if ( v37 != (void (__fastcall *)(char *, __int64, __int64, __int64))-1LL )
    {
      BugCheckParameter4 = PtiCurrent(v27, v26);
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v28, (ULONG_PTR)BugCheckParameter4);
    }
    v30 = PtiCurrent(v27, v26);
    BugCheckParameter2[0] = *((_QWORD *)v30 + 47);
    *((_QWORD *)v30 + 47) = BugCheckParameter2;
    BugCheckParameter2[1] = (ULONG_PTR)v28;
    v37 = GreDeleteFastMutex;
    RtlCopyVolatileMemory(v28, Src, 4 * v7);
    v34 = W32GetUserSessionState(v32, v31, v33);
    v18 = CTouchProcessor::SetManipulationInputTarget(
            *(PERESOURCE **)(v34 + 3256),
            a1,
            v7,
            (unsigned int *)v28,
            a2,
            (struct TELEMETRY_POINTER_FRAME_TIMES *)v40,
            a6);
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  }
  else
  {
    UserSetLastError(8);
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  }
LABEL_13:
  UserSessionSwitchLeaveCritWithNonPaged(v21, v20, v22, v23);
  return v18;
}
