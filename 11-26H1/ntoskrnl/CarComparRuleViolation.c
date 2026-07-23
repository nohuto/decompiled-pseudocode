/*
 * XREFs of CarComparRuleViolation @ 0x14064FF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CarComparRuleViolation(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned __int64 v4; // rax
  unsigned int v6; // ecx
  unsigned int v7; // r8d

  if ( *(_DWORD *)a2 < *(_DWORD *)a3 )
    return 0LL;
  if ( *(_DWORD *)a2 > *(_DWORD *)a3 )
    return 1LL;
  v3 = *(_DWORD *)(a3 + 4);
  if ( *(_DWORD *)(a2 + 4) < v3 )
    return 0LL;
  if ( *(_DWORD *)(a2 + 4) > v3 )
    return 1LL;
  v4 = *(_QWORD *)(a3 + 8);
  if ( *(_QWORD *)(a2 + 8) < v4 )
    return 0LL;
  if ( *(_QWORD *)(a2 + 8) > v4 )
    return 1LL;
  v6 = *(_DWORD *)(a3 + 16);
  v7 = *(_DWORD *)(a2 + 16);
  if ( v7 == v6 )
    return 2LL;
  else
    return v7 > v6;
}
