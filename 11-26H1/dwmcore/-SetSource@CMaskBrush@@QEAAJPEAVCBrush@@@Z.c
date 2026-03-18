/*
 * XREFs of ?SetSource@CMaskBrush@@QEAAJPEAVCBrush@@@Z @ 0x1801D30E0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180022630 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ?CreatesCycle@CBrush@@IEAA_NPEAV1@@Z @ 0x1801D3200 (-CreatesCycle@CBrush@@IEAA_NPEAV1@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?IsValidSourceResource@CMaskBrush@@CA_NPEBVCResource@@@Z @ 0x18021C7D0 (-IsValidSourceResource@CMaskBrush@@CA_NPEBVCResource@@@Z.c)
 */

__int64 __fastcall CMaskBrush::SetSource(struct CResource **this, struct CBrush *a2)
{
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 != this[15] )
  {
    if ( !CMaskBrush::IsValidSourceResource(a2) || CBrush::CreatesCycle((CBrush *)this, a2) )
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0xFD,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\maskbrush.cpp",
        (const char *)0x80070057LL,
        v5);
    }
    else
    {
      CResource::RegisterNotifier((CResource *)this, a2);
      CResource::UnRegisterNotifierInternal((CResource *)this, this[15]);
      this[15] = a2;
      CBrush::NotifyOnChanged((__int64)this, 0xEu, 0LL);
    }
  }
  return 0LL;
}
