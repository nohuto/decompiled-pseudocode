/*
 * XREFs of FindBestPos @ 0x140159FA4
 * Callers:
 *     NtUserCalculatePopupWindowPosition @ 0x140159D30 (NtUserCalculatePopupWindowPosition.c)
 *     xxxTrackPopupMenuEx @ 0x14015AE18 (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x140091044 (GetMonitorRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x14009119C (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     GetMonitorWorkRectForDpi @ 0x1400911FC (GetMonitorWorkRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140091370 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x140159A60 (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1402098C0 (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall FindBestPos(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        struct tagRECT *a5,
        unsigned int a6,
        __int64 **a7,
        struct tagMONITOR *a8,
        __int64 a9)
{
  int v10; // r14d
  __int64 *v12; // rax
  int v13; // esi
  unsigned int CurrentThreadCompositedDpiContext; // eax
  __int64 v15; // rcx
  unsigned int v16; // eax
  __m128i v17; // xmm6
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __m128i v21; // xmm0
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r9
  int v26; // r14d
  unsigned int v27; // eax
  LONG v28; // r8d
  int v29; // r9d
  LONG v30; // eax
  LONG v31; // ecx
  LONG v32; // eax
  __int32 v34; // r10d
  LONG v35; // edx
  int v36; // edx
  __int64 v37; // r8
  int v38; // ecx
  __int64 v39; // r15
  unsigned int v40; // r14d
  BOOL v41; // edx
  __int64 v42; // rcx
  const struct tagWND *v43; // r14
  unsigned int WindowCompositedDpiContext; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  __int64 CurrentProcessWin32Process; // rax
  struct tagRECT *v48; // rax
  __m128i v49; // xmm0
  __int64 *v50; // rax
  unsigned int v51; // r14d
  unsigned int v52; // r14d
  _DWORD *v53; // rcx
  unsigned int v54; // eax
  __m128i v55; // [rsp+48h] [rbp-B1h] BYREF
  int v56; // [rsp+58h] [rbp-A1h]
  struct tagPOINT v57; // [rsp+60h] [rbp-99h] BYREF
  struct tagMONITOR *v58; // [rsp+68h] [rbp-91h]
  _QWORD v59[3]; // [rsp+70h] [rbp-89h] BYREF
  __m128i v60; // [rsp+88h] [rbp-71h] BYREF
  __m128i v61; // [rsp+98h] [rbp-61h] BYREF
  __m128i v62; // [rsp+A8h] [rbp-51h] BYREF
  struct tagRECT v63; // [rsp+B8h] [rbp-41h] BYREF
  unsigned int v64[2]; // [rsp+C8h] [rbp-31h]
  _BYTE v65[4]; // [rsp+D0h] [rbp-29h]
  _BYTE v66[4]; // [rsp+D4h] [rbp-25h]

  v10 = a3;
  v56 = a3;
  v12 = *a7;
  v13 = a1;
  v58 = a8;
  v55 = 0LL;
  if ( *v12 )
  {
    v42 = **a7;
    if ( *(_QWORD *)(v42 + 56) )
      v43 = *(const struct tagWND **)(v42 + 56);
    else
      v43 = *(const struct tagWND **)(v42 + 16);
    WindowCompositedDpiContext = GetWindowCompositedDpiContext(v43);
    GetMonitorMenuRectForDpi((struct tagRECT *)&v59[1], a8, (WindowCompositedDpiContext >> 8) & 0x1FF);
    v63 = *(struct tagRECT *)&v59[1];
    v45 = GetWindowCompositedDpiContext(v43);
    GetMonitorWorkRectForDpi(&v62, (__int64)a8, (v45 >> 8) & 0x1FF);
    v17 = v62;
    v46 = GetWindowCompositedDpiContext(v43);
    GetMonitorRectForDpi(&v60, (__int64)a8, (v46 >> 8) & 0x1FF);
    v21 = v60;
    v10 = v56;
  }
  else
  {
    CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext(a1);
    GetMonitorMenuRectForDpi(&v63, a8, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
    v16 = GetCurrentThreadCompositedDpiContext(v15);
    GetMonitorWorkRectForDpi(&v62, (__int64)a8, (v16 >> 8) & 0x1FF);
    v17 = v62;
    v19 = GetCurrentThreadCompositedDpiContext(v18);
    GetMonitorRectForDpi((__m128i *)&v59[1], (__int64)a8, (v19 >> 8) & 0x1FF);
    v21 = *(__m128i *)&v59[1];
  }
  v62 = v21;
  if ( (a6 & 0x10000) == 0
    && ((int)a9 < v17.m128i_i32[0]
     || (int)a9 >= _mm_cvtsi128_si32(_mm_srli_si128(v17, 8))
     || SHIDWORD(a9) < _mm_cvtsi128_si32(_mm_srli_si128(v17, 4))
     || SHIDWORD(a9) >= _mm_cvtsi128_si32(_mm_srli_si128(v17, 12))
     || **a7 && (v20 = **a7, (*(_DWORD *)v20 & 0x10000000) != 0)) )
  {
    if ( **a7 )
    {
      v41 = *(_DWORD *)**a7 >> 31;
    }
    else
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
      v41 = CurrentProcessWin32Process
         && *(_QWORD *)CurrentProcessWin32Process
         && (*(_BYTE *)(CurrentProcessWin32Process + 808) & 0x30) == 0;
    }
    v48 = (struct tagRECT *)&v62;
    v20 = (__int64)&v63;
    if ( v41 )
      v48 = &v63;
    v49 = *(__m128i *)v48;
    v50 = *a7;
    v62 = v49;
    if ( *v50 )
    {
      v20 = **a7;
      *(_DWORD *)v20 |= 0x10000000u;
    }
  }
  else
  {
    v62 = v17;
  }
  v22 = v62.m128i_u64[1];
  v23 = v62.m128i_i64[0];
  if ( a5 )
  {
    v55 = *(__m128i *)a5;
    v34 = v55.m128i_i32[2];
    v35 = _mm_cvtsi128_si32(v55);
    if ( v35 <= v62.m128i_i32[0] )
      v35 = v62.m128i_i32[0];
    v55.m128i_i32[0] = v35;
    if ( v55.m128i_i32[2] >= v62.m128i_i32[2] )
      v34 = v62.m128i_i32[2];
    v55.m128i_i32[2] = v34;
    if ( v35 >= v34 )
      goto LABEL_34;
    v20 = v55.m128i_u32[1];
    v36 = v55.m128i_i32[3];
    if ( v55.m128i_i32[1] <= v62.m128i_i32[1] )
      v20 = v62.m128i_u32[1];
    v55.m128i_i32[1] = v20;
    if ( v55.m128i_i32[3] >= v62.m128i_i32[3] )
      v36 = v62.m128i_i32[3];
    v55.m128i_i32[3] = v36;
    if ( (int)v20 >= v36 )
    {
LABEL_34:
      v55.m128i_i32[3] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
      v55.m128i_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
      v55.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
      v55.m128i_i32[0] = _mm_cvtsi128_si32((__m128i)0LL);
    }
  }
  else
  {
    v55.m128i_i32[0] = v13;
    v55.m128i_i32[1] = a2;
    v55.m128i_i32[2] = v13;
    v55.m128i_i32[3] = a2;
  }
  if ( v10 + v13 > v62.m128i_i32[2] )
  {
    v13 = v62.m128i_i32[2] - v10;
    if ( **a7 )
    {
      v20 = **a7;
      if ( (*(_DWORD *)v20 & 0x1800000) != 0 )
      {
        v20 = **a7;
        *(_DWORD *)v20 ^= (*(_DWORD *)v20 ^ 0xFF7FFFFF) & 0x1800000;
      }
    }
  }
  if ( v13 < (int)v23 )
  {
    v13 = v23;
    if ( **a7 )
    {
      v20 = **a7;
      if ( (*(_DWORD *)v20 & 0x1800000) != 0 )
      {
        v20 = **a7;
        *(_DWORD *)v20 ^= (*(_DWORD *)v20 ^ 0x800000) & 0x1800000;
      }
    }
  }
  if ( (a6 & 8) != 0 && v10 + v13 > (int)v22 )
    v13 = v22 - v10;
  v24 = HIDWORD(v22);
  if ( a2 + a4 > (int)v24 )
  {
    if ( (a6 & 0x20010) != 0 || (v20 = (unsigned int)(a2 - a4), (int)v20 < SHIDWORD(v23)) || a2 >= (int)v24 )
      a2 = v24 - a4;
    else
      a2 -= a4;
    if ( **a7 )
    {
      v20 = **a7;
      if ( (*(_DWORD *)v20 & 0x6000000) != 0 )
      {
        v20 = **a7;
        *(_DWORD *)v20 ^= (*(_DWORD *)v20 ^ 0xFDFFFFFF) & 0x6000000;
      }
    }
  }
  v25 = HIDWORD(v23);
  if ( a2 < (int)v25 )
  {
    a2 = v25;
    if ( **a7 )
    {
      if ( (*(_DWORD *)**a7 & 0x6000000) != 0 )
      {
        v20 = **a7;
        *(_DWORD *)v20 ^= (*(_DWORD *)v20 ^ 0x2000000) & 0x6000000;
      }
    }
  }
  v26 = a6 & 0x20;
  if ( (a6 & 0x20) != 0 && a2 + a4 > (int)v24 && (a6 & 0x20000) != 0 )
    a2 = v24 - a4;
  v27 = GetCurrentThreadCompositedDpiContext(v20);
  GetMonitorWorkRectForDpi(&v61, (__int64)v58, (v27 >> 8) & 0x1FF);
  v28 = a2 + a4;
  v29 = v56;
  v30 = v13;
  if ( v13 <= v55.m128i_i32[0] )
    v30 = v55.m128i_i32[0];
  v57.x = v13;
  v57.y = a2;
  v31 = v56 + v13;
  if ( v56 + v13 >= v55.m128i_i32[2] )
    v31 = v55.m128i_i32[2];
  if ( v30 < v31 )
  {
    v32 = a2;
    if ( a2 <= v55.m128i_i32[1] )
      v32 = v55.m128i_i32[1];
    if ( v28 >= v55.m128i_i32[3] )
      v28 = v55.m128i_i32[3];
    if ( v32 < v28 )
    {
      v37 = (a6 >> 5) & 2;
      v38 = (a6 & 8) == 0 ? 2 : 0;
      v64[v37 + 1] = 2 - v38;
      v64[v37] = v38;
      *(_DWORD *)&v65[-4 * v37] = v26 != 0 ? 1 : 3;
      v39 = 0LL;
      *(_DWORD *)&v66[-4 * v37] = v26 != 0 ? 3 : 1;
      while ( 1 )
      {
        if ( v39 >= 4 )
          return (unsigned __int16)v13 | ((unsigned __int16)a2 << 16);
        v40 = v64[v39];
        if ( (unsigned int)TryRect(v40, v13, a2, v29, a4, (struct tagRECT *)&v55, &v57, v58) )
          break;
        v29 = v56;
        ++v39;
      }
      if ( **a7 )
      {
        if ( !v40 )
        {
          v53 = (_DWORD *)**a7;
          v54 = *v53 & 0xF07FFFFF | 0x1000000;
          goto LABEL_90;
        }
        v51 = v40 - 1;
        if ( !v51 )
        {
          v53 = (_DWORD *)**a7;
          v54 = *v53 & 0xF07FFFFF | 0x4000000;
          goto LABEL_90;
        }
        v52 = v51 - 1;
        if ( !v52 )
        {
          v53 = (_DWORD *)**a7;
          v54 = *v53 & 0xF07FFFFF | 0x800000;
          goto LABEL_90;
        }
        if ( v52 == 1 )
        {
          v53 = (_DWORD *)**a7;
          v54 = *v53 & 0xF07FFFFF | 0x2000000;
LABEL_90:
          *v53 = v54;
        }
      }
      LOWORD(v13) = v57.x;
      LOWORD(a2) = v57.y;
    }
  }
  return (unsigned __int16)v13 | ((unsigned __int16)a2 << 16);
}
