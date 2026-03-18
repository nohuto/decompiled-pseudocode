/*
 * XREFs of ?CalcSourceRect@CBitmapRealization@@IEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18005F680
 * Callers:
 *     ?CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18005EFCC (-CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV-$TMi.c)
 *     ?GetSourceRect@CDxHandleBitmapRealization@@UEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18005F5B0 (-GetSourceRect@CDxHandleBitmapRealization@@UEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeede.c)
 *     ?GetMPORects@CDxHandleBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18005F5D0 (-GetMPORects@CDxHandleBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?GetContentBoundsAndTransform@CDxHandleBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0PEAVCMILMatrix@@@Z @ 0x180204A10 (-GetContentBoundsAndTransform@CDxHandleBitmapRealization@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 * Callees:
 *     ?IsWellOrdered@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18005F788 (-IsWellOrdered@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800E69E8 (-IsEmpty@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall CBitmapRealization::CalcSourceRect(__int64 a1)
{
  int *result; // rax
  int *v3; // rdi
  bool v4; // cl
  int v5; // edx
  int v6; // r8d
  int v7; // ecx
  int v8; // r9d
  int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  if ( *(_BYTE *)(a1 + 320) )
    return (int *)(a1 + 304);
  v3 = (int *)(a1 + 156);
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)a1 + 48LL))(a1, &v9);
  v4 = 0;
  if ( *(_DWORD *)(a1 + 300) == 2 )
  {
    if ( v3[2] - *v3 > 0 )
      v4 = v3[3] - v3[1] > 0;
    result = (int *)(a1 + 304);
    if ( v4 )
      goto LABEL_7;
LABEL_17:
    v5 = v10;
    v7 = 0;
    v6 = v9;
    v8 = 0;
    goto LABEL_8;
  }
  if ( !(unsigned __int8)TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsWellOrdered(v3)
    || !(unsigned __int8)TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsEmpty()
    && (*v3 < 0 || v3[1] < 0 || v3[2] > v9 || v3[3] > v10) )
  {
    result = (int *)(a1 + 304);
    goto LABEL_17;
  }
  result = (int *)(a1 + 304);
LABEL_7:
  v5 = *(_DWORD *)(a1 + 168);
  v6 = *(_DWORD *)(a1 + 164);
  v7 = *(_DWORD *)(a1 + 160);
  v8 = *v3;
LABEL_8:
  *result = v8;
  result[1] = v7;
  result[2] = v6;
  result[3] = v5;
  *(_BYTE *)(a1 + 320) = 1;
  return result;
}
