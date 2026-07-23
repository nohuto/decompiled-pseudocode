/*
 * XREFs of RtlpHpStackDbLogStackDbSnapshot @ 0x18014F590
 * Callers:
 *     RtlpHpStackTraceEventWriter @ 0x18014F980 (RtlpHpStackTraceEventWriter.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x18005AAB0 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpStackDbLogStackDbSnapshot(int a1, int a2, int a3, __int64 a4)
{
  _QWORD v5[7]; // [rsp+58h] [rbp+7h] BYREF
  int v6; // [rsp+90h] [rbp+3Fh]
  int v7; // [rsp+94h] [rbp+43h]
  int v8; // [rsp+B8h] [rbp+67h] BYREF
  int v9; // [rsp+C0h] [rbp+6Fh] BYREF
  int v10; // [rsp+C8h] [rbp+77h] BYREF

  v10 = a3;
  v9 = a2;
  v8 = a1;
  v5[6] = a4;
  v6 = a3;
  v5[1] = 4LL;
  v5[0] = &v8;
  v5[3] = 4LL;
  v5[2] = &v9;
  v5[5] = 4LL;
  v5[4] = &v10;
  v7 = 0;
  return EtwpEventWriteFull(RtlpHpStackTraceProviderHandle, &HeapSnapshotSnap, 0LL, 0, 0, 0LL, 0LL, 4, (__int64)v5);
}
