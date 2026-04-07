/*
 * XREFs of ?ConvertTimingFunctionToInterpolationParameters@CTopLevelWindow3D@@AEAA?AUInterpolationParameters@@PEAUTA_TIMINGFUNCTION@@@Z @ 0x18004B370
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180049AF4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow3D::ConvertTimingFunctionToInterpolationParameters(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  float v3; // xmm3_4
  float v4; // xmm1_4
  unsigned int v6; // eax
  int v7; // ecx

  *(_DWORD *)(a2 + 4) = 0;
  *(_OWORD *)(a2 + 8) = 0LL;
  *(_OWORD *)(a2 + 24) = 0LL;
  *(_DWORD *)a2 = 0;
  if ( *(_DWORD *)a3 == 1 )
  {
    v3 = *(float *)(a3 + 4) - *(float *)(a3 + 8);
    v4 = *(float *)(a3 + 12) - *(float *)(a3 + 16);
    if ( COERCE_FLOAT(LODWORD(v3) & _xmm) >= 0.00000011920929 || COERCE_FLOAT(LODWORD(v4) & _xmm) >= 0.00000011920929 )
    {
      if ( v3 >= -0.00000011920929 || v4 >= -0.00000011920929 )
      {
        if ( v3 <= 0.00000011920929 || v4 <= 0.00000011920929 )
        {
          v6 = *(_DWORD *)(a1 + 336);
          if ( v6 <= 0x12 && (v7 = 274558, _bittest(&v7, v6)) )
          {
            *(_DWORD *)a2 = 5;
            *(double *)(a2 + 8) = *(float *)(a3 + 4);
            *(double *)(a2 + 24) = *(float *)(a3 + 12);
            *(double *)(a2 + 16) = *(float *)(a3 + 8);
            *(double *)(a2 + 32) = *(float *)(a3 + 16);
          }
          else if ( v3 > 0.00000011920929 && v4 < -0.00000011920929 )
          {
            *(_DWORD *)a2 = 3;
          }
        }
        else
        {
          *(_DWORD *)a2 = 2;
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
