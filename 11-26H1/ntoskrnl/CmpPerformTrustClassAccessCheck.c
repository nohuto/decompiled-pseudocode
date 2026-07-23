/*
 * XREFs of CmpPerformTrustClassAccessCheck @ 0x1404686E0
 * Callers:
 *     CmpJoinClassOfTrust @ 0x140468664 (CmpJoinClassOfTrust.c)
 *     CmpResolveHiveLoadConflict @ 0x140ADF3F4 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpPerformTrustClassAccessCheck(__int64 a1, char a2)
{
  if ( a2 )
    return (*(_DWORD *)(a1 + 4120) & 1) == 0 ? 0xC000000D : 0;
  else
    return 0LL;
}
