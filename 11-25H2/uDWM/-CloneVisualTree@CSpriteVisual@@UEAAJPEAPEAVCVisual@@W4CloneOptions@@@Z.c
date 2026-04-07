/*
 * XREFs of ?CloneVisualTree@CSpriteVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800C6060
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180016920 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Create@CSpriteVisual@@SAJPEAPEAV1@@Z @ 0x180088F20 (-Create@CSpriteVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSpriteVisual::CloneVisualTree(__int64 a1, struct tagPOINT **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  struct tagPOINT *v7; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT *v10; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  v4 = CSpriteVisual::Create((struct CSpriteVisual **)&v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v10;
    v4 = CVisual::InitializeVisualTreeClone(a1, v10);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v10 = 0LL;
      *a2 = v7;
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 66LL;
  }
  else
  {
    v6 = 64LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"clientcore\\windows\\dwm\\udwm\\spritevisual.cpp",
    (const char *)(unsigned int)v4);
LABEL_7:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)&v10);
  return v5;
}
