/*
 * XREFs of sub_18009A710 @ 0x18009A710
 * Callers:
 *     sub_18009891C @ 0x18009891C (sub_18009891C.c)
 *     sub_180098BB8 @ 0x180098BB8 (sub_180098BB8.c)
 *     sub_180098C90 @ 0x180098C90 (sub_180098C90.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18002A8A0 @ 0x18002A8A0 (sub_18002A8A0.c)
 *     sub_18002AECC @ 0x18002AECC (sub_18002AECC.c)
 *     sub_180038C44 @ 0x180038C44 (sub_180038C44.c)
 *     sub_18006F6BC @ 0x18006F6BC (sub_18006F6BC.c)
 *     sub_18006F8B8 @ 0x18006F8B8 (sub_18006F8B8.c)
 *     sub_1800980C4 @ 0x1800980C4 (sub_1800980C4.c)
 *     sub_180099290 @ 0x180099290 (sub_180099290.c)
 *     sub_180099318 @ 0x180099318 (sub_180099318.c)
 *     sub_180099374 @ 0x180099374 (sub_180099374.c)
 *     sub_1800994C4 @ 0x1800994C4 (sub_1800994C4.c)
 *     sub_180099624 @ 0x180099624 (sub_180099624.c)
 *     sub_1800996C0 @ 0x1800996C0 (sub_1800996C0.c)
 *     sub_180099A9C @ 0x180099A9C (sub_180099A9C.c)
 *     sub_180099FFC @ 0x180099FFC (sub_180099FFC.c)
 *     sub_18009AE9C @ 0x18009AE9C (sub_18009AE9C.c)
 *     sub_18009AF7C @ 0x18009AF7C (sub_18009AF7C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009A710(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  __int64 *v6; // rax
  __m128i v7; // xmm6
  char v8; // di
  __int64 *v9; // rbx
  __int64 **v10; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 *v13; // rax
  __m128i v14; // xmm7
  __int64 v15; // rbx
  __int64 *v16; // rax
  __m128i v17; // xmm8
  __int64 *v18; // rax
  __m128i v19; // xmm9
  _OWORD *v20; // rax
  __m128d v21; // xmm10
  bool v22; // cl
  bool v23; // dl
  bool v24; // r8
  bool v25; // al
  __int64 v26; // rcx
  double v27; // xmm6_8
  __int64 v28; // xmm7_8
  double v29; // xmm0_8
  __int64 v30; // xmm8_8
  double v31; // xmm0_8
  __int64 v32; // xmm9_8
  double v33; // xmm0_8
  unsigned __int64 v34; // rdx
  double v35; // xmm0_8
  __int64 *v36; // rbx
  __int64 v37; // rdi
  __int64 **v38; // rcx
  __int64 *k; // rax
  __int64 *m; // rcx
  __int64 v41; // rbx
  __int64 v43; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v44; // [rsp+30h] [rbp-D8h]
  char v45; // [rsp+38h] [rbp-D0h]
  int v46; // [rsp+39h] [rbp-CFh]
  __int16 v47; // [rsp+3Dh] [rbp-CBh]
  char v48; // [rsp+3Fh] [rbp-C9h]
  __int64 v49; // [rsp+40h] [rbp-C8h]
  _BYTE v50[16]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+58h] [rbp-B0h]
  _BYTE v52[40]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+88h] [rbp-80h]
  __int64 v54; // [rsp+90h] [rbp-78h]
  __int64 v55; // [rsp+98h] [rbp-70h]
  __int64 v56; // [rsp+A0h] [rbp-68h]
  __int64 v57; // [rsp+A8h] [rbp-60h]
  __int64 v58; // [rsp+B0h] [rbp-58h]
  __int64 v59; // [rsp+B8h] [rbp-50h]
  __int64 v60; // [rsp+C0h] [rbp-48h]
  __int64 v61; // [rsp+C8h] [rbp-40h]
  __int64 v62; // [rsp+D0h] [rbp-38h]
  __int64 v63; // [rsp+D8h] [rbp-30h]
  char v64; // [rsp+E0h] [rbp-28h]
  int v65; // [rsp+E1h] [rbp-27h]
  __int16 v66; // [rsp+E5h] [rbp-23h]
  char v67; // [rsp+E7h] [rbp-21h]
  __int64 v68; // [rsp+E8h] [rbp-20h]
  void *v69[5]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v70[16]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v71; // [rsp+128h] [rbp+20h]
  _BYTE v72[96]; // [rsp+138h] [rbp+30h]
  _QWORD v73[4]; // [rsp+198h] [rbp+90h] BYREF
  __int128 v74; // [rsp+1B8h] [rbp+B0h]
  __int64 v75; // [rsp+1C8h] [rbp+C0h]
  __int64 v76; // [rsp+1D0h] [rbp+C8h]
  __int64 v77; // [rsp+1D8h] [rbp+D0h]
  __int64 v78; // [rsp+1E0h] [rbp+D8h]
  __int64 v79; // [rsp+1E8h] [rbp+E0h]
  __int64 v80; // [rsp+1F0h] [rbp+E8h]

  v4 = a2;
  v49 = a2;
  memset(&v52[8], 0, 32);
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0LL;
  sub_18002AECC((__int64 *)v69);
  sub_180099FFC(v4, (__int64)&v52[8]);
  sub_18002A8A0(v69, (__int64)v69);
  if ( *(_DWORD *)(a1 + 920) == 2 )
  {
    if ( a3 )
      sub_180038C44(*(_QWORD ***)(a1 + 896));
    if ( sub_1800994C4(a1) )
    {
      v6 = (__int64 *)sub_180099624(a1, (__int64)v70);
    }
    else
    {
      v43 = 4LL;
      v44 = 0LL;
      v45 = 1;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      v6 = &v43;
    }
    v7 = *(__m128i *)v6;
    v71 = v6[2];
    if ( _mm_cvtsi128_si32(v7) == 2 )
    {
      v8 = 1;
      v9 = **(__int64 ***)(a1 + 880);
      while ( !*((_BYTE *)v9 + 25) )
      {
        v8 = (unsigned __int8)sub_18009AF7C(v9 + 8) != 0 ? v8 : 0;
        v10 = (__int64 **)v9[2];
        if ( *((_BYTE *)v10 + 25) )
        {
          for ( i = (__int64 *)v9[1]; !*((_BYTE *)i + 25) && v9 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v9 = i;
          v9 = i;
        }
        else
        {
          v9 = (__int64 *)v9[2];
          for ( j = *v10; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v9 = j;
        }
      }
      if ( sub_1800994C4(a1 + 176) )
      {
        v13 = (__int64 *)sub_180099624(a1 + 176, (__int64)v50);
      }
      else
      {
        v43 = 4LL;
        v44 = 0LL;
        v45 = 1;
        v46 = 0;
        v47 = 0;
        v48 = 0;
        v13 = &v43;
      }
      v14 = *(__m128i *)v13;
      v51 = v13[2];
      v15 = a1 + 352;
      if ( sub_1800994C4(a1 + 352) )
      {
        v16 = (__int64 *)sub_180099624(a1 + 352, (__int64)v50);
      }
      else
      {
        v43 = 4LL;
        v44 = 0LL;
        v45 = 1;
        v46 = 0;
        v47 = 0;
        v48 = 0;
        v16 = &v43;
      }
      v17 = *(__m128i *)v16;
      v51 = v16[2];
      if ( sub_1800994C4(a1 + 528) )
      {
        v18 = (__int64 *)sub_180099624(a1 + 528, (__int64)v50);
      }
      else
      {
        v43 = 4LL;
        v44 = 0LL;
        v45 = 1;
        v46 = 0;
        v47 = 0;
        v48 = 0;
        v18 = &v43;
      }
      v19 = *(__m128i *)v18;
      v51 = v18[2];
      if ( sub_1800994C4(a1 + 704) )
      {
        v20 = (_OWORD *)sub_1800996C0(a1 + 704, (__int64)&v52[8]);
      }
      else
      {
        v73[0] = 4LL;
        memset(&v73[1], 0, 24);
        v74 = 0uLL;
        v75 = 0LL;
        v76 = 0LL;
        v77 = 0LL;
        v78 = 0LL;
        v79 = 0LL;
        v80 = 0LL;
        v20 = v73;
      }
      *(_OWORD *)v72 = *v20;
      *(_OWORD *)&v72[16] = v20[1];
      *(_OWORD *)&v72[32] = v20[2];
      *(_OWORD *)&v72[48] = v20[3];
      *(_OWORD *)&v72[64] = v20[4];
      v21 = (__m128d)v20[5];
      *(__m128d *)&v72[80] = v21;
      v22 = _mm_cvtsi128_si32(v14) == 2;
      v23 = _mm_cvtsi128_si32(v17) == 2;
      v24 = _mm_cvtsi128_si32(v19) == 2;
      v25 = _mm_cvtsi128_si32(*(__m128i *)v72) == 2;
      if ( v8 && v22 && v23 && v24 && v25 )
      {
        sub_18006F8B8((_QWORD *)(a1 + 1064));
        if ( (_BYTE)v71 )
        {
          *(_QWORD *)(a1 + 936) = 0LL;
          *(_QWORD *)(a1 + 952) = 0LL;
          *(_QWORD *)(a1 + 928) = 0LL;
          *(_QWORD *)(a1 + 944) = 0LL;
        }
        else
        {
          v26 = _mm_srli_si128(v7, 8).m128i_u64[0];
          if ( v26 < 0 )
            v27 = (double)(int)(v26 & 1 | ((unsigned __int64)v26 >> 1))
                + (double)(int)(v26 & 1 | ((unsigned __int64)v26 >> 1));
          else
            v27 = (double)(int)v26;
          v28 = _mm_srli_si128(v14, 8).m128i_u64[0];
          if ( v28 < 0 )
            v29 = (double)(int)(v28 & 1 | ((unsigned __int64)v28 >> 1))
                + (double)(int)(v28 & 1 | ((unsigned __int64)v28 >> 1));
          else
            v29 = (double)(int)v28;
          *(double *)(a1 + 936) = v29 / v27 * 1000.0;
          v30 = _mm_srli_si128(v17, 8).m128i_u64[0];
          if ( v30 < 0 )
            v31 = (double)(int)(v30 & 1 | ((unsigned __int64)v30 >> 1))
                + (double)(int)(v30 & 1 | ((unsigned __int64)v30 >> 1));
          else
            v31 = (double)(int)v30;
          *(double *)(a1 + 944) = v31 / v27 * 1000.0;
          v32 = _mm_srli_si128(v19, 8).m128i_u64[0];
          if ( v32 < 0 )
            v33 = (double)(int)(v32 & 1 | ((unsigned __int64)v32 >> 1))
                + (double)(int)(v32 & 1 | ((unsigned __int64)v32 >> 1));
          else
            v33 = (double)(int)v32;
          *(double *)(a1 + 952) = v33 / v27 * 1000.0;
          v34 = v30 - v28;
          if ( v30 - v28 < 0 )
            v35 = (double)(int)(v34 & 1 | (v34 >> 1)) + (double)(int)(v34 & 1 | (v34 >> 1));
          else
            v35 = (double)(int)v34;
          *(double *)(a1 + 928) = v35 / v27 * 1000.0;
          *(_OWORD *)(a1 + 960) = *(_OWORD *)&v72[8];
          *(_OWORD *)(a1 + 976) = *(_OWORD *)&v72[24];
          *(_OWORD *)(a1 + 992) = *(_OWORD *)&v72[40];
          *(_OWORD *)(a1 + 1008) = *(_OWORD *)&v72[56];
          *(_OWORD *)(a1 + 1024) = *(_OWORD *)&v72[72];
          *(_QWORD *)(a1 + 1040) = *(_OWORD *)&_mm_unpackhi_pd(v21, v21);
          *(_BYTE *)(a1 + 1048) = 1;
          v36 = **(__int64 ***)(a1 + 880);
          while ( !*((_BYTE *)v36 + 25) )
          {
            v37 = sub_18009AE9C(v36 + 8, v50);
            sub_1800181BC(v73, (__int64)(v36 + 4));
            v74 = *(_OWORD *)v37;
            v75 = *(_QWORD *)(v37 + 16);
            sub_180099A9C((__int64 *)(a1 + 1064), (__int64)&v43, (__int64)v73);
            sub_1800129D0((__int64)v73);
            v38 = (__int64 **)v36[2];
            if ( *((_BYTE *)v38 + 25) )
            {
              for ( k = (__int64 *)v36[1]; !*((_BYTE *)k + 25) && v36 == (__int64 *)k[2]; k = (__int64 *)k[1] )
                v36 = k;
              v36 = k;
            }
            else
            {
              v36 = (__int64 *)v36[2];
              for ( m = *v38; !*((_BYTE *)m + 25); m = (__int64 *)*m )
                v36 = m;
            }
          }
          v15 = a1 + 352;
        }
        sub_180099290((__int64)&v52[8]);
        sub_180099374(a1, (__int64 *)&v52[8]);
        sub_180099318(&v52[8]);
        sub_180099290((__int64)&v52[8]);
        sub_180099374(a1 + 176, (__int64 *)&v52[8]);
        sub_180099318(&v52[8]);
        sub_180099290((__int64)&v52[8]);
        sub_180099374(v15, (__int64 *)&v52[8]);
        sub_180099318(&v52[8]);
        sub_180099290((__int64)&v52[8]);
        sub_180099374(a1 + 528, (__int64 *)&v52[8]);
        sub_180099318(&v52[8]);
        sub_180099290((__int64)&v52[8]);
        sub_180099374(a1 + 704, (__int64 *)&v52[8]);
        sub_180099318(&v52[8]);
        v41 = *(_QWORD *)(a1 + 880);
        sub_1800980C4(a1 + 880, a1 + 880, *(char **)(v41 + 8));
        *(_QWORD *)(v41 + 8) = v41;
        *(_QWORD *)v41 = v41;
        *(_QWORD *)(v41 + 16) = v41;
        *(_QWORD *)(a1 + 888) = 0LL;
        *(_DWORD *)(a1 + 920) = 3;
      }
      v4 = v49;
    }
  }
  if ( *(_DWORD *)(a1 + 920) == 3 )
    sub_18006F6BC(v4, a1 + 928);
  return *(unsigned int *)(a1 + 920);
}
