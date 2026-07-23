/*
 * XREFs of MiRecomputeWalkHierarchy @ 0x140404E80
 * Callers:
 *     MiWalkPageTablesEvaluatePte @ 0x140329B60 (MiWalkPageTablesEvaluatePte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiRecomputeWalkHierarchy(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 *v3; // r9
  bool v4; // cf

  v3 = (unsigned __int64 *)(a1 + 96 + 8LL * a3);
  v4 = *(_QWORD *)(a1 + 8LL * a3 + 128) < a2;
  for ( *v3 = a2; a3; --a3 )
  {
    --v3;
    a2 = (__int64)(a2 << 25) >> 16;
    *v3 = a2;
  }
  return v4 ? 4 : 0;
}
