/*
 * XREFs of EtwpEventWriteGuidEntry @ 0x140825498
 * Callers:
 *     EtwpTracingProvEnableCallback @ 0x140B4C3A0 (EtwpTracingProvEnableCallback.c)
 * Callees:
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpEventWriteGuidEntry(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  __int64 v5; // [rsp+40h] [rbp-38h]
  __int64 v6; // [rsp+48h] [rbp-30h]
  __int64 v7; // [rsp+50h] [rbp-28h]
  __int64 v8; // [rsp+58h] [rbp-20h]

  v4.Ptr = a3 + 40;
  v5 = *(_QWORD *)(a3 + 640);
  v7 = a3 + 88;
  *(_QWORD *)&v4.Size = 16LL;
  v6 = 4LL;
  v8 = 2LL;
  return EtwWrite(EtwpEventTracingProvRegHandle, a2, 0LL, 3u, &v4);
}
