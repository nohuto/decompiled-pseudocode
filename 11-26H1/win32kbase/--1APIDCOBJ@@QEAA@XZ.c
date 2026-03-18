/*
 * XREFs of ??1APIDCOBJ@@QEAA@XZ @ 0x14003D020
 * Callers:
 *     GreRestoreDC @ 0x140037280 (GreRestoreDC.c)
 *     GreGetNearestColor @ 0x14003AA70 (GreGetNearestColor.c)
 *     GreGetClipBox @ 0x14003ACA0 (GreGetClipBox.c)
 *     ?GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z @ 0x14003B980 (-GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z.c)
 *     ReleaseCacheDC @ 0x14003BF80 (ReleaseCacheDC.c)
 *     NtGdiGetDeviceCaps @ 0x14003C450 (NtGdiGetDeviceCaps.c)
 *     GreGetDeviceCaps @ 0x14003C780 (GreGetDeviceCaps.c)
 *     GreSelectBitmap @ 0x14003E380 (GreSelectBitmap.c)
 *     GreIntersectClipRect @ 0x14003F300 (GreIntersectClipRect.c)
 *     GreSelectPalette @ 0x1400C2C90 (GreSelectPalette.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1400C6780 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     NtGdiGetDeviceCapsAll @ 0x1400FE730 (NtGdiGetDeviceCapsAll.c)
 *     GreSetLayout @ 0x140140EE0 (GreSetLayout.c)
 *     GreCleanDC @ 0x140148000 (GreCleanDC.c)
 *     GreCleanDCAndSetOwnerEx @ 0x140168CE0 (GreCleanDCAndSetOwnerEx.c)
 *     GreSelectBrush @ 0x14016EC90 (GreSelectBrush.c)
 *     NtGdiCreateMetafileDC @ 0x14016F900 (NtGdiCreateMetafileDC.c)
 *     GreSetMagicColors @ 0x14018C3B0 (GreSetMagicColors.c)
 *     GreSelectPen @ 0x1401926B0 (GreSelectPen.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1401F1BC8 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?RestoreAttributesHelper@DCOBJ@@AEAAXXZ @ 0x14003DE00 (-RestoreAttributesHelper@DCOBJ@@AEAAXXZ.c)
 */

void __fastcall APIDCOBJ::~APIDCOBJ(APIDCOBJ *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  _QWORD *v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rcx

  if ( !*((_BYTE *)this + 96) )
    *(_QWORD *)this = 0LL;
  v2 = (_QWORD *)((char *)this + 64);
  if ( this != (APIDCOBJ *)-64LL )
  {
    v3 = *v2;
    if ( *(_QWORD **)(*v2 + 8LL) != v2 )
      goto LABEL_17;
    v4 = (_QWORD *)v2[1];
    if ( (_QWORD *)*v4 != v2 )
      goto LABEL_17;
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    v2[1] = v2;
    *v2 = v2;
  }
  if ( *(_QWORD *)this )
  {
    if ( *((_DWORD *)this + 2) && (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
    {
      DCOBJ::RestoreAttributesHelper(this);
      *(_DWORD *)(*(_QWORD *)this + 44LL) &= ~2u;
      *((_DWORD *)this + 2) = 0;
    }
    _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)this + 12LL));
    *(_QWORD *)this = 0LL;
  }
  v5 = (_QWORD *)((char *)this + 32);
  if ( v5 )
  {
    v6 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) == v5 )
    {
      v7 = (_QWORD *)v5[1];
      if ( (_QWORD *)*v7 == v5 )
      {
        *v7 = v6;
        *(_QWORD *)(v6 + 8) = v7;
        v5[1] = v5;
        *v5 = v5;
        return;
      }
    }
LABEL_17:
    __fastfail(3u);
  }
}
