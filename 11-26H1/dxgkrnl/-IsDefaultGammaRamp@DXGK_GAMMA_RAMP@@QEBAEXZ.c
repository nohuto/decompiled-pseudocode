/*
 * XREFs of ?IsDefaultGammaRamp@DXGK_GAMMA_RAMP@@QEBAEXZ @ 0x1401A3A28
 * Callers:
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1402DCE54 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DXGK_GAMMA_RAMP::IsDefaultGammaRamp(DXGK_GAMMA_RAMP *this)
{
  int v3; // ecx
  char *v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // r8d
  _DWORD *v7; // rdx
  int v8; // r11d
  int v9; // r10d
  int v10; // r9d
  int v11; // eax
  _DWORD *v12; // rdx
  __m128i v13; // xmm0
  unsigned int v14; // eax
  _DWORD *v15; // rdx
  int v16; // r8d

  if ( *((_BYTE *)this + 40) )
    return *((_BYTE *)this + 41);
  *((_BYTE *)this + 40) = 1;
  v3 = *((_DWORD *)this + 4);
  if ( v3 == 1 )
  {
    v4 = (char *)this + 41;
    *((_BYTE *)this + 41) = 1;
  }
  else
  {
    if ( v3 != 2 )
    {
      if ( v3 == 3 )
      {
        v12 = (_DWORD *)*((_QWORD *)this + 4);
        v13 = 0LL;
        if ( *v12 == 1065353216 && v12[1] == 1065353216 && v12[2] == 1065353216 && !v12[3] && !v12[4] && !v12[5] )
        {
          v4 = (char *)this + 41;
          v14 = 0;
          v15 = v12 + 7;
          *v4 = 1;
          while ( v14 < 0x401 )
          {
            v16 = _mm_cvtsi128_si32(v13);
            *(float *)v13.m128i_i32 = *(float *)v13.m128i_i32 + 0.0009765625;
            if ( *(v15 - 1) != v16 || *v15 != v16 || v15[1] != v16 )
              goto LABEL_30;
            ++v14;
            v15 += 3;
          }
          return *v4;
        }
      }
      else
      {
        *((_BYTE *)this + 40) = 0;
      }
      v4 = (char *)this + 41;
LABEL_30:
      *v4 = 0;
      return *v4;
    }
    v5 = *((_QWORD *)this + 4);
    v4 = (char *)this + 41;
    v6 = 0;
    *((_BYTE *)this + 41) = 1;
    v7 = (_DWORD *)(v5 + 512);
    while ( v6 < 0x80 )
    {
      v8 = *(v7 - 128);
      v9 = (v6 | (v6 << 16) | 0x8000) << 9;
      v10 = (2 * (v6 | (v6 << 16) | 0x8000)) | v9;
      if ( v8 != v9 && v8 != v10 )
        goto LABEL_30;
      if ( *v7 != v9 && *v7 != v10 )
        goto LABEL_30;
      v11 = v7[128];
      if ( v11 != v9 && v11 != v10 )
        goto LABEL_30;
      ++v6;
      ++v7;
    }
  }
  return *v4;
}
