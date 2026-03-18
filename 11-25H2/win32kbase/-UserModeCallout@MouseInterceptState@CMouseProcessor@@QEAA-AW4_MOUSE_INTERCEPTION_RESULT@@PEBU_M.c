/*
 * XREFs of ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1402224C8
 * Callers:
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x14021F874 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1402211A4 (-InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14003B014 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     IsInputProcessingActivated @ 0x140067500 (IsInputProcessingActivated.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1400BD1F0 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     ??0?$CAutoUnlockPushLockEx@$00@@QEAA@PEAVW32_PUSH_LOCK@@@Z @ 0x14021EF88 (--0-$CAutoUnlockPushLockEx@$00@@QEAA@PEAVW32_PUSH_LOCK@@@Z.c)
 *     ??1?$CAutoUnlockPushLockEx@$00@@QEAA@XZ @ 0x14021F194 (--1-$CAutoUnlockPushLockEx@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall CMouseProcessor::MouseInterceptState::UserModeCallout(struct W32_PUSH_LOCK *a1, _OWORD *a2, int *a3)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  __int64 v15; // xmm1_8
  unsigned int v16; // ebx
  struct W32_PUSH_LOCK *v18; // [rsp+20h] [rbp-99h] BYREF
  __int64 *v19[5]; // [rsp+28h] [rbp-91h] BYREF
  _QWORD v20[20]; // [rsp+50h] [rbp-69h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v19, "MouseInterceptionCallout", 0LL);
  CAutoUnlockPushLockEx<1>::CAutoUnlockPushLockEx<1>(&v18, a1);
  memset(v20, 0, sizeof(v20));
  v6 = a2[1];
  *(_OWORD *)&v20[1] = *a2;
  memset(&v19[1], 0, 24);
  v7 = a2[2];
  *(_OWORD *)&v20[3] = v6;
  v20[0] = 0x100000000LL;
  *(_OWORD *)&v20[5] = v7;
  *(_OWORD *)&v20[7] = *(_OWORD *)&v19[1];
  v20[9] = 0LL;
  if ( IsInputProcessingActivated(v9, v8) && *(_QWORD *)(W32GetUserSessionState(v11, v10) + 16408) )
  {
    UserSessionState = W32GetUserSessionState(v13, v12);
    InputExtensibilityCallout::CallUserModeLockFree(
      *(InputExtensibilityCallout **)(UserSessionState + 16408),
      (struct _CLIENT_DEVICE_NOTIFICATION *)v20);
  }
  v15 = v20[9];
  *(_OWORD *)a3 = *(_OWORD *)&v20[7];
  *((_QWORD *)a3 + 2) = v15;
  v16 = *a3;
  CAutoUnlockPushLockEx<1>::~CAutoUnlockPushLockEx<1>(&v18);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v19);
  return v16;
}
