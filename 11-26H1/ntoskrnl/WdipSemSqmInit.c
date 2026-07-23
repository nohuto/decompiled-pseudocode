/*
 * XREFs of WdipSemSqmInit @ 0x140827EE8
 * Callers:
 *     WdipSemStartTimeoutCheck @ 0x1408273A0 (WdipSemStartTimeoutCheck.c)
 * Callees:
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     WdipSemWriteEvent @ 0x140AD7E84 (WdipSemWriteEvent.c)
 */

__int64 WdipSemSqmInit()
{
  __int64 v0; // rcx
  int v2; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v3[3]; // [rsp+38h] [rbp-30h] BYREF
  ULONG v4; // [rsp+50h] [rbp-18h]
  int v5; // [rsp+54h] [rbp-14h]

  v3[0] = &v2;
  v3[2] = *($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&RtlpBootStatHandleLock.116 + 4);
  v2 = 1;
  v3[1] = 4LL;
  v4 = RtlLengthSid(*(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4));
  v5 = 0;
  return WdipSemWriteEvent(v0, WDI_SEM_EVENT_SQM_INIT, 0LL, 2LL, v3);
}
