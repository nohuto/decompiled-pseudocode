/*
 * XREFs of ?SetSize@CVisualProxy@@QEAAJNN@Z @ 0x18000A660
 * Callers:
 *     ?UpdateCompNode@CRectangleVisual@@AEAAJXZ @ 0x18000A608 (-UpdateCompNode@CRectangleVisual@@AEAAJXZ.c)
 *     ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x18004EED0 (-UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 *     ?SendSetSize@CSpriteVisual@@MEAAJAEBUtagSIZE@@@Z @ 0x180075620 (-SendSetSize@CSpriteVisual@@MEAAJAEBUtagSIZE@@@Z.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18008B110 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualProxy::SetSize(CVisualProxy *this, double a2, double a3)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 288LL))(*((_QWORD *)this + 4));
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\visualproxy.cpp",
      (const char *)(unsigned int)v4,
      v9);
    return v5;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 296LL))(*((_QWORD *)this + 4));
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\visualproxy.cpp",
        (const char *)(unsigned int)v6,
        v9);
      return v7;
    }
    else
    {
      return 0LL;
    }
  }
}
