/*
 * XREFs of ?vInitStrDDAClip@stretch@@YAXPEAU_RECTL@@0000@Z @ 0x140135D90
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x140133474 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall stretch::vInitStrDDAClip(
        stretch *this,
        struct _RECTL *a2,
        struct _RECTL *a3,
        __m128i *a4,
        struct _RECTL *a5)
{
  LONG left; // r9d
  LONG top; // ecx
  struct _RECTL *v9; // r11
  LONG v10; // edx
  struct _RECTL *v11; // r10
  LONG v12; // r8d
  LONG v13; // ecx
  LONG v14; // eax
  LONG v15; // r8d
  LONG right; // edx
  LONG v17; // eax
  LONG v18; // r9d
  LONG v19; // edx
  LONG v20; // r9d
  int v21; // ecx
  LONG v22; // esi
  int v23; // r13d
  int v24; // r15d
  int v25; // r8d
  LONG v26; // ecx
  int v27; // r10d
  int v28; // edx
  bool v29; // cc
  int v30; // r8d
  LONG v31; // edi
  int v32; // r11d
  LONG v33; // eax
  LONG v34; // ebx
  int v35; // r8d
  LONG v36; // r11d
  LONG v37; // eax
  struct _RECTL *v38; // r13
  LONG v39; // eax
  int v40; // r11d
  int v41; // ecx
  LONG v42; // edi
  int v43; // r15d
  int v44; // esi
  int v45; // ecx
  LONG v46; // r8d
  int v47; // eax
  int v48; // r9d
  int v49; // r10d
  LONG v50; // ebx
  LONG v51; // edx
  LONG v52; // r11d
  LONG v53; // r10d
  int v54; // ecx
  int v55; // r10d
  LONG v56; // ecx
  LONG v57; // edx
  LONG v58; // eax
  LONG v59; // ecx
  int v60; // eax
  LONG bottom; // eax
  __m128i v62; // xmm0
  int v63; // ecx
  __m128i v64; // xmm0
  int v65; // eax
  int v66; // ecx
  int v67; // ecx
  int v68; // [rsp+0h] [rbp-80h]
  int v69; // [rsp+0h] [rbp-80h]
  LONG v70; // [rsp+10h] [rbp-70h]
  LONG v71; // [rsp+14h] [rbp-6Ch]
  int v72; // [rsp+18h] [rbp-68h]
  int v73; // [rsp+18h] [rbp-68h]
  struct _RECTL *v74; // [rsp+20h] [rbp-60h]
  struct _RECTL *v75; // [rsp+28h] [rbp-58h]
  __int128 v76; // [rsp+30h] [rbp-50h] BYREF
  __int128 v77; // [rsp+40h] [rbp-40h] BYREF
  __int128 v78; // [rsp+50h] [rbp-30h] BYREF
  __int128 v79; // [rsp+60h] [rbp-20h] BYREF

  v74 = a2;
  v75 = a3;
  left = a2->left;
  top = a2->top;
  v9 = a2;
  v10 = a3->left;
  v11 = a3;
  v12 = a3->top;
  v70 = left;
  v71 = top;
  v78 = 0LL;
  v79 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  if ( left || top )
  {
    LODWORD(v78) = *(_DWORD *)this - left;
    DWORD1(v78) = *((_DWORD *)this + 1) - top;
    DWORD2(v78) = *((_DWORD *)this + 2) - left;
    v60 = *((_DWORD *)this + 3);
    this = (stretch *)&v78;
    HIDWORD(v78) = v60 - top;
    DWORD2(v79) = v9->right - left;
    bottom = v9->bottom;
    v9 = (struct _RECTL *)&v79;
    v74 = (struct _RECTL *)&v79;
    HIDWORD(v79) = bottom - top;
  }
  if ( v10 || v12 )
  {
    v62 = *(__m128i *)v11;
    v11 = (struct _RECTL *)&v76;
    v75 = (struct _RECTL *)&v76;
    LODWORD(v76) = v62.m128i_i32[0];
    DWORD2(v76) = v62.m128i_i32[2] - v10;
    DWORD1(v76) = v62.m128i_i32[1] - v12;
    HIDWORD(v76) = v62.m128i_i32[3] - v12;
    v63 = _mm_cvtsi128_si32(v62);
    v64 = *a4;
    a4 = (__m128i *)&v77;
    DWORD2(v77) = v64.m128i_i32[2] - v10;
    DWORD1(v77) = v64.m128i_i32[1] - v12;
    LODWORD(v76) = v63 - v10;
    v65 = _mm_cvtsi128_si32(v64) - v10;
    v10 = v63 - v10;
    HIDWORD(v77) = v64.m128i_i32[3] - v12;
    LODWORD(v77) = v65;
  }
  v13 = a4->m128i_i32[0];
  if ( v10 > a4->m128i_i32[0] )
  {
    a4->m128i_i32[0] = v10;
    v13 = v10;
  }
  v14 = v11->top;
  v15 = a4->m128i_i32[1];
  if ( v14 > v15 )
  {
    a4->m128i_i32[1] = v14;
    v15 = v14;
  }
  right = v11->right;
  v17 = a4->m128i_i32[2];
  if ( right < v17 )
  {
    a4->m128i_i32[2] = right;
    v17 = right;
  }
  v18 = v11->bottom;
  v19 = a4->m128i_i32[3];
  if ( v18 < v19 )
  {
    a4->m128i_i32[3] = v18;
    v19 = v18;
  }
  if ( v17 < v13 )
  {
    a4->m128i_i32[0] = v17;
  }
  else if ( v19 < v15 )
  {
    a4->m128i_i32[1] = v19;
  }
  v20 = 0;
  v21 = v11->right - v11->left;
  v22 = v9->right;
  if ( v21 < 0 )
  {
    v66 = ~v21;
    v24 = ~(v66 / v22);
    v23 = v22 - v66 % v22 - 1;
  }
  else
  {
    v23 = v21 % v22;
    v24 = v21 / v22;
  }
  v25 = v23 + ((v22 - 1) >> 1);
  v26 = v25;
  if ( v25 >= v22 )
    v26 = v25 - v22;
  v27 = -1;
  v28 = v24 + 1;
  v29 = v25 < v22;
  a5->left = -1;
  a5->right = -1;
  v30 = 0;
  if ( v29 )
    v28 = v24;
  v31 = 0;
  v32 = -1;
  v33 = -1;
  if ( *((int *)this + 2) > 0 )
  {
    v68 = v28;
    while ( 1 )
    {
      v26 += v23;
      v34 = v31;
      v31 += v28 - v30;
      v35 = v24 + v28;
      v36 = v26;
      v72 = v68;
      if ( v26 >= v22 )
        v26 -= v22;
      v29 = v36 < v22;
      v28 = v35 + 1;
      v32 = v27;
      if ( v29 )
        v28 = v35;
      if ( v27 == -1 )
      {
        v32 = -1;
        if ( a4->m128i_i32[0] >= v34 && a4->m128i_i32[0] <= v31 )
        {
          v32 = v20;
          a5->left = v20;
        }
      }
      v37 = a4->m128i_i32[2];
      if ( v37 <= v31 && v37 >= v34 )
        a5->right = v20;
      ++v20;
      v68 = v28;
      v27 = v32;
      if ( v20 >= *((_DWORD *)this + 2) )
        break;
      v30 = v72;
    }
    v33 = a5->right;
  }
  if ( v32 != -1 )
  {
    if ( v33 == -1 )
      v33 = v20;
    goto LABEL_38;
  }
  v38 = a5;
  v40 = 0;
  v33 = a5->right;
  a5->left = 0;
  if ( v33 != -1 )
  {
LABEL_38:
    v38 = a5;
    v39 = v33 + 1;
    v40 = 0;
    goto LABEL_39;
  }
  v39 = 0;
LABEL_39:
  v38->right = v39;
  v41 = v75->bottom - v75->top;
  v42 = v74->bottom;
  if ( v41 < 0 )
  {
    v67 = ~v41;
    v44 = ~(v67 / v42);
    v43 = v42 - v67 % v42 - 1;
  }
  else
  {
    v43 = v41 % v42;
    v44 = v41 / v42;
  }
  v45 = v43 + ((v42 - 1) >> 1);
  v46 = v45;
  if ( v45 >= v42 )
    v46 = v45 - v42;
  v47 = v44 + 1;
  v48 = -1;
  v49 = 0;
  if ( v45 < v42 )
    v47 = v44;
  v38->top = -1;
  v38->bottom = -1;
  v50 = 0;
  v51 = 0;
  if ( *((int *)this + 3) > 0 )
  {
    v69 = v47;
    while ( 1 )
    {
      v46 += v43;
      v52 = v50;
      v50 += v47 - v49;
      v53 = v46;
      v73 = v69;
      v54 = v44 + v47;
      if ( v46 >= v42 )
        v46 -= v42;
      v29 = v53 < v42;
      v47 = v54 + 1;
      v55 = v48;
      if ( v29 )
        v47 = v54;
      if ( v48 == -1 )
      {
        v59 = a4->m128i_i32[1];
        v55 = -1;
        if ( v59 >= v52 && v59 <= v50 )
        {
          v38->top = v51;
          v55 = v51;
        }
      }
      v56 = a4->m128i_i32[3];
      if ( v56 <= v50 && v56 >= v52 )
        v38->bottom = v51;
      ++v51;
      v69 = v47;
      v48 = v55;
      if ( v51 >= *((_DWORD *)this + 3) )
        break;
      v49 = v73;
    }
    if ( v55 != -1 )
      goto LABEL_61;
    v40 = 0;
  }
  if ( v38->bottom != -1 )
  {
    if ( v48 == -1 )
    {
      v58 = v38->bottom;
      v48 = 0;
LABEL_63:
      v40 = v48;
      v57 = v58 + 1;
      goto LABEL_64;
    }
LABEL_61:
    v58 = v38->bottom;
    if ( v58 == -1 )
      v58 = v51;
    goto LABEL_63;
  }
  v57 = 0;
LABEL_64:
  v38->bottom = v57;
  v38->left += v70;
  v38->right += v70;
  v38->top = v71 + v40;
  v38->bottom = v71 + v57;
}
