/*
 * XREFs of sub_1400135E0 @ 0x1400135E0
 * Callers:
 *     sub_1400132C0 @ 0x1400132C0 (sub_1400132C0.c)
 * Callees:
 *     sub_140012E90 @ 0x140012E90 (sub_140012E90.c)
 *     sub_140012FD4 @ 0x140012FD4 (sub_140012FD4.c)
 *     sub_140013020 @ 0x140013020 (sub_140013020.c)
 *     sub_140014E60 @ 0x140014E60 (sub_140014E60.c)
 *     sub_14001502C @ 0x14001502C (sub_14001502C.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     _o_floor @ 0x14004A640 (_o_floor.c)
 */

__int64 __fastcall sub_1400135E0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // rbx
  unsigned int v6; // ecx
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // r14
  __int128 v16; // rax
  bool v17; // zf
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rcx
  __int128 v21; // rax
  bool v22; // zf
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // ecx
  int v28; // eax
  double v29; // xmm2_8
  double v30; // xmm4_8
  double v31; // xmm3_8
  double v32; // xmm1_8
  unsigned __int64 v33; // rsi
  __int64 v34; // r14
  double v35; // xmm6_8
  double v36; // xmm0_8
  unsigned int v37; // ecx
  __int64 v38; // r15
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // r8
  char v44; // al
  int v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v48; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v50; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v51; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v52; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v54; // [rsp+70h] [rbp-98h] BYREF
  __int64 v55; // [rsp+78h] [rbp-90h] BYREF
  __int64 v56; // [rsp+80h] [rbp-88h] BYREF
  char v57[16]; // [rsp+88h] [rbp-80h] BYREF
  __int64 *v58; // [rsp+98h] [rbp-70h]
  __int64 v59; // [rsp+A0h] [rbp-68h]
  unsigned __int64 *v60; // [rsp+A8h] [rbp-60h]
  __int64 v61; // [rsp+B0h] [rbp-58h]
  __int64 *v62; // [rsp+B8h] [rbp-50h]
  __int64 v63; // [rsp+C0h] [rbp-48h]
  __int64 *v64; // [rsp+C8h] [rbp-40h]
  __int64 v65; // [rsp+D0h] [rbp-38h]
  __int64 *v66; // [rsp+D8h] [rbp-30h]
  __int64 v67; // [rsp+E0h] [rbp-28h]
  __int64 *v68; // [rsp+E8h] [rbp-20h]
  __int64 v69; // [rsp+F0h] [rbp-18h]
  __int64 *v70; // [rsp+F8h] [rbp-10h]
  __int64 v71; // [rsp+100h] [rbp-8h]
  __int64 *v72; // [rsp+108h] [rbp+0h]
  __int64 v73; // [rsp+110h] [rbp+8h]
  __int64 *v74; // [rsp+118h] [rbp+10h]
  __int64 v75; // [rsp+120h] [rbp+18h]
  __int64 *v76; // [rsp+128h] [rbp+20h]
  __int64 v77; // [rsp+130h] [rbp+28h]

  v2 = *(_QWORD *)(a1 + 4648);
  v3 = 0LL;
  LODWORD(v47) = 0;
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 4664) - v2;
    LODWORD(v47) = 1;
    ++*(_QWORD *)(a1 + 4656);
  }
  v4 = *(_QWORD *)(a1 + 4664);
  v5 = a1 + 448;
  v6 = *(_DWORD *)(a1 + 456);
  v7 = *(_QWORD *)(a1 + 4656);
  v8 = a1 + 448 + 16LL * (unsigned __int8)v6;
  if ( !v6 )
  {
    *(_QWORD *)(v8 + 104) = v7;
    *(_QWORD *)(v8 + 112) = v4;
    sub_140012FD4(a1 + 448, (_OWORD *)(v8 + 104));
    goto LABEL_24;
  }
  LOBYTE(v48) = 0;
  v9 = 16LL * (unsigned __int8)(v6 - 1);
  v10 = *(_QWORD *)(v9 + v5 + 112) - v4;
  if ( v10 < 0 )
    v10 = v4 - *(_QWORD *)(v9 + v5 + 112);
  v11 = *(_QWORD *)(v9 + a1 + 448 + 104) + *(_QWORD *)(a1 + 536);
  v49 = v10;
  if ( v7 > v11 || v10 > *(_QWORD *)(a1 + 544) )
  {
    if ( v6 > 0x100 )
    {
      if ( (v6 & 0x1FF) == 0 )
      {
        v44 = sub_140013020(a1 + 448);
        v45 = (unsigned __int8)v48;
        if ( !v44 )
          v45 = 1;
        LODWORD(v48) = v45;
      }
      v12 = *(_QWORD *)(v8 + 104) - *(_QWORD *)(a1 + 488);
      v13 = *(_QWORD *)(v8 + 112) - *(_QWORD *)(a1 + 496);
      *(_QWORD *)(a1 + 504) -= v12;
      *(_QWORD *)(a1 + 512) -= v13;
      *(_QWORD *)(a1 + 520) -= v12 * v13;
      *(_QWORD *)(a1 + 528) -= v12 * v12;
    }
    *(_QWORD *)(v8 + 104) = v7;
    *(_QWORD *)(v8 + 112) = v4;
    v14 = v7 - *(_QWORD *)(a1 + 488);
    v15 = v4 - *(_QWORD *)(a1 + 496);
    v16 = v14 * (__int128)v14;
    v50 = 0LL;
    if ( (__int64)v16 < 0 )
      v17 = *((_QWORD *)&v16 + 1) == -1LL;
    else
      v17 = *((_QWORD *)&v16 + 1) == 0LL;
    if ( !v17 )
      goto LABEL_59;
    v18 = *(_QWORD *)(a1 + 528);
    v19 = v18 + v16;
    v20 = v18 >> 63;
    if ( (_DWORD)v20 == (unsigned int)((unsigned __int64)(v14 * v14) >> 32) >> 31
      && (_DWORD)v20 != v19 > 0x7FFFFFFFFFFFFFFFLL )
    {
      goto LABEL_59;
    }
    v50 = 0LL;
    v21 = v14 * (__int128)v15;
    v22 = (__int64)v21 < 0 ? *((_QWORD *)&v21 + 1) == -1LL : *((_QWORD *)&v21 + 1) == 0LL;
    if ( v22
      && ((v23 = *(_QWORD *)(a1 + 520),
           v24 = v21 + v23,
           v25 = v23 >> 63,
           (_DWORD)v25 != (unsigned int)((unsigned __int64)(v14 * v15) >> 32) >> 31)
       || (_DWORD)v25 == v24 > 0x7FFFFFFFFFFFFFFFLL) )
    {
      *(_QWORD *)(a1 + 504) += v14;
      *(_QWORD *)(a1 + 512) += v15;
      ++*(_DWORD *)(a1 + 456);
      *(_QWORD *)(a1 + 520) = v24;
      *(_QWORD *)(a1 + 528) = v19;
    }
    else
    {
LABEL_59:
      if ( !sub_140013020(a1 + 448) || !sub_140012E90(v46, (_QWORD *)(v8 + 104)) )
        goto LABEL_51;
    }
    if ( !(_BYTE)v48 && *(_QWORD *)(v8 + 104) > *(_QWORD *)(v9 + v5 + 104) )
    {
      v26 = *(_QWORD *)(a1 + 544);
      if ( v26 <= 0 || v49 <= v26 )
      {
LABEL_24:
        v27 = *(_DWORD *)(a1 + 456);
        if ( v27 )
        {
          v28 = 256;
          v29 = (double)(int)*(_QWORD *)(a1 + 504);
          if ( v27 < 0x100 )
            v28 = *(_DWORD *)(a1 + 456);
          v30 = (double)v28;
          v31 = (double)(int)*(_QWORD *)(a1 + 528) - v29 * v29 / (double)v28;
          if ( fabs(v31) <= 0.01 || v27 <= 4 )
            v32 = *(double *)(a1 + 480);
          else
            v32 = ((double)(int)*(_QWORD *)(a1 + 520) - (double)(int)*(_QWORD *)(a1 + 512) * v29 / v30) / v31;
          *(double *)(a1 + 472) = v32;
          *(double *)(a1 + 464) = ((double)(int)*(_QWORD *)(a1 + 512) - v29 * v32) / v30;
        }
        goto LABEL_31;
      }
    }
LABEL_51:
    sub_14001502C(a1 + 448);
    *(_OWORD *)(a1 + 552) = *(_OWORD *)(v8 + 104);
    *(_QWORD *)(a1 + 488) = *(_QWORD *)(a1 + 552);
    *(_QWORD *)(a1 + 496) = *(_QWORD *)(a1 + 560);
    *(_DWORD *)(a1 + 456) = 1;
    goto LABEL_24;
  }
