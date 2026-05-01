/*
 * XREFs of ?GetPhysicalImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA?AURect@Foundation@Windows@@XZ @ 0x1800D8B30
 * Callers:
 *     ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x1800D8850 (-_get_ImageLocationInternal@CSplashScreen@@AEAA-AURect@Foundation@Windows@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float *__fastcall SplashScreen::CBasicSplashScreenLayout::GetPhysicalImageLocation(__int64 a1, float *a2)
{
  int v4; // esi
  float v5; // xmm6_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm4_4
  float v9; // xmm0_4
  float v10; // xmm5_4
  float *result; // rax

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  v5 = (float)MulDiv(300, *(_DWORD *)(a1 + 24), 100);
  v6 = (float)MulDiv(620, *(_DWORD *)(a1 + 24), 100);
  if ( v4 == 1 )
  {
    v5 = v5 * 0.75;
    v6 = v6 * 0.75;
  }
  else if ( !v4 )
  {
    v5 = v5 * 0.5;
    v6 = v6 * 0.5;
  }
  v7 = *(float *)(a1 + 8);
  v8 = 0.0;
  v9 = *(float *)(a1 + 12);
  if ( v6 >= v7 )
  {
    v6 = *(float *)(a1 + 8);
    v10 = 0.0;
  }
  else
  {
    v10 = (float)(5 * (int)(float)((float)((float)((float)(v7 - v6) * 0.5) / 5.0) + 0.5));
  }
  if ( v5 >= v9 )
    v5 = *(float *)(a1 + 12);
  else
    v8 = (float)(5 * (int)(float)((float)((float)((float)(v9 - v5) * 0.5) / 5.0) + 0.5));
  *a2 = v10;
  result = a2;
  a2[1] = v8;
  a2[2] = v6;
  a2[3] = v5;
  return result;
}
