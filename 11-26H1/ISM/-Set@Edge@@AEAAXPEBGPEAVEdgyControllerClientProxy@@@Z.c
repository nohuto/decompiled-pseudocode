/*
 * XREFs of ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801AEFDC
 * Callers:
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801ADF60 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180073DA4 (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800B5798 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180159AE8 (-InternalAddRef@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$emplace_back@AEAPEAVEdgyControllerClientProxy@@@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@AEAPEAVEdgyControllerClientProxy@@@Z @ 0x1801ADB48 (--$emplace_back@AEAPEAVEdgyControllerClientProxy@@@-$vector@V-$ComPtr@VEdgyControllerClientProxy.c)
 *     ?IsEdge@Edge@@QEBA_NPEAVEdgyControllerClientProxy@@@Z @ 0x1801AE9DC (-IsEdge@Edge@@QEBA_NPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?IsEdge@Edge@@QEBA_NPEBG@Z @ 0x1801AE9F4 (-IsEdge@Edge@@QEBA_NPEBG@Z.c)
 */

void __fastcall Edge::Set(Edge *this, const unsigned __int16 *a2, struct EdgyControllerClientProxy *a3)
{
  unsigned __int64 v4; // rax
  const void *v5; // rdx
  struct EdgyControllerClientProxy *v6; // rdi
  const char *v7; // r9
  __int64 v8; // rdx
  _QWORD *i; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct EdgyControllerClientProxy *v11; // [rsp+30h] [rbp+8h] BYREF
  struct EdgyControllerClientProxy *v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = a3;
  if ( *((_QWORD *)this + 3) )
  {
    if ( !Edge::IsEdge(this, a2) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x46,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edges.cpp",
        v7);
  }
  else
  {
    v4 = std::_WChar_traits<unsigned short>::length((__int64)a2);
    std::wstring::assign((char *)this + 8, v5, v4);
  }
  if ( *((_QWORD *)this + 5) )
  {
    if ( !Edge::IsEdge((struct EdgyControllerClientProxy **)this, v12) )
    {
      for ( i = (_QWORD *)*((_QWORD *)this + 13); i != *((_QWORD **)this + 14); ++i )
      {
        if ( *i == v8 )
          return;
      }
      std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::emplace_back<EdgyControllerClientProxy * &>(
        (_QWORD *)this + 13,
        (__int64 *)&v12);
    }
  }
  else
  {
    v6 = v12;
    if ( v12 )
    {
      v11 = v12;
      Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalAddRef((__int64 *)&v11);
      v11 = (struct EdgyControllerClientProxy *)*((_QWORD *)this + 5);
      *((_QWORD *)this + 5) = v6;
      Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease((__int64 *)&v11);
    }
  }
}
