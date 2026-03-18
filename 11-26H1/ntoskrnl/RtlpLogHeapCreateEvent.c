/*
 * XREFs of RtlpLogHeapCreateEvent @ 0x140625E14
 * Callers:
 *     RtlpHpHeapCreate @ 0x140638298 (RtlpHpHeapCreate.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogHeapCreateEvent(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // [rsp+30h] [rbp-48h] BYREF
  int v8; // [rsp+38h] [rbp-40h]
  __int64 v9; // [rsp+3Ch] [rbp-3Ch]
  __int64 v10; // [rsp+44h] [rbp-34h]
  __int64 v11; // [rsp+4Ch] [rbp-2Ch]
  _QWORD v12[2]; // [rsp+58h] [rbp-20h] BYREF

  v4 = *(_QWORD *)(a1 + 576);
  v7 = a1;
  v8 = a2;
  v5 = *(_QWORD *)(a1 + 192);
  v9 = a3;
  v11 = v4 - 16 * v5;
  v10 = a4;
  v12[0] = &v7;
  v12[1] = 36LL;
  return EtwTraceKernelEvent((int)v12, 1, 0x40000020u, 4128, 273684739);
}
