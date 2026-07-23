/*
 * XREFs of PspOpenPartitionHandle @ 0x140803A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspOpenPartitionHandle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 v4; // rax
  signed __int64 v5; // rtt

  _m_prefetchw((const void *)(a4 + 48));
  v4 = *(_QWORD *)(a4 + 48);
  while ( (unsigned __int64)(v4 + 1) > 1 )
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 48), v4 + 1, v4);
    if ( v5 == v4 )
      return 0LL;
  }
  if ( v4 )
    __fastfail(0xEu);
  return 3221225473LL;
}
