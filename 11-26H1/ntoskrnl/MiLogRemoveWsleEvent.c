/*
 * XREFs of MiLogRemoveWsleEvent @ 0x140507AB4
 * Callers:
 *     MiRemoveWsleList @ 0x1402EA570 (MiRemoveWsleList.c)
 *     MiDecommitAddToList @ 0x140323520 (MiDecommitAddToList.c)
 *     MiRemoveWsle @ 0x140325384 (MiRemoveWsle.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogRemoveWsleEvent(__int64 a1, int a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v5[2]; // [rsp+38h] [rbp-20h] BYREF

  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( a2 )
    v2 |= 2uLL;
  v4 = v2;
  v5[0] = &v4;
  v5[1] = 8LL;
  return EtwTraceKernelEvent((int)v5, 1, 0x28000000u, 643, 290462466);
}
