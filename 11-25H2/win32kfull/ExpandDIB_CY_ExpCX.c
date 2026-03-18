/*
 * XREFs of ExpandDIB_CY_ExpCX @ 0x1401A9BB0
 * Callers:
 *     <none>
 * Callees:
 *     MappingBGRF @ 0x1400EC8F0 (MappingBGRF.c)
 *     AlphaBlendBGRF @ 0x1400EC9A0 (AlphaBlendBGRF.c)
 *     GetFixupScan @ 0x1400EF040 (GetFixupScan.c)
 *     SharpenInput @ 0x14012DE00 (SharpenInput.c)
 *     ExpYDIB_ExpCX @ 0x1401C4D58 (ExpYDIB_ExpCX.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall ExpandDIB_CY_ExpCX(__int64 a1)
{
  __int64 v1; // r8
  int *v2; // rdx
  _OWORD *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rax
  char v16; // r13
  __int64 v17; // r15
  unsigned __int64 v18; // rbx
  int v19; // r11d
  size_t v20; // r12
  int v21; // esi
  __int64 v22; // rax
  char *v23; // rdi
  char *v24; // r14
  unsigned int v25; // edi
  int v26; // eax
  int v27; // edi
  int v28; // r14d
  int v29; // eax
  __int64 *v30; // rcx
  unsigned __int16 v31; // si
  unsigned __int64 v32; // r9
  _BYTE *v33; // r8
  int v34; // r10d
  int v35; // ecx
  int v36; // r14d
  unsigned __int8 *v37; // r11
  unsigned __int8 *v38; // rdi
  int *v39; // r9
  int v40; // r11d
  unsigned __int8 *v41; // r9
  unsigned __int8 *v42; // r10
  unsigned __int8 *v43; // r11
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // edx
  __int64 v47; // rax
  __int64 v48; // rax
  __int16 v49; // ax
  __int64 v50; // rcx
  int *v52; // r9
  int v53; // r11d
  unsigned __int8 *v54; // r9
  unsigned __int8 *v55; // r10
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  int *v59; // r9
  int v60; // r10d
  unsigned __int8 *v61; // r9
  __int64 v62; // rcx
  __int64 v63; // rcx
  void *v64; // r15
  unsigned int v65; // eax
  void *v66; // rsi
  __int64 v67; // rbx
  int v68; // eax
  __int64 v69; // r14
  __int64 v70; // rdx
  unsigned __int64 v71; // rdi
  __int64 v72; // r8
  int v73; // eax
  __int64 v74; // rax
  unsigned __int8 *v75; // rax
  __int64 v76; // [rsp+28h] [rbp-E0h]
  __int64 v77; // [rsp+58h] [rbp-B0h]
  void *v78; // [rsp+60h] [rbp-A8h]
  char *v79; // [rsp+60h] [rbp-A8h]
  int v80; // [rsp+68h] [rbp-A0h]
  void *v81; // [rsp+70h] [rbp-98h]
  void *Src; // [rsp+78h] [rbp-90h]
  unsigned __int64 v83; // [rsp+80h] [rbp-88h]
  unsigned __int16 v84; // [rsp+88h] [rbp-80h]
  __int64 v85; // [rsp+90h] [rbp-78h]
  unsigned __int64 v86; // [rsp+98h] [rbp-70h]
  int v87; // [rsp+98h] [rbp-70h]
  __int64 v88; // [rsp+A0h] [rbp-68h]
  __int64 v89; // [rsp+A8h] [rbp-60h]
  __int16 v90; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v91; // [rsp+B8h] [rbp-50h]
  __int64 *v92; // [rsp+C0h] [rbp-48h]
  int v93[14]; // [rsp+C8h] [rbp-40h] BYREF
  int v94; // [rsp+100h] [rbp-8h]
  __int64 v95; // [rsp+150h] [rbp+48h]
  int v96; // [rsp+158h] [rbp+50h]
  unsigned int v97; // [rsp+15Ch] [rbp+54h]
  int v98; // [rsp+164h] [rbp+5Ch]
  void (__fastcall *v99)(int *); // [rsp+188h] [rbp+80h]
  void (__fastcall *v100)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v101; // [rsp+1E0h] [rbp+D8h]
  __int64 v102; // [rsp+1F8h] [rbp+F0h]
  __int64 v103; // [rsp+200h] [rbp+F8h]
  __int64 v104; // [rsp+248h] [rbp+140h]
  __int64 v105; // [rsp+250h] [rbp+148h]
  __int64 v106; // [rsp+260h] [rbp+158h]
  __int64 v107; // [rsp+268h] [rbp+160h]
  __int64 v108; // [rsp+270h] [rbp+168h]
  int v109; // [rsp+278h] [rbp+170h]
  int v110; // [rsp+27Ch] [rbp+174h]
  int v111; // [rsp+280h] [rbp+178h]
  unsigned __int8 *v112; // [rsp+288h] [rbp+180h]
  unsigned __int8 *v113; // [rsp+290h] [rbp+188h]
  unsigned __int8 *v114; // [rsp+298h] [rbp+190h]
  int v115; // [rsp+2A0h] [rbp+198h]
  __int64 v116; // [rsp+2E0h] [rbp+1D8h]
  unsigned __int8 *v117; // [rsp+2E8h] [rbp+1E0h]
  unsigned __int64 v118; // [rsp+2F0h] [rbp+1E8h]
  __int64 v119; // [rsp+2F8h] [rbp+1F0h]
  __int64 v120; // [rsp+300h] [rbp+1F8h]
  _BYTE *v121; // [rsp+308h] [rbp+200h]
  _BYTE *v122; // [rsp+310h] [rbp+208h]
  int v123; // [rsp+318h] [rbp+210h]
  _QWORD v124[3]; // [rsp+328h] [rbp+220h]
  __int64 v125; // [rsp+340h] [rbp+238h]

  v1 = 4LL;
  v2 = v93;
  v3 = (_OWORD *)a1;
  do
  {
    v4 = v3[1];
    *(_OWORD *)v2 = *v3;
    v5 = v3[2];
    *((_OWORD *)v2 + 1) = v4;
    v6 = v3[3];
    *((_OWORD *)v2 + 2) = v5;
    v7 = v3[4];
    *((_OWORD *)v2 + 3) = v6;
    v8 = v3[5];
    *((_OWORD *)v2 + 4) = v7;
    v9 = v3[6];
    *((_OWORD *)v2 + 5) = v8;
    v10 = v3[7];
    v3 += 8;
    *((_OWORD *)v2 + 6) = v9;
    v2 += 32;
    *((_OWORD *)v2 - 1) = v10;
    --v1;
  }
  while ( v1 );
  v11 = v3[1];
  *(_OWORD *)v2 = *v3;
  v12 = v3[2];
  *((_OWORD *)v2 + 1) = v11;
  v13 = v3[3];
  *((_OWORD *)v2 + 2) = v12;
  v14 = v3[4];
  v15 = *((_QWORD *)v3 + 10);
  *((_OWORD *)v2 + 3) = v13;
  *((_OWORD *)v2 + 4) = v14;
  *((_QWORD *)v2 + 10) = v15;
  if ( *(_QWORD *)(a1 + 536) )
  {
    v16 = -1;
    v17 = v103;
    v85 = v103;
    v18 = *(_QWORD *)(v103 + 32);
    v19 = *(_WORD *)(v102 + 8) & 1;
    v89 = *(_QWORD *)(v102 + 40);
    v90 = *(_WORD *)(v102 + 12);
    v91 = v18 + 1024;
    v124[0] = v18 + 4096;
    v84 = v19;
    v86 = v18;
    v20 = 3 * v94;
    v21 = 3 * (v19 + (v90 & 0xF));
    v80 = 3 * v94;
    v88 = 3 * v96;
    v22 = v88 + v18 + 4096;
    v124[1] = v22;
    v124[2] = v88 + v22;
    v125 = v88 + v88 + v22;
    v23 = (char *)(v88 + 9 + v125 + v20 + 18);
    v81 = (void *)(v88 + 9 + v125);
    v24 = &v23[v20 + 18];
    v78 = v23;
    v83 = v116 + 9;
    Src = v24;
    GetFixupScan((unsigned int *)v93, (__int64)v23);
    if ( (*(_BYTE *)(v17 + 8) & 1) != 0 )
      GetFixupScan((unsigned int *)v93, (__int64)v24);
    else
      memmove(v24, v23, v20);
    v25 = *(unsigned __int16 *)(v17 + 12);
    v26 = v25 & 0xF;
    v27 = v25 >> 4;
    v28 = v26 + v27;
    if ( v26 + v27 )
    {
      v64 = v78;
      v65 = v21;
      v66 = v81;
      v67 = v65;
      do
      {
        v81 = v64;
        v64 = Src;
        ++v16;
        Src = v66;
        --v28;
        v68 = v27--;
        v79 = (char *)v124[v16 & 3];
        if ( v68 <= 0 )
          GetFixupScan((unsigned int *)v93, (__int64)v66);
        else
          memmove(v66, v64, v20);
        v76 = (__int64)v66;
        v66 = v81;
        v83 = SharpenInput(v93[0], v83, (__int64)v81, (unsigned __int64)v64, v76, v80);
        ExpYDIB_ExpCX(v89, v67 + v83 - 3, v79, &v79[v88]);
      }
      while ( v28 );
      v18 = v86;
      v78 = v64;
      v17 = v85;
    }
    v29 = *(_DWORD *)(v17 + 16);
    v30 = *(__int64 **)(v17 + 40);
    if ( v29 )
    {
      do
      {
        v87 = v29 - 1;
        v77 = *v30;
        v92 = v30 + 1;
        v31 = *v30;
        if ( (v31 & 0x8000u) != 0 )
        {
          v69 = (__int64)v78;
          v70 = (__int64)v81;
          v71 = (unsigned __int64)Src;
          v81 = v78;
          v78 = Src;
          Src = (void *)GetFixupScan((unsigned int *)v93, v70);
          v83 = SharpenInput(v93[0], v83, v69, v71, (__int64)Src, v80);
          v72 = v124[++v16 & 3];
          ExpYDIB_ExpCX(
            v89,
            v84 + (unsigned __int64)(v90 & 0xF) - 3 + v83 + 2 * (v84 + (unsigned __int64)(v90 & 0xF)),
            v72,
            v72 + v88);
          v31 &= 0x3FFFu;
        }
        v32 = v18;
        v33 = v121;
        v34 = -WORD1(v77);
        v35 = -WORD2(v77);
        v36 = -v31;
        v37 = (unsigned __int8 *)v124[v16 & 3];
        v38 = (unsigned __int8 *)v124[(v16 - 1) & 3];
        if ( v31 )
        {
          v39 = (int *)(v18 + 2048);
          v40 = 4096 - HIWORD(v77);
          do
          {
            v36 += v31;
            v34 += WORD1(v77);
            v35 += WORD2(v77);
            *(v39 - 512) = v36;
            v40 += HIWORD(v77);
            *(v39 - 256) = v34;
            *v39 = v35;
            v39[256] = v40;
            ++v39;
          }
          while ( (unsigned __int64)(v39 - 512) < v91 );
          v41 = (unsigned __int8 *)(v124[(v16 + 1) & 3] + 1LL);
          v42 = (unsigned __int8 *)(v124[(v16 - 2) & 3] + 1LL);
          v43 = (unsigned __int8 *)(v124[v16 & 3] + 1LL);
          do
          {
            v33[2] = (*(_DWORD *)(v18 + 4LL * v41[1])
                    + *(_DWORD *)(v18 + 4LL * v38[2] + 2048)
                    + *(_DWORD *)(v18 + 4LL * v42[1] + 1024)
                    + *(_DWORD *)(v18 + 4LL * v43[1] + 3072)) >> 13;
            v44 = *v43;
            v43 += 3;
            v45 = *v42;
            v42 += 3;
            v46 = *(_DWORD *)(v18 + 4 * v45 + 1024)
                + *(_DWORD *)(v18 + 4 * v44 + 3072)
                + *(_DWORD *)(v18 + 4LL * v38[1] + 2048);
            v47 = *v41;
            v41 += 3;
            v33[1] = (*(_DWORD *)(v18 + 4 * v47) + v46) >> 13;
            v48 = *v38;
            v38 += 3;
            *v33 = (*(_DWORD *)(v18 + 4 * v48 + 2048)
                  + *(_DWORD *)(v18 + 4LL * *(v41 - 4))
                  + *(_DWORD *)(v18 + 4LL * *(v42 - 4) + 1024)
                  + *(_DWORD *)(v18 + 4LL * *(v43 - 4) + 3072)) >> 13;
            v33 += v123;
          }
          while ( v33 != v122 );
        }
        else if ( WORD1(v77) )
        {
          v52 = (int *)(v18 + 2048);
          v53 = 4096 - HIWORD(v77);
          do
          {
            v34 += WORD1(v77);
            v35 += WORD2(v77);
            v53 += HIWORD(v77);
            *(v52 - 256) = v34;
            *v52 = v35;
            v52[256] = v53;
            ++v52;
          }
          while ( (unsigned __int64)(v52 - 512) < v18 + 1024 );
          v54 = (unsigned __int8 *)(v124[(v16 - 2) & 3] + 1LL);
          v55 = (unsigned __int8 *)(v124[v16 & 3] + 1LL);
          do
          {
            v33[2] = (*(_DWORD *)(v18 + 4LL * v38[2] + 2048)
                    + *(_DWORD *)(v18 + 4LL * v54[1] + 1024)
                    + *(_DWORD *)(v18 + 4LL * v55[1] + 3072)) >> 13;
            v56 = *v54;
            v54 += 3;
            v57 = *v55;
            v55 += 3;
            v33[1] = (*(_DWORD *)(v18 + 4 * v57 + 3072)
                    + *(_DWORD *)(v18 + 4 * v56 + 1024)
                    + *(_DWORD *)(v18 + 4LL * v38[1] + 2048)) >> 13;
            v58 = *v38;
            v38 += 3;
            *v33 = (*(_DWORD *)(v18 + 4 * v58 + 2048)
                  + *(_DWORD *)(v18 + 4LL * *(v54 - 4) + 1024)
                  + *(_DWORD *)(v18 + 4LL * *(v55 - 4) + 3072)) >> 13;
            v33 += v123;
          }
          while ( v33 != v122 );
        }
        else if ( WORD2(v77) )
        {
          v59 = (int *)(v18 + 3072);
          v60 = 4096 - HIWORD(v77);
          do
          {
            v35 += WORD2(v77);
            v60 += HIWORD(v77);
            *(v59 - 256) = v35;
            *v59++ = v60;
          }
          while ( (unsigned __int64)(v59 - 768) < v18 + 1024 );
          v61 = (unsigned __int8 *)(v124[v16 & 3] + 1LL);
          do
          {
            v33[2] = (*(_DWORD *)(v18 + 4LL * v38[2] + 2048) + *(_DWORD *)(v18 + 4LL * v61[1] + 3072)) >> 13;
            v62 = *v61;
            v61 += 3;
            v33[1] = (*(_DWORD *)(v18 + 4 * v62 + 3072) + *(_DWORD *)(v18 + 4LL * v38[1] + 2048)) >> 13;
            v63 = *v38;
            v38 += 3;
            *v33 = (*(_DWORD *)(v18 + 4 * v63 + 2048) + *(_DWORD *)(v18 + 4LL * *(v61 - 4) + 3072)) >> 13;
            v33 += v123;
          }
          while ( v33 != v122 );
        }
        else
        {
          v73 = 4096 - HIWORD(v77);
          do
          {
            v73 += HIWORD(v77);
            *(_DWORD *)(v32 + 3072) = v73;
            v32 += 4LL;
          }
          while ( v32 < v18 + 1024 );
          do
          {
            v33[2] = *(int *)(v18 + 4LL * v37[2] + 3072) >> 13;
            v33[1] = *(int *)(v18 + 4LL * v37[1] + 3072) >> 13;
            v74 = *v37;
            v37 += 3;
            *v33 = *(int *)(v18 + 4 * v74 + 3072) >> 13;
            v33 += v123;
          }
          while ( v33 != v122 );
        }
        v49 = v93[0];
        if ( SLOBYTE(v93[0]) < 0 )
        {
          v99(v93);
          v49 = v93[0];
        }
        if ( (v49 & 0x800) != 0 )
        {
          AlphaBlendBGRF(v93);
          LOBYTE(v49) = v93[0];
        }
        if ( (v49 & 0x10) != 0 )
        {
          MappingBGRF(v117, v118, v105, v112);
          v75 = &v112[v115];
          if ( v75 == v113 )
            v75 = v114;
          v112 = v75;
        }
        v100(v93, v119, v120, v95, v104, v106, v106 + v110, v111, v101);
        v50 = v109 + v106;
        if ( v50 == v107 )
          v50 = v108;
        v95 += v98;
        v29 = v87;
        v106 = v50;
        v30 = v92;
      }
      while ( v87 );
    }
  }
  return v97;
}
