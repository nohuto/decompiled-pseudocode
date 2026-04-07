/*
 * XREFs of ?Create@CClientArea@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x180022BFC
 * Callers:
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180022B00 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x180022CFC (-Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClientArea::Create(struct CVisualProxy **a1, struct CClientArea **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  CBaseObject *v7; // rcx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v10);
  v4 = CClientArea::Create(a1[18], &v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
      (const char *)(unsigned int)v4,
      v8);
    v7 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      CBaseObject::Release(v7);
    }
    return v5;
  }
  else
  {
    *((_QWORD *)v10 + 17) = a1;
    *a2 = v10;
    return 0LL;
  }
}
