/*
 * XREFs of MiCombineActiveCrcSortByHash @ 0x1404366A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCombineActiveCrcSortByHash(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned int v6; // ecx
  unsigned int v7; // eax

  v2 = *a2;
  v3 = *a1;
  v4 = *(_QWORD *)(*a2 + 8);
  if ( *(_QWORD *)(*a1 + 8) < v4 )
    return 0xFFFFFFFFLL;
  if ( *(_QWORD *)(*a1 + 8) <= v4 )
  {
    v5 = *(_QWORD *)(v2 + 24);
    if ( *(_QWORD *)(v3 + 24) <= v5 )
    {
      if ( *(_QWORD *)(v3 + 24) >= v5 )
      {
        v6 = *(_DWORD *)(v3 + 32) & 0x1F;
        v7 = *(_DWORD *)(v2 + 32) & 0x1F;
        if ( v6 <= v7 )
          return (unsigned int)-(v6 < v7);
        return 1LL;
      }
      return 0xFFFFFFFFLL;
    }
  }
  return 1LL;
}
