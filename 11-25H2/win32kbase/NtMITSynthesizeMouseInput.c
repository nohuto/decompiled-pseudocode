/*
 * XREFs of NtMITSynthesizeMouseInput @ 0x1401BB5D0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140039910 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14003B014 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x14010F9C8 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x140220388 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 */

__int64 __fastcall NtMITSynthesizeMouseInput(void *Src, unsigned int a2, void *a3)
{
  unsigned int v6; // edi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *UserSessionState; // rsi
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  int **v15; // r14
  __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 MouseProcessor; // rax
  __int64 v22; // [rsp+28h] [rbp-A0h] BYREF
  __int64 *v23; // [rsp+38h] [rbp-90h] BYREF
  __int128 v24; // [rsp+40h] [rbp-88h] BYREF
  __int128 v25; // [rsp+50h] [rbp-78h]
  __int64 v26; // [rsp+60h] [rbp-68h]
  __int128 v27; // [rsp+68h] [rbp-60h] BYREF
  __int128 v28; // [rsp+78h] [rbp-50h]
  __int64 v29; // [rsp+88h] [rbp-40h]
  __int64 v30; // [rsp+E8h] [rbp+20h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v23, "MITSynthesizeMouseInput", 0LL);
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v6 = 0;
  v7 = 0;
  v22 = 0LL;
  UserSessionState = (_QWORD *)W32GetUserSessionState(v9, v8);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v11 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
            UserSessionState,
            0,
            0,
            (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v11 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 1);
  v12 = v11;
  UserSessionState[3] = v11;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v12 )
      goto LABEL_14;
    *(_BYTE *)(v12 + 1708) = 1;
  }
  if ( v12 )
  {
    while ( 1 )
    {
      v15 = (int **)UserSessionState[2464];
      if ( !v15 )
        break;
      UserSessionState[2464] = v15[2];
      v15[2] = 0LL;
      if ( !(*v15)[2] )
      {
        LODWORD(v30) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
      }
      HMUnlockObject(*v15, v13);
    }
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_14:
  if ( IsInputThread(v14, v13) )
  {
    v24 = 0LL;
    v25 = 0LL;
    v26 = 0LL;
    RtlCopyFromUser(&v24, Src, 0x28uLL);
    v27 = v24;
    v28 = v25;
    v29 = v26;
    if ( a3 )
    {
      v30 = 0LL;
      RtlCopyFromUser(&v30, a3, 8uLL);
      v7 = v30;
      v22 = v30;
    }
    InputTraceLogging::Mouse::InjectInput();
    v17 = (unsigned __int64)&v22 & -(__int64)(v7 != 0);
    MouseProcessor = anonymous_namespace_::GetMouseProcessor(v19, v18);
    if ( MouseProcessor )
      v6 = CMouseProcessor::Extensibility_SynthesizeMouseInput(MouseProcessor, &v27, a2, v17);
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v16);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v23);
  return v6;
}
