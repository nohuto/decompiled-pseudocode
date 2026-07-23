/*
 * XREFs of EtwpTraceRegistryTransaction @ 0x140B66EB0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLogTxREvent @ 0x14082E10C (EtwpLogTxREvent.c)
 */

_DWORD *__fastcall EtwpTraceRegistryTransaction(
        unsigned __int8 a1,
        __int64 a2,
        __int128 *a3,
        int a4,
        int a5,
        __int64 a6)
{
  _DWORD *result; // rax
  unsigned int v11; // ebx
  bool i; // zf
  __int64 v13; // r10

  result = (_DWORD *)EtwpHostSiloState;
  v11 = *(_DWORD *)(EtwpHostSiloState + 4520);
  for ( i = !_BitScanForward((unsigned int *)&v13, v11); !i; i = !_BitScanForward((unsigned int *)&v13, v11) )
  {
    v11 &= v11 - 1;
    result = (_DWORD *)(EtwpHostSiloState + 32LL * (unsigned int)v13 + 4556);
    if ( result )
    {
      if ( (*result & 0x20000) != 0 )
        result = (_DWORD *)EtwpLogTxREvent(
                             *(unsigned __int8 *)(EtwpHostSiloState + 2 * v13 + 4504),
                             a1,
                             a3,
                             a4,
                             a5,
                             (__int64 *)(a2 + 8 * (*(unsigned __int8 *)(EtwpHostSiloState + 2 * v13 + 4505) - 1LL)),
                             a6);
    }
  }
  return result;
}
