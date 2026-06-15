/*
 * XREFs of sub_14004229C @ 0x14004229C
 * Callers:
 *     sub_14006D820 @ 0x14006D820 (sub_14006D820.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140004C9C @ 0x140004C9C (sub_140004C9C.c)
 *     sub_14000DE78 @ 0x14000DE78 (sub_14000DE78.c)
 *     sub_14000FFE4 @ 0x14000FFE4 (sub_14000FFE4.c)
 *     sub_140010994 @ 0x140010994 (sub_140010994.c)
 *     sub_140011068 @ 0x140011068 (sub_140011068.c)
 *     sub_140011180 @ 0x140011180 (sub_140011180.c)
 *     sub_14001137C @ 0x14001137C (sub_14001137C.c)
 *     sub_1400115FC @ 0x1400115FC (sub_1400115FC.c)
 *     sub_140011760 @ 0x140011760 (sub_140011760.c)
 *     sub_1400126E8 @ 0x1400126E8 (sub_1400126E8.c)
 *     sub_140033368 @ 0x140033368 (sub_140033368.c)
 *     sub_140041B94 @ 0x140041B94 (sub_140041B94.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     memcmp @ 0x14004A694 (memcmp.c)
 *     _CxxThrowException @ 0x14004A6E8 (_CxxThrowException.c)
 *     sub_14004B6D4 @ 0x14004B6D4 (sub_14004B6D4.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_14006A544 @ 0x14006A544 (sub_14006A544.c)
 *     sub_14006A97C @ 0x14006A97C (sub_14006A97C.c)
 *     sub_14006AC50 @ 0x14006AC50 (sub_14006AC50.c)
 *     sub_14006ADA0 @ 0x14006ADA0 (sub_14006ADA0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall sub_14004229C(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4, int a5, __int64 *a6)
{
  int v7; // r14d
  float v8; // xmm7_4
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned __int16 *v14; // rcx
  int v15; // eax
  int v16; // eax
  __int128 v17; // xmm6
  unsigned __int16 v18; // r8
  unsigned __int16 v19; // dx
  unsigned __int16 v20; // cx
  unsigned __int16 v21; // dx
  BOOL v22; // r12d
  int v23; // eax
  int v24; // eax
  unsigned int i; // r15d
  int v26; // eax
  __int128 v27; // xmm6
  int v28; // r12d
  int v29; // edi
  int v30; // edx
  int v31; // edi
  unsigned __int16 *v32; // r15
  int v33; // eax
  int v34; // eax
  int v35; // r12d
  int v36; // eax
  __int64 v37; // rdi
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdi
  int v48; // eax
  unsigned int v49; // r14d
  int v50; // eax
  __int64 v51; // rdx
  int v52; // eax
  int v53; // eax
  _BYTE *v54; // rdx
  _BYTE v56[32]; // [rsp+0h] [rbp-218h] BYREF
  __int64 v57; // [rsp+40h] [rbp-1D8h] BYREF
  unsigned __int16 *v58; // [rsp+48h] [rbp-1D0h] BYREF
  BOOL v59; // [rsp+50h] [rbp-1C8h]
  __int64 v60; // [rsp+58h] [rbp-1C0h] BYREF
  __int64 v61[2]; // [rsp+60h] [rbp-1B8h] BYREF
  __int128 v62; // [rsp+70h] [rbp-1A8h] BYREF
  __int64 v63; // [rsp+80h] [rbp-198h] BYREF
  __int64 v64; // [rsp+88h] [rbp-190h] BYREF
  int v65; // [rsp+90h] [rbp-188h] BYREF
  int v66; // [rsp+94h] [rbp-184h] BYREF
  int v67; // [rsp+98h] [rbp-180h] BYREF
  int v68; // [rsp+9Ch] [rbp-17Ch] BYREF
  int v69; // [rsp+A0h] [rbp-178h] BYREF
  int v70; // [rsp+A4h] [rbp-174h] BYREF
  int v71; // [rsp+A8h] [rbp-170h] BYREF
  int v72; // [rsp+ACh] [rbp-16Ch] BYREF
  int v73; // [rsp+B0h] [rbp-168h] BYREF
  int v74; // [rsp+B4h] [rbp-164h] BYREF
  int v75; // [rsp+B8h] [rbp-160h] BYREF
  int pExceptionObject; // [rsp+BCh] [rbp-15Ch] BYREF
  int v77; // [rsp+C0h] [rbp-158h] BYREF
  __int64 v78; // [rsp+C8h] [rbp-150h] BYREF
  __int64 v79; // [rsp+D0h] [rbp-148h] BYREF
  int v80; // [rsp+D8h] [rbp-140h] BYREF
  int v81; // [rsp+DCh] [rbp-13Ch] BYREF
  int v82; // [rsp+E0h] [rbp-138h] BYREF
  int v83; // [rsp+E4h] [rbp-134h] BYREF
  __int128 v84; // [rsp+E8h] [rbp-130h]
  _BYTE Buf2[24]; // [rsp+F8h] [rbp-120h] BYREF
  __int64 v86; // [rsp+110h] [rbp-108h] BYREF
  __int128 v87; // [rsp+118h] [rbp-100h] BYREF
  __int64 v88; // [rsp+128h] [rbp-F0h]
  __int128 v89; // [rsp+130h] [rbp-E8h]
  int v90; // [rsp+140h] [rbp-D8h]
  __int64 v91; // [rsp+148h] [rbp-D0h]
  __int64 *v92; // [rsp+150h] [rbp-C8h]
  __int128 v93; // [rsp+160h] [rbp-B8h] BYREF
  __int64 v94; // [rsp+170h] [rbp-A8h] BYREF
  long *v95; // [rsp+178h] [rbp-A0h] BYREF
  ATL::CAtlException *v96; // [rsp+180h] [rbp-98h] BYREF
  _BYTE v97[40]; // [rsp+188h] [rbp-90h] BYREF

  v58 = a4;
  v91 = a1;
  v92 = a6;
  v7 = 0;
  LODWORD(v57) = 0;
  v59 = *(_DWORD *)a2 != 0;
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 10;
  if ( *(_DWORD *)(a2 + 8) == 1 )
    v8 = 1.0;
  else
    v8 = 1.1;
  try
  {
    *a6 = 0LL;
    v79 = 0LL;
    v9 = sub_140041B94(*(_QWORD *)(a2 + 144), &v79);
    if ( v9 < 0 )
    {
      pExceptionObject = v9;
      throw (long *)&pExceptionObject;
    }
    v78 = 0LL;
    v10 = sub_14006A544(*(_QWORD *)(a2 + 144), &v78);
    if ( v10 < 0 )
    {
      v77 = v10;
      throw (long *)&v77;
    }
    v63 = 0LL;
    v11 = *(_DWORD *)(a2 + 296);
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        v13 = sub_14006ADA0(a2, &v63);
        if ( v13 < 0 )
        {
          v81 = v13;
          throw (long *)&v81;
        }
      }
      else if ( v11 == 2 )
      {
        v15 = sub_14006AC50(a2, &v63);
        if ( v15 < 0 )
        {
          v82 = v15;
          throw (long *)&v82;
        }
      }
    }
    else
    {
      v12 = sub_140033368(a2, &v63);
      if ( v12 < 0 )
      {
        v80 = v12;
        throw (long *)&v80;
      }
    }
    v60 = v63;
    sub_140011180((__int64)&v87, &v60);
    v63 = 0LL;
    v84 = 0LL;
    memset(Buf2, 0, sizeof(Buf2));
    v14 = *(unsigned __int16 **)(a2 + 128);
    if ( v14 )
    {
      if ( *v14 == 0xFFFE )
      {
        if ( v14[8] == 22
          || *((_QWORD *)v14 + 3) == 0x10000000000003LL && *((_QWORD *)v14 + 4) == 0x719B3800AA000080LL
          || *((_QWORD *)v14 + 3) == 0x10000000000001LL && *((_QWORD *)v14 + 4) == 0x719B3800AA000080LL )
        {
          v84 = *(_OWORD *)v14;
          *(_OWORD *)Buf2 = *((_OWORD *)v14 + 1);
          *(_QWORD *)&Buf2[16] = *((_QWORD *)v14 + 4);
          *(_WORD *)Buf2 = 22;
          v16 = *(_DWORD *)&Buf2[4];
          v17 = xmmword_1400C57E0;
LABEL_31:
          LODWORD(v57) = v16;
          if ( memcmp(&xmmword_1400C57D0, &Buf2[8], 0x10uLL) && memcmp(&xmmword_1400C6E60, &Buf2[8], 0x10uLL) )
            goto LABEL_57;
          memset(v97, 0, sizeof(v97));
          if ( v58 )
          {
            if ( *v58 == 0xFFFE )
            {
              if ( v58[8] == 22
                || *((_QWORD *)v58 + 3) == 0x10000000000003LL && *((_QWORD *)v58 + 4) == 0x719B3800AA000080LL
                || *((_QWORD *)v58 + 3) == 0x10000000000001LL && *((_QWORD *)v58 + 4) == 0x719B3800AA000080LL )
              {
                *(_OWORD *)v97 = *(_OWORD *)v58;
                *(_OWORD *)&v97[16] = *((_OWORD *)v58 + 1);
                *(_QWORD *)&v97[32] = *((_QWORD *)v58 + 4);
                *(_WORD *)&v97[16] = 22;
                goto LABEL_49;
              }
            }
            else if ( !v58[8] || ((*v58 - 1) & 0xFFFD) == 0 )
            {
              v20 = v58[1];
              if ( v20 == 1 || v20 == 2 )
              {
                v21 = v58[7];
                if ( v21 == 8 || ((v21 - 16) & 0xFFE7) == 0 && v21 != 40 )
                {
                  *(_OWORD *)v97 = *(_OWORD *)v58;
                  *(_WORD *)v97 = -2;
                  *(_WORD *)&v97[16] = 22;
                  *(_WORD *)&v97[18] = v21;
                  *(_OWORD *)&v97[24] = v17;
                  *(_DWORD *)&v97[24] = *v58;
                  *(_DWORD *)&v97[20] = 4 - (v20 != 1);
LABEL_49:
                  if ( *(_DWORD *)(a2 + 152) && *(_WORD *)&v97[2] != WORD1(v84) )
                  {
                    *(_WORD *)&v97[2] = WORD1(v84);
                    *(_DWORD *)&v97[20] = v57;
                    *(_WORD *)&v97[12] = WORD1(v84) * (*(_WORD *)&v97[14] >> 3);
                    *(_DWORD *)&v97[8] = *(_DWORD *)&v97[4] * *(unsigned __int16 *)&v97[12];
                  }
                  v57 = 0LL;
                  v22 = v59;
                  v23 = sub_14001137C(v59, (__int64)v97, &v57);
                  if ( v23 < 0 )
                  {
                    v83 = v23;
                    throw (long *)&v83;
                  }
                  v60 = v57;
                  sub_140011180((__int64)&v87, &v60);
                  v57 = 0LL;
                  if ( !memcmp(&xmmword_1400C57D0, &Buf2[8], 0x10uLL) && (*(_DWORD *)(a2 + 136) & 0x800000) == 0 )
                  {
                    v64 = 0LL;
                    v62 = xmmword_1400C6878;
                    v24 = sub_14006A97C((unsigned int)&qword_1400C96C0, 0, 0, v22, 1, 0, (__int64)&v62, (__int64)&v64);
                    if ( v24 < 0 )
                    {
                      v65 = v24;
                      throw (long *)&v65;
                    }
                    v60 = v64;
                    sub_140011180((__int64)&v87, &v60);
                  }
LABEL_57:
                  for ( i = 0; i < *(_DWORD *)(a2 + 328); ++i )
                  {
                    v60 = 0LL;
                    v26 = *(_DWORD *)(a2 + 152);
                    if ( _bittest(&v26, i) )
                    {
                      v27 = *(_OWORD *)(a2 + 156);
                      v28 = 1;
                      sub_140010994(&v86, v78);
                      v29 = v86;
                      sub_140010994(&v64, v79);
                      v7 |= 5u;
                      v30 = v64;
                    }
                    else
                    {
                      v27 = xmmword_1400C6878;
                      v28 = 0;
                      *(_QWORD *)&v62 = 0LL;
                      v29 = 0;
                      v94 = 0LL;
                      v7 |= 0xAu;
                      v30 = 0;
                    }
                    LODWORD(v57) = v7;
                    v93 = v27;
                    v31 = sub_14006A97C(
                            (unsigned int)a2 + 16 * i + 332,
                            v30,
                            v29,
                            v59,
                            0,
                            v28,
                            (__int64)&v93,
                            (__int64)&v60);
                    if ( (v7 & 8) != 0 )
                    {
                      v7 &= ~8u;
                      sub_140003238(&v94);
                    }
                    if ( (v7 & 4) != 0 )
                    {
                      v7 &= ~4u;
                      sub_140003238(&v64);
                    }
                    if ( (v7 & 2) != 0 )
                    {
                      v7 &= ~2u;
                      sub_140003238((__int64 *)&v62);
                    }
                    if ( (v7 & 1) != 0 )
                    {
                      v7 &= ~1u;
                      sub_140003238(&v86);
                    }
                    if ( v31 < 0 )
                    {
                      v66 = v31;
                      throw (long *)&v66;
                    }
                    v57 = v60;
                    sub_140011180((__int64)&v87, &v57);
                  }
                  v61[0] = 0LL;
                  v32 = v58;
                  v33 = sub_14004B6D4(v58, (unsigned int)v58[8] + 18, v61);
                  if ( v33 < 0 )
                  {
                    v67 = v33;
                    throw (long *)&v67;
                  }
                  v34 = *(_DWORD *)a2;
                  if ( *(_DWORD *)a2 )
                  {
                    if ( v34 == 1 )
                    {
                      v58 = 0LL;
                      v40 = sub_1400B6010(v61[0]);
                      v35 = v59;
                      v41 = sub_14001137C(v59, v40, (__int64 *)&v58);
                      if ( v41 < 0 )
                      {
                        v70 = v41;
                        throw (long *)&v70;
                      }
                    }
                    else
                    {
                      if ( (unsigned int)(v34 - 2) > 1 )
                      {
                        v35 = v59;
                        goto LABEL_84;
                      }
                      v58 = 0LL;
                      v42 = sub_1400B6010(v61[0]);
                      v35 = v59;
                      v43 = sub_14001137C(v59, v42, (__int64 *)&v58);
                      if ( v43 < 0 )
                      {
                        v71 = v43;
                        throw (long *)&v71;
                      }
                    }
                  }
                  else
                  {
                    v57 = 0LL;
                    v93 = xmmword_1400C6878;
                    v35 = v59;
                    v36 = sub_14006A97C((unsigned int)&qword_1400C9798, 0, 0, v59, 1, 0, (__int64)&v93, (__int64)&v57);
                    if ( v36 < 0 )
                    {
                      v68 = v36;
                      throw (long *)&v68;
                    }
                    v37 = v57;
                    sub_1400B6010(v57);
                    sub_1400B6010(v37);
                    *(_QWORD *)&v62 = v37;
                    sub_140011180((__int64)&v87, &v62);
                    v57 = 0LL;
                    v58 = 0LL;
                    v38 = sub_1400B6010(v61[0]);
                    v39 = sub_14001137C(v35, v38, (__int64 *)&v58);
                    if ( v39 < 0 )
                    {
                      v69 = v39;
                      throw (long *)&v69;
                    }
                  }
                  *(_QWORD *)&v62 = v58;
                  sub_140011180((__int64)&v87, &v62);
LABEL_84:
                  v44 = sub_140049338(344LL, &unk_1400C75FC);
                  *(_QWORD *)&v62 = v44;
                  if ( v44 )
                    v47 = sub_1400126E8(v44, 2);
                  else
                    v47 = 0LL;
                  v58 = (unsigned __int16 *)v47;
                  if ( !v47 )
                  {
                    v72 = -2147024882;
                    throw (long *)&v72;
                  }
                  v48 = sub_140011760(v46, v45, *(_QWORD *)(a2 + 144), (_QWORD *)(v47 + 192));
                  v49 = v48;
                  if ( v48 < 0 )
                  {
                    v73 = v48;
                    throw (long *)&v73;
                  }
                  if ( *(_DWORD *)a2 == 2 || (v50 = 0, *(_DWORD *)a2 == 3) )
                    v50 = 1;
                  *(_DWORD *)(v47 + 120) = v50;
                  *(_DWORD *)(v47 + 132) = *(_DWORD *)a2;
                  *(_DWORD *)(v47 + 12) = v35;
                  *(_DWORD *)(v47 + 136) = *(_DWORD *)(a2 + 152) != 0;
                  *(_DWORD *)(v47 + 124) = *(_DWORD *)(a2 + 8) == 1;
                  if ( *(_QWORD *)(v47 + 152) )
                    sub_1400115FC((_QWORD *)(v47 + 152), 0LL);
                  sub_140004C9C((_QWORD *)(v47 + 240), v91);
                  *(_QWORD *)v47 = 0LL;
                  *(_DWORD *)(v47 + 8) = 1;
                  *(_BYTE *)(v47 + 316) = *(_DWORD *)(a2 + 188) != 0;
                  sub_140011068(v47 + 16, (__int64)&v87);
                  sub_14000DE78((__int64)&v87, v51);
                  v52 = *(_DWORD *)(a2 + 276);
                  if ( !v52 )
                    v52 = (int)(float)((float)(int)((double)(int)(*((_DWORD *)v32 + 2) / (unsigned int)v32[6])
                                                  * (double)(int)*(_QWORD *)(a2 + 32)
                                                  / 10000000.0
                                                  + 0.5)
                                     * v8);
                  *(_DWORD *)(v47 + 148) = v52;
                  v53 = 1;
                  if ( *(_DWORD *)(a2 + 4) )
                    v53 = 7;
                  *(_DWORD *)(v47 + 140) = v53;
                  *(_DWORD *)(v47 + 212) = 0;
                  if ( (*(_DWORD *)(a2 + 136) & 0x100000) != 0 )
                  {
                    *(_DWORD *)(v47 + 140) = v53 | 0xA;
                    *(_DWORD *)(v47 + 200) = 1056964608;
                    *(_DWORD *)(v47 + 204) = 1065353216;
                  }
                  if ( (*(_DWORD *)(a2 + 136) & 0x8000000) != 0 )
                    *(_DWORD *)(v47 + 208) = 3;
                  v58 = 0LL;
                  *v92 = v47;
                  sub_14000FFE4(&v58);
                  sub_140003238(v61);
                  sub_140003238(&v78);
                  sub_140003238(&v79);
                  goto LABEL_129;
                }
              }
            }
          }
          v74 = -2005139404;
          throw (long *)&v74;
        }
      }
      else if ( !v14[8] || ((*v14 - 1) & 0xFFFD) == 0 )
      {
        v18 = v14[1];
        if ( v18 == 1 || v18 == 2 )
        {
          v19 = v14[7];
          if ( v19 == 8 || ((v19 - 16) & 0xFFE7) == 0 && v19 != 40 )
          {
            v84 = *(_OWORD *)v14;
            LOWORD(v84) = -2;
            *(_WORD *)Buf2 = 22;
            *(_WORD *)&Buf2[2] = v19;
            v17 = xmmword_1400C57E0;
            *(_OWORD *)&Buf2[8] = xmmword_1400C57E0;
            *(_DWORD *)&Buf2[8] = *v14;
            v16 = 4 - (v18 != 1);
            *(_DWORD *)&Buf2[4] = v16;
            goto LABEL_31;
          }
        }
      }
    }
    v75 = -2005139404;
    throw (long *)&v75;
  }
  catch ( long *v95 )
  {
    v54 = v56;
    LODWORD(v57) = *(_DWORD *)v95;
    goto LABEL_103;
  }
  catch ( ATL::CAtlException *v96 )
  {
    v54 = v56;
    LODWORD(v57) = *(_DWORD *)v96;
LABEL_103:
    v49 = v57;
    if ( (int)v57 < 0 )
    {
      if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
        && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
        && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
      {
        sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 19LL, &unk_1400C9A58);
      }
      sub_14005A470("CPipeInstance::CreateStreamPipeInstance", 923LL, v49);
    }
  }
LABEL_129:
  sub_14000DE78((__int64)&v87, (__int64)v54);
  return v49;
}
