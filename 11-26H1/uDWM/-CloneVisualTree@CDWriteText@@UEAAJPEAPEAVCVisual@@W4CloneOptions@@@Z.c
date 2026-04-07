/*
 * XREFs of ?CloneVisualTree@CDWriteText@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800372C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CDWriteText@@SAJPEAPEAV1@@Z @ 0x180037D70 (-Create@CDWriteText@@SAJPEAPEAV1@@Z.c)
 *     ?InitializeVisualTreeClone@CDWriteText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180038458 (-InitializeVisualTreeClone@CDWriteText@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDWriteText::CloneVisualTree(__int64 a1, CBaseObject **a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  CBaseObject *v10; // rcx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = 0LL;
  *a2 = 0LL;
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v13);
  v6 = CDWriteText::Create(&v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x191,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v6,
      v11);
    v10 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      CBaseObject::Release(v10);
    }
  }
  else
  {
    v8 = CDWriteText::InitializeVisualTreeClone(a1, v13, a3);
    v7 = v8;
    if ( v8 >= 0 )
    {
      *a2 = v13;
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x192,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v8,
      v11);
    Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v13);
  }
  return v7;
}
