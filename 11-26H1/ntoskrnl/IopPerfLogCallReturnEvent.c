/*
 * XREFs of IopPerfLogCallReturnEvent @ 0x1404DBDC4
 * Callers:
 *     IopPerfCallDriver @ 0x1404DBCDC (IopPerfCallDriver.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall IopPerfLogCallReturnEvent(__int64 a1, int a2)
{
  __int64 v3; // [rsp+30h] [rbp-38h] BYREF
  int v4; // [rsp+38h] [rbp-30h]
  _QWORD v5[2]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a1;
  v4 = a2;
  v5[0] = &v3;
  v5[1] = 12LL;
  return EtwTraceKernelEvent((int)v5, 1, 0x20000010u, 291, 5249026);
}
