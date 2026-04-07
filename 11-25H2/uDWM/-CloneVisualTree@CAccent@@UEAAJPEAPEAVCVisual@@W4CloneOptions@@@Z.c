/*
 * XREFs of ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800A02A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CAccent@@SAJPEAPEAV1@@Z @ 0x18007C8B0 (-Create@CAccent@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z @ 0x1800A03C0 (-InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAccent::CloneVisualTree(CAccent *a1, struct CAccent **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  struct CAccent *v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CAccent *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  *a2 = 0LL;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v10);
  v4 = CAccent::Create(&v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = CAccent::InitializeVisualTreeClone(a1, v10);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v7 = v10;
      v10 = 0LL;
      *a2 = v7;
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 458LL;
  }
  else
  {
    v6 = 457LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
    (const char *)(unsigned int)v4);
LABEL_7:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v10);
  return v5;
}
