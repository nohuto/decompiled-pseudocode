/*
 * XREFs of ?_UpdateBorder@CSwitchItemElement@@IEAAXXZ @ 0x1804C110C
 * Callers:
 *     ?SetFocused@CSwitchItemElement@@UEAAX_N@Z @ 0x1804C0920 (-SetFocused@CSwitchItemElement@@UEAAX_N@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18016DB4C (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?_ShouldRenderAsFocused@CMultitaskingViewElementBase@@IEAA_NXZ @ 0x1804C3F20 (-_ShouldRenderAsFocused@CMultitaskingViewElementBase@@IEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSwitchItemElement::_UpdateBorder(CSwitchItemElement *this)
{
  int Color; // eax
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  int v6[2]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]
  _DWORD v8[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_QWORD *)this + 78) )
  {
    if ( CMultitaskingViewElementBase::_ShouldRenderAsFocused(this) )
    {
      v8[0] = *((_DWORD *)this + 101);
      Color = CImmersiveColor::GetColor(0xB2u);
      v3 = (__int64 *)*((_QWORD *)this + 78);
      v8[1] = Color;
      v8[2] = 1065353216;
      v4 = *v3;
      *(_QWORD *)v6 = 0LL;
      v7 = 0;
      v5 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, int *))(v4 + 216))(v3, v8, v6);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xED,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
          (const char *)(unsigned int)v5);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 78) + 224LL))(*((_QWORD *)this + 78));
    }
  }
}
