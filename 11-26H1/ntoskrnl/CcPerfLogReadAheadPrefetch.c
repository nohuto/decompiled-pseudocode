/*
 * XREFs of CcPerfLogReadAheadPrefetch @ 0x1404BC088
 * Callers:
 *     CcPerformReadAhead @ 0x140388BC8 (CcPerformReadAhead.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall CcPerfLogReadAheadPrefetch(__int64 a1, _QWORD *a2, int a3, int a4)
{
  _QWORD v5[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v6[2]; // [rsp+40h] [rbp-38h] BYREF
  int v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+54h] [rbp-24h]
  __int64 v9; // [rsp+58h] [rbp-20h]

  v6[1] = *a2;
  v7 = a3;
  v6[0] = a1;
  v8 = a4;
  v5[0] = v6;
  v9 = 0LL;
  v5[1] = 32LL;
  return EtwTraceKernelEvent((int)v5, 1, 0x80020000, 5643, 5249282);
}
