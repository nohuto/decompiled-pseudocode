/*
 * XREFs of PpmEventTraceAccountingBucketIntervalsRundown @ 0x140B2CECC
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407DCAD0 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
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

  if ( PpmEtwRegistered
    && EtwEventEnabled(
         (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
         &PPM_ETW_ACCOUNTING_BUCKET_INTERVALS_RUNDOWN) )
  {
    v0 = 26LL;
    v1 = v8;
    v4 = 26;
    v2 = (__int64 *)&unk_140FBE758;
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
    EtwWrite(
      (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
      &PPM_ETW_ACCOUNTING_BUCKET_INTERVALS_RUNDOWN,
      0LL,
      2u,
      &UserData);
  }
}
