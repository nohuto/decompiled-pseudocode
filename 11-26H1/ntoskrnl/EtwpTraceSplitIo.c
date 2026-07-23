/*
 * XREFs of EtwpTraceSplitIo @ 0x1406C9B90
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceSplitIo(__int64 a1, __int64 a2, __int16 a3)
{
  _QWORD v4[4]; // [rsp+30h] [rbp-38h] BYREF

  v4[0] = a1;
  v4[2] = a2;
  v4[1] = 8LL;
  v4[3] = 8LL;
  return EtwTraceKernelEvent((int)v4, 2, 0x200000u, a3, 5249026);
}
