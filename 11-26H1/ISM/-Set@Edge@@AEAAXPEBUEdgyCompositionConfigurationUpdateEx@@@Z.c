/*
 * XREFs of ?Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801AF0A8
 * Callers:
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801AE078 (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800B5798 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?IsEdge@Edge@@QEBA_NPEBG@Z @ 0x1801AE9F4 (-IsEdge@Edge@@QEBA_NPEBG@Z.c)
 */

void __fastcall Edge::Set(Edge *this, const struct EdgyCompositionConfigurationUpdateEx *a2)
{
  unsigned __int64 v4; // rax
  const void *v5; // rcx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = *(_QWORD *)a2;
  if ( *((_QWORD *)this + 3) )
  {
    if ( !Edge::IsEdge(this, (const unsigned __int16 *)a2 + 12) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2A,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edges.cpp",
        v6);
  }
  else
  {
    v4 = std::_WChar_traits<unsigned short>::length((__int64)a2 + 24);
    std::wstring::assign((char *)this + 8, v5, v4);
  }
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 4);
}
