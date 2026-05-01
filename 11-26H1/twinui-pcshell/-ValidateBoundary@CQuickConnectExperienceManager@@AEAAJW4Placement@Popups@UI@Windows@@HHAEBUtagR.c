/*
 * XREFs of ?ValidateBoundary@CQuickConnectExperienceManager@@AEAAJW4Placement@Popups@UI@Windows@@HHAEBUtagRECT@@AEA_N@Z @ 0x18039549C
 * Callers:
 *     ?FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x1803917DC (-FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CQuickConnectExperienceManager::ValidateBoundary(
        float *a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        _BYTE *a6)
{
  int v6; // edx
  int v7; // edx
  int v8; // edx
  float v9; // xmm1_4
  __m128i v10; // xmm0
  bool v11; // cf

  *a6 = 0;
  v6 = a2 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( !v7 )
    {
      v9 = (float)(a1[89] + a1[87]) + (float)a4;
      v10 = _mm_cvtsi32_si128(*(_DWORD *)(a5 + 12));
      goto LABEL_8;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v11 = (float)(a1[86] - (float)a3) < (float)*(int *)a5;
      goto LABEL_9;
    }
    if ( v8 == 1 )
    {
      v9 = (float)(a1[88] + a1[86]) + (float)a3;
      v10 = _mm_cvtsi32_si128(*(_DWORD *)(a5 + 8));
LABEL_8:
      v11 = _mm_cvtepi32_ps(v10).m128_f32[0] < v9;
LABEL_9:
      if ( v11 )
        return 0LL;
      goto LABEL_12;
    }
  }
  if ( (float)(a1[87] - (float)a4) >= (float)*(int *)(a5 + 4) )
LABEL_12:
    *a6 = 1;
  return 0LL;
}
