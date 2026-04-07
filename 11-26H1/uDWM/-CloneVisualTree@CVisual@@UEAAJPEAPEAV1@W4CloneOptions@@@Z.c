/*
 * XREFs of ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@W4CloneOptions@@@Z @ 0x1800DE160
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180013D20 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x1800DE20C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CVisual::CloneVisualTree(__int64 a1, struct CVisual **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  struct CVisual *v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CVisual *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  *a2 = 0LL;
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v10);
  v4 = CVisual::Create(&v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = CVisual::InitializeVisualTreeClone(a1, v10);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v7 = v10;
      v10 = 0LL;
      *a2 = v7;
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 950LL;
  }
  else
  {
    v6 = 949LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
    (const char *)(unsigned int)v4);
LABEL_7:
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v10);
  return v5;
}
