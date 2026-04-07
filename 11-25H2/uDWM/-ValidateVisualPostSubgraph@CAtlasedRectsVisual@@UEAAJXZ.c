/*
 * XREFs of ?ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ @ 0x1800047A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisualPostSubgraph@CVisual@@UEAAJXZ @ 0x180004830 (-ValidateVisualPostSubgraph@CVisual@@UEAAJXZ.c)
 *     ?UpdateAtlasLayout@CAtlasedRectsVisual@@QEAAXXZ @ 0x18000488C (-UpdateAtlasLayout@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAtlasedRectsVisual::ValidateVisualPostSubgraph(CAtlasedRectsVisual *this)
{
  int v2; // edi
  int v3; // eax
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CVisual::ValidateVisualPostSubgraph(this);
  if ( v2 < 0 )
  {
    v5 = 95LL;
  }
  else
  {
    v3 = *((_DWORD *)this + 8);
    if ( (v3 & 0x1000) != 0 )
    {
      CAtlasedRectsVisual::UpdateAtlasLayout(this);
      *((_DWORD *)this + 8) &= ~0x1000u;
      v3 = *((_DWORD *)this + 8);
    }
    if ( (v3 & 0x2000) == 0 )
      return 0LL;
    v2 = (*(__int64 (__fastcall **)(CAtlasedRectsVisual *))(*(_QWORD *)this + 200LL))(this);
    if ( v2 >= 0 )
    {
      *((_DWORD *)this + 8) &= ~0x2000u;
      return 0LL;
    }
    v5 = 106LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\atlasedrectsvisual.cpp",
    (const char *)(unsigned int)v2,
    v6);
  return (unsigned int)v2;
}
