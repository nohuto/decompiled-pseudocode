/*
 * XREFs of ?GetRelativePoint@InputSite@@QEAA?AV?$tuple@UPoint@Foundation@Windows@@_N@std@@AEBUtagPOINT@@@Z @ 0x18008F9A4
 * Callers:
 *     ?GetRelativePoints@GestureHandler@@AEAA?AV?$tuple@UtagPOINT@@U1@U1@@std@@AEBUGestureClient@1@UtagPOINTF@@@Z @ 0x18008F8BC (-GetRelativePoints@GestureHandler@@AEAA-AV-$tuple@UtagPOINT@@U1@U1@@std@@AEBUGestureClient@1@Uta.c)
 *     ?AveragePoint@@YA?AUPoint@Foundation@Windows@@PEBUInputInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x1801B3204 (-AveragePoint@@YA-AUPoint@Foundation@Windows@@PEBUInputInfo@@V-$ComPtr@VInputSite@@@WRL@Microsof.c)
 * Callees:
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x18003F830 (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ?ScreenPointToRelative@CInputTransform@@QEBA?AUTransformedPoint@@AEBU2@@Z @ 0x180081ED8 (-ScreenPointToRelative@CInputTransform@@QEBA-AUTransformedPoint@@AEBU2@@Z.c)
 */

__int64 __fastcall InputSite::GetRelativePoint(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // si
  __int128 *Transform; // rax
  __m128i v7; // xmm1
  __m128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  float v13; // xmm0_4
  float v14; // xmm1_4
  __int64 result; // rax
  _DWORD v16[2]; // [rsp+20h] [rbp-59h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-51h] BYREF
  _OWORD v18[4]; // [rsp+30h] [rbp-49h] BYREF
  char v19; // [rsp+70h] [rbp-9h]
  _OWORD v20[5]; // [rsp+80h] [rbp+7h] BYREF

  if ( *(_BYTE *)(a1 + 480) )
  {
    v5 = 1;
    Transform = LegacyInputSinkData::GetTransform(a1 + 48, v20);
    v7 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 4));
    v8 = (__m128)COERCE_UNSIGNED_INT((float)*(int *)a3);
    v19 = 0;
    v8.m128_u64[0] = _mm_unpacklo_ps(v8, _mm_cvtepi32_ps(v7)).m128_u64[0];
    v9 = Transform[1];
    v17 = v8.m128_u64[0];
    v10 = *Transform;
    v18[1] = v9;
    v11 = Transform[3];
    v18[0] = v10;
    v12 = Transform[2];
    v18[3] = v11;
    v18[2] = v12;
    CInputTransform::ScreenPointToRelative((float *)v18, (__int64)v16, (float *)&v17);
    v13 = *(float *)v16;
    v14 = *(float *)&v16[1];
  }
  else
  {
    v5 = 0;
    v13 = (float)*(int *)a3;
    v14 = (float)*(int *)(a3 + 4);
  }
  *(_BYTE *)a2 = v5;
  result = a2;
  *(float *)(a2 + 4) = v13;
  *(float *)(a2 + 8) = v14;
  return result;
}
