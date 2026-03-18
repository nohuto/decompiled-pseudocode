/*
 * XREFs of ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x140224C2C
 * Callers:
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x140222FB4 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x140223C58 (-InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x140065A50 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     IsInputProcessingActivated @ 0x1400D10D0 (IsInputProcessingActivated.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall CMouseProcessor::MouseInterceptState::UserModeCallout(
        struct W32_PUSH_LOCK *a1,
        __int128 *a2,
        unsigned int *a3)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  __int64 UserSessionState; // rax
  unsigned int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rdx
  void **v23[4]; // [rsp+20h] [rbp-89h] BYREF
  _QWORD v24[20]; // [rsp+40h] [rbp-69h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v23, "MouseInterceptionCallout", 0LL);
  W32ReleasePushLockExclusiveEx(a1);
  memset(v24, 0, sizeof(v24));
  v6 = *a2;
  memset(&v23[1], 0, 20);
  v7 = a2[1];
  *(_OWORD *)&v24[1] = v6;
  v24[0] = 0x100000000LL;
  v8 = a2[2];
  *(_OWORD *)&v24[3] = v7;
  *(_OWORD *)&v24[5] = v8;
  *(_OWORD *)&v24[7] = *(_OWORD *)&v23[1];
  LODWORD(v24[9]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
  if ( IsInputProcessingActivated(v10, v9, v11) && *(_QWORD *)(W32GetUserSessionState(v13, v12, v14) + 16400) )
  {
    UserSessionState = W32GetUserSessionState(v16, v15, v17);
    InputExtensibilityCallout::CallUserModeLockFree(
      *(InputExtensibilityCallout **)(UserSessionState + 16400),
      (struct _CLIENT_DEVICE_NOTIFICATION *)v24);
  }
  v19 = v24[9];
  *(_OWORD *)a3 = *(_OWORD *)&v24[7];
  a3[4] = v19;
  v20 = *a3;
  W32AcquirePushLockExclusiveEx(a1);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v23,
    v21);
  return v20;
}
