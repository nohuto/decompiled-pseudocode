/*
 * XREFs of ?CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z @ 0x18017DA08
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x18017F654 (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     powf @ 0x18009AB78 (powf.c)
 */

__int64 __fastcall ControllerProcessor::CalculateZoomDelta(ControllerProcessor *this, float a2)
{
  float v3; // xmm0_4
  int v4; // ebx
  float v5; // xmm6_4
  float v6; // xmm0_4
  float v7; // xmm6_4
  float v8; // xmm1_4

  if ( COERCE_FLOAT(LODWORD(a2) & _xmm) > 0.00000011920929 )
  {
    v3 = powf(COERCE_FLOAT(LODWORD(a2) & _xmm), 3.5999999);
    v4 = *((_DWORD *)this + 110);
    v5 = a2 * v3;
    v6 = (float)(int)(GetTickCount() - v4);
    if ( v6 < 2500.0 )
      v5 = v5 * (float)((float)(powf(v6 / 2500.0, 0.80000001) * 0.94999999) + 0.050000001);
    v7 = v5 * 0.050000001;
    if ( v7 >= 0.0 )
      v8 = v7 + 1.0;
    else
      v8 = 1.0 / (float)(1.0 - v7);
    *((float *)this + 109) = v8 + *((float *)this + 109);
  }
  else
  {
    *((_DWORD *)this + 110) = GetTickCount();
  }
  return 0LL;
}
