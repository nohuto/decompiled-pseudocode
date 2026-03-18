/*
 * XREFs of ?SetTemplate@?$CEffectBrushGeneratedT@VCEffectBrush@@VCBrush@@@@QEAAJPEAVCCompiledEffectTemplate@@@Z @ 0x18024EC70
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x18021180C (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 */

__int64 __fastcall CEffectBrushGeneratedT<CEffectBrush,CBrush>::SetTemplate(CResource *this, struct CResource *a2)
{
  struct CResource *v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct CResource *)*((_QWORD *)this + 14);
  if ( a2 != v4 )
  {
    if ( v4 && a2 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAE,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\effectbrush.cpp",
        (const char *)0x88980402LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4F3,
        (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
        (const char *)0x88980402LL);
      return 2291663874LL;
    }
    CResource::UnRegisterNotifierInternal(this, v4);
    *((_QWORD *)this + 14) = a2;
    CResource::RegisterNotifier(this, a2);
    if ( !*((_QWORD *)this + 14) )
      CEffectBrush::ReleaseResources(this);
  }
  return 0LL;
}
