/*
 * XREFs of PfpPartitionReferenceParentSafeByProcess @ 0x14043FCD0
 * Callers:
 *     PfpLogApplicationEvent @ 0x14043FAA0 (PfpLogApplicationEvent.c)
 *     PfCheckDeprioritizeFile @ 0x1409954E4 (PfCheckDeprioritizeFile.c)
 *     PfSnEndTrace @ 0x140AA6328 (PfSnEndTrace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpPartitionReferenceParentSafeByProcess(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  signed __int64 v4; // rax
  __int64 v5; // r9
  signed __int64 v6; // rtt
  __int64 v7; // rcx
  char v8; // al

  v2 = *(_QWORD *)(a2 + 1880);
  _m_prefetchw((const void *)(v2 + 40));
  v4 = *(_QWORD *)(v2 + 40);
  while ( 1 )
  {
    v5 = 0LL;
    if ( (unsigned __int64)(v4 + 1) <= 1 )
      break;
    v6 = v4;
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 40), v4 + 1, v4);
    if ( v6 == v4 )
    {
      v7 = *(_QWORD *)(v2 + 32);
      v8 = 1;
      goto LABEL_5;
    }
  }
  if ( v4 )
    __fastfail(0xEu);
  v8 = 0;
  v7 = 0LL;
LABEL_5:
  *a1 = v7;
  if ( v8 )
    return v2;
  return v5;
}
