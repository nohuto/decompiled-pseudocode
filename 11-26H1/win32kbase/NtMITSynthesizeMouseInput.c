/*
 * XREFs of NtMITSynthesizeMouseInput @ 0x1401E1680
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x14014BD1C (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1402235C0 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 */

__int64 __fastcall NtMITSynthesizeMouseInput(void *Src, unsigned int a2, void *a3)
{
  unsigned int v6; // esi
  int v7; // ebx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  _QWORD *UserSessionState; // rdi
  __int64 v12; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rbx
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  __int64 MouseProcessor; // rax
  __int64 v25; // rdx
  __int64 v27; // [rsp+30h] [rbp-78h] BYREF
  void **v28; // [rsp+38h] [rbp-70h] BYREF
  __int128 v29; // [rsp+40h] [rbp-68h] BYREF
  __int128 v30; // [rsp+50h] [rbp-58h]
  __int64 v31; // [rsp+60h] [rbp-48h]
  _OWORD v32[2]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v33; // [rsp+88h] [rbp-20h]
  __int64 v34; // [rsp+C8h] [rbp+20h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v28, "MITSynthesizeMouseInput", 0LL);
  v6 = 0;
  v7 = 0;
  v27 = 0LL;
  UserSessionState = (_QWORD *)W32GetUserSessionState(v9, v8, v10);
  v12 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          UserSessionState,
          0LL,
          0,
          (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v12;
  if ( v12 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v13, v15);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( IsInputThread(v14, v13, v15) )
  {
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    RtlCopyFromUser(&v29, Src, 0x28uLL);
    v32[0] = v29;
    v32[1] = v30;
    v33 = v31;
    if ( a3 )
    {
      v34 = 0LL;
      RtlCopyFromUser(&v34, a3, 8uLL);
      v7 = v34;
      v27 = v34;
    }
    InputTraceLogging::Mouse::InjectInput();
    v20 = (unsigned __int64)&v27 & -(__int64)(v7 != 0);
    MouseProcessor = anonymous_namespace_::GetMouseProcessor(v22, v21, v23);
    if ( MouseProcessor )
      v6 = CMouseProcessor::Extensibility_SynthesizeMouseInput(MouseProcessor, v32, a2, v20);
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCritWithNonPaged(v17, v16, v18, v19);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v28,
    v25);
  return v6;
}
