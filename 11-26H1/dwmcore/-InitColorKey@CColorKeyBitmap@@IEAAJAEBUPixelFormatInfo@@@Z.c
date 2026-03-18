/*
 * XREFs of ?InitColorKey@CColorKeyBitmap@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x180158AB8
 * Callers:
 *     ?Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z @ 0x180158D4C (-Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x180158C44 (-Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 *     ?Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z @ 0x180158CF0 (-Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z.c)
 *     floorf_0 @ 0x1802B9708 (floorf_0.c)
 */

__int64 __fastcall CColorKeyBitmap::InitColorKey(CColorKeyBitmap *this, const struct PixelFormatInfo *a2)
{
  int v3; // ecx
  unsigned int v4; // r13d
  __m128 v7; // xmm6
  __m128 v8; // xmm1
  __m128 v9; // xmm6
  int v10; // eax
  unsigned __int8 v11; // r14
  unsigned __int8 v12; // di
  __m128 v13; // xmm6
  int v14; // ecx
  char v15; // r14
  char v16; // al
  int v17; // ebx
  int v18; // ebx
  unsigned __int8 v19; // al
  __m128 v20; // xmm6
  int v21; // eax
  int v22; // ebx
  int v23; // ebx
  char v24; // si
  unsigned __int8 v25; // di
  unsigned __int8 v26; // bl
  unsigned __int8 v27; // al
  __m128 v28; // xmm6
  int v29; // eax
  unsigned __int8 v30; // di
  unsigned __int8 v31; // bl
  unsigned __int8 v32; // al
  unsigned int v33; // r11d
  unsigned int v34; // edx
  int v35; // r11d
  __int16 v36; // r11
  int v37; // ecx
  unsigned int v38; // edx
  unsigned int v39; // ecx
  unsigned int v40; // r10d
  unsigned int v41; // edx
  int v42; // r10d
  __int16 v43; // r10
  int v44; // ecx
  unsigned int v45; // edx
  unsigned int v46; // ecx
  unsigned int v47; // r9d
  unsigned int v48; // edx
  int v49; // r9d
  __int16 v50; // r9
  int v51; // ecx
  unsigned int v52; // edx
  unsigned int v53; // ecx
  unsigned int v54; // r8d
  unsigned int v55; // edx
  int v56; // r8d
  __int16 v57; // r8
  int v58; // ecx
  unsigned int v59; // edx
  unsigned int v60; // ecx
  unsigned int v61; // edx
  unsigned int v62; // r11d
  unsigned int v63; // edx
  __int16 v64; // r11
  __int16 v65; // r11
  int v66; // ecx
  unsigned int v67; // edx
  unsigned int v68; // ecx
  unsigned int v69; // r10d
  unsigned int v70; // edx
  int v71; // r10d
  __int16 v72; // r10
  int v73; // ecx
  unsigned int v74; // edx
  unsigned int v75; // ecx
  unsigned int v76; // r9d
  unsigned int v77; // edx
  int v78; // r9d
  __int16 v79; // r9
  int v80; // ecx
  unsigned int v81; // edx
  unsigned int v82; // ecx
  unsigned int v83; // r8d
  unsigned int v84; // edx
  int v85; // r8d
  __int16 v86; // r8
  int v87; // ebx
  unsigned int v88; // edx
  unsigned int v89; // ecx
  unsigned int v90; // [rsp+20h] [rbp-58h]
  struct _D3DCOLORVALUE v91; // [rsp+30h] [rbp-48h] BYREF

  v3 = *((_DWORD *)a2 + 2);
  v4 = 0;
  if ( v3 )
  {
    if ( v3 != 1 )
    {
      v90 = 213;
LABEL_4:
      v4 = -2003292288;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292288, v90, 0LL);
      return v4;
    }
    v7 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 40));
    v8 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 56));
  }
  else
  {
    v7 = (__m128)_mm_loadu_si128((const __m128i *)Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB(
                                                    &v91,
                                                    (const struct _D3DCOLORVALUE *)((char *)this + 40)));
    v8 = (__m128)_mm_loadu_si128((const __m128i *)Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB(
                                                    &v91,
                                                    (const struct _D3DCOLORVALUE *)((char *)this + 56)));
  }
  switch ( *(_DWORD *)a2 )
  {
    case 2:
      *(__m128 *)((char *)this + 92) = v7;
      *(__m128 *)((char *)this + 124) = v8;
      return v4;
    case 0xA:
      v33 = _mm_cvtsi128_si32((__m128i)v7);
      v34 = v33 & 0x7FFFFFFF;
      v35 = HIWORD(v33) & 0x8000;
      if ( v34 <= 0x47FFEFFF )
      {
        if ( v34 >= 0x38800000 )
        {
          v39 = v34 + ((v34 >> 13) & 1) - 939520001;
        }
        else
        {
          v37 = 113 - (v34 >> 23);
          if ( v37 >= 24 )
            v38 = 0;
          else
            v38 = (v34 & 0x7FFFFF | 0x800000) >> v37;
          v39 = ((v38 >> 13) & 1) + v38 + 4095;
        }
        v36 = (v39 >> 13) | v35;
      }
      else
      {
        v36 = v35 | 0x7FFF;
      }
      v40 = _mm_cvtsi128_si32((__m128i)_mm_shuffle_ps(v7, v7, 85));
      v41 = v40 & 0x7FFFFFFF;
      v42 = HIWORD(v40) & 0x8000;
      if ( v41 <= 0x47FFEFFF )
      {
        if ( v41 >= 0x38800000 )
        {
          v46 = v41 + ((v41 >> 13) & 1) - 939520001;
        }
        else
        {
          v44 = 113 - (v41 >> 23);
          if ( v44 >= 24 )
            v45 = 0;
          else
            v45 = (v41 & 0x7FFFFF | 0x800000) >> v44;
          v46 = ((v45 >> 13) & 1) + v45 + 4095;
        }
        v43 = (v46 >> 13) | v42;
      }
      else
      {
        v43 = v42 | 0x7FFF;
      }
      v47 = _mm_cvtsi128_si32((__m128i)_mm_shuffle_ps(v7, v7, 170));
      v48 = v47 & 0x7FFFFFFF;
      v49 = HIWORD(v47) & 0x8000;
      if ( v48 <= 0x47FFEFFF )
      {
        if ( v48 >= 0x38800000 )
        {
          v53 = v48 + ((v48 >> 13) & 1) - 939520001;
        }
        else
        {
          v51 = 113 - (v48 >> 23);
          if ( v51 >= 24 )
            v52 = 0;
          else
            v52 = (v48 & 0x7FFFFF | 0x800000) >> v51;
          v53 = ((v52 >> 13) & 1) + v52 + 4095;
        }
        v50 = (v53 >> 13) | v49;
      }
      else
      {
        v50 = v49 | 0x7FFF;
      }
      v54 = _mm_cvtsi128_si32((__m128i)_mm_shuffle_ps(v7, v7, 255));
      v55 = v54 & 0x7FFFFFFF;
      v56 = HIWORD(v54) & 0x8000;
      if ( v55 <= 0x47FFEFFF )
      {
        if ( v55 >= 0x38800000 )
        {
          v60 = v55 + ((v55 >> 13) & 1) - 939520001;
        }
        else
        {
          v58 = 113 - (v55 >> 23);
          if ( v58 >= 24 )
            v59 = 0;
          else
            v59 = (v55 & 0x7FFFFF | 0x800000) >> v58;
          v60 = ((v59 >> 13) & 1) + v59 + 4095;
        }
        v57 = (v60 >> 13) | v56;
      }
      else
      {
        v57 = v56 | 0x7FFF;
      }
      *((_WORD *)this + 42) = v36;
      v61 = _mm_cvtsi128_si32((__m128i)v8);
      *((_WORD *)this + 44) = v50;
      *((_WORD *)this + 45) = v57;
      *((_WORD *)this + 43) = v43;
      v62 = HIWORD(v61);
      v63 = v61 & 0x7FFFFFFF;
      v64 = v62 & 0x8000;
      if ( v63 <= 0x47FFEFFF )
      {
        if ( v63 >= 0x38800000 )
        {
          v68 = v63 + ((v63 >> 13) & 1) - 939520001;
        }
        else
        {
          v66 = 113 - (v63 >> 23);
          if ( v66 >= 24 )
            v67 = 0;
          else
            v67 = (v63 & 0x7FFFFF | 0x800000) >> v66;
          v68 = ((v67 >> 13) & 1) + v67 + 4095;
        }
        v65 = (v68 >> 13) | v64;
      }
      else
      {
        v65 = v64 | 0x7FFF;
      }
      v69 = _mm_cvtsi128_si32((__m128i)_mm_shuffle_ps(v8, v8, 85));
      v70 = v69 & 0x7FFFFFFF;
      v71 = HIWORD(v69) & 0x8000;
      if ( v70 <= 0x47FFEFFF )
      {
        if ( v70 >= 0x38800000 )
        {
          v75 = v70 + ((v70 >> 13) & 1) - 939520001;
        }
        else
        {
          v73 = 113 - (v70 >> 23);
          if ( v73 >= 24 )
            v74 = 0;
          else
            v74 = (v70 & 0x7FFFFF | 0x800000) >> v73;
          v75 = ((v74 >> 13) & 1) + v74 + 4095;
        }
        v72 = (v75 >> 13) | v71;
      }
      else
      {
        v72 = v71 | 0x7FFF;
      }
      v76 = _mm_cvtsi128_si32((__m128i)_mm_shuffle_ps(v8, v8, 170));
      v77 = v76 & 0x7FFFFFFF;
      v78 = HIWORD(v76) & 0x8000;
      if ( v77 <= 0x47FFEFFF )
      {
        if ( v77 >= 0x38800000 )
        {
          v82 = v77 + ((v77 >> 13) & 1) - 939520001;
        }
        else
        {
          v80 = 113 - (v77 >> 23);
          if ( v80 >= 24 )
            v81 = 0;
          else
            v81 = (v77 & 0x7FFFFF | 0x800000) >> v80;
          v82 = ((v81 >> 13) & 1) + v81 + 4095;
        }
        v79 = (v82 >> 13) | v78;
      }
      else
      {
        v79 = v78 | 0x7FFF;
      }
      v83 = _mm_cvtsi128_si32((__m128i)_mm_shuffle_ps(v8, v8, 255));
      v84 = v83 & 0x7FFFFFFF;
      v85 = HIWORD(v83) & 0x8000;
      if ( v84 <= 0x47FFEFFF )
      {
        if ( v84 >= 0x38800000 )
        {
          v89 = v84 + ((v84 >> 13) & 1) - 939520001;
        }
        else
        {
          v87 = 113 - (v84 >> 23);
          if ( v87 >= 24 )
            v88 = 0;
          else
            v88 = (v84 & 0x7FFFFF | 0x800000) >> v87;
          v89 = ((v88 >> 13) & 1) + v88 + 4095;
        }
        v86 = (v89 >> 13) | v85;
      }
      else
      {
        v86 = v85 | 0x7FFF;
      }
      *((_WORD *)this + 58) = v65;
      *((_WORD *)this + 59) = v72;
      *((_WORD *)this + 60) = v79;
      *((_WORD *)this + 61) = v86;
      break;
    case 0x1C:
      v13 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 40));
      v14 = (int)floorf_0((float)(_mm_shuffle_ps(v13, v13, 255).m128_f32[0] * 255.0) + 0.5);
      v15 = -1;
      if ( v14 <= 255 )
      {
        v16 = 0;
        if ( v14 >= 0 )
          v16 = v14;
      }
      else
      {
        v16 = -1;
      }
      v24 = v16;
      v25 = Convert_scRGB_Channel_To_sRGB_Byte(v13.m128_f32[0]);
      v26 = Convert_scRGB_Channel_To_sRGB_Byte(_mm_shuffle_ps(v13, v13, 85).m128_f32[0]);
      v27 = Convert_scRGB_Channel_To_sRGB_Byte(_mm_shuffle_ps(v13, v13, 170).m128_f32[0]);
      v28 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 56));
      *((_BYTE *)this + 80) = v25;
      *((_BYTE *)this + 81) = v26;
      *((_BYTE *)this + 82) = v27;
      *((_BYTE *)this + 83) = v24;
      v29 = (int)floorf_0((float)(_mm_shuffle_ps(v28, v28, 255).m128_f32[0] * 255.0) + 0.5);
      if ( v29 <= 255 )
      {
        v15 = 0;
        if ( v29 >= 0 )
          v15 = v29;
      }
      v30 = Convert_scRGB_Channel_To_sRGB_Byte(v28.m128_f32[0]);
      v31 = Convert_scRGB_Channel_To_sRGB_Byte(_mm_shuffle_ps(v28, v28, 85).m128_f32[0]);
      v32 = Convert_scRGB_Channel_To_sRGB_Byte(_mm_shuffle_ps(v28, v28, 170).m128_f32[0]);
      *((_BYTE *)this + 112) = v30;
      *((_BYTE *)this + 114) = v32;
      *((_BYTE *)this + 113) = v31;
      *((_BYTE *)this + 115) = v15;
      break;
    default:
      if ( (unsigned int)(*(_DWORD *)a2 - 87) >= 2 )
      {
        v90 = 287;
        goto LABEL_4;
      }
      v9 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 40));
      v10 = (int)floorf_0((float)(_mm_shuffle_ps(v9, v9, 255).m128_f32[0] * 255.0) + 0.5);
      v11 = -1;
      if ( v10 <= 255 )
      {
        v12 = 0;
        if ( v10 >= 0 )
          v12 = v10;
      }
      else
      {
        v12 = -1;
      }
      v17 = ((v12 << 8) | Convert_scRGB_Channel_To_sRGB_Byte(v9.m128_f32[0])) << 8;
      v18 = (Convert_scRGB_Channel_To_sRGB_Byte(_mm_shuffle_ps(v9, v9, 85).m128_f32[0]) | v17) << 8;
      v19 = Convert_scRGB_Channel_To_sRGB_Byte(_mm_shuffle_ps(v9, v9, 170).m128_f32[0]);
      v20 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 56));
      *((_DWORD *)this + 19) = v19 | v18;
      v21 = (int)floorf_0((float)(_mm_shuffle_ps(v20, v20, 255).m128_f32[0] * 255.0) + 0.5);
      if ( v21 <= 255 )
      {
        v11 = 0;
        if ( v21 >= 0 )
          v11 = v21;
      }
      v22 = ((v11 << 8) | Convert_scRGB_Channel_To_sRGB_Byte(v20.m128_f32[0])) << 8;
      v23 = (Convert_scRGB_Channel_To_sRGB_Byte(_mm_shuffle_ps(v20, v20, 85).m128_f32[0]) | v22) << 8;
      *((_DWORD *)this + 27) = Convert_scRGB_Channel_To_sRGB_Byte(_mm_shuffle_ps(v20, v20, 170).m128_f32[0]) | v23;
      break;
  }
  return v4;
}
