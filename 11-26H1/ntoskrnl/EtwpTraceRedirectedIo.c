/*
 * XREFs of EtwpTraceRedirectedIo @ 0x1406C9AF0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetThreadServerSilo @ 0x140216AD0 (PsGetThreadServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x140216D50 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall EtwpTraceRedirectedIo(__int64 a1, __int64 a2)
{
  __int64 ThreadServerSilo; // rax
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+38h] [rbp-30h]
  _QWORD v6[2]; // [rsp+40h] [rbp-28h] BYREF

  ThreadServerSilo = *(_QWORD *)(a1 + 152);
  v4 = a1;
  if ( ThreadServerSilo )
    ThreadServerSilo = PsGetThreadServerSilo(ThreadServerSilo);
  if ( a2 )
    v5 = *(_QWORD *)(a2 + 24);
  else
    v5 = 0LL;
  v6[0] = &v4;
  v6[1] = 16LL;
  EtwTraceSiloKernelEvent(ThreadServerSilo, (int)v6, 1, 0x300u, 272, 291510530);
}
