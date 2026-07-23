/*
 * XREFs of EtwTraceThreadSchedulingGroupRundown @ 0x1406C8D3C
 * Callers:
 *     KiTraceSchedulingGroupRundown @ 0x1405FBCC0 (KiTraceSchedulingGroupRundown.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

_QWORD *__fastcall EtwTraceThreadSchedulingGroupRundown(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  __int64 v5; // rdx
  _QWORD *result; // rax
  _DWORD v7[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h]
  _QWORD v9[2]; // [rsp+40h] [rbp-28h] BYREF

  v4 = a2;
  v5 = a1;
  if ( a1 == EtwpHostSiloState
    || (result = PsGetServerSiloGlobals(*(_QWORD *)(*(_QWORD *)(a3 + 544) + 1520LL)), result[104] == v5) )
  {
    v7[0] = *(_DWORD *)(a3 + 1296);
    v8 = a4;
    v9[0] = v7;
    v7[1] = 0;
    v9[1] = 16LL;
    return (_QWORD *)EtwpLogKernelEvent((__int64)v9, v5, v4, 1u, 0x561u, 0x600102u);
  }
  return result;
}
