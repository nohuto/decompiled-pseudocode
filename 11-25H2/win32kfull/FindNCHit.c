/*
 * XREFs of FindNCHit @ 0x1401D7FEC
 * Callers:
 *     xxxMNLoop @ 0x14015A654 (xxxMNLoop.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 *     GetWindowBordersForDpi @ 0x14004B870 (GetWindowBordersForDpi.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1400B2A98 (_HasCaptionIcon.c)
 *     SizeBoxHwnd @ 0x1402287F8 (SizeBoxHwnd.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall FindNCHit(__int64 a1, int a2)
{
  _DWORD *v2; // r8
  int v4; // r13d
  unsigned int v5; // r14d
  unsigned int WindowDpiLastNotify; // r14d
  int v7; // esi
  _DWORD *v8; // rcx
  __int64 v9; // r8
  int v10; // r9d
  unsigned int v11; // r15d
  __m128i v12; // xmm2
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v16; // rax
  unsigned __int8 v17; // r9
  int v18; // edi
  int v19; // edi
  int v20; // r12d
  __int64 v21; // r8
  __int64 v22; // r9
  int WindowBordersForDpi; // eax
  _DWORD *v24; // r8
  int v25; // r12d
  int v26; // eax
  int v27; // ecx
  int v28; // ebx
  int v29; // eax
  int DpiDependentMetric; // eax
  int v31; // ecx
  int v32; // r12d
  int v33; // r9d
  char *v34; // rax
  char v35; // dl
  int v36; // edi
  int v37; // edi
  char v38; // cl
  __int64 v39; // rax
  int v40; // eax
  int v41; // [rsp+38h] [rbp-69h]
  int v42; // [rsp+38h] [rbp-69h]
  int v43; // [rsp+48h] [rbp-59h]
  int v44; // [rsp+48h] [rbp-59h]
  unsigned __int64 v45; // [rsp+50h] [rbp-51h]
  __m128i v46; // [rsp+58h] [rbp-49h] BYREF
  __int64 v47; // [rsp+68h] [rbp-39h]
  __int64 v48; // [rsp+78h] [rbp-29h]
  __int64 v49; // [rsp+88h] [rbp-19h]
  __int128 v50; // [rsp+90h] [rbp-11h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-1h]
  __int64 v52; // [rsp+A8h] [rbp+7h]
  __m128i v53; // [rsp+B8h] [rbp+17h]

  v2 = *(_DWORD **)(a1 + 40);
  v4 = 3;
  v49 = a1;
  v5 = v2[72];
  v50 = 0LL;
  v46 = 0LL;
  if ( (v5 & 0xF) == 3 )
  {
    WindowDpiLastNotify = (v5 >> 8) & 0x1FF;
  }
  else if ( (v2[58] & 0x400) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
  }
  else if ( (v5 & 0xF) == 0
         && (v16 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 496LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v16 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL) + 272LL);
  }
  v7 = (__int16)a2;
  HIDWORD(v45) = SHIWORD(a2);
  LODWORD(v45) = (__int16)a2;
  if ( !PtInRect(v2 + 22, v45) )
    return 0LL;
  v11 = 2;
  if ( (*(_BYTE *)(v9 + 31) & 0x20) != 0 )
  {
    v19 = v8[2] - 4;
    v20 = v8[1] + 4;
    v42 = *v8 + 4;
    if ( v7 >= v19 || v10 < v20 || v7 < *v8 + 4 || v10 >= v8[3] - 4 )
      return v11;
    goto LABEL_50;
  }
  v12 = *(__m128i *)(v9 + 104);
  v13 = *(_QWORD *)(v9 + 112);
  v51 = v13;
  v53 = v12;
  v14 = v12.m128i_i64[0];
  v48 = v12.m128i_i64[0];
  if ( v7 < (int)v13 && v7 >= v12.m128i_i32[0] )
  {
    if ( v10 >= v12.m128i_i32[1] && v10 < SHIDWORD(v13) )
      return 1LL;
    v14 = v48;
  }
  v17 = *(_BYTE *)(v9 + 25);
  if ( (v17 & 2) != 0 )
  {
    v41 = v14 - 2;
    v18 = HIDWORD(v13) + 2;
    v46.m128i_i32[0] = v14 - 2;
    v46.m128i_i32[3] = HIDWORD(v13) + 2;
    v43 = v13 + 2;
    v46.m128i_i32[2] = v13 + 2;
    v47 = (unsigned int)(HIDWORD(v14) - 2);
    v46.m128i_i32[1] = HIDWORD(v14) - 2;
  }
  else
  {
    v46 = v12;
    v18 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 12));
    LODWORD(v47) = _mm_cvtsi128_si32(_mm_srli_si128(v12, 4));
    v43 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 8));
    v41 = _mm_cvtsi128_si32(v12);
  }
  if ( (*(_BYTE *)(v9 + 16) & 2) != 0 )
  {
    if ( ((v17 ^ *(_BYTE *)(v9 + 26)) & 0x40) != 0 )
    {
      v41 -= GetDpiDependentMetric(0, WindowDpiLastNotify);
      v46.m128i_i32[0] = v41;
    }
    else
    {
      v43 += GetDpiDependentMetric(0, WindowDpiLastNotify);
      v46.m128i_i32[2] = v43;
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 16LL) & 4) != 0 )
  {
    v18 += GetDpiDependentMetric(1, WindowDpiLastNotify);
    v46.m128i_i32[3] = v18;
  }
  v52 = *(_QWORD *)(a1 + 40);
  if ( PtInRect(&v46, v45) )
  {
    if ( (*(_BYTE *)(v21 + 25) & 2) != 0 )
    {
      v46.m128i_i32[0] = v41 + 2;
      v46.m128i_i32[3] = v18 - 2;
      v46.m128i_i32[2] = v43 - 2;
      v46.m128i_i32[1] = v47 + 2;
      if ( !PtInRect(&v46, v45) )
        return 18LL;
    }
    v38 = *(_BYTE *)(v21 + 16);
    if ( (v38 & 4) == 0 || SHIDWORD(v45) < v53.m128i_i32[3] )
      return 7LL;
    if ( (v38 & 2) != 0 )
    {
      v39 = SizeBoxHwnd(a1);
      if ( v7 >= (int)v51 )
      {
        v40 = v39 != 0 ? 0xD : 0;
        return (unsigned int)(v40 + 4);
      }
      if ( (*(_BYTE *)(v52 + 26) & 0x40) != 0 && v7 < (int)v48 )
      {
        v40 = v39 != 0 ? 0xC : 0;
        return (unsigned int)(v40 + 4);
      }
    }
    return 6LL;
  }
  WindowBordersForDpi = GetWindowBordersForDpi(
                          *(_DWORD *)(v21 + 28),
                          *(unsigned int *)(v21 + 24),
                          v21,
                          v22,
                          WindowDpiLastNotify);
  v24 = *(_DWORD **)(a1 + 40);
  v25 = v24[23];
  v19 = v24[24] - WindowBordersForDpi;
  LODWORD(v50) = WindowBordersForDpi + v24[22];
  v20 = WindowBordersForDpi + v25;
  v42 = v50;
  HIDWORD(v50) = v24[25] - WindowBordersForDpi;
  v44 = HIDWORD(v50);
  *(_QWORD *)((char *)&v50 + 4) = __PAIR64__(v19, v20);
  if ( PtInRect(&v50, v45) )
  {
    v10 = HIDWORD(v45);
    if ( SHIDWORD(v45) < (int)v47 )
    {
      if ( (*(_BYTE *)(v9 + 30) & 0xC0) != 0xC0 )
        return (*(_BYTE *)(v9 + 16) & 1) != 0 ? 5 : 0;
LABEL_50:
      if ( (*(_BYTE *)(v9 + 26) & 0x40) != 0 )
        v7 = *(_DWORD *)(v9 + 88) + *(_DWORD *)(v9 + 96) - v7;
      if ( v10 >= v20 )
      {
        if ( *(char *)(v9 + 24) >= 0 )
        {
          DpiDependentMetric = GetDpiDependentMetric(2, WindowDpiLastNotify);
          v31 = 12;
        }
        else
        {
          DpiDependentMetric = GetDpiDependentMetric(22, WindowDpiLastNotify);
          v31 = 23;
        }
        v32 = DpiDependentMetric + v20;
        v33 = GetDpiDependentMetric(v31, WindowDpiLastNotify);
        if ( SHIDWORD(v45) >= v32 && (*(_BYTE *)(*(_QWORD *)(v49 + 40) + 16LL) & 1) != 0 )
          return 5LL;
        if ( v7 >= v42 && v7 < v19 && SHIDWORD(v45) < v32 )
        {
          v34 = *(char **)(v49 + 40);
          v35 = v34[30];
          if ( (v35 & 8) != 0 )
          {
            if ( v7 >= v33 + v42 )
            {
              v36 = v19 - v33;
              if ( v7 >= v36 )
                return 20LL;
              if ( v34[24] >= 0 )
              {
                if ( (v35 & 3) != 0 )
                {
                  v37 = v36 - v33;
                  if ( v7 >= v37 )
                    return 9LL;
                  if ( v7 >= v37 - v33 )
                    return 8LL;
                }
                else if ( (v34[25] & 4) != 0 && v7 >= v36 - v33 )
                {
                  return 21;
                }
              }
            }
            else if ( (unsigned int)HasCaptionIcon(v49) )
            {
              return 3LL;
            }
          }
        }
      }
      return v11;
    }
    return 0LL;
  }
  if ( (*(_BYTE *)(v9 + 30) & 4) == 0 )
    return 18LL;
  if ( *(char *)(v9 + 24) >= 0 )
  {
    v26 = GetDpiDependentMetric(13, WindowDpiLastNotify);
    v27 = 12;
  }
  else
  {
    v26 = GetDpiDependentMetric(24, WindowDpiLastNotify);
    v27 = 23;
  }
  v28 = -v26;
  v29 = -(int)GetDpiDependentMetric(v27, WindowDpiLastNotify);
  if ( SHIDWORD(v45) >= v20 - v28 )
  {
    v4 = 0;
    if ( SHIDWORD(v45) >= v28 + v44 )
      v4 = 6;
  }
  if ( v7 >= v42 - v29 )
  {
    if ( v7 >= v19 + v29 )
      v4 += 2;
  }
  else
  {
    ++v4;
  }
  return (unsigned int)(v4 + 9);
}
