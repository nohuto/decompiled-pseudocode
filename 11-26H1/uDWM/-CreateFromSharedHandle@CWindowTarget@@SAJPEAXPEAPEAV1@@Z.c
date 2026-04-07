/*
 * XREFs of ?CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z @ 0x1800E5454
 * Callers:
 *     ?CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z @ 0x1800CAEE0 (-CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z @ 0x180062EC0 (-InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2CWindowTarget@@KAPEAX_K@Z @ 0x180085B1C (--2CWindowTarget@@KAPEAX_K@Z.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     ??0CWindowTarget@@IEAA@XZ @ 0x1800E5214 (--0CWindowTarget@@IEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCWindowTarget@@@WRL@Microsoft@@QEAAXPEAVCWindowTarget@@@Z @ 0x1800E5238 (-Attach@-$ComPtr@VCWindowTarget@@@WRL@Microsoft@@QEAAXPEAVCWindowTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowTarget::CreateFromSharedHandle(void *a1, struct CWindowTarget **a2)
{
  CWindowTarget *v4; // rax
  CWindowTarget *v5; // rbx
  void *v6; // rdx
  CVisual *v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CVisual *v12; // [rsp+40h] [rbp+18h] BYREF
  CWindowTarget *v13; // [rsp+48h] [rbp+20h]

  v12 = 0LL;
  v4 = (CWindowTarget *)CWindowTarget::operator new();
  v5 = v4;
  v13 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x88uLL);
    v4 = CWindowTarget::CWindowTarget(v5);
  }
  Microsoft::WRL::ComPtr<CWindowTarget>::Attach(&v12, v4);
  v6 = a1;
  v7 = v12;
  v8 = CVisual::InitializeFromSharedHandle((struct CVisualProxy **)v12, v6);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v12 = 0LL;
    *a2 = v7;
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (int)"clientcore\\windows\\dwm\\udwm\\windowtarget.cpp",
      (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v12);
  return v9;
}