LABEL_31:
  v33 = *(_QWORD *)(a1 + 4656);
  v34 = *(_QWORD *)(a1 + 4664);
  *(_QWORD *)(a1 + 4648) = v34;
  v35 = *(double *)(a1 + 472);
  v36 = o_floor();
  v37 = *(_DWORD *)(a1 + 456);
  v38 = (unsigned int)(int)v36;
  if ( v37 <= 1 )
  {
    v40 = 0LL;
  }
  else
  {
    v39 = (unsigned __int8)v37;
    if ( v37 <= 0x100 )
      v39 = 0LL;
    v40 = *(_QWORD *)(a1 + 16LL * (unsigned __int8)(v37 - 1) + 552) - *(_QWORD *)(16 * v39 + a1 + 552);
  }
  if ( (byte_1400E8401 & 8) != 0 )
  {
    v41 = *(_QWORD *)(a1 + 104);
    v42 = v41 * v40;
    v55 = v41;
    v54 = v3;
    v53 = v38 - v34;
    v52 = (unsigned int)(int)v36;
    v50 = v42 / 10000;
    v51 = v34;
    v48 = v33;
    v49 = a1;
    v59 = 8LL;
    v61 = 8LL;
    v63 = 8LL;
    v56 = (unsigned int)(int)v35;
    v58 = &v49;
    v60 = &v48;
    v62 = &v51;
    v64 = &v52;
    v66 = &v53;
    v68 = &v54;
    v70 = &v47;
    v72 = &v55;
    v74 = &v56;
    v76 = &v50;
    v65 = 8LL;
    v67 = 8LL;
    v69 = 8LL;
    v71 = 4LL;
    v73 = 8LL;
    v75 = 8LL;
    v77 = 8LL;
    sub_140014E60(v41, (unsigned int)&unk_1400C5610, v42, 11, (__int64)v57);
    v33 = *(_QWORD *)(a1 + 4656);
  }
  if ( v38 - v34 > *(_QWORD *)(a1 + 104) )
  {
    sub_14001502C(a1 + 448);
    *(_QWORD *)(a1 + 4648) = 0LL;
    *(_QWORD *)(a1 + 4656) = 0LL;
    return *(_QWORD *)(a1 + 4664);
  }
  if ( v33 <= 0xA )
    return *(_QWORD *)(a1 + 4664);
  return (unsigned int)(int)v36;
}
