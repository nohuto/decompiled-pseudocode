/*
 * XREFs of ?NewNode@?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAGPEAV312@1@Z @ 0x1800EFB24
 * Callers:
 *     ?DevQueryResultCallback@@YAXPEAUHDEVQUERY__@@PEAXPEBU_DEV_QUERY_RESULT_ACTION_DATA@@@Z @ 0x1800EF6B0 (-DevQueryResultCallback@@YAXPEAUHDEVQUERY__@@PEAXPEBU_DEV_QUERY_RESULT_ACTION_DATA@@@Z.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x18005D1F4 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<unsigned short *,ATL::CElementTraits<unsigned short *>>::NewNode(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  struct ATL::CAtlPlex *v6; // rax
  int v7; // r8d
  _QWORD *i; // rdx
  __int64 *result; // rax
  __int64 v10; // rdx

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v6 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 24), *(unsigned int *)(a1 + 40), 0x18uLL);
    if ( !v6 )
      ATL::AtlThrowImpl(-2147024882);
    v7 = *(_DWORD *)(a1 + 40) - 1;
    for ( i = (_QWORD *)((char *)v6 + 16 * v7 + 8 * (unsigned int)v7 + 8); v7 >= 0; --v7 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
      i -= 3;
    }
  }
  result = *(__int64 **)(a1 + 32);
  v10 = *result;
  result[2] = *a2;
  *(_QWORD *)(a1 + 32) = v10;
  result[1] = a3;
  *result = 0LL;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
