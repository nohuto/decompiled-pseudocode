/*
 * XREFs of ?FindEdgeWithInteraction@Edges@@AEBAHPEBGI@Z @ 0x1801AE2BC
 * Callers:
 *     ?FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z @ 0x1801AE218 (-FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z @ 0x1801AE9B0 (-IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z.c)
 *     ?IsEdge@Edge@@QEBA_NPEBG@Z @ 0x1801AE9F4 (-IsEdge@Edge@@QEBA_NPEBG@Z.c)
 */

__int64 __fastcall Edges::FindEdgeWithInteraction(Edges *this, const unsigned __int16 *a2, int a3)
{
  int i; // ebx
  __int64 v7; // r14
  __int64 v8; // rcx
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 && a2 && *a2 )
  {
    for ( i = 0; i < (int)((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 7); ++i )
    {
      v7 = (__int64)i << 7;
      if ( Edge::IsEdge((Edge *)(v7 + *(_QWORD *)this), a2) )
      {
        v8 = v7 + *(_QWORD *)this;
        if ( (!*(_DWORD *)(v8 + 64) || *(_DWORD *)(v8 + 64) != a3) && !(unsigned __int8)Edge::IsClientPresent(v8, 1LL) )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x281,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edges.cpp",
            v9);
        return (unsigned int)i;
      }
    }
  }
  return 0xFFFFFFFFLL;
}
