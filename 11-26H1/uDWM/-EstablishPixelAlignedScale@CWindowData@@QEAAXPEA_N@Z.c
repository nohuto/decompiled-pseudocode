/*
 * XREFs of ?EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z @ 0x180011310
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180011000 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     PixelAligningFactor @ 0x18000F8E4 (PixelAligningFactor.c)
 */

void __fastcall CWindowData::EstablishPixelAlignedScale(CWindowData *this, bool *a2)
{
  bool v2; // di
  double v4; // xmm6_8
  float v6; // xmm1_4
  double v7; // xmm8_8
  _DWORD *v8; // rax
  int v9; // ebp
  int v10; // r14d
  int v11; // r14d
  int v12; // ebp
  __int64 v13; // rcx
  float *v14; // rax
  __int32 v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  double v18; // xmm0_8
  double v19; // [rsp+A0h] [rbp+8h] BYREF
  double v20; // [rsp+A8h] [rbp+10h] BYREF
  double v21; // [rsp+B0h] [rbp+18h] BYREF
  double v22; // [rsp+B8h] [rbp+20h] BYREF

  v2 = 0;
  v4 = *((double *)this + 42);
  v6 = v4;
  v7 = v4;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 83) - v6) & _xmm) > 0.0000011920929 )
  {
    *((float *)this + 83) = v6;
    v2 = 1;
  }
  if ( v4 == 1.0 )
  {
    if ( *((float *)this + 53) == 1.0 )
    {
      v8 = (_DWORD *)((char *)this + 216);
      if ( *((float *)this + 54) == 1.0 )
      {
        *a2 = v2;
        return;
      }
    }
    else
    {
      v8 = (_DWORD *)((char *)this + 216);
    }
    *v8 = 1065353216;
    *((_DWORD *)this + 53) = 1065353216;
    *a2 = 1;
  }
  else
  {
    v9 = 0;
    v10 = 0;
    if ( *((_DWORD *)this + 57) - *((_DWORD *)this + 55) >= 0 )
      v10 = *((_DWORD *)this + 57) - *((_DWORD *)this + 55);
    v11 = v10 - *((_DWORD *)this + 68) - *((_DWORD *)this + 67);
    if ( *((_DWORD *)this + 58) - *((_DWORD *)this + 56) >= 0 )
      v9 = *((_DWORD *)this + 58) - *((_DWORD *)this + 56);
    v12 = v9 - *((_DWORD *)this + 70) - *((_DWORD *)this + 69);
    if ( v12 && v11 )
    {
      v21 = 0.0;
      v22 = 0.0;
      v19 = 0.0;
      v20 = 0.0;
      PixelAligningFactor((__int64)this, v11, &v21, &v19);
      PixelAligningFactor(v13, v12, &v22, &v20);
      if ( v19 <= 0.02 && v20 <= 0.02 )
      {
        v18 = ((double)v11 / (double)v12 - v21 / v22) / ((double)v11 / (double)v12);
        if ( v18 < 0.0 )
          *(_QWORD *)&v18 ^= _xmm;
        if ( v18 <= 0.02 )
          v7 = v4;
      }
      v14 = (float *)((char *)this + 216);
      COERCE_FLOAT(v15 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
      v16 = v4;
      v17 = v7;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 53) - v16) & v15) > 0.0000011920929
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*v14 - v17) & v15) > 0.0000011920929 )
      {
        *((float *)this + 53) = v16;
        *v14 = v17;
        *a2 = 1;
      }
      else
      {
        *a2 = v2;
      }
    }
    else
    {
      *a2 = v2;
    }
  }
}
