/*
 * XREFs of ?CalcSourceRect@CSwapChainRealization@@IEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1802ACB70
 * Callers:
 *     ?GetMPORects@CSwapChainRealization@@UEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1802AD860 (-GetMPORects@CSwapChainRealization@@UEBAXAEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT.c)
 *     ?GetSourceRect@CSwapChainRealization@@UEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1802ADA80 (-GetSourceRect@CSwapChainRealization@@UEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 *     ?GetTransform@CSwapChainRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802ADA90 (-GetTransform@CSwapChainRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 * Callees:
 *     ?IsWellOrdered@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18005F788 (-IsWellOrdered@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?DoesContain@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800E4E6C (-DoesContain@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall CSwapChainRealization::CalcSourceRect(__int64 a1)
{
  int v1; // edi
  int *v3; // rsi
  bool v4; // zf
  bool v5; // dl
  int v6; // r10d
  int v7; // r11d
  __int64 v8; // r8
  bool DoesContain; // al
  _DWORD *v10; // rcx
  int v11; // eax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *(_BYTE *)(a1 + 312) )
    return (_DWORD *)(a1 + 296);
  v3 = (int *)(a1 + 132);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*(_QWORD *)(a1 + 264) + 120LL) + 88LL))(
    *(_QWORD *)(a1 + 264) + 120LL,
    &v14);
  v4 = *(_DWORD *)(a1 + 64) == 2;
  v5 = 0;
  v6 = v14;
  v7 = HIDWORD(v14);
  v13[1] = v14;
  v13[0] = 0LL;
  if ( v4 )
  {
    if ( v3[2] - *v3 > 0 )
      v5 = v3[3] - v3[1] > 0;
  }
  else if ( !TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsWellOrdered(v3)
         || (DoesContain = TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::DoesContain(
                             (__int64)v13,
                             (__int64)v3,
                             v8),
             v5 = 1,
             !DoesContain) )
  {
    v5 = 0;
  }
  v10 = (_DWORD *)(a1 + 296);
  if ( v5 )
  {
    v1 = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 304) = *(_DWORD *)(a1 + 140);
    *(_DWORD *)(a1 + 308) = *(_DWORD *)(a1 + 144);
    v11 = *v3;
  }
  else
  {
    *(_DWORD *)(a1 + 304) = v6;
    v11 = 0;
    *(_DWORD *)(a1 + 308) = v7;
  }
  *v10 = v11;
  *(_DWORD *)(a1 + 300) = v1;
  *(_BYTE *)(a1 + 312) = 1;
  return v10;
}
