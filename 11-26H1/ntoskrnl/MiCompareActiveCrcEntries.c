/*
 * XREFs of MiCompareActiveCrcEntries @ 0x14045A770
 * Callers:
 *     MiProcessCrcList @ 0x140A67C40 (MiProcessCrcList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCompareActiveCrcEntries(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned int v4; // ecx
  unsigned int v5; // eax

  v2 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(a1 + 8) < v2 )
    return 0xFFFFFFFFLL;
  if ( *(_QWORD *)(a1 + 8) <= v2 )
  {
    v3 = *(_QWORD *)(a2 + 24);
    if ( *(_QWORD *)(a1 + 24) <= v3 )
    {
      if ( *(_QWORD *)(a1 + 24) >= v3 )
      {
        v4 = *(_DWORD *)(a1 + 32) & 0x1F;
        v5 = *(_DWORD *)(a2 + 32) & 0x1F;
        if ( v4 <= v5 )
          return (unsigned int)-(v4 < v5);
        return 1LL;
      }
      return 0xFFFFFFFFLL;
    }
  }
  return 1LL;
}
