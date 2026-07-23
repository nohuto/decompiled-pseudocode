/*
 * XREFs of PiDmGetCachedKeyIndex @ 0x140951FF0
 * Callers:
 *     PiDmObjectProcessPropertyChange @ 0x140951BA0 (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectGetCachedObjectReference @ 0x14095204C (PiDmObjectGetCachedObjectReference.c)
 *     PiDmObjectCreate @ 0x1409AB728 (PiDmObjectCreate.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x140B16780 (PiDmListUpdateAggregationCountWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDmGetCachedKeyIndex(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rdx

  for ( result = 0LL; (unsigned int)result < a2; result = (unsigned int)(result + 1) )
  {
    v6 = *(_QWORD *)(a1 + 24 * result);
    if ( *(_DWORD *)(a3 + 16) == *(_DWORD *)(v6 + 16) )
    {
      v7 = *(_QWORD *)a3 - *(_QWORD *)v6;
      if ( *(_QWORD *)a3 == *(_QWORD *)v6 )
        v7 = *(_QWORD *)(a3 + 8) - *(_QWORD *)(v6 + 8);
      if ( !v7 )
        return result;
    }
  }
  return 0xFFFFFFFFLL;
}
