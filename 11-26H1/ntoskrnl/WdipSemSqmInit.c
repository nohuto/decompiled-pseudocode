/*
 * XREFs of WdipSemSqmInit @ 0x140821CD8
 * Callers:
 *     WdipSemStartTimeoutCheck @ 0x140821190 (WdipSemStartTimeoutCheck.c)
 * Callees:
 *     RtlLengthSid @ 0x1404872D0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     WdipSemWriteEvent @ 0x140ADB3D4 (WdipSemWriteEvent.c)
 */

__int64 WdipSemSqmInit()
{
  __int64 v0; // rcx
  int v2; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v3[3]; // [rsp+38h] [rbp-30h] BYREF
  ULONG v4; // [rsp+50h] [rbp-18h]
  int v5; // [rsp+54h] [rbp-14h]

  v3[0] = &v2;
  v3[2] = *(_QWORD *)&RtlpBootStatHandleLock.WaitRegister.Flags;
  v2 = 1;
  v3[1] = 4LL;
  v4 = RtlLengthSid(*(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
  v5 = 0;
  return WdipSemWriteEvent(v0, WDI_SEM_EVENT_SQM_INIT, 0LL, 2LL, v3);
}
