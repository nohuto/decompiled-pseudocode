/*
 * XREFs of ExpandDIB_CY @ 0x1400F06A0
 * Callers:
 *     <none>
 * Callees:
 *     MappingBGRF @ 0x1400EC8F0 (MappingBGRF.c)
 *     AlphaBlendBGRF @ 0x1400EC9A0 (AlphaBlendBGRF.c)
 *     GetFixupScan @ 0x1400EF040 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall ExpandDIB_CY(_OWORD *a1)
{
  __int64 v1; // rax
  int *v2; // rdx
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  unsigned __int64 v15; // r14
  unsigned __int8 *v16; // rdi
  int v17; // ecx
  __int64 v18; // r13
  __int64 v19; // rsi
  char *v20; // r12
  unsigned __int8 *v21; // r15
  __int64 FixupScan; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // r15d
  int v26; // eax
  unsigned int v27; // r15d
  unsigned int v28; // r12d
  int v29; // eax
  __int128 v30; // xmm1
  unsigned __int8 *v31; // r13
  unsigned __int8 *v32; // rbx
  unsigned __int8 *v33; // rdx
  char *v34; // rbx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  __int64 *v38; // rdx
  int v39; // eax
  int v40; // ecx
  int v41; // ecx
  int v42; // edx
  unsigned __int8 *v43; // r8
  unsigned __int16 v44; // bx
  unsigned __int64 v45; // r10
  _BYTE *v46; // r8
  int v47; // ecx
  int v48; // r15d
  int v49; // r9d
  int *v50; // r10
  int v51; // r11d
  unsigned __int8 *v52; // rbx
  __int64 v53; // r9
  unsigned __int8 *v54; // r10
  __int64 v55; // r11
  int v56; // edx
  __int64 v57; // rax
  __int16 v58; // ax
  __int64 v59; // rcx
  __int128 v60; // xmm1
  unsigned __int8 *v61; // r15
  __int64 v62; // rax
  __int64 v63; // r9
  int *v64; // r10
  int v65; // r11d
  unsigned __int8 *v66; // r9
  __int64 v67; // r10
  __int64 v68; // r11
  int v69; // edx
  __int64 v70; // rax
  __int64 v72; // rax
  int *v73; // r9
  int v74; // r10d
  unsigned __int8 *v75; // r9
  __int64 v76; // r10
  __int64 v77; // rax
  __int64 v78; // rcx
  int v79; // eax
  unsigned __int8 *v80; // rdx
  __int64 v81; // rax
  unsigned __int8 *v82; // rax
  __int64 v83; // [rsp+58h] [rbp-B0h]
  _BYTE v84[40]; // [rsp+68h] [rbp-A0h]
  unsigned __int8 *v85; // [rsp+90h] [rbp-78h]
  size_t Size; // [rsp+98h] [rbp-70h]
  int v87; // [rsp+A8h] [rbp-60h]
  __int64 *v88; // [rsp+B8h] [rbp-50h]
  int v89[34]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v90; // [rsp+150h] [rbp+48h]
  int v91; // [rsp+158h] [rbp+50h]
  unsigned int v92; // [rsp+15Ch] [rbp+54h]
  int v93; // [rsp+164h] [rbp+5Ch]
  void (__fastcall *v94)(int *); // [rsp+188h] [rbp+80h]
  void (__fastcall *v95)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v96; // [rsp+1E0h] [rbp+D8h]
  void (__fastcall *v97)(__int64, __int64, char *, char *, int); // [rsp+1E8h] [rbp+E0h]
  __int64 v98; // [rsp+1F8h] [rbp+F0h]
  __int64 v99; // [rsp+200h] [rbp+F8h]
  __int64 v100; // [rsp+248h] [rbp+140h]
  __int64 v101; // [rsp+250h] [rbp+148h]
  __int64 v102; // [rsp+260h] [rbp+158h]
  __int64 v103; // [rsp+268h] [rbp+160h]
  __int64 v104; // [rsp+270h] [rbp+168h]
  int v105; // [rsp+278h] [rbp+170h]
  int v106; // [rsp+27Ch] [rbp+174h]
  int v107; // [rsp+280h] [rbp+178h]
  unsigned __int8 *v108; // [rsp+288h] [rbp+180h]
  unsigned __int8 *v109; // [rsp+290h] [rbp+188h]
  unsigned __int8 *v110; // [rsp+298h] [rbp+190h]
  int v111; // [rsp+2A0h] [rbp+198h]
  __int64 v112; // [rsp+2E0h] [rbp+1D8h]
  unsigned __int8 *v113; // [rsp+2E8h] [rbp+1E0h]
  unsigned __int64 v114; // [rsp+2F0h] [rbp+1E8h]
  __int64 v115; // [rsp+2F8h] [rbp+1F0h]
  __int64 v116; // [rsp+300h] [rbp+1F8h]
  _BYTE *v117; // [rsp+308h] [rbp+200h]
  _BYTE *v118; // [rsp+310h] [rbp+208h]
  int v119; // [rsp+318h] [rbp+210h]

  v1 = 4LL;
  v2 = v89;
  do
  {
    v3 = a1[1];
    *(_OWORD *)v2 = *a1;
    v4 = a1[2];
    *((_OWORD *)v2 + 1) = v3;
    v5 = a1[3];
    *((_OWORD *)v2 + 2) = v4;
    v6 = a1[4];
    *((_OWORD *)v2 + 3) = v5;
    v7 = a1[5];
    *((_OWORD *)v2 + 4) = v6;
    v8 = a1[6];
    *((_OWORD *)v2 + 5) = v7;
    v9 = a1[7];
    a1 += 8;
    *((_OWORD *)v2 + 6) = v8;
    v2 += 32;
    *((_OWORD *)v2 - 1) = v9;
    --v1;
  }
  while ( v1 );
  v10 = *((_QWORD *)a1 + 10);
  v11 = a1[1];
  *(_OWORD *)v2 = *a1;
  v12 = a1[2];
  *((_OWORD *)v2 + 1) = v11;
  v13 = a1[3];
  *((_OWORD *)v2 + 2) = v12;
  v14 = a1[4];
  *((_OWORD *)v2 + 3) = v13;
  *((_OWORD *)v2 + 4) = v14;
  *((_QWORD *)v2 + 10) = v10;
  v15 = *(_QWORD *)(v99 + 32);
  v16 = (unsigned __int8 *)(v15 + 4105);
  v17 = 3 * (v91 + 6);
  v18 = v17 + v15 + 4105;
  *(_QWORD *)&v84[8] = v18;
  v19 = v17 + v17 + v18;
  *(_QWORD *)&v84[16] = v17 + v18;
  v20 = (char *)(v17 + v19);
  v21 = (unsigned __int8 *)&v20[v17];
  *(_QWORD *)&v84[24] = v19;
  *(_QWORD *)&v84[32] = v20;
  v85 = v21;
  Size = v17 - 18;
  FixupScan = GetFixupScan((unsigned int *)v89, v112);
  v97(v98, FixupScan, v20, &v20[Size], 3);
  if ( (*(_BYTE *)(v99 + 8) & 1) != 0 )
  {
    v23 = GetFixupScan((unsigned int *)v89, v112);
    v97(v98, v23, (char *)v21, (char *)&v21[Size], 3);
  }
  else
  {
    memmove(v21, v20, Size);
  }
  v24 = v99;
  v25 = *(unsigned __int16 *)(v99 + 12);
  v26 = v25 & 0xF;
  v27 = v25 >> 4;
  v28 = v26 + v27;
  if ( v26 + v27 )
  {
    do
    {
      v29 = v27;
      --v28;
      v30 = *(_OWORD *)&v84[24];
      --v27;
      v31 = &v16[Size];
      *(_OWORD *)v84 = *(_OWORD *)&v84[8];
      *(_QWORD *)&v84[32] = v85;
      v32 = v85;
      v85 = v16;
      *(_OWORD *)&v84[16] = v30;
      if ( v29 <= 0 )
      {
        v72 = GetFixupScan((unsigned int *)v89, v112);
        v97(v98, v72, (char *)v16, (char *)&v16[Size], 3);
      }
      else
      {
        memmove(v16, v32, Size);
      }
      v19 = *((_QWORD *)&v30 + 1);
      if ( (v89[0] & 0x200) != 0 )
      {
        memmove(*((void **)&v30 + 1), v32, Size);
      }
      else
      {
        v33 = (unsigned __int8 *)(*((_QWORD *)&v30 + 1) + 1LL);
        v34 = (char *)&v32[-*((_QWORD *)&v30 + 1)];
        do
        {
          v35 = (6 * v33[(_QWORD)v34 - 1] - *v16 - *(v33 - 1)) >> 2;
          if ( (v35 & 0xFF00) != 0 )
            LOBYTE(v35) = ~HIBYTE(v35);
          *(v33 - 1) = v35;
          v36 = (6 * v33[(_QWORD)v34] - v16[1] - *v33) >> 2;
          if ( (v36 & 0xFF00) != 0 )
            LOBYTE(v36) = ~HIBYTE(v36);
          *v33 = v36;
          v37 = (6 * v33[(_QWORD)v34 + 1] - v16[2] - v33[1]) >> 2;
          if ( (v37 & 0xFF00) != 0 )
            LOBYTE(v37) = ~HIBYTE(v37);
          v33[1] = v37;
          v16 += 3;
          v33 += 3;
        }
        while ( v16 < v31 );
      }
      v16 = *(unsigned __int8 **)v84;
    }
    while ( v28 );
    v24 = v99;
    v18 = *(_QWORD *)&v84[8];
  }
  v38 = *(__int64 **)(v24 + 40);
  v39 = *(_DWORD *)(v24 + 16);
  while ( v39 )
  {
    v87 = v39 - 1;
    v83 = *v38;
    v88 = v38 + 1;
    v44 = *v38;
    if ( (v44 & 0x8000u) != 0 )
    {
      v60 = *(_OWORD *)&v84[24];
      *(_OWORD *)v84 = *(_OWORD *)&v84[8];
      v61 = &v16[Size];
      *(_QWORD *)&v84[32] = v85;
      *(_OWORD *)&v84[16] = v60;
      v85 = v16;
      v62 = GetFixupScan((unsigned int *)v89, v112);
      v97(v98, v62, (char *)v16, (char *)&v16[Size], 3);
      if ( (v89[0] & 0x200) != 0 )
      {
        v19 = *((_QWORD *)&v60 + 1);
        memmove(*((void **)&v60 + 1), *(const void **)&v84[32], Size);
      }
      else
      {
        v19 = *((_QWORD *)&v60 + 1);
        v63 = *(_QWORD *)&v84[32] - *((_QWORD *)&v60 + 1);
        v43 = (unsigned __int8 *)(*((_QWORD *)&v60 + 1) + 1LL);
        do
        {
          v40 = (6 * v43[v63 - 1] - *v16 - *(v43 - 1)) >> 2;
          if ( (v40 & 0xFF00) != 0 )
            LOBYTE(v40) = ~HIBYTE(v40);
          *(v43 - 1) = v40;
          v41 = (6 * v43[v63] - v16[1] - *v43) >> 2;
          if ( (v41 & 0xFF00) != 0 )
            LOBYTE(v41) = ~HIBYTE(v41);
          *v43 = v41;
          v42 = (6 * v43[v63 + 1] - v16[2] - v43[1]) >> 2;
          if ( (v42 & 0xFF00) != 0 )
            LOBYTE(v42) = ~HIBYTE(v42);
          v43[1] = v42;
          v16 += 3;
          v43 += 3;
        }
        while ( v16 < v61 );
      }
      v18 = *(_QWORD *)&v84[8];
      v16 = *(unsigned __int8 **)v84;
      v44 &= 0x3FFFu;
    }
    v45 = v15;
    v46 = v117;
    v47 = -WORD2(v83);
    v48 = -v44;
    v49 = -WORD1(v83);
    if ( v44 )
    {
      v50 = (int *)(v15 + 2048);
      v51 = 4096 - HIWORD(v83);
      do
      {
        v48 += v44;
        v49 += WORD1(v83);
        v47 += WORD2(v83);
        *(v50 - 512) = v48;
        v51 += HIWORD(v83);
        *(v50 - 256) = v49;
        *v50 = v47;
        v50[256] = v51;
        ++v50;
      }
      while ( (unsigned __int64)(v50 - 512) < v15 + 1024 );
      v19 = *(_QWORD *)&v84[24];
      v52 = (unsigned __int8 *)(v18 + 2);
      v53 = *(_QWORD *)&v84[24] - v18;
      v54 = &v16[-v18];
      v55 = *(_QWORD *)&v84[16] - v18;
      do
      {
        v56 = *(_DWORD *)(v15 + 4LL * v52[(_QWORD)v54])
            + *(_DWORD *)(v15 + 4LL * v52[v55] + 2048)
            + *(_DWORD *)(v15 + 4LL * v52[v53] + 3072);
        v57 = *v52;
        v52 += 3;
        v46[2] = (*(_DWORD *)(v15 + 4 * v57 + 1024) + v56) >> 13;
        v46[1] = (*(_DWORD *)(v15 + 4LL * *(v52 - 4) + 1024)
                + *(_DWORD *)(v15 + 4LL * v52[(_QWORD)v54 - 4])
                + *(_DWORD *)(v15 + 4LL * v52[v53 - 4] + 3072)
                + *(_DWORD *)(v15 + 4LL * v52[v55 - 4] + 2048)) >> 13;
        *v46 = (*(_DWORD *)(v15 + 4LL * *(v52 - 5) + 1024)
              + *(_DWORD *)(v15 + 4LL * v52[(_QWORD)v54 - 5])
              + *(_DWORD *)(v15 + 4LL * v52[v53 - 5] + 3072)
              + *(_DWORD *)(v15 + 4LL * v52[v55 - 5] + 2048)) >> 13;
        v46 += v119;
      }
      while ( v46 != v118 );
    }
    else if ( WORD1(v83) )
    {
      v64 = (int *)(v15 + 2048);
      v65 = 4096 - HIWORD(v83);
      do
      {
        v49 += WORD1(v83);
        v47 += WORD2(v83);
        v65 += HIWORD(v83);
        *(v64 - 256) = v49;
        *v64 = v47;
        v64[256] = v65;
        ++v64;
      }
      while ( (unsigned __int64)(v64 - 512) < v15 + 1024 );
      v19 = *(_QWORD *)&v84[24];
      v66 = (unsigned __int8 *)(v18 + 2);
      v67 = *(_QWORD *)&v84[24] - v18;
      v68 = *(_QWORD *)&v84[16] - v18;
      do
      {
        v69 = *(_DWORD *)(v15 + 4LL * v66[v68] + 2048) + *(_DWORD *)(v15 + 4LL * v66[v67] + 3072);
        v70 = *v66;
        v66 += 3;
        v46[2] = (*(_DWORD *)(v15 + 4 * v70 + 1024) + v69) >> 13;
        v46[1] = (*(_DWORD *)(v15 + 4LL * *(v66 - 4) + 1024)
                + *(_DWORD *)(v15 + 4LL * v66[v67 - 4] + 3072)
                + *(_DWORD *)(v15 + 4LL * v66[v68 - 4] + 2048)) >> 13;
        *v46 = (*(_DWORD *)(v15 + 4LL * *(v66 - 5) + 1024)
              + *(_DWORD *)(v15 + 4LL * v66[v67 - 5] + 3072)
              + *(_DWORD *)(v15 + 4LL * v66[v68 - 5] + 2048)) >> 13;
        v46 += v119;
      }
      while ( v46 != v118 );
    }
    else if ( WORD2(v83) )
    {
      v73 = (int *)(v15 + 3072);
      v74 = 4096 - HIWORD(v83);
      do
      {
        v47 += WORD2(v83);
        v74 += HIWORD(v83);
        *(v73 - 256) = v47;
        *v73++ = v74;
      }
      while ( (unsigned __int64)(v73 - 768) < v15 + 1024 );
      v75 = (unsigned __int8 *)(v19 + 1);
      v76 = *(_QWORD *)&v84[16] - v19;
      do
      {
        v46[2] = (*(_DWORD *)(v15 + 4LL * v75[1] + 3072) + *(_DWORD *)(v15 + 4LL * v75[v76 + 1] + 2048)) >> 13;
        v77 = v75[v76];
        v78 = *v75;
        v75 += 3;
        v46[1] = (*(_DWORD *)(v15 + 4 * v78 + 3072) + *(_DWORD *)(v15 + 4 * v77 + 2048)) >> 13;
        *v46 = (*(_DWORD *)(v15 + 4LL * *(v75 - 4) + 3072) + *(_DWORD *)(v15 + 4LL * v75[v76 - 4] + 2048)) >> 13;
        v46 += v119;
      }
      while ( v46 != v118 );
    }
    else
    {
      v79 = 4096 - HIWORD(v83);
      do
      {
        v79 += HIWORD(v83);
        *(_DWORD *)(v45 + 3072) = v79;
        v45 += 4LL;
      }
      while ( v45 < v15 + 1024 );
      v80 = (unsigned __int8 *)(v19 + 1);
      do
      {
        v46[2] = *(int *)(v15 + 4LL * v80[1] + 3072) >> 13;
        v81 = *v80;
        v80 += 3;
        v46[1] = *(int *)(v15 + 4 * v81 + 3072) >> 13;
        *v46 = *(int *)(v15 + 4LL * *(v80 - 4) + 3072) >> 13;
        v46 += v119;
      }
      while ( v46 != v118 );
    }
    v58 = v89[0];
    if ( SLOBYTE(v89[0]) < 0 )
    {
      v94(v89);
      v58 = v89[0];
    }
    if ( (v58 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v89);
      LOBYTE(v58) = v89[0];
    }
    if ( (v58 & 0x10) != 0 )
    {
      MappingBGRF(v113, v114, v101, v108);
      v82 = &v108[v111];
      if ( v82 == v109 )
        v82 = v110;
      v108 = v82;
    }
    v95(v89, v115, v116, v90, v100, v102, v102 + v106, v107, v96);
    v38 = v88;
    v59 = v105 + v102;
    if ( v59 == v103 )
      v59 = v104;
    v90 += v93;
    v39 = v87;
    v102 = v59;
  }
  return v92;
}
