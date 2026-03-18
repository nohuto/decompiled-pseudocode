/*
 * XREFs of ?OnSurfaceChanged@CSurfaceBrush@@QEAAXXZ @ 0x1802841D8
 * Callers:
 *     ?SetSurface@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJPEAVCResource@@@Z @ 0x18024EAD0 (-SetSurface@-$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180022630 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800BAF10 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?ApplyDirty@CSurfaceBrush@@AEAAXPEAVCRectanglesShape@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020EA24 (-ApplyDirty@CSurfaceBrush@@AEAAXPEAVCRectanglesShape@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CSurfaceBrush::OnSurfaceChanged(CSurfaceBrush *this)
{
  __int64 i; // rax
  bool v3; // zf
  __int64 j; // rax
  struct D2D_RECT_F v5; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v6[5]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v7[16]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v8; // [rsp+68h] [rbp-18h] BYREF

  *((_QWORD *)this + 23) = *((_QWORD *)this + 18);
  for ( i = 0LL; i < 4; ++i )
    *(&v5.left + i) = (float)*((int *)this + i + 27);
  if ( IsEmpty(&v5) )
  {
    CBrush::NotifyOnChanged((__int64)this, 0, (__int64)this);
  }
  else
  {
    v3 = *((_BYTE *)this + 104) == 0;
    v6[0] = &CRectanglesShape::`vftable';
    v6[2] = v7;
    v6[3] = v7;
    v6[4] = &v8;
    v6[1] = 0LL;
    v8 = 0LL;
    if ( !v3 && !IsEmpty((const struct D2D_RECT_F *)((char *)this + 200)) )
    {
      for ( j = 0LL; j < 4; ++j )
        *(&v5.left + j) = (float)*((int *)this + j + 27);
      CSurfaceBrush::ApplyDirty((__int64)this, (CRectanglesShape *)v6, &v5.left);
    }
    CBrush::NotifyOnChanged((__int64)this, 6u, (__int64)this);
    *((_QWORD *)this + 32) = 0LL;
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v6);
  }
}
