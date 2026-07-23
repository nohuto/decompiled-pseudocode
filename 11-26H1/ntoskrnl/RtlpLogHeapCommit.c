/*
 * XREFs of RtlpLogHeapCommit @ 0x14052FFE4
 * Callers:
 *     RtlpHpSegPageRangeCommit @ 0x140350650 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegSegmentAllocate @ 0x140351E7C (RtlpHpSegSegmentAllocate.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogHeapCommit(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v5[3]; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+48h] [rbp-30h]
  _QWORD v7[2]; // [rsp+50h] [rbp-28h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  v5[2] = a3;
  v6 = a4;
  v7[0] = v5;
  v7[1] = 28LL;
  return EtwTraceKernelEvent((int)v7, 1, 0x40000020u, 4147, 273684738);
}
