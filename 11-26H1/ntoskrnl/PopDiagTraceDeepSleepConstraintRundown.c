/*
 * XREFs of PopDiagTraceDeepSleepConstraintRundown @ 0x1404EC07C
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140AC29B0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void PopDiagTraceDeepSleepConstraintRundown()
{
  unsigned __int16 v0; // bx
  KIRQL v1; // al
  unsigned int v2; // r8d
  unsigned __int16 v3; // dx
  KIRQL v4; // di
  ULONG UserDataCount; // r9d
  bool v6; // zf
  unsigned int v7; // ecx
  __int64 v8; // rcx
  _DWORD *v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // eax
  int v12; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v13[14]; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v15[22]; // [rsp+98h] [rbp-70h]

  v0 = 0;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_DEEP_SLEEP_CONSTRAINT_RUNDOWN) )
  {
    v1 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
    v2 = PopDeepSleepDisengageReasonMask;
    v3 = __popcnt((unsigned int)PopDeepSleepDisengageReasonMask);
    v4 = v1;
    UserDataCount = v3 + 1;
    LOWORD(v12) = v3;
    v6 = !_BitScanForward(&v7, PopDeepSleepDisengageReasonMask);
    *(_QWORD *)&UserData.Size = 2LL;
    v13[0] = v7;
    UserData.Ptr = (ULONGLONG)&v12;
    if ( !v6 )
    {
      v8 = 0LL;
      v9 = v13;
      do
      {
        v10 = 2 * v8;
        ++v0;
        v2 &= v2 - 1;
        v6 = !_BitScanForward(&v11, v2);
        v15[v10] = v9;
        v15[v10 + 1] = 4LL;
        v8 = v0;
        v9 = &v13[v0];
        *v9 = v11;
      }
      while ( !v6 );
    }
    EtwWriteEx(PopDiagHandle, &POP_ETW_DEEP_SLEEP_CONSTRAINT_RUNDOWN, 0LL, 0, 0LL, 0LL, UserDataCount, &UserData);
    KeReleaseSpinLock(&PopDeepSleepDisengageReasonLock, v4);
  }
}
