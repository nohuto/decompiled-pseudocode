/*
 * XREFs of SshpTracingWriteCollectionStateChange @ 0x140B02534
 * Callers:
 *     SshpSetCollectionActive @ 0x14049C548 (SshpSetCollectionActive.c)
 * Callees:
 *     SSHSupportEtwEventEnabled @ 0x1404A885C (SSHSupportEtwEventEnabled.c)
 *     SSHSupportEtwWrite @ 0x1404D54FC (SSHSupportEtwWrite.c)
 *     SSHSupportQueryInterruptTime @ 0x1404E2358 (SSHSupportQueryInterruptTime.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall SshpTracingWriteCollectionStateChange(ULONGLONG a1, char a2)
{
  BOOLEAN result; // al
  __int64 v5; // rcx
  __int64 v6; // r8
  BOOL v7; // [rsp+30h] [rbp-50h] BYREF
  __int64 InterruptTime; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-40h] BYREF
  __int64 *p_InterruptTime; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  BOOL *v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]

  result = SshpTraceHandleRegistered;
  if ( SshpTraceHandleRegistered )
  {
    result = SSHSupportEtwEventEnabled(a1, (const EVENT_DESCRIPTOR *)SLEEPSTUDY_EVT_COLLECTION_STATE_CHANGE);
    if ( result )
    {
      v9.Ptr = a1;
      *(_QWORD *)&v9.Size = 16LL;
      InterruptTime = SSHSupportQueryInterruptTime();
      v11 = 8LL;
      p_InterruptTime = &InterruptTime;
      v13 = 4LL;
      v7 = a2 != 0;
      v12 = &v7;
      return SSHSupportEtwWrite(v5, (const EVENT_DESCRIPTOR *)SLEEPSTUDY_EVT_COLLECTION_STATE_CHANGE, v6, 3u, &v9);
    }
  }
  return result;
}
