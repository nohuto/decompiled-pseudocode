/*
 * XREFs of ?bGetNtoW_Win31@@YAHPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@KH@Z @ 0x1400C3444
 * Callers:
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1400C2ED0 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@KQEAU_POINTL@@H@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x140108968 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?lGetDefaultWorldHeight@@YAJAEAVXDCOBJ@@@Z @ 0x14010CA0C (-lGetDefaultWorldHeight@@YAJAEAVXDCOBJ@@@Z.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEBAKXZ @ 0x14010F6B4 (-ulLogPixelsX@PDEVOBJ@@QEBAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEBAKXZ @ 0x14010F700 (-ulLogPixelsY@PDEVOBJ@@QEBAKXZ.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1401F48EC (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall bGetNtoW_Win31(
        struct MATRIX *a1,
        struct tagLOGFONTW *a2,
        __int16 **a3,
        struct XDCOBJ *a4,
        char a5,
        int a6)
{
  __int64 v7; // r9
  __int64 v10; // r8
  int v11; // r13d
  char v12; // r14
  LONG lfHeight; // ebx
  int v14; // r12d
  __int16 *v15; // rax
  int v16; // ecx
  __m128 v17; // xmm6
  float v18; // xmm3_4
  float v19; // xmm7_4
  __int64 v20; // rax
  int *v21; // rcx
  int v22; // edx
  __m128 v23; // xmm2
  BOOL v24; // eax
  unsigned int *v25; // rbx
  __int64 lfWidth; // rcx
  __int16 *v27; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v29; // rcx
  unsigned int v30; // esi
  int v31; // eax
  int v32; // esi
  unsigned int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // ebx
  int v37; // ecx
  __int16 *v38; // rax
  int lfOrientation; // eax
  __m128i v41; // xmm0
  __int32 v42; // eax
  __int128 v43; // xmm1
  int v44; // eax
  __int128 v45; // xmm0
  int v46; // r8d
  __m128i v47; // xmm1
  int v48; // eax
  __int64 v49; // rdx
  int v50; // r11d
  float v51; // xmm2_4
  __m128i v52; // xmm0
  int v53; // r8d
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // r10d
  unsigned int v57; // edx
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned int v60; // eax
  unsigned int v61; // eax
  __int64 v62; // [rsp+28h] [rbp-A9h] BYREF
  struct tagLOGFONTW *v63; // [rsp+30h] [rbp-A1h]
  unsigned int *v64; // [rsp+38h] [rbp-99h] BYREF
  struct MATRIX *v65; // [rsp+40h] [rbp-91h] BYREF
  _DWORD v66[4]; // [rsp+48h] [rbp-89h] BYREF
  __int64 v67; // [rsp+58h] [rbp-79h]
  __int64 v68; // [rsp+60h] [rbp-71h]
  int v69; // [rsp+68h] [rbp-69h]
  __int128 v70; // [rsp+70h] [rbp-61h] BYREF
  __int128 v71; // [rsp+80h] [rbp-51h]
  int v72; // [rsp+90h] [rbp-41h]

  v63 = a2;
  v7 = *(_QWORD *)a4;
  v10 = 1LL;
  if ( *(float *)(v7 + 452) == 0.0 || (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v7 + 456)) )
    v11 = 0;
  else
    v11 = v10;
  if ( (a5 & 2) != 0 || !v11 && (*(_DWORD *)(*(_QWORD *)(v7 + 976) + 340LL) & 0x1000) != 0 )
    v12 = 0;
  else
    v12 = v10;
  lfHeight = a2->lfHeight;
  v14 = v10;
  if ( !a2->lfHeight )
    lfHeight = lGetDefaultWorldHeight(a4);
  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(a1, a2, v10) + 96) + 19684LL)
    && !_wcsicmp(v63->lfFaceName, L"MS Shell Dlg")
    && !a6 )
  {
    if ( lfHeight > 0 )
    {
      if ( lfHeight >= 12 )
      {
        if ( lfHeight <= 15 )
        {
          v15 = *a3;
          lfHeight = 14;
          goto LABEL_96;
        }
        if ( lfHeight <= 19 )
          lfHeight = 16;
      }
    }
    else
    {
      if ( (unsigned int)(lfHeight + 12) <= 3 )
      {
        lfHeight = -11;
LABEL_58:
        v15 = *a3;
        goto LABEL_12;
      }
      if ( (unsigned int)(lfHeight + 15) <= 2 )
      {
        lfHeight = -13;
        goto LABEL_58;
      }
    }
  }
  v15 = *a3;
  if ( lfHeight <= 0 )
  {
LABEL_12:
    v16 = v15[28];
    lfHeight = -lfHeight;
    goto LABEL_13;
  }
LABEL_96:
  v16 = v15[30] + v15[31];
LABEL_13:
  v17 = (__m128)COERCE_UNSIGNED_INT((float)lfHeight);
  v17.m128_f32[0] = v17.m128_f32[0] / (float)v16;
  v18 = v17.m128_f32[0];
  *((_DWORD *)a1 + 3) = v17.m128_i32[0];
  if ( v12 )
  {
    v20 = *(_QWORD *)a4;
    if ( v11 )
    {
      v19 = *(float *)(v20 + 452);
      v23 = (__m128)*(unsigned int *)(v20 + 456);
    }
    else
    {
      v21 = *(int **)(v20 + 976);
      v22 = v21[85];
      if ( (v22 & 0x1000) != 0 )
      {
        v19 = *(float *)&v62;
        v23 = (__m128)(unsigned int)v62;
      }
      else if ( (v22 & 2) != 0 )
      {
        v23 = (__m128)*(unsigned int *)(v20 + 332);
        v19 = *(float *)(v20 + 320) * 0.0625;
        v23.m128_f32[0] = v23.m128_f32[0] * 0.0625;
      }
      else
      {
        v23 = (__m128)COERCE_UNSIGNED_INT((float)v21[84]);
        v19 = (float)v21[83] / (float)v21[79];
        v23.m128_f32[0] = v23.m128_f32[0] / (float)v21[80];
      }
    }
    if ( v19 != 1.0 )
      v14 = 0;
    v24 = v23.m128_f32[0] < 0.0;
    if ( v23.m128_f32[0] != 1.0 )
    {
      v23.m128_f32[0] = v23.m128_f32[0] * v17.m128_f32[0];
      v17 = v23;
    }
    if ( v17.m128_f32[0] < 0.0 )
      v17 = _mm_xor_ps(v17, (__m128)(unsigned int)_xmm);
    if ( v24 )
      *((_DWORD *)a1 + 3) ^= _xmm;
  }
  else
  {
    v19 = *(float *)&v62;
  }
  v25 = *(unsigned int **)(*(_QWORD *)a4 + 48LL);
  v64 = v25;
  if ( !v25 )
    return 0LL;
  lfWidth = (unsigned int)v63->lfWidth;
  if ( !(_DWORD)lfWidth )
    goto LABEL_29;
  v46 = -(int)lfWidth;
  v47 = (__m128i)v17;
  v48 = (*a3)[38];
  if ( (int)lfWidth >= 0 )
    v46 = v63->lfWidth;
  LODWORD(v49) = v46;
  v50 = 1;
  v51 = (float)v48;
  v52 = (__m128i)COERCE_UNSIGNED_INT((float)v46);
  *(float *)v47.m128i_i32 = v17.m128_f32[0] * (float)v48;
  if ( v12 )
  {
    if ( !v14 )
    {
      *(float *)v52.m128i_i32 = *(float *)v52.m128i_i32 * v19;
      v56 = _mm_cvtsi128_si32(v52);
      v57 = (unsigned __int8)(v56 >> 23);
      if ( v57 > 0x9E )
      {
        v50 = 0;
        LODWORD(v49) = v46;
      }
      else
      {
        v58 = v56 & 0x7FFFFF | 0x800000LL;
        if ( v57 < 0x76 )
          v59 = v58 >> (118 - (unsigned __int8)v57);
        else
          v59 = v58 << ((unsigned __int8)v57 - 118);
        v49 = (v59 + 0x80000000LL) >> 32;
        if ( v56 < 0 )
          LODWORD(v49) = -(int)v49;
      }
    }
    if ( *(float *)v52.m128i_i32 < 0.0 )
      v52.m128i_i32[0] ^= _xmm;
    if ( (int)v49 < 0 )
      LODWORD(v49) = -(int)v49;
  }
  v53 = _mm_cvtsi128_si32(v47);
  lfWidth = (unsigned __int8)(v53 >> 23);
  if ( (unsigned int)lfWidth <= 0x9E )
  {
    v54 = v53 & 0x7FFFFF | 0x800000LL;
    if ( (unsigned int)lfWidth < 0x76 )
      v55 = v54 >> (118 - (unsigned __int8)lfWidth);
    else
      v55 = v54 << ((unsigned __int8)lfWidth - 118);
    lfWidth = (v55 + 0x80000000LL) >> 32;
    if ( v53 < 0 )
      lfWidth = (unsigned int)-(int)lfWidth;
    if ( (int)lfWidth > 0 && v50 && (int)v49 / 256 < (int)lfWidth )
      goto LABEL_79;
  }
  if ( (*((_DWORD *)*a3 + 12) & 4) != 0 )
  {
LABEL_79:
    v17.m128_f32[0] = *(float *)v52.m128i_i32 / v51;
  }
  else
  {
LABEL_29:
    v27 = *a3;
    if ( (*((_DWORD *)*a3 + 12) & 4) != 0 )
    {
      v17.m128_f32[0] = v18;
      if ( !v14 )
      {
        *(float *)&v62 = v18 * v19;
        EFLOAT::vAbs((EFLOAT *)&v62);
        v17.m128_i32[0] = v62;
      }
    }
    v62 = *((_QWORD *)v27 + 16);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(lfWidth);
    v29 = v25[10];
    v30 = CurrentThreadDpiAwarenessContext;
    if ( (v29 & 1) == 0 || (v31 = CurrentThreadDpiAwarenessContext & 0xF, v31 == 1) || v31 == 2 )
      v32 = v25[540];
    else
      v32 = (v30 >> 8) & 0x1FF;
    v33 = W32GetCurrentThreadDpiAwarenessContext(v29);
    if ( (v25[10] & 1) == 0 || (v34 = v33 & 0xF, v34 == 1) || v34 == 2 )
      v35 = v25[541];
    else
      v35 = (v33 >> 8) & 0x1FF;
    if ( v32 == v35 || v11 )
    {
      v36 = HIDWORD(v62);
      v37 = v62;
    }
    else
    {
      v60 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v64);
      v36 = v60 * HIDWORD(v62);
      v61 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v64);
      v37 = v61 * v62;
    }
    if ( v37 != v36 )
      v17.m128_f32[0] = (float)((float)v36 * v17.m128_f32[0]) / (float)v37;
  }
  if ( !v14 )
    v17.m128_f32[0] = v17.m128_f32[0] / v19;
  *(_DWORD *)a1 = v17.m128_i32[0];
  *((_QWORD *)a1 + 2) = 0LL;
  *(_QWORD *)((char *)a1 + 4) = 0LL;
  v38 = *a3;
  v65 = a1;
  if ( (*((_DWORD *)v38 + 12) & 4) != 0 )
  {
    lfOrientation = v63->lfOrientation;
    if ( lfOrientation )
    {
      v41 = (__m128i)COERCE_UNSIGNED_INT((float)lfOrientation);
      v68 = 0LL;
      v69 = 0;
      v72 = 0;
      *(float *)v41.m128i_i32 = *(float *)v41.m128i_i32 / 10.0;
      v70 = 0LL;
      v71 = 0LL;
      v66[0] = efCos((unsigned int)_mm_cvtsi128_si32(v41));
      v66[3] = v66[0];
      v42 = efSin((unsigned int)_mm_cvtsi128_si32(v41));
      v43 = *((_OWORD *)a1 + 1);
      v67 = 0LL;
      v41.m128i_i32[0] = v42;
      v44 = *((_DWORD *)a1 + 8);
      v66[1] = v41.m128i_i32[0];
      v66[2] = v41.m128i_i32[0] ^ _xmm;
      v45 = *(_OWORD *)a1;
      v72 = v44;
      v71 = v43;
      v70 = v45;
      if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v65, (const struct MATRIX *)&v70, (const struct MATRIX *)v66, 0) )
        return 0LL;
    }
  }
  *((_DWORD *)a1 + 1) ^= _xmm;
  *((_DWORD *)a1 + 3) ^= _xmm;
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v65, 8u);
  return 1LL;
}
