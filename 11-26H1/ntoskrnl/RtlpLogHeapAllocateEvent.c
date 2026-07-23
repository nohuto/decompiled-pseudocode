/*
 * XREFs of RtlpLogHeapAllocateEvent @ 0x140530058
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x1403542D4 (RtlpHpMetadataAlloc.c)
 *     RtlpHpAllocateHeapSlow @ 0x1403546B4 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogHeapAllocateEvent(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v5[3]; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+48h] [rbp-30h]
  _QWORD v7[2]; // [rsp+50h] [rbp-28h] BYREF

  v5[0] = a1;
  v5[1] = a3;
  v5[2] = a2;
  v6 = a4;
  v7[0] = v5;
  v7[1] = 28LL;
  return EtwTraceKernelEvent((int)v7, 1, 0x40000020u, 4129, 273684738);
}
