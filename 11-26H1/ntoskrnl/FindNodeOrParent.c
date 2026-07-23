/*
 * XREFs of FindNodeOrParent @ 0x1403C21F0
 * Callers:
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1403C1FD0 (RtlEnumerateGenericTableLikeADirectory.c)
 *     RtlLookupFirstMatchingElementGenericTableAvl @ 0x1403C2150 (RtlLookupFirstMatchingElementGenericTableAvl.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall FindNodeOrParent(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // rbx
  int v7; // eax

  if ( !*(_DWORD *)(a1 + 44) )
    return 0LL;
  for ( i = *(_QWORD *)(a1 + 16); ; i = *(_QWORD *)(i + 8) )
  {
    while ( 1 )
    {
      v7 = guard_dispatch_icall_no_overrides(a1, a2);
      if ( !v7 )
        break;
      if ( v7 != 1 )
      {
        *a3 = i;
        return 1LL;
      }
      if ( !*(_QWORD *)(i + 16) )
      {
        *a3 = i;
        return 3LL;
      }
      i = *(_QWORD *)(i + 16);
    }
    if ( !*(_QWORD *)(i + 8) )
      break;
  }
  *a3 = i;
  return 2LL;
}
