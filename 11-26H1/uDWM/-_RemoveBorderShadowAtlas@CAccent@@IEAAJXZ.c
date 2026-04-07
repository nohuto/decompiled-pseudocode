/*
 * XREFs of ?_RemoveBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x18006A438
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180063098 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAccent::_RemoveBorderShadowAtlas(CAccent *this)
{
  struct CVisual *v1; // rdx
  int v4; // edi
  __int64 v5; // rdx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (struct CVisual *)*((_QWORD *)this + 36);
  if ( !v1 )
    return 0LL;
  v4 = CContainerVisual::RemoveChild(*((CContainerVisual **)this + 37), v1);
  if ( v4 >= 0 )
  {
    v4 = CContainerVisual::RemoveChild(this, *((struct CVisual **)this + 37));
    if ( v4 >= 0 )
    {
      v6 = (CBaseObject *)*((_QWORD *)this + 37);
      if ( v6 )
      {
        CBaseObject::Release(v6);
        *((_QWORD *)this + 37) = 0LL;
      }
      v7 = (CBaseObject *)*((_QWORD *)this + 36);
      if ( v7 )
      {
        CBaseObject::Release(v7);
        *((_QWORD *)this + 36) = 0LL;
      }
      return 0LL;
    }
    v5 = 860LL;
  }
  else
  {
    v5 = 859LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
    (const char *)(unsigned int)v4,
    v8);
  return (unsigned int)v4;
}
