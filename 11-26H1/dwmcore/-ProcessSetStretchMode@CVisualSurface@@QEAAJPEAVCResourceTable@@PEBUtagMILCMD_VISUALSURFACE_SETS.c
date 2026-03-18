/*
 * XREFs of ?ProcessSetStretchMode@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETSTRETCHMODE@@@Z @ 0x18021EB68
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800224D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CVisualSurface::ProcessSetStretchMode(
        CVisualSurface *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALSURFACE_SETSTRETCHMODE *a3)
{
  bool v3; // zf

  v3 = *((_BYTE *)this + 204) == 0;
  *((_DWORD *)this + 50) = *((_DWORD *)a3 + 2);
  if ( !v3 )
    CResource::NotifyOnChanged((__int64)this, 6u, 0LL);
  return 0LL;
}
