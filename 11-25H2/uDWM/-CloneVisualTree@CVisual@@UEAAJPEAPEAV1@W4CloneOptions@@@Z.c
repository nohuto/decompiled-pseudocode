/*
 * XREFs of ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@W4CloneOptions@@@Z @ 0x1800E1420
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180016920 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x1800E14C0 (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
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
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v10);
  v4 = CVisual::Create(&v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = CVisual::InitializeVisualTreeClone(a1, (struct tagPOINT *)v10);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v7 = v10;
      v10 = 0LL;
      *a2 = v7;
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 960LL;
  }
  else
  {
    v6 = 959LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
    (const char *)(unsigned int)v4);
LABEL_7:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v10);
  return v5;
}
