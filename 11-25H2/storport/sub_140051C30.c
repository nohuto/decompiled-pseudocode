/*
 * XREFs of sub_140051C30 @ 0x140051C30
 * Callers:
 *     sub_14003E780 @ 0x14003E780 (sub_14003E780.c)
 * Callees:
 *     sub_140001F9C @ 0x140001F9C (sub_140001F9C.c)
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140037680 @ 0x140037680 (sub_140037680.c)
 *     sub_140055130 @ 0x140055130 (sub_140055130.c)
 *     sub_1400566F8 @ 0x1400566F8 (sub_1400566F8.c)
 *     sub_1400B7798 @ 0x1400B7798 (sub_1400B7798.c)
 *     sub_1400B9670 @ 0x1400B9670 (sub_1400B9670.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140051C30(__int64 a1)
{
  __int64 v2; // rdi
  const char *v3; // r12
  _QWORD *v4; // r15
  _QWORD *v5; // r13
  unsigned int v6; // ebx
  ULONG RecommendedSharedDataAlignment; // ebx
  ULONG v8; // eax
  LARGE_INTEGER v9; // rax
  LARGE_INTEGER v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10
  const void *v14; // rdx
  unsigned int i; // edx
  __int64 v16; // r8
  _QWORD *v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rbx
  _QWORD *v21; // r9
  char *v22; // r10
  char *v23; // r11
  __int64 v24; // rsi
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // r9
  _QWORD *v29; // r10
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // r11d
  unsigned __int16 v34; // r10
  __int64 v35; // r8
  int v36; // eax
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // rdx
  unsigned __int64 *v39; // rcx
  unsigned __int64 v40; // rax
  bool v41; // cc
  __int128 v42; // xmm2
  __m128i v43; // xmm1
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rsi
  const char *v47; // rdi
  const wchar_t *v48; // rbx
  __int64 v49; // rcx
  char v50; // al
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+288h] [rbp-80h] BYREF
  __m128i v53; // [rsp+290h] [rbp-78h]
  __int128 v54; // [rsp+2A0h] [rbp-68h]
  const char *v55; // [rsp+2B0h] [rbp-58h]
  unsigned __int64 v56; // [rsp+2B8h] [rbp-50h] BYREF
  char Dst[8]; // [rsp+2C0h] [rbp-48h] BYREF
  const wchar_t *v58; // [rsp+2C8h] [rbp-40h]
  __int64 v59; // [rsp+2D0h] [rbp-38h]
  _QWORD v60[2]; // [rsp+2D8h] [rbp-30h]
  __int64 v61; // [rsp+2E8h] [rbp-20h]
  __int64 v62; // [rsp+2F0h] [rbp-18h]
  __int64 v63; // [rsp+300h] [rbp-8h]
  __int64 v64; // [rsp+308h] [rbp+0h]
  __int64 v65; // [rsp+318h] [rbp+10h]
  __int64 v66; // [rsp+320h] [rbp+18h]
  __int64 v67; // [rsp+330h] [rbp+28h]
  __int64 v68; // [rsp+338h] [rbp+30h]
  __int64 v69; // [rsp+348h] [rbp+40h]
  __int64 v70; // [rsp+350h] [rbp+48h]
  __int64 v71; // [rsp+360h] [rbp+58h]
  __int64 v72; // [rsp+368h] [rbp+60h]
  __int64 v73; // [rsp+378h] [rbp+70h]
  __int64 v74; // [rsp+380h] [rbp+78h]
  __int64 v75; // [rsp+390h] [rbp+88h]
  __int64 v76; // [rsp+398h] [rbp+90h]
  __int64 v77; // [rsp+3A8h] [rbp+A0h]
  __int64 v78; // [rsp+3B0h] [rbp+A8h]
  __int64 v79; // [rsp+3C0h] [rbp+B8h]
  __int64 v80; // [rsp+3C8h] [rbp+C0h]
  __int64 v81; // [rsp+3D8h] [rbp+D0h]
  __int64 v82; // [rsp+3E0h] [rbp+D8h]
  __int64 v83; // [rsp+3F0h] [rbp+E8h]
  __int64 v84; // [rsp+3F8h] [rbp+F0h]
  __int64 v85; // [rsp+408h] [rbp+100h]
  __int64 v86; // [rsp+410h] [rbp+108h]
  __int64 v87; // [rsp+420h] [rbp+118h]
  _QWORD *v88; // [rsp+428h] [rbp+120h]
  unsigned __int64 v89; // [rsp+430h] [rbp+128h]
  unsigned __int64 v90; // [rsp+438h] [rbp+130h]
  __int64 v91; // [rsp+440h] [rbp+138h]

  PerformanceFrequency.QuadPart = 0LL;
  memset_0(Dst, 0, 0x190uLL);
  v2 = (unsigned int)qword_140169170;
  v3 = 0LL;
  v55 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  if ( *(_QWORD *)(a1 + 2376) )
  {
    v4 = (_QWORD *)sub_1400143E0(72LL, (unsigned int)Size, 1700028754LL, *(_QWORD *)(a1 + 8));
    if ( v4
      && (RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment(),
          v8 = KeGetRecommendedSharedDataAlignment(),
          (v5 = (_QWORD *)sub_1400143E0(
                            72LL,
                            -v8 & (RecommendedSharedDataAlignment + 24 * (_DWORD)v2 - 1),
                            1700028754LL,
                            *(_QWORD *)(a1 + 8))) != 0LL) )
    {
      if ( byte_140168724 )
        v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
      else
        v9.QuadPart = KeQueryUnbiasedInterruptTime();
      v10 = v9;
      if ( v9.QuadPart <= 0 || (v11 = *(_QWORD *)(a1 + 2392), v10.QuadPart >= v11) )
        v12 = v10.QuadPart - *(_QWORD *)(a1 + 2392);
      else
        v12 = v10.QuadPart - v11 - 1;
      if ( byte_140168724 )
      {
        v13 = 0LL;
        if ( PerformanceFrequency.QuadPart && v12 )
          v13 = 10000
              * (1000 * (v12 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
              / PerformanceFrequency.QuadPart
              + 10000
              * (1000 * (v12 / PerformanceFrequency.QuadPart)
               + 1000 * (v12 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart);
      }
      else
      {
        v13 = v12;
      }
      qword_140169188 = v10.QuadPart;
      v14 = *(const void **)(a1 + 2376);
      *(LARGE_INTEGER *)(a1 + 2392) = v10;
      v56 = v13;
      memmove(v4, v14, (unsigned int)Size);
      for ( i = 1; i < dword_140168DB0; ++i )
      {
        v16 = (unsigned int)dword_140169178 * i;
        if ( (_DWORD)v2 )
        {
          v17 = v4 + 1;
          v18 = v2;
          do
          {
            *(v17 - 1) += *(_QWORD *)((char *)v17 + v16 - 8);
            *v17 += *(_QWORD *)((char *)v17 + v16);
            v17[1] += *(_QWORD *)((char *)v17 + v16 + 8);
            v17 += 3;
            --v18;
          }
          while ( v18 );
        }
      }
      v19 = *(_QWORD *)(a1 + 2400);
      v20 = 0LL;
      if ( (_DWORD)v2 )
      {
        v21 = (_QWORD *)(v19 + 8);
        v22 = (char *)v4 - v19;
        v23 = (char *)v5 - v19;
        v24 = v2;
        do
        {
          v25 = *(_QWORD *)((char *)v21 + (_QWORD)v22 - 8) - *(v21 - 1);
          *(_QWORD *)&v23[(_QWORD)v21 - 8] = v25;
          v26 = *(_QWORD *)&v22[(_QWORD)v21] - *v21;
          *(_QWORD *)&v23[(_QWORD)v21] = v26;
          *(_QWORD *)((char *)v21 + (_QWORD)v23 + 8) = *(_QWORD *)((char *)v21 + (_QWORD)v22 + 8) - v21[1];
          v21 += 3;
          v20 += v26 + v25;
          --v24;
        }
        while ( v24 );
        v3 = v55;
      }
      memmove(*(void **)(a1 + 2400), v4, (unsigned int)dword_140169178);
      if ( v20 )
      {
        v87 = 0LL;
        if ( (_WORD)qword_1401690E0 )
        {
          if ( WORD1(qword_1401690E0) )
          {
            v28 = 0LL;
            if ( (_DWORD)v2 )
            {
              v29 = v5 + 2;
              do
              {
                if ( (unsigned int)v28 >= dword_14016910C && (unsigned int)v28 < *((_DWORD *)&xmmword_140169130 + 3) )
                {
                  v30 = (unsigned int)v28 / (unsigned __int16)qword_1401690E0;
                  v31 = *(v29 - 2);
                  if ( (unsigned int)v30 >= 0xE )
                    v30 = 13LL;
                  v32 = *(v29 - 1);
                  v27 = 3 * v30;
                  v60[v27 + 1] += *v29;
                  v60[v27 - 1] += v31;
                  v60[v27] += v32;
                  v87 += v31 + v32;
                }
                v28 = (unsigned int)(v28 + 1);
                v29 += 3;
              }
              while ( (unsigned int)v28 < (unsigned int)v2 );
            }
          }
        }
        if ( *(_QWORD *)(a1 + 2416) )
        {
          v33 = dword_140168DB0;
          v34 = 0;
          if ( dword_140168DB0 )
          {
            v35 = v54;
            v36 = 0;
            v37 = v53.m128i_u64[1];
            v38 = v53.m128i_i64[0];
            do
            {
              v39 = (unsigned __int64 *)(*(_QWORD *)(a1 + 2416) + (unsigned int)(dword_140169190 * v36));
              v40 = *v39;
              v41 = *v39 <= v38;
              *v39 = 0LL;
              if ( !v41 )
                v38 = v40;
              v37 += v39[1];
              v35 += v39[2];
              v36 = ++v34;
            }
            while ( v34 < v33 );
            v53.m128i_i64[0] = v38;
            *(_QWORD *)&v54 = v35;
            v42 = v54;
            v53.m128i_i64[1] = v37;
            v43 = v53;
          }
          else
          {
            v43 = v53;
            v42 = v54;
            v38 = v53.m128i_i64[0];
            v35 = v54;
            v37 = _mm_srli_si128(v53, 8).m128i_u64[0];
          }
          v28 = v37 - *(_QWORD *)(a1 + 2432);
          v27 = v35 - *(_QWORD *)(a1 + 2440);
          *(__m128i *)(a1 + 2424) = v43;
          v91 = v27;
          *(_OWORD *)(a1 + 2440) = v42;
          v89 = v38;
          v90 = v28;
        }
        v44 = *(_QWORD *)(a1 + 160);
        if ( v44 )
        {
          v3 = (const char *)(v44 + 90);
        }
        else
        {
          v45 = *(_QWORD *)(a1 + 152);
          if ( v45 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 608LL) + 184LL) & 0x40) != 0 )
            v3 = (const char *)(v45 + 41);
        }
        v58 = L"128us, 256us, 512us, 1ms, 4ms, 16ms, 64ms, 128ms, 256ms, 512ms, 1000ms, 2000ms, 10000ms, 10000+ms";
        v88 = v5;
        Dst[0] = 12;
        if ( byte_140168DB8 == 1 && !dword_140168DBC || dword_140168DC0 >= (unsigned int)dword_140168488 )
          goto LABEL_63;
        if ( (*(_DWORD *)(a1 + 2120) & 0x20) != 0 )
          dword_140168DBC = -1;
        if ( *(_BYTE *)(a1 + 2124) )
          dword_140168DBC = -1;
        if ( (*(_BYTE *)(a1 + 506) & 2) != 0 )
          dword_140168DBC = -1;
        if ( dword_140168DBC )
          sub_140055130(a1, &v56, v27, v28);
        else
LABEL_63:
          sub_140037680(a1);
        if ( (byte_1401694F4 & 8) != 0 )
        {
          v46 = *(_QWORD *)(a1 + 24);
          v47 = (const char *)&dword_140149108;
          v48 = (const wchar_t *)&unk_140149394;
          if ( v3 )
            v47 = v3;
          if ( *(_QWORD *)(v46 + 5080) )
            v48 = *(const wchar_t **)(v46 + 5080);
          sub_140001F9C(
            (__int64)&RegHandle,
            (__int64)&unk_1401488F0,
            0LL,
            *(_DWORD *)(v46 + 56),
            *(_BYTE *)(a1 + 104),
            *(_BYTE *)(a1 + 105),
            *(_BYTE *)(a1 + 106),
            a1 + 2104,
            v46 + 5064,
            *(_DWORD *)(a1 + 3432),
            *(const wchar_t **)(v46 + 4720),
            *(_DWORD *)(v46 + 4124),
            (const char *)(a1 + 168),
            (const char *)(a1 + 177),
            (const char *)(a1 + 242),
            v48,
            v47,
            *(_BYTE *)(a1 + 506) & 1,
            *(__int64 *)&qword_140168DC8,
            Dst[0],
            v87,
            *(_QWORD *)(a1 + 2296),
            *(_DWORD *)(a1 + 900),
            *(_DWORD *)(a1 + 904),
            *(_QWORD *)(a1 + 2304),
            *(_QWORD *)(a1 + 2312),
            *(_QWORD *)(a1 + 2320),
            *(_QWORD *)(a1 + 2328),
            *(_QWORD *)(a1 + 2336),
            *(_QWORD *)(a1 + 2344),
            *(_QWORD *)(a1 + 2352),
            v89,
            *(_DWORD *)(a1 + 2456),
            *(_DWORD *)(a1 + 2464),
            v58,
            v59,
            v61,
            v63,
            v65,
            v67,
            v69,
            v71,
            v73,
            v75,
            v77,
            v79,
            v81,
            v83,
            v85,
            v60[0],
            v62,
            v64,
            v66,
            v68,
            v70,
            v72,
            v74,
            v76,
            v78,
            v80,
            v82,
            v84,
            v86);
        }
      }
      if ( dword_140168DB4 && (*(_BYTE *)(a1 + 507) & 0x10) != 0 )
        sub_1400B9670(a1);
      if ( (unsigned int)sub_1400566F8() )
      {
        v49 = *(_QWORD *)(a1 + 24);
        if ( *(_DWORD *)(v49 + 4276) == 17 )
        {
          v50 = *(_BYTE *)(v49 + 113);
          if ( (v50 & 1) == 0 && (v50 & 2) != 0 && *(_QWORD *)(v49 + 6224) )
            sub_1400B7798();
        }
      }
      v6 = 0;
    }
    else
    {
      v6 = -1073741801;
    }
  }
  else
  {
    v6 = -1073741823;
  }
  *(_QWORD *)(a1 + 900) = 0LL;
  *(_QWORD *)(a1 + 2456) = 0LL;
  *(_QWORD *)(a1 + 2464) = 0LL;
  *(_QWORD *)(a1 + 2296) = 0LL;
  *(_QWORD *)(a1 + 2304) = 0LL;
  *(_QWORD *)(a1 + 2312) = 0LL;
  *(_QWORD *)(a1 + 2320) = 0LL;
  *(_QWORD *)(a1 + 2328) = 0LL;
  *(_QWORD *)(a1 + 2336) = 0LL;
  *(_QWORD *)(a1 + 2344) = 0LL;
  *(_QWORD *)(a1 + 2352) = 0LL;
  *(_DWORD *)(a1 + 2368) = 0;
  if ( v4 )
    ExFreePoolWithTag(v4, 0x65546152u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x65546152u);
  return v6;
}
