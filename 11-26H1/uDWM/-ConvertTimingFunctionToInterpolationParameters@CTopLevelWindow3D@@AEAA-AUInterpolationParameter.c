/*
 * XREFs of ?ConvertTimingFunctionToInterpolationParameters@CTopLevelWindow3D@@AEAA?AUInterpolationParameters@@PEAUTA_TIMINGFUNCTION@@@Z @ 0x180073DC8
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow3D::ConvertTimingFunctionToInterpolationParameters(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  float v3; // xmm3_4
  __int32 v4; // xmm4_4
  float v5; // xmm1_4
  unsigned int v6; // eax
  int v8; // ecx

  *(_QWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 8) = 0LL;
  *(_OWORD *)(a2 + 24) = 0LL;
  if ( *(_DWORD *)a3 == 1 )
  {
    v3 = *(float *)(a3 + 4) - *(float *)(a3 + 8);
    COERCE_FLOAT(v4 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
    v5 = *(float *)(a3 + 12) - *(float *)(a3 + 16);
    if ( COERCE_FLOAT(LODWORD(v3) & v4) >= 0.00000011920929 || COERCE_FLOAT(LODWORD(v5) & v4) >= 0.00000011920929 )
    {
      if ( v3 >= -0.00000011920929 || v5 >= -0.00000011920929 )
      {
        if ( v3 > 0.00000011920929 && v5 > 0.00000011920929 )
        {
          *(_DWORD *)a2 = 2;
        }
        else
        {
          v6 = *(_DWORD *)(a1 + 280);
          if ( v6 == 3 || v6 <= 0x12 && (v8 = 277622, _bittest(&v8, v6)) )
          {
            *(_DWORD *)a2 = 5;
            *(double *)(a2 + 8) = *(float *)(a3 + 4);
            *(double *)(a2 + 24) = *(float *)(a3 + 12);
            *(double *)(a2 + 16) = *(float *)(a3 + 8);
            *(double *)(a2 + 32) = *(float *)(a3 + 16);
          }
          else if ( v3 > 0.00000011920929 && v5 < -0.00000011920929 )
          {
            *(_DWORD *)a2 = 3;
          }
        }
      }
      else
      {
        *(_DWORD *)a2 = 1;
      }
    }
  }
  return a2;
}
