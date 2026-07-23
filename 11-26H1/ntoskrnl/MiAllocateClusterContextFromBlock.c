/*
 * XREFs of MiAllocateClusterContextFromBlock @ 0x14049F1AC
 * Callers:
 *     MiAllocateThreadFaultClusterContext @ 0x14049EEBC (MiAllocateThreadFaultClusterContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAllocateClusterContextFromBlock(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r8d
  __int64 v3; // r10
  int v4; // r9d
  signed __int16 v5; // ax
  signed __int16 v6; // tt
  __int64 result; // rax
  __int64 v8; // r8

  while ( 1 )
  {
    v1 = *(_QWORD *)(a1 + 24);
    v2 = (unsigned __int16)v1;
    if ( !(_WORD)v1 )
      break;
    _BitScanForward((unsigned int *)&v3, (unsigned __int16)v1);
    v4 = (unsigned __int16)(1 << v3);
    _m_prefetchw((const void *)(a1 + 24));
    v5 = *(_WORD *)(a1 + 24);
    do
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange16((volatile signed __int16 *)(a1 + 24), ~(_WORD)v4 & v5, v5);
    }
    while ( v6 != v5 );
    if ( (v4 & v5) != 0 )
    {
      v2 = ~v4 & v5;
      result = a1 + 48 * v3 + 32;
      goto LABEL_7;
    }
  }
  result = 0LL;
LABEL_7:
  if ( !v2 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v8 + 24) == a1 )
      *(_QWORD *)(v8 + 24) = 0LL;
  }
  return result;
}
