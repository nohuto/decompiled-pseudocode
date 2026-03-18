/*
 * XREFs of RtlMergeBitMapsEx @ 0x140618AE0
 * Callers:
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x1405D304C (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     MiMergePageNodes @ 0x1407090F4 (MiMergePageNodes.c)
 *     MiSelectImageBase @ 0x1409CACA8 (MiSelectImageBase.c)
 *     MiSelectRelocationStartHint @ 0x140AECDF0 (MiSelectRelocationStartHint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlMergeBitMapsEx(unsigned __int64 *a1, __int64 *a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r9
  __int64 i; // r10

  result = *a2;
  v3 = *a1;
  if ( *a1 >= *a2 )
    v3 = *a2;
  if ( v3 )
  {
    for ( i = 0LL; ; i += 8LL )
    {
      result = a2[1];
      if ( v3 < 0x40 )
        break;
      *(_QWORD *)(i + a1[1]) |= *(_QWORD *)(i + result);
      v3 -= 64LL;
      if ( !v3 )
        return result;
    }
    result = ((1LL << v3) - 1) & *(_QWORD *)(i + result);
    *(_QWORD *)(i + a1[1]) |= result;
  }
  return result;
}
