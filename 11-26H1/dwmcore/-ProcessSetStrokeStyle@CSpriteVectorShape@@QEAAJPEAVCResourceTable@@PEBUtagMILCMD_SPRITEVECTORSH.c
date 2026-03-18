/*
 * XREFs of ?ProcessSetStrokeStyle@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKESTYLE@@@Z @ 0x1800AB44C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800224D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CSpriteVectorShape::ProcessSetStrokeStyle(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVECTORSHAPE_SETSTROKESTYLE *a3)
{
  if ( *((_QWORD *)this + 24) != *((_QWORD *)a3 + 1)
    || *((_DWORD *)this + 50) != *((_DWORD *)a3 + 4)
    || *((_DWORD *)this + 51) != *((_DWORD *)a3 + 5) )
  {
    *((_DWORD *)this + 48) = *((_DWORD *)a3 + 2);
    *((_DWORD *)this + 49) = *((_DWORD *)a3 + 3);
    *((_DWORD *)this + 50) = *((_DWORD *)a3 + 4);
    *((_DWORD *)this + 51) = *((_DWORD *)a3 + 5);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 18);
    CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  }
  return 0LL;
}
