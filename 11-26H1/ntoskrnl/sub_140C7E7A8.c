/*
 * XREFs of sub_140C7E7A8 @ 0x140C7E7A8
 * Callers:
 *     sub_140544BB0 @ 0x140544BB0 (sub_140544BB0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140C68010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140C7A754 @ 0x140C7A754 (sub_140C7A754.c)
 *     sub_140C7CE10 @ 0x140C7CE10 (sub_140C7CE10.c)
 *     sub_140C8713C @ 0x140C8713C (sub_140C8713C.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x140C816F0 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_140C7E7A8(_DWORD *a1, unsigned int a2, int a3)
{
  _DWORD *v3; // rdi
  __int64 v4; // rbx
  int v5; // r9d
  int v6; // r10d
  unsigned int v7; // r15d
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // r15
  __int64 v16; // r15
  unsigned int v17; // r11d
  _QWORD *v18; // r8
  int v19; // r10d
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // rax
  unsigned __int128 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int128 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // r10
  unsigned int v27; // r14d
  _QWORD *v28; // r8
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // rax
  unsigned __int128 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int128 v33; // rax
  unsigned __int64 v34; // rdx
  char *v35; // rcx
  unsigned int v36; // r8d
  __int64 v37; // rdx
  unsigned __int64 v38; // r10
  char *v39; // rcx
  int v40; // eax
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // r9d
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  unsigned __int64 v50; // rax
  __int64 v51; // rcx
  int v52; // r14d
  unsigned __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // r11
  _DWORD *v57; // r14
  _QWORD *v58; // r8
  int v59; // r9d
  unsigned __int64 v60; // r11
  unsigned __int64 v61; // rax
  unsigned __int128 v62; // rax
  unsigned __int64 v63; // rax
  unsigned __int128 v64; // rax
  unsigned __int64 v65; // rdx
  unsigned int v66; // r14d
  _QWORD *v67; // r8
  _QWORD *v68; // r9
  unsigned __int64 v69; // r10
  unsigned __int64 v70; // rax
  unsigned __int128 v71; // rax
  unsigned __int64 v72; // rax
  unsigned __int128 v73; // rax
  unsigned __int64 v74; // rdx
  int v75; // ecx
  __int64 v76; // rax
  __int64 v77; // rdx
  unsigned int v78; // ecx
  int v79; // edx
  int v80; // eax
  __int64 v81; // rax
  __int64 v82; // rax
  unsigned int v83; // r10d
  int v84; // r9d
  _QWORD *v85; // r8
  unsigned __int64 v86; // r10
  unsigned __int64 v87; // rax
  unsigned __int128 v88; // rax
  unsigned __int64 v89; // rax
  unsigned __int128 v90; // rax
  unsigned __int64 v91; // rdx
  __int64 v92; // r11
  unsigned int v93; // r9d
  unsigned int v94; // r10d
  _QWORD *v95; // r8
  unsigned __int64 v96; // r11
  unsigned __int64 v97; // rax
  unsigned __int128 v98; // rax
  unsigned __int64 v99; // rax
  unsigned __int128 v100; // rax
  unsigned __int64 v101; // rdx
  char *v102; // rcx
  unsigned int v103; // r8d
  __int64 v104; // rdx
  unsigned __int64 v105; // r10
  char *v106; // rcx
  int v107; // eax
  __int64 v108; // [rsp+40h] [rbp-58h]
  __int64 v109; // [rsp+40h] [rbp-58h]
  __int64 *v110; // [rsp+40h] [rbp-58h]
  __int64 v111; // [rsp+48h] [rbp-50h]
  __int64 v112; // [rsp+48h] [rbp-50h]
  __int64 v113; // [rsp+50h] [rbp-48h]
  __int64 v114; // [rsp+58h] [rbp-40h]
  __int64 v115; // [rsp+58h] [rbp-40h]
  unsigned int v118; // [rsp+B0h] [rbp+18h]
  __int64 v119; // [rsp+B8h] [rbp+20h]
  unsigned int v120; // [rsp+B8h] [rbp+20h]
  __int64 v121; // [rsp+B8h] [rbp+20h]

  v3 = a1;
  if ( a3 != 3 )
  {
    v4 = 0LL;
    v5 = 0;
    v6 = a1[630] & 0x8000000;
    if ( !v6 )
      v5 = a1[593];
    v7 = a1[524];
    v8 = __rdtsc();
    v9 = __ROR8__(v8, 3);
    v10 = ((unsigned __int16)(8193 * (v9 ^ v8)) ^ (unsigned __int16)(((v9 ^ v8)
                                                                    * (unsigned __int128)0x7010008004002001uLL) >> 64)) & 0x7FF;
    v11 = __rdtsc();
    v12 = __ROR8__(v11, 3) ^ v11;
    v108 = (((v12 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (0x7010008004002001LL * v12))
         % (unsigned int)(v10 + 1);
    if ( v5 )
    {
      v13 = __rdtsc();
      v14 = __ROR8__(v13, 3);
      v10 += ((((67117057 * ((unsigned int)v14 ^ (unsigned int)v13)) ^ (unsigned int)(((v14 ^ v13)
                                                                                     * (unsigned __int128)0x7010008004002001uLL) >> 64)) & 1) << 12)
           + 4096;
      v119 = v10 + a2;
      v15 = (_QWORD *)(*((__int64 (__fastcall **)(__int64, __int64))v3 + 70))(v119 + 8, 0xFFFFFFFFLL);
      if ( !v15 )
        goto LABEL_11;
      if ( !(*((unsigned __int8 (__fastcall **)(_QWORD *, _QWORD, __int64))v3 + 73))(
              v15,
              ((_DWORD)v119 + 4095) & 0xFFFFF000,
              64LL) )
      {
        (*((void (__fastcall **)(_QWORD *, __int64))v3 + 71))(v15, v119);
        goto LABEL_11;
      }
      *v15 = v119 + 8;
      v16 = (__int64)(v15 + 1);
    }
    else
    {
      v16 = (*((__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD))v3 + 32))(
              (-(__int64)(v6 != 0) & 0xFFFFFFFFFFFFFFC0uLL) + 130,
              v10 + a2,
              v7);
    }
    if ( v16 )
    {
      v17 = v108;
      v18 = (_QWORD *)v16;
      v19 = v108;
      if ( (unsigned int)v108 >= 8 )
      {
        v20 = (unsigned __int64)(unsigned int)v108 >> 3;
        do
        {
          v21 = __rdtsc();
          v19 -= 8;
          v22 = (__ROR8__(v21, 3) ^ v21) * (unsigned __int128)0x7010008004002001uLL;
          *v18++ = v22 ^ *((_QWORD *)&v22 + 1);
          --v20;
        }
        while ( v20 );
        v17 = v108;
      }
      if ( v19 )
      {
        v23 = __rdtsc();
        v24 = (__ROR8__(v23, 3) ^ v23) * (unsigned __int128)0x7010008004002001uLL;
        v25 = v24 ^ *((_QWORD *)&v24 + 1);
        do
        {
          *(_BYTE *)v18 = v25;
          v18 = (_QWORD *)((char *)v18 + 1);
          v25 >>= 8;
          --v19;
        }
        while ( v19 );
      }
      v26 = v17;
      v27 = v10 - v17;
      v28 = (_QWORD *)(v17 + v16 + a2);
      if ( v27 >= 8 )
      {
        v29 = (unsigned __int64)v27 >> 3;
        do
        {
          v30 = __rdtsc();
          v27 -= 8;
          v31 = (__ROR8__(v30, 3) ^ v30) * (unsigned __int128)0x7010008004002001uLL;
          *v28++ = v31 ^ *((_QWORD *)&v31 + 1);
          --v29;
        }
        while ( v29 );
        v26 = v17;
      }
      if ( v27 )
      {
        v32 = __rdtsc();
        v33 = (__ROR8__(v32, 3) ^ v32) * (unsigned __int128)0x7010008004002001uLL;
        v34 = v33 ^ *((_QWORD *)&v33 + 1);
        do
        {
          *(_BYTE *)v28 = v34;
          v28 = (_QWORD *)((char *)v28 + 1);
          v34 >>= 8;
          --v27;
        }
        while ( v27 );
      }
      v35 = (char *)(v26 + v16);
      if ( v26 + v16 )
      {
        v36 = v3[513];
        v37 = v26 + v16;
        if ( v36 >= 8 )
        {
          v38 = (unsigned __int64)v36 >> 3;
          do
          {
            v36 -= 8;
            *(_QWORD *)v35 = *(_QWORD *)v3;
            v3 += 2;
            v35 += 8;
            --v38;
          }
          while ( v38 );
        }
        if ( v36 )
        {
          v39 = (char *)(v35 - (char *)v3);
          do
          {
            *((_BYTE *)v3 + (_QWORD)v39) = *(_BYTE *)v3;
            v3 = (_DWORD *)((char *)v3 + 1);
            --v36;
          }
          while ( v36 );
        }
        *(_DWORD *)(v37 + 2372) = a3;
        v40 = *(_DWORD *)(v37 + 2520);
        *(_DWORD *)(v37 + 2052) = a2;
        *(_QWORD *)(v37 + 2024) = v16;
        if ( (v40 & 0x8000000) == 0 )
          *(_DWORD *)(v37 + 2520) = v40 | 0x10000000;
        return v37;
      }
      return v4;
    }
LABEL_11:
    ++v3[664];
    return v4;
  }
  v42 = __rdtsc();
  v43 = __ROR8__(v42, 3);
  v44 = ((unsigned __int16)(((v43 ^ v42) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int16)(8193 * (v43 ^ v42))) & 0x7FF;
  v45 = __rdtsc();
  v46 = __ROR8__(v45, 3);
  v113 = ((((v46 ^ v45) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (0x7010008004002001LL * (v46 ^ v45)))
       % (unsigned int)(v44 + 1);
  v47 = __rdtsc();
  v48 = __ROR8__(v47, 3);
  v49 = (unsigned int)v3[524];
  v120 = v44
       + ((((unsigned int)(((v48 ^ v47) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057
                                                                                            * ((unsigned int)v48 ^ (unsigned int)v47))) & 1) << 12)
       + 4096;
  v50 = __rdtsc();
  v51 = __ROR8__(v50, 3);
  v52 = ((unsigned __int16)(((v51 ^ v50) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int16)(8193 * (v51 ^ v50))) & 0x7FF;
  v53 = __rdtsc();
  v54 = __ROR8__(v53, 3);
  v111 = ((((v54 ^ v53) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (0x7010008004002001LL * (v54 ^ v53)))
       % (unsigned int)(v52 + 1);
  v55 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))v3 + 32))(66LL, (unsigned int)(v52 + 32), v49);
  v109 = v55;
  v56 = v55;
  if ( !v55 )
  {
    v57 = v3 + 664;
    ++v3[664];
LABEL_88:
    ++*v57;
    return 0LL;
  }
  v58 = (_QWORD *)v55;
  v59 = v111;
  if ( (unsigned int)v111 >= 8 )
  {
    v60 = (unsigned __int64)(unsigned int)v111 >> 3;
    do
    {
      v61 = __rdtsc();
      v59 -= 8;
      v62 = (__ROR8__(v61, 3) ^ v61) * (unsigned __int128)0x7010008004002001uLL;
      *v58++ = v62 ^ *((_QWORD *)&v62 + 1);
      --v60;
    }
    while ( v60 );
    v56 = v109;
  }
  if ( v59 )
  {
    v63 = __rdtsc();
    v64 = (__ROR8__(v63, 3) ^ v63) * (unsigned __int128)0x7010008004002001uLL;
    v65 = v64 ^ *((_QWORD *)&v64 + 1);
    do
    {
      *(_BYTE *)v58 = v65;
      v58 = (_QWORD *)((char *)v58 + 1);
      v65 >>= 8;
      --v59;
    }
    while ( v59 );
  }
  v66 = v52 - v111;
  v67 = (_QWORD *)(v56 + (unsigned int)v111);
  v68 = v67 + 4;
  if ( v66 >= 8 )
  {
    v69 = (unsigned __int64)v66 >> 3;
    do
    {
      v70 = __rdtsc();
      v66 -= 8;
      v71 = (__ROR8__(v70, 3) ^ v70) * (unsigned __int128)0x7010008004002001uLL;
      *v68++ = v71 ^ *((_QWORD *)&v71 + 1);
      --v69;
    }
    while ( v69 );
  }
  if ( v66 )
  {
    v72 = __rdtsc();
    v73 = (__ROR8__(v72, 3) ^ v72) * (unsigned __int128)0x7010008004002001uLL;
    v74 = v73 ^ *((_QWORD *)&v73 + 1);
    do
    {
      *(_BYTE *)v68 = v74;
      v68 = (_QWORD *)((char *)v68 + 1);
      v74 >>= 8;
      --v66;
    }
    while ( v66 );
  }
  v57 = v3 + 664;
  if ( !v67 )
    goto LABEL_88;
  v75 = 32;
  v76 = v56 + (unsigned int)v111;
  v110 = (__int64 *)v76;
  v77 = 4LL;
  do
  {
    *v67 = 0LL;
    v75 -= 8;
    ++v67;
    --v77;
  }
  while ( v77 );
  for ( ; v75; --v75 )
  {
    *(_BYTE *)v67 = 0;
    v67 = (_QWORD *)((char *)v67 + 1);
  }
  v78 = v3[524];
  v79 = 5;
  *(_DWORD *)(v76 + 16) = v78;
  v118 = v78;
  *(_QWORD *)(v76 + 24) = v56;
  v80 = v3[630];
  if ( (v80 & 0x800000) != 0 )
    v79 = 21;
  else
    v3[630] = v80 | 0x800000;
  v112 = a2 + v120;
  v81 = (*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, int, int))v3 + 106))(0LL, -1LL, 0LL, v112, 1, v79);
  v114 = v81;
  if ( !v81
    || (*v110 = v81, (v82 = (*((__int64 (__fastcall **)(__int64, _QWORD))v3 + 107))(v112, v118)) == 0)
    || (v110[1] = v82,
        v115 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))v3 + 108))(v82, v118, v114, 1LL),
        !(*((unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64))v3 + 73))(
           v115,
           ((_DWORD)v112 + 4095) & 0xFFFFF000,
           64LL)) )
  {
    (*((void (__fastcall **)(__int64 *))v3 + 110))(v110);
    goto LABEL_88;
  }
  v83 = v113;
  v84 = v113;
  v85 = (_QWORD *)v115;
  if ( (unsigned int)v113 >= 8 )
  {
    v86 = (unsigned __int64)(unsigned int)v113 >> 3;
    do
    {
      v87 = __rdtsc();
      v84 -= 8;
      v88 = (__ROR8__(v87, 3) ^ v87) * (unsigned __int128)0x7010008004002001uLL;
      *v85++ = v88 ^ *((_QWORD *)&v88 + 1);
      --v86;
    }
    while ( v86 );
    v83 = v113;
  }
  if ( v84 )
  {
    v89 = __rdtsc();
    v90 = (__ROR8__(v89, 3) ^ v89) * (unsigned __int128)0x7010008004002001uLL;
    v91 = v90 ^ *((_QWORD *)&v90 + 1);
    do
    {
      *(_BYTE *)v85 = v91;
      v85 = (_QWORD *)((char *)v85 + 1);
      v91 >>= 8;
      --v84;
    }
    while ( v84 );
  }
  v92 = v83;
  v93 = v120 - v83;
  v94 = a2;
  v121 = v92;
  v95 = (_QWORD *)(v115 + v92 + a2);
  if ( v93 >= 8 )
  {
    v96 = (unsigned __int64)v93 >> 3;
    do
    {
      v97 = __rdtsc();
      v93 -= 8;
      v98 = (__ROR8__(v97, 3) ^ v97) * (unsigned __int128)0x7010008004002001uLL;
      *v95++ = v98 ^ *((_QWORD *)&v98 + 1);
      --v96;
    }
    while ( v96 );
    v92 = v121;
  }
  if ( v93 )
  {
    v99 = __rdtsc();
    v100 = (__ROR8__(v99, 3) ^ v99) * (unsigned __int128)0x7010008004002001uLL;
    v101 = v100 ^ *((_QWORD *)&v100 + 1);
    do
    {
      *(_BYTE *)v95 = v101;
      v95 = (_QWORD *)((char *)v95 + 1);
      v101 >>= 8;
      --v93;
    }
    while ( v93 );
  }
  v102 = (char *)(v92 + v115);
  if ( v92 + v115 )
  {
    v103 = v3[513];
    v104 = v92 + v115;
    if ( v103 >= 8 )
    {
      v105 = (unsigned __int64)v103 >> 3;
      do
      {
        v103 -= 8;
        *(_QWORD *)v102 = *(_QWORD *)v3;
        v3 += 2;
        v102 += 8;
        --v105;
      }
      while ( v105 );
      v94 = a2;
    }
    if ( v103 )
    {
      v106 = (char *)(v102 - (char *)v3);
      do
      {
        *((_BYTE *)v3 + (_QWORD)v106) = *(_BYTE *)v3;
        v3 = (_DWORD *)((char *)v3 + 1);
        --v103;
      }
      while ( v103 );
    }
    v107 = *(_DWORD *)(v104 + 2520);
    *(_DWORD *)(v104 + 2052) = v94;
    *(_QWORD *)(v104 + 2024) = v110;
    *(_DWORD *)(v104 + 2372) = 3;
    if ( (v107 & 0x8000000) == 0 )
      *(_DWORD *)(v104 + 2520) = v107 | 0x10000000;
    return v104;
  }
  return 0LL;
}
