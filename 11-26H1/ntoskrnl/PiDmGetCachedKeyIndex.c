/*
 * XREFs of PiDmGetCachedKeyIndex @ 0x140991590
 * Callers:
 *     PiDmObjectCreate @ 0x140987A90 (PiDmObjectCreate.c)
 *     PiDmObjectProcessPropertyChange @ 0x140991140 (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1409915EC (PiDmObjectGetCachedObjectReference.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x140AF4174 (PiDmListUpdateAggregationCountWorker.c)
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
