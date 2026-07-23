/*
 * XREFs of RtlpLogHeapFreeEvent @ 0x140628EF0
 * Callers:
 *     RtlpHpMetadataFree @ 0x140354540 (RtlpHpMetadataFree.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogHeapFreeEvent(__int64 a1, __int64 a2, int a3)
{
  _QWORD v4[2]; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+40h] [rbp-28h]
  _QWORD v6[2]; // [rsp+48h] [rbp-20h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  v5 = a3;
  v6[0] = v4;
  v6[1] = 20LL;
  return EtwTraceKernelEvent((int)v6, 1, 0x40000020u, 4132, 273684738);
}
