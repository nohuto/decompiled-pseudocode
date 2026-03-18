/*
 * XREFs of ?ProcessSetColorTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_SETCOLORTRANSFORM@@@Z @ 0x1801E48D4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800224D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessSetColorTransform(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MAGNIFIERRENDERTARGET_SETCOLORTRANSFORM *a3)
{
  char *v4; // rcx

  v4 = (char *)this + 208;
  *(_OWORD *)v4 = *(_OWORD *)((char *)a3 + 8);
  *((_OWORD *)v4 + 1) = *(_OWORD *)((char *)a3 + 24);
  *((_OWORD *)v4 + 2) = *(_OWORD *)((char *)a3 + 40);
  *((_OWORD *)v4 + 3) = *(_OWORD *)((char *)a3 + 56);
  *((_OWORD *)v4 + 4) = *(_OWORD *)((char *)a3 + 72);
  *((_OWORD *)v4 + 5) = *(_OWORD *)((char *)a3 + 88);
  *((_DWORD *)v4 + 24) = *((_DWORD *)a3 + 26);
  *((_BYTE *)this + 2378) = memcmp_0(v4, &unk_180374410, 0x64uLL) != 0;
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return 0LL;
}
