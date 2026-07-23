/*
 * XREFs of FindNodeOrParent @ 0x1800BB810
 * Callers:
 *     RtlLookupFirstMatchingElementGenericTableAvl @ 0x1800BB770 (RtlLookupFirstMatchingElementGenericTableAvl.c)
 *     RtlEnumerateGenericTableLikeADirectory @ 0x180146920 (RtlEnumerateGenericTableLikeADirectory.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall FindNodeOrParent(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // rbx
  int v7; // eax

  if ( !*(_DWORD *)(a1 + 44) )
    return 0LL;
  for ( i = *(_QWORD *)(a1 + 16); ; i = *(_QWORD *)(i + 16) )
  {
    while ( 1 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 72))(a1, a2, i + 32);
      if ( v7 )
        break;
      if ( !*(_QWORD *)(i + 8) )
      {
        *a3 = i;
        return 2LL;
      }
      i = *(_QWORD *)(i + 8);
    }
    if ( v7 != 1 )
    {
      *a3 = i;
      return 1LL;
    }
    if ( !*(_QWORD *)(i + 16) )
      break;
  }
  *a3 = i;
  return 3LL;
}
