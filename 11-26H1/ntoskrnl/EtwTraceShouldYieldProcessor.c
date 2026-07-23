/*
 * XREFs of EtwTraceShouldYieldProcessor @ 0x140316318
 * Callers:
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiPeriodicGoodCitizen @ 0x140315E70 (MiPeriodicGoodCitizen.c)
 *     MiWalkPageTablesEvaluatePte @ 0x140329B60 (MiWalkPageTablesEvaluatePte.c)
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 *     MiDeleteVaDirect @ 0x140363C90 (MiDeleteVaDirect.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceShouldYieldProcessor(int a1, int a2, int a3)
{
  _DWORD v4[4]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v5[2]; // [rsp+40h] [rbp-28h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  v4[2] = a3;
  v5[0] = v4;
  v5[1] = 12LL;
  return EtwTraceKernelEvent((int)v5, 1, 0x24000000u, 3949, 5245442);
}
