/*
 * XREFs of PspDoesJobHierarchyPermitUILimitsCallback @ 0x140B25CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspDoesJobHierarchyPermitUILimitsCallback(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 == a2 )
    return 0LL;
  result = 3221227288LL;
  if ( (*(_DWORD *)(a1 + 1552) & 0x10) == 0 && *(_DWORD *)(a1 + 576) != -2 )
    return 0LL;
  return result;
}
