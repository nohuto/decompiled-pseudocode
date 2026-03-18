/*
 * XREFs of ?GrepGetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z @ 0x1401A85BC
 * Callers:
 *     NtGdiGetBoundsRect @ 0x1401A8500 (NtGdiGetBoundsRect.c)
 * Callees:
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     bCvtPts1 @ 0x14007822C (bCvtPts1.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400ABFA0 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepGetBoundsRect(DC **this, struct tagRECT *a2, __int16 a3)
{
  char v3; // bl
  DC *v5; // rcx
  char v6; // r12
  unsigned int v8; // edi
  LONG *v9; // rsi
  __m128i v11; // xmm1
  __int64 v12; // rcx
  int v13; // eax
  LONG v14; // r8d
  LONG v15; // r9d
  int v16; // eax
  LONG v17; // ecx
  LONG v18; // r10d
  LONG v19; // eax
  LONG v20; // eax
  LONG v21; // eax
  LONG v22; // eax
  LONG v23; // r9d
  LONG bottom; // r8d
  LONG right; // r10d
  LONG top; // r11d
  LONG v27; // ecx
  LONG v28; // eax
  LONG v29; // edx
  LONG v30; // eax
  LONG v31; // eax
  LONG v32; // eax
  LONG v33; // eax
  LONG v34; // eax
  LONG v35; // eax
  int v36; // edx
  LONG v37; // ecx
  LONG v38; // eax
  LONG v39; // eax
  LONG v40; // eax
  LONG v41; // eax
  LONG v42; // eax
  LONG v43; // eax
  LONG v44; // eax
  __int64 v45; // [rsp+20h] [rbp-A9h] BYREF
  _BYTE v46[160]; // [rsp+30h] [rbp-99h] BYREF
  __int128 v47; // [rsp+D0h] [rbp+7h] BYREF
  LONG v48; // [rsp+E0h] [rbp+17h]
  LONG v49; // [rsp+E4h] [rbp+1Bh]
  LONG v50; // [rsp+E8h] [rbp+1Fh]
  LONG v51; // [rsp+ECh] [rbp+23h]

  v3 = 0;
  v5 = *this;
  v6 = a3;
  v8 = 3;
  v9 = 0LL;
  if ( a3 < 0 )
  {
    v9 = (LONG *)((char *)v5 + 1064);
    if ( *((_DWORD *)v5 + 266) < *((_DWORD *)v5 + 268) && *((_DWORD *)v5 + 267) < *((_DWORD *)v5 + 269) )
      goto LABEL_4;
    return 1;
  }
  if ( (a3 & 0x4000) == 0 )
  {
    if ( IsRectEmptyInl((const struct tagRECT *)((char *)v5 + 1096)) )
      return 1;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v46);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v46, (struct XDCOBJ *)this, 0) )
    {
      v11 = *(__m128i *)((char *)XDCOBJ::prgnEffRao(this) + 52);
      v9 = (LONG *)((char *)*this + 1096);
      v12 = *((_DWORD *)*this + 10) & 1;
      v13 = *((_DWORD *)*this + 2 * v12 + 254);
      v14 = _mm_cvtsi128_si32(v11) - v13;
      v15 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 8)) - v13;
      v16 = *((_DWORD *)*this + 2 * v12 + 255);
      v17 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 4)) - v16;
      v18 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 12)) - v16;
      v19 = *v9;
      if ( *v9 <= v14 )
        v19 = v14;
      a2->left = v19;
      v20 = v9[2];
      if ( v20 >= v15 )
        v20 = v15;
      a2->right = v20;
      v21 = v9[1];
      if ( v21 <= v17 )
        v21 = v17;
      a2->top = v21;
      v22 = v9[3];
      if ( v22 >= v18 )
        v22 = v18;
      a2->bottom = v22;
      DC::QuickInitXform(*this, &v45, 1026LL);
      if ( !v45 )
        goto LABEL_21;
      if ( (*(_BYTE *)(v45 + 32) & 1) != 0 )
      {
        if ( (*(_BYTE *)(v45 + 32) & 0x43) == 0x43 || (unsigned int)bCvtPts1(v45, (__int64)a2, 2LL) )
          v3 = 1;
        v8 = v3 != 0 ? 3 : 0;
      }
      else
      {
        bottom = a2->bottom;
        right = a2->right;
        top = a2->top;
        v47 = (__int128)*a2;
        v23 = v47;
        v48 = v47;
        v49 = bottom;
        v50 = right;
        v51 = top;
        if ( (*(_BYTE *)(v45 + 32) & 0x43) != 0x43 )
        {
          if ( !(unsigned int)bCvtPts1(v45, (__int64)&v47, 4LL) )
          {
LABEL_21:
            v8 = 0;
            goto LABEL_22;
          }
          top = v51;
          right = v50;
          bottom = v49;
          v23 = v48;
        }
        v27 = DWORD2(v47);
        v28 = DWORD2(v47);
        v29 = v47;
        if ( (int)v47 < SDWORD2(v47) )
          v28 = v47;
        if ( v28 >= v23 )
        {
          v30 = v23;
        }
        else
        {
          v30 = DWORD2(v47);
          if ( (int)v47 < SDWORD2(v47) )
            v30 = v47;
        }
        if ( v30 >= right )
        {
          v32 = right;
        }
        else
        {
          v31 = DWORD2(v47);
          if ( (int)v47 < SDWORD2(v47) )
            v31 = v47;
          if ( v31 >= v23 )
          {
            v32 = v23;
          }
          else
          {
            v32 = DWORD2(v47);
            if ( (int)v47 < SDWORD2(v47) )
              v32 = v47;
          }
        }
        a2->left = v32;
        v33 = v27;
        if ( v29 > v27 )
          v33 = v29;
        if ( v33 <= v23 )
        {
          v34 = v23;
        }
        else
        {
          v34 = v27;
          if ( v29 > v27 )
            v34 = v29;
        }
        if ( v34 <= right )
        {
          v27 = right;
        }
        else
        {
          v35 = v27;
          if ( v29 > v27 )
            v35 = v29;
          if ( v35 <= v23 )
          {
            v27 = v23;
          }
          else if ( v29 > v27 )
          {
            v27 = v29;
          }
        }
        v36 = DWORD1(v47);
        a2->right = v27;
        v37 = HIDWORD(v47);
        v38 = HIDWORD(v47);
        if ( v36 < SHIDWORD(v47) )
          v38 = v36;
        if ( v38 >= bottom )
        {
          v39 = bottom;
        }
        else
        {
          v39 = HIDWORD(v47);
          if ( v36 < SHIDWORD(v47) )
            v39 = v36;
        }
        if ( v39 >= top )
        {
          v41 = top;
        }
        else
        {
          v40 = HIDWORD(v47);
          if ( v36 < SHIDWORD(v47) )
            v40 = v36;
          if ( v40 >= bottom )
          {
            v41 = bottom;
          }
          else
          {
            v41 = HIDWORD(v47);
            if ( v36 < SHIDWORD(v47) )
              v41 = v36;
          }
        }
        a2->top = v41;
        v42 = v37;
        if ( v36 > v37 )
          v42 = v36;
        if ( v42 <= bottom )
        {
          v43 = bottom;
        }
        else
        {
          v43 = v37;
          if ( v36 > v37 )
            v43 = v36;
        }
        if ( v43 <= top )
        {
          v37 = top;
        }
        else
        {
          v44 = v37;
          if ( v36 > v37 )
            v44 = v36;
          if ( v44 <= bottom )
          {
            v37 = bottom;
          }
          else if ( v36 > v37 )
          {
            v37 = v36;
          }
        }
        a2->bottom = v37;
      }
    }
    else
    {
      v8 = XDCOBJ::bFullScreen((XDCOBJ *)this) != 0;
    }
LABEL_22:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v46);
    if ( v8 != 3 )
      return v8;
    goto LABEL_5;
  }
  v9 = (LONG *)((char *)v5 + 1080);
  if ( IsRectEmptyInl((const struct tagRECT *)((char *)v5 + 1080)) )
    return 1;
LABEL_4:
  *a2 = *(struct tagRECT *)v9;
LABEL_5:
  if ( (v6 & 1) != 0 )
  {
    v9[1] = 0x7FFFFFFF;
    *v9 = 0x7FFFFFFF;
    v9[3] = 0x80000000;
    v9[2] = 0x80000000;
  }
  return v8;
}
