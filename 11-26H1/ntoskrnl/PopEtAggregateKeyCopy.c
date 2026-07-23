/*
 * XREFs of PopEtAggregateKeyCopy @ 0x1409CC8E4
 * Callers:
 *     PopEtAggregateKeyCopyFromProcess @ 0x1409CC5C8 (PopEtAggregateKeyCopyFromProcess.c)
 *     PopEtAggregateGet @ 0x1409CD378 (PopEtAggregateGet.c)
 * Callees:
 *     PopEtStringReference @ 0x1409CD348 (PopEtStringReference.c)
 */

void __fastcall PopEtAggregateKeyCopy(__int64 *a1, _OWORD *a2)
{
  __int64 v3; // rdx
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  __int64 v6; // rcx

  *(_OWORD *)a1 = *a2;
  *((_OWORD *)a1 + 1) = a2[1];
  v3 = *a1;
  if ( *a1 && *(_WORD *)(v3 + 24) )
  {
    _m_prefetchw((const void *)(v3 + 16));
    v4 = *(_QWORD *)(v3 + 16);
    while ( (unsigned __int64)(v4 + 1) > 1 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 16), v4 + 1, v4);
      if ( v5 == v4 )
        goto LABEL_6;
    }
    if ( v4 )
      __fastfail(0xEu);
  }
LABEL_6:
  v6 = a1[1];
  if ( v6 )
    PopEtStringReference(v6, v3, a1);
}
