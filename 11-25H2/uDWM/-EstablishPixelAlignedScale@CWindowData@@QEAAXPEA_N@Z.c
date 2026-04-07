/*
 * XREFs of ?EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z @ 0x180043FF0
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180043D08 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     PixelAligningFactor @ 0x180044AB8 (PixelAligningFactor.c)
 */

void __fastcall CWindowData::EstablishPixelAlignedScale(CWindowData *this, bool *a2)
{
  bool v2; // di
  double v4; // xmm6_8
  double v6; // xmm10_8
  float v7; // xmm1_4
  int v8; // esi
  int v9; // r14d
  int v10; // esi
  int v11; // r14d
  double v12; // xmm11_8
  __int64 v13; // rcx
  double v14; // xmm5_8
  float v15; // xmm2_4
  float v16; // xmm1_4
  double v17; // xmm0_8
  double v18; // [rsp+B0h] [rbp+38h] BYREF
  double v19; // [rsp+B8h] [rbp+40h] BYREF
  double v20; // [rsp+C0h] [rbp+48h] BYREF
  double v21; // [rsp+C8h] [rbp+50h] BYREF

  v2 = 0;
  v4 = *((double *)this + 42);
  v6 = v4;
  v7 = v4;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 83) - v7) & _xmm) > 0.0000011920929 )
  {
    *((float *)this + 83) = v7;
    v2 = 1;
  }
  if ( v4 == 1.0 )
  {
    if ( *((float *)this + 53) == 1.0 && *((float *)this + 54) == 1.0 )
      goto LABEL_6;
    *((_DWORD *)this + 54) = 1065353216;
    *((_DWORD *)this + 53) = 1065353216;
LABEL_16:
    v2 = 1;
    goto LABEL_6;
  }
  v8 = 0;
  v9 = 0;
  if ( *((_DWORD *)this + 57) - *((_DWORD *)this + 55) >= 0 )
    v8 = *((_DWORD *)this + 57) - *((_DWORD *)this + 55);
  v10 = v8 - *((_DWORD *)this + 68) - *((_DWORD *)this + 67);
  if ( *((_DWORD *)this + 58) - *((_DWORD *)this + 56) >= 0 )
    v9 = *((_DWORD *)this + 58) - *((_DWORD *)this + 56);
  v11 = v9 - *((_DWORD *)this + 70) - *((_DWORD *)this + 69);
  if ( v11 && v10 )
  {
    v20 = 0.0;
    v21 = 0.0;
    v18 = 0.0;
    v19 = 0.0;
    v12 = PixelAligningFactor(this, (unsigned int)v10, &v20, &v18);
    v14 = PixelAligningFactor(v13, (unsigned int)v11, &v21, &v19);
    if ( v18 <= 0.02 && v19 <= 0.02 )
    {
      v17 = ((double)v10 / (double)v11 - v20 / v21) / ((double)v10 / (double)v11);
      if ( v17 < 0.0 )
        *(_QWORD *)&v17 ^= _xmm;
      if ( v17 <= 0.02 )
      {
        v4 = v12;
        v6 = v14;
      }
    }
    v15 = v4;
    v16 = v6;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 53) - v15) & _xmm) > 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 54) - v16) & _xmm) > 0.0000011920929 )
    {
      *((float *)this + 53) = v15;
      *((float *)this + 54) = v16;
      goto LABEL_16;
    }
  }
LABEL_6:
  *a2 = v2;
}
