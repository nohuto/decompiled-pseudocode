/*
 * XREFs of ?CloneVisualTree@CDWriteText@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180038ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InitializeVisualTreeClone@CDWriteText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180038750 (-InitializeVisualTreeClone@CDWriteText@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Create@CDWriteText@@SAJPEAPEAV1@@Z @ 0x1800392C4 (-Create@CDWriteText@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDWriteText::CloneVisualTree(__int64 a1, CBaseObject **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  CBaseObject *v8; // rcx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  *a2 = 0LL;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v11);
  v4 = CDWriteText::Create(&v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x183,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v4,
      v9);
    v8 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      CBaseObject::Release(v8);
    }
  }
  else
  {
    v6 = CDWriteText::InitializeVisualTreeClone(a1, (__int64)v11);
    v5 = v6;
    if ( v6 >= 0 )
    {
      *a2 = v11;
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x184,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v6,
      v9);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v11);
  }
  return v5;
}
