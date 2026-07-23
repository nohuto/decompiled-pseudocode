/*
 * XREFs of RtlpHpStackDbLogStackDbEnd @ 0x18014F4F8
 * Callers:
 *     RtlpHpStackTraceEventWriter @ 0x18014F980 (RtlpHpStackTraceEventWriter.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x18005AAB0 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpStackDbLogStackDbEnd(int a1, int a2)
{
  _QWORD v3[4]; // [rsp+50h] [rbp-38h] BYREF
  int v4; // [rsp+90h] [rbp+8h] BYREF
  int v5; // [rsp+98h] [rbp+10h] BYREF

  v5 = a2;
  v4 = a1;
  v3[0] = &v4;
  v3[1] = 4LL;
  v3[2] = &v5;
  v3[3] = 4LL;
  return EtwpEventWriteFull(RtlpHpStackTraceProviderHandle, &HeapSnapshotEnd, 0LL, 0, 0, 0LL, 0LL, 2, (__int64)v3);
}
