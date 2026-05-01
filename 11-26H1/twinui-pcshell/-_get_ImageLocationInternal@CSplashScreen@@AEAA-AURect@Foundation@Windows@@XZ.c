/*
 * XREFs of ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x18005BAB4
 * Callers:
 *     ?OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z @ 0x18005B990 (-OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x180306AA8 (-OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 *     ?get_ImageLocation@CSplashScreen@@UEAAJPEAURect@Foundation@Windows@@@Z @ 0x180306E90 (-get_ImageLocation@CSplashScreen@@UEAAJPEAURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?GetPhysicalImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA?AURect@Foundation@Windows@@XZ @ 0x18005BDA0 (-GetPhysicalImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA-AURect@Foundation@Windows@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSplashScreen::_get_ImageLocationInternal(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rbx
  int v6; // xmm1_4
  int v7; // ebx
  int v8; // ecx
  int v9; // r8d
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // r8d
  int v19; // eax
  int v20; // ecx
  int v21; // r8d
  int v22; // eax
  int v23; // ecx
  int v24; // r8d
  int v25; // eax
  int v26; // ecx
  int v27; // r8d
  int LegacyModernScaleFactor; // ebx
  int v29; // eax
  int v30; // ecx
  int v31; // edx
  int v32; // eax
  int v33; // ecx
  int v34; // edx
  int v35; // eax
  int v36; // ecx
  int v37; // edx
  int nNumerator; // [rsp+20h] [rbp-40h] BYREF
  int v39; // [rsp+24h] [rbp-3Ch] BYREF
  void **v40; // [rsp+28h] [rbp-38h] BYREF
  int v41; // [rsp+30h] [rbp-30h]
  int v42; // [rsp+34h] [rbp-2Ch]
  __int64 v43; // [rsp+38h] [rbp-28h]
  int nDenominator; // [rsp+40h] [rbp-20h]
  __int64 v45; // [rsp+48h] [rbp-18h] BYREF
  float v46; // [rsp+50h] [rbp-10h]
  float v47; // [rsp+54h] [rbp-Ch]

  v4 = *(_QWORD **)(a1 + 96);
  if ( !((__int64)(*(_QWORD *)(a1 + 104) - (_QWORD)v4) >> 3)
    || (v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 32LL))(*v4)) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 144);
  }
  nNumerator = 0;
  GetSystemScaleFactorForWindow(v5, &nNumerator);
  v39 = 0;
  GetOverrideScaleFactorForWindow(v5, &v39);
  v6 = *(_DWORD *)(a1 + 136);
  v40 = &SplashScreen::CBasicSplashScreenLayout::`vftable';
  v42 = v6;
  v45 = 0LL;
  v43 = 0LL;
  v41 = *(_DWORD *)(a1 + 132);
  nDenominator = nNumerator;
  SplashScreen::CBasicSplashScreenLayout::GetPhysicalImageLocation(&v40, &v45);
  v7 = nDenominator;
  v8 = (int)*(float *)&v45;
  v9 = nDenominator;
  *(_OWORD *)a2 = 0LL;
  v10 = MulDiv(v8, 100, v9);
  v11 = (int)*((float *)&v45 + 1);
  *(float *)a2 = (float)v10;
  v12 = MulDiv(v11, 100, v7);
  v13 = (int)v46;
  *(float *)(a2 + 4) = (float)v12;
  v14 = MulDiv(v13, 100, v7);
  v15 = (int)v47;
  *(float *)(a2 + 8) = (float)v14;
  v16 = MulDiv(v15, 100, v7);
  v17 = v39;
  *(float *)(a2 + 12) = (float)v16;
  if ( v17 != 100 )
  {
    v19 = MulDiv((int)*(float *)a2, 100, v17);
    v20 = (int)*(float *)(a2 + 4);
    v21 = v39;
    *(float *)a2 = (float)v19;
    v22 = MulDiv(v20, 100, v21);
    v23 = (int)*(float *)(a2 + 8);
    v24 = v39;
    *(float *)(a2 + 4) = (float)v22;
    v25 = MulDiv(v23, 100, v24);
    v26 = (int)*(float *)(a2 + 12);
    v27 = v39;
    *(float *)(a2 + 8) = (float)v25;
    *(float *)(a2 + 12) = (float)MulDiv(v26, 100, v27);
  }
  if ( *(_BYTE *)(a1 + 168) )
  {
    LegacyModernScaleFactor = GetLegacyModernScaleFactor((unsigned int)nNumerator);
    v29 = MulDiv((int)*(float *)a2, nNumerator, LegacyModernScaleFactor);
    v30 = (int)*(float *)(a2 + 4);
    v31 = nNumerator;
    *(float *)a2 = (float)v29;
    v32 = MulDiv(v30, v31, LegacyModernScaleFactor);
    v33 = (int)*(float *)(a2 + 8);
    v34 = nNumerator;
    *(float *)(a2 + 4) = (float)v32;
    v35 = MulDiv(v33, v34, LegacyModernScaleFactor);
    v36 = (int)*(float *)(a2 + 12);
    v37 = nNumerator;
    *(float *)(a2 + 8) = (float)v35;
    *(float *)(a2 + 12) = (float)MulDiv(v36, v37, LegacyModernScaleFactor);
  }
  return a2;
}
