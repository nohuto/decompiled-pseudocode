/*
 * XREFs of ?Initialize@CButton@@MEAAJXZ @ 0x18005D290
 * Callers:
 *     ?Create@CButton@@SAJPEAPEAV1@@Z @ 0x18005D110 (-Create@CButton@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x180021BA0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 *     ?Create@CButtonVisual@@SAJPEAPEAV1@@Z @ 0x180027384 (-Create@CButtonVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetOpacityMode@CVisualProxy@@QEAAJW4DCOMPOSITION_OPACITY_MODE@@@Z @ 0x18005D46C (-SetOpacityMode@CVisualProxy@@QEAAJW4DCOMPOSITION_OPACITY_MODE@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CButton::Initialize(struct CContainerVisualProxy **this)
{
  int v2; // edi
  struct CVisual **v3; // rdi
  CBaseObject *v4; // rcx
  int v5; // esi
  char *v6; // r14
  CBaseObject *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CContainerVisual::Initialize(this);
  if ( v2 < 0 )
  {
    v12 = 24LL;
    goto LABEL_14;
  }
  v2 = CVisualProxy::SetOpacityMode(this[2]);
  if ( v2 < 0 )
  {
    v12 = 27LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
      (const char *)(unsigned int)v2,
      v13);
    return (unsigned int)v2;
  }
  v3 = this + 24;
  v4 = this[24];
  this[24] = 0LL;
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = CButtonVisual::Create(this + 24);
  if ( v5 < 0 )
  {
    v11 = 29LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
      (const char *)(unsigned int)v5,
      v13);
    return (unsigned int)v5;
  }
  v6 = (char *)(this + 25);
  v7 = this[25];
  this[25] = 0LL;
  if ( v7 )
    CBaseObject::Release(v7);
  v5 = CButtonVisual::Create(this + 25);
  if ( v5 < 0 )
  {
    v11 = 30LL;
    goto LABEL_12;
  }
  v8 = CContainerVisual::AddChild((CContainerVisual *)this, *v3);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
      (const char *)(unsigned int)v8,
      v13);
    return v9;
  }
  else
  {
    *((_BYTE *)*v3 + 36) |= 8u;
    *(_BYTE *)(*(_QWORD *)v6 + 36LL) |= 8u;
    return 0LL;
  }
}
