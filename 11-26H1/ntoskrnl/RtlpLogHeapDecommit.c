/*
 * XREFs of RtlpLogHeapDecommit @ 0x14052FF6C
 * Callers:
 *     RtlpHpSegPageRangeCommit @ 0x140350650 (RtlpHpSegPageRangeCommit.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogHeapDecommit(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[3]; // [rsp+30h] [rbp-48h] BYREF
  int v5; // [rsp+48h] [rbp-30h]
  _QWORD v6[2]; // [rsp+50h] [rbp-28h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  v4[2] = a3;
  v6[0] = v4;
  v5 = 13;
  v6[1] = 28LL;
  return EtwTraceKernelEvent((int)v6, 1, 0x40000020u, 4148, 273684738);
}
