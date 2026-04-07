/*
 * XREFs of ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180013130
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x1800131E8 (-Create@CAtlasedRectsVisual@@SAJPEAPEAV1@@Z.c)
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180013D7C (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAtlasedRectsVisual::CloneVisualTree(__int64 a1, CBaseObject **a2, unsigned int a3)
{
  int v6; // ebx
  __int64 v8; // rdx
  CBaseObject *v9; // rcx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = 0LL;
  *a2 = 0LL;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v12);
  v6 = CAtlasedRectsVisual::Create(&v12);
  if ( v6 < 0 )
  {
    v8 = 249LL;
  }
  else
  {
    v6 = CAtlasedRectsVisual::InitializeVisualTreeClone(a1, v12, a3);
    if ( v6 >= 0 )
    {
      *a2 = v12;
      return 0LL;
    }
    v8 = 250LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\atlasedrectsvisual.cpp",
    (const char *)(unsigned int)v6,
    v10);
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    CBaseObject::Release(v9);
  }
  return (unsigned int)v6;
}
