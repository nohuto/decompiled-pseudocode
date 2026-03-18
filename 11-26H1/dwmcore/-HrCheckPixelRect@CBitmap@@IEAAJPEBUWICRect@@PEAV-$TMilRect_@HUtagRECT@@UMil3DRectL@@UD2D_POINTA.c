/*
 * XREFs of ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800E8098
 * Callers:
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800E7330 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800E7B00 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800E69E8 (-IsEmpty@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CBitmap::HrCheckPixelRect(__int64 a1, int *a2, int *a3)
{
  int v3; // eax
  int v4; // r9d
  unsigned int v5; // ebx
  int v6; // r9d
  int v7; // r10d
  int v8; // eax
  unsigned int v10; // r11d
  int v11; // eax
  unsigned int v12; // edx
  int v13; // r14d
  int v14; // ebp
  signed int v15; // esi
  int v16; // edi
  int v17; // edx
  _QWORD *v18; // r8
  int v19; // r9d
  int v20; // r10d
  int v21; // r11d
  unsigned int v22; // [rsp+20h] [rbp-28h]

  v3 = *(_DWORD *)(a1 + 88);
  v4 = *(_DWORD *)(a1 + 92);
  v5 = 0;
  *(_QWORD *)a3 = 0LL;
  a3[2] = v3;
  a3[3] = v4;
  if ( !a2 )
    return v5;
  v6 = *a2;
  v7 = a2[1];
  if ( *a2 < 0 )
  {
    v22 = 371;
    goto LABEL_5;
  }
  v8 = a2[2];
  if ( v8 < 0 )
  {
    v22 = 372;
LABEL_5:
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, v22, 0LL);
    return v5;
  }
  v10 = v8 + v6;
  if ( v8 + v6 < (unsigned int)v6 )
  {
    v22 = 373;
    goto LABEL_5;
  }
  if ( v10 > 0x7FFFFFFF )
  {
    v22 = 374;
    goto LABEL_5;
  }
  if ( v7 < 0 )
  {
    v22 = 376;
    goto LABEL_5;
  }
  v11 = a2[3];
  if ( v11 < 0 )
  {
    v22 = 377;
    goto LABEL_5;
  }
  v12 = v11 + v7;
  if ( v11 + v7 < (unsigned int)v7 )
  {
    v22 = 378;
    goto LABEL_5;
  }
  if ( v12 > 0x7FFFFFFF )
  {
    v22 = 379;
    goto LABEL_5;
  }
  v13 = 0;
  if ( v6 > 0 )
  {
    *a3 = v6;
    v13 = v6;
  }
  v14 = 0;
  if ( v7 > 0 )
  {
    a3[1] = v7;
    v14 = v7;
  }
  v15 = a3[2];
  if ( (int)v10 < v15 )
  {
    a3[2] = v10;
    v15 = v10;
  }
  v16 = a3[3];
  if ( (int)v12 < v16 )
  {
    a3[3] = v12;
    v16 = v11 + v7;
  }
  if ( TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsEmpty(a3) )
  {
    v18[1] = 0LL;
    v13 = 0;
    *v18 = 0LL;
    v14 = 0;
    v15 = 0;
    v16 = 0;
  }
  if ( v17 > v20 && v17 == v16 && v21 > v19 && v21 == v15 && v20 == v14 && v19 == v13 )
    return v5;
  return 2147942487LL;
}
