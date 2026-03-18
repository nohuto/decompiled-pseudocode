/*
 * XREFs of EtwTraceRetpolineExit @ 0x1406C4CF0
 * Callers:
 *     __guard_retpoline_exit_indirect_rax @ 0x140C5E4A0 (__guard_retpoline_exit_indirect_rax.c)
 *     __guard_retpoline_import_r10_log_event @ 0x140C5E600 (__guard_retpoline_import_r10_log_event.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 */

__int64 __fastcall EtwTraceRetpolineExit(__int64 a1)
{
  _QWORD v2[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v3; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1;
  v2[0] = &v3;
  v2[1] = 8LL;
  return EtwTraceKernelEvent((int)v2, 1, 0xA0000002, 3950, 5245442);
}
