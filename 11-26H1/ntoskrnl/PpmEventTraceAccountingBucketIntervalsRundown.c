/*
 * XREFs of PpmEventTraceAccountingBucketIntervalsRundown @ 0x140B2EF4C
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void PpmEventTraceAccountingBucketIntervalsRundown()
{
  __int64 v0; // r8
  _QWORD *v1; // rcx
  __int64 *v2; // rdx
  __int64 v3; // rax
  int v4; // [rsp+30h] [rbp-118h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-110h] BYREF
  _BYTE *v6; // [rsp+48h] [rbp-100h]
  __int64 v7; // [rsp+50h] [rbp-F8h]
  _BYTE v8[208]; // [rsp+60h] [rbp-E8h] BYREF

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_ACCOUNTING_BUCKET_INTERVALS_RUNDOWN) )
  {
    v0 = 26LL;
    v1 = v8;
    v4 = 26;
    v2 = (__int64 *)&unk_140FBF758;
    do
    {
      v3 = *v2;
      v2 += 3;
      *v1++ = v3;
      --v0;
    }
    while ( v0 );
    UserData.Ptr = (ULONGLONG)&v4;
    *(_QWORD *)&UserData.Size = 4LL;
    v6 = v8;
    v7 = 208LL;
    EtwWrite(PpmEtwHandle, &PPM_ETW_ACCOUNTING_BUCKET_INTERVALS_RUNDOWN, 0LL, 2u, &UserData);
  }
}
