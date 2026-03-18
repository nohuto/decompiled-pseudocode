/*
 * XREFs of ?vInitStrDDAClip@stretch@@YAXPEAU_RECTL@@0000@Z @ 0x1400E93D0
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1400E6B88 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     <none>
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
  LONG v14; // r8d
  LONG v15; // eax
  LONG v16; // edx
  LONG right; // eax
  LONG v18; // eax
  LONG v19; // r9d
  int v20; // eax
  LONG v21; // edi
  int v22; // esi
  int v23; // r15d
  int v24; // r11d
  LONG v25; // ecx
  LONG v26; // edx
  int v27; // r9d
  LONG v28; // ebx
  int v29; // r8d
  int v30; // r10d
  LONG v31; // r11d
  LONG v32; // r9d
  int v33; // eax
  bool v34; // cc
  int v35; // r9d
  LONG v36; // eax
  int v37; // edi
  LONG v38; // eax
  LONG v39; // eax
  struct _RECTL *v40; // rbx
  int v41; // eax
  LONG v42; // ebx
  int v43; // r15d
  int v44; // esi
  int v45; // r8d
  int v46; // ecx
  int v47; // eax
  int v48; // r11d
  int v49; // r10d
  LONG v50; // r9d
  LONG v51; // edx
  LONG v52; // edi
  LONG v53; // r10d
  int v54; // ecx
  int v55; // r10d
  LONG v56; // ecx
  int v57; // edx
  LONG v58; // eax
  LONG v59; // ecx
  LONG v60; // ecx
  LONG v61; // ecx
  int v62; // eax
  LONG bottom; // eax
  __m128i v64; // xmm0
  int v65; // ecx
  __m128i v66; // xmm0
  int v67; // eax
  __int64 v68; // [rsp+0h] [rbp-70h]
  __int64 v69; // [rsp+0h] [rbp-70h]
  __int128 v70; // [rsp+8h] [rbp-68h] BYREF
  __int128 v71; // [rsp+18h] [rbp-58h] BYREF
  LONG v72; // [rsp+28h] [rbp-48h]
  LONG v73; // [rsp+2Ch] [rbp-44h]
  struct _RECTL *v74; // [rsp+30h] [rbp-40h]
  __int64 v75; // [rsp+38h] [rbp-38h]
  struct _RECTL *v76; // [rsp+40h] [rbp-30h]
  __int128 v77; // [rsp+48h] [rbp-28h] BYREF
  __int128 v78; // [rsp+58h] [rbp-18h] BYREF

  v76 = a2;
  v74 = a3;
  left = a2->left;
  top = a2->top;
  v9 = a2;
  v10 = a3->left;
  v11 = a3;
  v12 = a3->top;
  v72 = left;
  v73 = top;
  v77 = 0LL;
  v78 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  if ( left || top )
  {
    LODWORD(v77) = *(_DWORD *)this - left;
    DWORD1(v77) = *((_DWORD *)this + 1) - top;
    DWORD2(v77) = *((_DWORD *)this + 2) - left;
    v62 = *((_DWORD *)this + 3);
    this = (stretch *)&v77;
    HIDWORD(v77) = v62 - top;
    DWORD2(v78) = v9->right - left;
    bottom = v9->bottom;
    v9 = (struct _RECTL *)&v78;
    v76 = (struct _RECTL *)&v78;
    HIDWORD(v78) = bottom - top;
  }
  if ( v10 || v12 )
  {
    v64 = *(__m128i *)v11;
    v11 = (struct _RECTL *)&v70;
    v74 = (struct _RECTL *)&v70;
    LODWORD(v70) = v64.m128i_i32[0];
    DWORD2(v70) = v64.m128i_i32[2] - v10;
    DWORD1(v70) = v64.m128i_i32[1] - v12;
    HIDWORD(v70) = v64.m128i_i32[3] - v12;
    v65 = _mm_cvtsi128_si32(v64);
    v66 = *a4;
    a4 = (__m128i *)&v71;
    DWORD2(v71) = v66.m128i_i32[2] - v10;
    DWORD1(v71) = v66.m128i_i32[1] - v12;
    LODWORD(v70) = v65 - v10;
    v67 = _mm_cvtsi128_si32(v66) - v10;
    v10 = v65 - v10;
    HIDWORD(v71) = v66.m128i_i32[3] - v12;
    LODWORD(v71) = v67;
  }
  v13 = a4->m128i_i32[0];
  if ( v10 > a4->m128i_i32[0] )
  {
    a4->m128i_i32[0] = v10;
    v13 = v10;
  }
  v14 = a4->m128i_i32[1];
  v15 = v11->top;
  if ( v15 > v14 )
  {
    a4->m128i_i32[1] = v15;
    v14 = v15;
  }
  v16 = a4->m128i_i32[2];
  right = v11->right;
  if ( right < v16 )
  {
    a4->m128i_i32[2] = right;
    v16 = right;
  }
  v18 = a4->m128i_i32[3];
  v19 = v11->bottom;
  if ( v19 < v18 )
  {
    a4->m128i_i32[3] = v19;
    v18 = v19;
  }
  if ( v16 < v13 )
  {
    a4->m128i_i32[0] = v16;
  }
  else if ( v18 < v14 )
  {
    a4->m128i_i32[1] = v18;
  }
  v20 = v11->right - v11->left;
  v21 = v9->right;
  if ( v20 < 0 )
  {
    v23 = ~(~v20 / v21);
    v22 = v21 - ~v20 % v21 - 1;
  }
  else
  {
    v22 = v20 % v21;
    v23 = v20 / v21;
  }
  v24 = v22 + ((v21 - 1) >> 1);
  v25 = v24;
  HIDWORD(v68) = v24;
  if ( v24 >= v21 )
  {
    v25 = v24 - v21;
    HIDWORD(v68) = v24 - v21;
  }
  v26 = 0;
  a5->left = -1;
  v27 = 0;
  a5->right = -1;
  v28 = 0;
  if ( *((int *)this + 2) > 0 )
  {
    v29 = v23 + 1;
    v30 = -1;
    if ( v24 < v21 )
      v29 = v23;
    LODWORD(v68) = v29;
    while ( 1 )
    {
      v25 += v22;
      v31 = v28;
      v28 += v29 - v27;
      v32 = v25;
      v75 = v68;
      v33 = v23 + v29;
      HIDWORD(v68) = v25;
      if ( v25 >= v21 )
      {
        v25 -= v21;
        HIDWORD(v68) = v25;
      }
      v34 = v32 < v21;
      v29 = v33 + 1;
      v35 = v30;
      if ( v34 )
        v29 = v33;
      if ( v30 == -1 )
      {
        v35 = -1;
        if ( a4->m128i_i32[0] >= v31 && a4->m128i_i32[0] <= v28 )
        {
          a5->left = v26;
          v35 = v26;
        }
      }
      v36 = a4->m128i_i32[2];
      if ( v36 >= v31 && v36 <= v28 )
        a5->right = v26;
      ++v26;
      LODWORD(v68) = v29;
      v30 = v35;
      if ( v26 >= *((_DWORD *)this + 2) )
        break;
      v27 = v75;
    }
    if ( v35 != -1 )
    {
      v37 = 0;
      goto LABEL_36;
    }
    v11 = v74;
  }
  v37 = 0;
  a5->left = 0;
  if ( a5->right == -1 )
  {
    v39 = 0;
    goto LABEL_39;
  }
LABEL_36:
  v38 = a5->right;
  if ( v38 == -1 )
  {
    a5->right = v26;
    v38 = v26;
  }
  v11 = v74;
  v39 = v38 + 1;
LABEL_39:
  v40 = v76;
  a5->right = v39;
  v41 = v11->bottom - v11->top;
  v42 = v40->bottom;
  if ( v41 < 0 )
  {
    v44 = ~(~v41 / v42);
    v43 = v42 - ~v41 % v42 - 1;
  }
  else
  {
    v43 = v41 % v42;
    v44 = v41 / v42;
  }
  v45 = v44 + 1;
  v46 = v43 + ((v42 - 1) >> 1);
  HIDWORD(v69) = v46;
  v47 = v46;
  if ( v46 >= v42 )
  {
    v47 = v46 - v42;
    HIDWORD(v69) = v46 - v42;
  }
  v48 = -1;
  v49 = 0;
  a5->top = -1;
  v50 = 0;
  a5->bottom = -1;
  v51 = 0;
  if ( *((int *)this + 3) > 0 )
  {
    if ( v46 < v42 )
      v45 = v44;
    LODWORD(v69) = v45;
    while ( 1 )
    {
      v47 += v43;
      v52 = v50;
      v50 += v45 - v49;
      v53 = v47;
      v75 = v69;
      v54 = v44 + v45;
      HIDWORD(v69) = v47;
      if ( v47 >= v42 )
      {
        v47 -= v42;
        HIDWORD(v69) = v47;
      }
      v34 = v53 < v42;
      v45 = v54 + 1;
      v55 = v48;
      if ( v34 )
        v45 = v54;
      if ( v48 == -1 )
      {
        v61 = a4->m128i_i32[1];
        v55 = -1;
        if ( v61 >= v52 && v61 <= v50 )
        {
          a5->top = v51;
          v55 = v51;
        }
      }
      v56 = a4->m128i_i32[3];
      if ( v56 >= v52 && v56 <= v50 )
        a5->bottom = v51;
      ++v51;
      LODWORD(v69) = v45;
      v48 = v55;
      if ( v51 >= *((_DWORD *)this + 3) )
        break;
      v49 = v75;
    }
    if ( v55 != -1 )
      goto LABEL_61;
    v37 = 0;
  }
  if ( a5->bottom != -1 )
  {
    if ( v48 == -1 )
    {
      v58 = a5->bottom;
      v48 = 0;
LABEL_63:
      v37 = v48;
      v57 = v58 + 1;
      goto LABEL_64;
    }
LABEL_61:
    v58 = a5->bottom;
    if ( v58 == -1 )
      v58 = v51;
    goto LABEL_63;
  }
  v57 = 0;
LABEL_64:
  v59 = v72;
  a5->left += v72;
  a5->right += v59;
  v60 = v73;
  a5->top = v73 + v37;
  a5->bottom = v60 + v57;
}
