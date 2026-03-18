/*
 * XREFs of NtMITConfigureVirtualTouchpad @ 0x1401BA4F0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     ?GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z @ 0x1401184C4 (-GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x14021CE04 (-ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall NtMITConfigureVirtualTouchpad(void *Src, void *a2)
{
  void *v3; // r14
  _QWORD *UserSessionState; // rdi
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  int **v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  ULONG v12; // ecx
  __int64 v13; // rdx
  _OWORD *v14; // rcx
  VirtualTouchpadProcessor *Instance; // rax
  NTSTATUS v16; // eax
  int v18; // [rsp+20h] [rbp-188h] BYREF
  _DWORD Srca[11]; // [rsp+24h] [rbp-184h] BYREF
  _OWORD v20[10]; // [rsp+50h] [rbp-158h] BYREF
  _OWORD v21[10]; // [rsp+F0h] [rbp-B8h] BYREF

  v3 = Src;
  UserSessionState = (_QWORD *)W32GetUserSessionState(Src, a2);
  v5 = 0;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           0,
           0,
           (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 1);
  v7 = v6;
  UserSessionState[3] = v6;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v7 )
      goto LABEL_14;
    *(_BYTE *)(v7 + 1708) = 1;
  }
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = (int **)UserSessionState[2464];
      if ( !v9 )
        break;
      UserSessionState[2464] = v9[2];
      v9[2] = 0LL;
      if ( !(*v9)[2] )
      {
        v18 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
      }
      HMUnlockObject(*v9, v8);
    }
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_14:
  Srca[0] = 0;
  memset(v21, 0, 0x98uLL);
  if ( !IsInputThread(v11, v10) )
  {
    v12 = 5;
LABEL_16:
    UserSetLastError(v12);
    goto LABEL_24;
  }
  v18 = 0;
  RtlCopyFromUser(&v18, v3, 4uLL);
  Srca[0] = v18;
  memset(v20, 0, 0x98uLL);
  RtlCopyFromUser(v20, a2, 0x98uLL);
  v14 = v21;
  v21[0] = v20[0];
  v21[1] = v20[1];
  v21[2] = v20[2];
  v21[3] = v20[3];
  v21[4] = v20[4];
  v21[5] = v20[5];
  v21[6] = v20[6];
  v21[7] = v20[7];
  v21[8] = v20[8];
  *(_QWORD *)&v21[9] = *(_QWORD *)&v20[9];
  LOBYTE(v14) = 1;
  Instance = VirtualTouchpadProcessor::GetInstance((__int64)v14, 128LL);
  if ( !Instance )
  {
    v16 = -1073741801;
LABEL_20:
    v12 = RtlNtStatusToDosError(v16);
    goto LABEL_16;
  }
  v16 = VirtualTouchpadProcessor::ConfigureVirtualTouchpad(
          Instance,
          (struct VPTP_ID *)Srca,
          (const struct tagVIRTUAL_PTP_CONFIG *)v21);
  if ( v16 < 0 )
    goto LABEL_20;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v3, Srca, 4uLL);
  v5 = 1;
LABEL_24:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v13);
  return v5;
}
