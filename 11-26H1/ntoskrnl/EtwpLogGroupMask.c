/*
 * XREFs of EtwpLogGroupMask @ 0x140A9A1C8
 * Callers:
 *     EtwpUpdateSelectedGroupMasks @ 0x1404C6488 (EtwpUpdateSelectedGroupMasks.c)
 *     EtwpLogKernelTraceRundown @ 0x140A99D58 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpLogGroupMask(__int64 a1, unsigned int a2, __int128 *a3, unsigned __int16 a4)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  _QWORD v7[2]; // [rsp+30h] [rbp-48h] BYREF
  __m256i v8; // [rsp+40h] [rbp-38h] BYREF
  int v9; // [rsp+60h] [rbp-18h]

  v4 = a3[1];
  *(_OWORD *)&v8.m256i_u64[1] = 0LL;
  v9 = 85;
  v5 = *a3;
  v7[0] = &v8;
  v7[1] = 36LL;
  *(_OWORD *)v8.m256i_i8 = v5;
  *(_OWORD *)&v8.m256i_u64[2] = v4;
  return EtwpLogKernelEvent((__int64)v7, a1, a2, 1u, a4, 0x501802u);
}
