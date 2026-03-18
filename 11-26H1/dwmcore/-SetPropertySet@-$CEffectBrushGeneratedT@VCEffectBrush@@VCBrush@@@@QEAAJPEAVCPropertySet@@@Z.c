/*
 * XREFs of ?SetPropertySet@?$CEffectBrushGeneratedT@VCEffectBrush@@VCBrush@@@@QEAAJPEAVCPropertySet@@@Z @ 0x18024E550
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x1801ACAD8 (-HasValidTemplate@CEffectBrush@@AEBA_NXZ.c)
 */

__int64 __fastcall CEffectBrushGeneratedT<CEffectBrush,CBrush>::SetPropertySet(CResource *this, struct CResource *a2)
{
  char *v3; // rdi
  struct CResource *v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (char *)this + 120;
  v4 = (struct CResource *)*((_QWORD *)this + 15);
  if ( a2 != v4 )
  {
    if ( v4 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x97,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\effectbrush.cpp",
        (const char *)0x88980402LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x537,
        (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
        (const char *)0x88980402LL);
      return 2291663874LL;
    }
    CResource::UnRegisterNotifierInternal(this, 0LL);
    *(_QWORD *)v3 = a2;
    CResource::RegisterNotifier(this, a2);
    if ( CEffectBrush::HasValidTemplate(this) )
      *(_QWORD *)(*(_QWORD *)v3 + 80LL) = ((unsigned __int64)this + 152) & -(__int64)(this != 0LL);
  }
  return 0LL;
}
