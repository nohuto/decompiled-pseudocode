/*
 * XREFs of ?SetMask@CMaskBrush@@QEAAJPEAVCBrush@@@Z @ 0x1801D3170
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180022630 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ?CreatesCycle@CBrush@@IEAA_NPEAV1@@Z @ 0x1801D3200 (-CreatesCycle@CBrush@@IEAA_NPEAV1@@Z.c)
 *     ?IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z @ 0x1801D32BC (-IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CMaskBrush::SetMask(struct CResource **this, struct CBrush *a2)
{
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 != this[14] )
  {
    if ( !CMaskBrush::IsValidMaskResource(a2) || CBrush::CreatesCycle((CBrush *)this, a2) )
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x11E,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\maskbrush.cpp",
        (const char *)0x80070057LL,
        v5);
    }
    else
    {
      CResource::RegisterNotifier((CResource *)this, a2);
      CResource::UnRegisterNotifierInternal((CResource *)this, this[14]);
      this[14] = a2;
      CBrush::NotifyOnChanged((__int64)this, 0xEu, 0LL);
    }
  }
  return 0LL;
}
