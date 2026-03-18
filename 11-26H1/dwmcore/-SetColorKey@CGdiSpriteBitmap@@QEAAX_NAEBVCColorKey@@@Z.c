/*
 * XREFs of ?SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z @ 0x1800E0920
 * Callers:
 *     ?OnSourceModificationsChanged@CWindowNode@@AEAAXXZ @ 0x1800DF778 (-OnSourceModificationsChanged@CWindowNode@@AEAAXXZ.c)
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1802693C4 (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800224D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x18004A624 (-ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ??8CColorKey@@QEBA_NAEBV0@@Z @ 0x1800E09A0 (--8CColorKey@@QEBA_NAEBV0@@Z.c)
 */

void __fastcall CGdiSpriteBitmap::SetColorKey(CGdiSpriteBitmap *this, char a2, const struct CColorKey *a3)
{
  char *v3; // r10
  const struct CColorKey *v4; // r11

  v3 = (char *)this + 376;
  v4 = a3;
  if ( a2 != *((_BYTE *)this + 155) || !(unsigned __int8)CColorKey::operator==((char *)this + 376, a3) )
  {
    *((_BYTE *)this + 155) = a2;
    *(_OWORD *)v3 = *(_OWORD *)v4;
    *((_OWORD *)v3 + 1) = *((_OWORD *)v4 + 1);
    *((_DWORD *)v3 + 8) = *((_DWORD *)v4 + 8);
    if ( CGdiSpriteBitmap::ReleaseBitmapRealization(this) )
      CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  }
}
