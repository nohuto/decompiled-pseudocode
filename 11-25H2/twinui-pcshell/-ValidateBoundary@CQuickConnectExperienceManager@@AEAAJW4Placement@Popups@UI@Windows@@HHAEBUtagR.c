/*
 * XREFs of ?ValidateBoundary@CQuickConnectExperienceManager@@AEAAJW4Placement@Popups@UI@Windows@@HHAEBUtagRECT@@AEA_N@Z @ 0x18038E274
 * Callers:
 *     ?FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x18038A63C (-FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CQuickConnectExperienceManager::ValidateBoundary(
        float *a1,
        int a2,
        int a3,
        int a4,
        unsigned int *a5,
        _BYTE *a6)
{
  int v6; // edx
  int v7; // edx
  int v8; // edx
  float v9; // xmm1_4
  __m128i v10; // xmm0
  bool v11; // cf
  float v12; // xmm1_4
  __m128i v13; // xmm0

  *a6 = 0;
  v6 = a2 - 1;
  if ( !v6 )
  {
LABEL_9:
    v12 = a1[87] - (float)a4;
    v13 = _mm_cvtsi32_si128(a5[1]);
    goto LABEL_10;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v9 = (float)(a1[89] + a1[87]) + (float)a4;
    v10 = _mm_cvtsi32_si128(a5[3]);
    goto LABEL_6;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      v9 = (float)(a1[88] + a1[86]) + (float)a3;
      v10 = _mm_cvtsi32_si128(a5[2]);
LABEL_6:
      v11 = _mm_cvtepi32_ps(v10).m128_f32[0] < v9;
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  v12 = a1[86] - (float)a3;
  v13 = _mm_cvtsi32_si128(*a5);
LABEL_10:
  v11 = v12 < _mm_cvtepi32_ps(v13).m128_f32[0];
LABEL_11:
  if ( !v11 )
    *a6 = 1;
  return 0LL;
}
