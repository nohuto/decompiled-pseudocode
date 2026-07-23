/*
 * XREFs of ExBlockPushLock @ 0x1404CEF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ExBlockPushLock(signed __int64 *a1, signed __int64 a2)
{
  signed __int64 v3; // rax
  signed __int64 result; // rax
  signed __int64 v5; // rtt
  signed __int64 v6; // rcx

  *(_DWORD *)(a2 + 52) = 2;
  _m_prefetchw(a1);
  v3 = *a1;
  *(_QWORD *)(a2 + 24) = *a1;
  v5 = v3;
  result = _InterlockedCompareExchange64(a1, a2, v3);
  if ( v5 != result )
  {
    do
    {
      v6 = result;
      *(_QWORD *)(a2 + 24) = result;
      result = _InterlockedCompareExchange64(a1, a2, result);
    }
    while ( result != v6 );
  }
  return result;
}
