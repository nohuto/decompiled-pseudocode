/*
 * XREFs of MxCreatePfnsForPfns @ 0x140CFC488
 * Callers:
 *     MxCreateSparsePfnDatabase @ 0x140CFC864 (MxCreateSparsePfnDatabase.c)
 *     MxMapFreePageNode @ 0x140CFE074 (MxMapFreePageNode.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MxCreatePfnsForConsumedRegions @ 0x140CFC31C (MxCreatePfnsForConsumedRegions.c)
 *     MxEmptyDepletedList @ 0x140CFCAFC (MxEmptyDepletedList.c)
 *     MxExtractUnusedRegions @ 0x140CFCB98 (MxExtractUnusedRegions.c)
 */

__int64 MxCreatePfnsForPfns()
{
  unsigned int v0; // edi
  __int64 v1; // rbp
  unsigned int i; // ebx
  __int64 *v3; // rsi
  _DWORD v5[100]; // [rsp+20h] [rbp-1A8h] BYREF

  v5[1] = 0;
  memset_0(v5, 0, 0x184uLL);
  v0 = 64;
  if ( (unsigned __int16)KeNumberNodes <= 0x40u )
    v0 = (unsigned __int16)KeNumberNodes;
  while ( 2 )
  {
    v1 = qword_14101FC20;
    for ( i = 0; i < v0; ++i )
    {
      v3 = &MxBootState[250 * i];
      if ( (unsigned int)MxEmptyDepletedList(i) )
      {
        if ( !v3[24] )
          continue;
        MxExtractUnusedRegions(v3, v5);
        if ( (unsigned int)MxCreatePfnsForConsumedRegions(v3, v5) )
          continue;
      }
      return 0LL;
    }
    if ( v1 != qword_14101FC20 )
      continue;
    break;
  }
  return 1LL;
}
