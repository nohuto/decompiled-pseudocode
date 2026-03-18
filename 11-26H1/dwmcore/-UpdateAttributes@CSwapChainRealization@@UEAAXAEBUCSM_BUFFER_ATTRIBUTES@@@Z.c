/*
 * XREFs of ?UpdateAttributes@CSwapChainRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1802AE560
 * Callers:
 *     <none>
 * Callees:
 *     ??9@YA_NAEBUtagRECT@@0@Z @ 0x1800E2864 (--9@YA_NAEBUtagRECT@@0@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800E50F0 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?InvalidateDecodeBitmap@CBitmapRealization@@IEAAX_N@Z @ 0x18018E8C4 (-InvalidateDecodeBitmap@CBitmapRealization@@IEAAX_N@Z.c)
 *     ?GetDisplayId@CSwapChainRealization@@UEBA?AVDisplayId@@XZ @ 0x1802AD7D0 (-GetDisplayId@CSwapChainRealization@@UEBA-AVDisplayId@@XZ.c)
 *     ?SetAlphaMode@?$CDeviceTextureT@VIDeviceTexture@@@@QEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1802AE344 (-SetAlphaMode@-$CDeviceTextureT@VIDeviceTexture@@@@QEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 */

void __fastcall CSwapChainRealization::UpdateAttributes(
        CSwapChainRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  char *v2; // rsi
  char v5; // bp
  int v6; // edx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rax
  _DWORD *DisplayId; // rax
  __int64 v11; // r8
  int *v12; // rsi
  __int64 v13; // rcx
  int v14; // edx
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  int v16; // [rsp+50h] [rbp+8h] BYREF
  int v17; // [rsp+58h] [rbp+10h] BYREF

  v2 = (char *)this + 8;
  CSwapChainRealization::GetDisplayId((__int64)this + 8, &v16);
  v5 = 0;
  v6 = *((_DWORD *)a2 + 34) & 1;
  v7 = *((_DWORD *)this + 54) & 1;
  v15 = *(_OWORD *)((char *)this + 132);
  if ( v6 != v7 || *((_QWORD *)a2 + 1) != *((_QWORD *)this + 11) )
  {
    v8 = *((_QWORD *)this + 33);
    if ( v8 )
    {
      v9 = *((_QWORD *)a2 + 1);
      if ( !v6 || !v9 )
        LODWORD(v9) = -1;
      *(_DWORD *)(v8 + 200) = v9;
      v2 = (char *)this + 8;
    }
  }
  DisplayId = CSwapChainRealization::GetDisplayId((__int64)v2, &v17);
  if ( v16 != *DisplayId
    || *((_DWORD *)a2 + 17) != *((_DWORD *)this + 37)
    || *((_DWORD *)a2 + 28) != *((_DWORD *)this + 48)
    || *((_DWORD *)a2 + 29) != *((_DWORD *)this + 49)
    || operator!=((_DWORD *)a2 + 30, (_DWORD *)this + 50) )
  {
    v5 = 1;
  }
  v12 = (int *)((char *)this + 80);
  *((_OWORD *)this + 5) = *(_OWORD *)a2;
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 9) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 10) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 11) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 12) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 13) = *((_OWORD *)a2 + 8);
  if ( TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsEquivalentTo(&v15, (_DWORD *)this + 33, v11) )
  {
    if ( !v5 )
      goto LABEL_18;
  }
  else
  {
    *((_BYTE *)this + 312) = 0;
  }
  CBitmapRealization::InvalidateDecodeBitmap(this, 0);
LABEL_18:
  v13 = *((_QWORD *)this + 33);
  if ( v13 )
  {
    v14 = 3;
    if ( *v12 )
      v14 = *v12;
    CDeviceTextureT<IDeviceTexture>::SetAlphaMode(v13, v14);
    *(_DWORD *)(*((_QWORD *)this + 33) + 196LL) = *((_DWORD *)this + 32);
  }
}
