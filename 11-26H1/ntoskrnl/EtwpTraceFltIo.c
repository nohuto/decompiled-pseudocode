/*
 * XREFs of EtwpTraceFltIo @ 0x1406C96A0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceFltIo(__int64 a1, int a2, unsigned int a3, __int16 a4)
{
  __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]

  v5 = a1;
  v6 = a2;
  v7 = 0;
  return EtwTraceKernelEvent((int)&v5, 1, a3, a4, 6297859);
}
