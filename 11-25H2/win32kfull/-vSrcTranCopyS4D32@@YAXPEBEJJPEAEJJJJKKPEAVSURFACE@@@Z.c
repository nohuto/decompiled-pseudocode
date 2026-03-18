/*
 * XREFs of ?vSrcTranCopyS4D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x140161F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcTranCopyS4D32(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  __int64 v12; // r11
  __int64 v13; // rax
  int v14; // ecx
  int v15; // esi
  int v16; // edi
  int v17; // eax
  int v18; // r10d
  int v19; // ebx
  int v20; // ebp
  char v22; // cl
  unsigned int v23; // r8d
  unsigned int v24; // eax
  unsigned __int8 *v25; // r12
  const unsigned __int8 *v26; // r14
  const unsigned __int8 *v27; // r15
  int *v28; // r11
  __int64 v29; // rcx
  unsigned __int8 v30; // r12
  unsigned __int8 v31; // al
  unsigned __int8 v32; // r12
  int v33; // r9d
  unsigned int v34; // edx
  __int64 v35; // r10
  _DWORD *v36; // rax
  int v37; // r12d
  _DWORD *v38; // rax
  unsigned int v39; // r12d
  unsigned int v40; // edx
  int v41; // r12d
  int v42; // r8d
  _DWORD *v43; // rax
  unsigned int v44; // r8d
  unsigned int v45; // edx
  int v46; // r12d
  unsigned int v47; // r12d
  int v48; // r9d
  unsigned int v49; // edx
  __int64 v50; // r10
  _DWORD *v51; // rax
  int v52; // r8d
  _DWORD *v53; // rax
  unsigned int v54; // r8d
  unsigned int v55; // edx
  int v56; // r8d
  _DWORD *v57; // rax
  unsigned int v58; // r8d
  unsigned int v59; // edx
  unsigned int v60; // eax
  unsigned __int8 v61; // al
  int v62; // r9d
  unsigned int v63; // edx
  __int64 v64; // r10
  _DWORD *v65; // rax
  int v66; // r15d
  _DWORD *v67; // rax
  unsigned int v68; // r15d
  unsigned int v69; // edx
  int v70; // r8d
  _DWORD *v71; // rax
  unsigned int v72; // r8d
  unsigned int v73; // edx
  int v74; // r15d
  unsigned int v75; // r15d
  unsigned __int8 v76; // al
  int v77; // r9d
  unsigned int v78; // edx
  __int64 v79; // r10
  _DWORD *v80; // rax
  int v81; // r11d
  _DWORD *v82; // rax
  unsigned int v83; // r11d
  unsigned int v84; // edx
  int v85; // r8d
  _DWORD *v86; // rax
  unsigned int v87; // r8d
  unsigned int v88; // edx
  int v89; // r11d
  unsigned int v90; // r11d
  int *v91; // rcx
  unsigned int v92; // [rsp+0h] [rbp-68h]
  int v93; // [rsp+4h] [rbp-64h]
  int v94; // [rsp+8h] [rbp-60h]
  __int64 v95; // [rsp+10h] [rbp-58h]
  unsigned __int8 *v96; // [rsp+20h] [rbp-48h]
  __int64 v97; // [rsp+28h] [rbp-40h]
  const unsigned __int8 *v98; // [rsp+70h] [rbp+8h]
  char v99; // [rsp+78h] [rbp+10h]
  unsigned int v100; // [rsp+88h] [rbp+20h]
  int v101; // [rsp+90h] [rbp+28h]
  int v102; // [rsp+90h] [rbp+28h]
  int v103; // [rsp+98h] [rbp+30h]
  unsigned int v104; // [rsp+B0h] [rbp+48h]
  int v105; // [rsp+C0h] [rbp+58h]

  v12 = a3;
  v13 = *((_QWORD *)a11 + 16);
  if ( !v13 )
    v13 = *(_QWORD *)(*((_QWORD *)a11 + 6) + 1792LL);
  v14 = *(_DWORD *)(v13 + 24);
  if ( (v14 & 2) != 0 )
  {
    v91 = *(int **)(v13 + 112);
    v18 = *v91;
    v17 = v91[6];
    v16 = v91[1];
    v15 = v91[7];
    v19 = v91[2];
    v20 = v91[8];
    v105 = *v91;
  }
  else
  {
    LOBYTE(v15) = 8;
    v16 = 65280;
    if ( (v14 & 4) != 0 )
    {
      LOBYTE(v17) = 0;
      v18 = 255;
      v105 = 255;
      v19 = 16711680;
      LOBYTE(v20) = 16;
    }
    else
    {
      LOBYTE(v17) = 16;
      v18 = 16711680;
      v105 = 16711680;
      v19 = 255;
      LOBYTE(v20) = 0;
    }
  }
  v22 = v17;
  v99 = v17;
  v23 = a6 & 0xFFFFFFFE;
  v103 = a6 - (a6 & 0xFFFFFFFE);
  v24 = a9 & v16;
  v104 = (a9 & v18) >> v22;
  v100 = v24 >> v15;
  v92 = (a9 & v19) >> v20;
  v93 = ((a5 + 1) & 0xFFFFFFFE) - a5;
  v94 = (int)(v23 - ((a5 + 1) & 0xFFFFFFFE)) / 2;
  v25 = &a4[4 * a5];
  v96 = v25;
  v26 = &a1[a2 / 2];
  v98 = v26;
  if ( a8 )
  {
    v97 = v12;
    do
    {
      v27 = v26;
      v28 = (int *)v25;
      if ( v93 )
      {
        v76 = *v26 & 0xF;
        if ( v76 )
        {
          if ( v76 == 15 )
          {
            v90 = a9;
          }
          else
          {
            v77 = *(_DWORD *)v25;
            v78 = (*(_DWORD *)v25 & (unsigned int)v18) >> v99;
            v79 = v76;
            v80 = &unk_1403558F0;
            if ( (int)(v104 - v78) >= 0 )
              v80 = &unk_1403558B0;
            v81 = v80[v79] * (v104 - v78);
            v82 = &unk_1403558F0;
            v83 = v105 & (((v78 << 16) + v81) >> 16 << v99);
            v84 = (v77 & (unsigned int)v16) >> v15;
            if ( (int)(v100 - v84) >= 0 )
              v82 = &unk_1403558B0;
            v85 = v82[v79] * (v100 - v84);
            v86 = &unk_1403558F0;
            v87 = ((v84 << 16) + v85) >> 16 << v15;
            v88 = (v77 & (unsigned int)v19) >> v20;
            v89 = v16 & v87 | v83;
            if ( (int)(v92 - v88) >= 0 )
              v86 = &unk_1403558B0;
            v90 = v19 & (((v88 << 16) + v86[v79] * (v92 - v88)) >> 16 << v20) | v89;
          }
          *(_DWORD *)v25 = v90;
        }
        v28 = (int *)(v25 + 4);
        v27 = v26 + 1;
      }
      if ( v94 > 0 )
      {
        v29 = (unsigned int)v94;
        v95 = (unsigned int)v94;
        do
        {
          v30 = *v27;
          v31 = *v27 >> 4;
          if ( v31 )
          {
            if ( v31 == 15 )
            {
              v60 = a9;
            }
            else
            {
              v48 = *v28;
              v49 = (*v28 & (unsigned int)v105) >> v99;
              v50 = v31;
              v51 = &unk_1403558F0;
              if ( (int)(v104 - v49) >= 0 )
                v51 = &unk_1403558B0;
              v52 = v51[v50] * (v104 - v49);
              v53 = &unk_1403558F0;
              v54 = (v49 << 16) + v52;
              v55 = (v48 & (unsigned int)v16) >> v15;
              v101 = v105 & (HIWORD(v54) << v99);
              if ( (int)(v100 - v55) >= 0 )
                v53 = &unk_1403558B0;
              v56 = v53[v50] * (v100 - v55);
              v57 = &unk_1403558F0;
              v58 = (v55 << 16) + v56;
              v59 = (v48 & (unsigned int)v19) >> v20;
              v102 = v16 & (HIWORD(v58) << v15) | v101;
              if ( (int)(v92 - v59) >= 0 )
                v57 = &unk_1403558B0;
              v29 = v95;
              v60 = v19 & (((v59 << 16) + v57[v50] * (v92 - v59)) >> 16 << v20) | v102;
            }
            *v28 = v60;
          }
          v32 = v30 & 0xF;
          if ( v32 )
          {
            if ( v32 == 15 )
            {
              v47 = a9;
            }
            else
            {
              v33 = v28[1];
              v34 = (v33 & (unsigned int)v105) >> v99;
              v35 = v32;
              v36 = &unk_1403558F0;
              if ( (int)(v104 - v34) >= 0 )
                v36 = &unk_1403558B0;
              v37 = v36[v32] * (v104 - v34);
              v38 = &unk_1403558F0;
              v39 = (v34 << 16) + v37;
              v40 = (v33 & (unsigned int)v16) >> v15;
              v41 = v105 & (HIWORD(v39) << v99);
              if ( (int)(v100 - v40) >= 0 )
                v38 = &unk_1403558B0;
              v42 = v38[v35] * (v100 - v40);
              v43 = &unk_1403558F0;
              v44 = (v40 << 16) + v42;
              v45 = (v33 & (unsigned int)v19) >> v20;
              v46 = v16 & (HIWORD(v44) << v15) | v41;
              if ( (int)(v92 - v45) >= 0 )
                v43 = &unk_1403558B0;
              v47 = v19 & (((v45 << 16) + v43[v35] * (v92 - v45)) >> 16 << v20) | v46;
            }
            v29 = v95;
            v28[1] = v47;
          }
          v28 += 2;
          ++v27;
          v95 = --v29;
        }
        while ( v29 );
        v26 = v98;
        v25 = v96;
      }
      if ( v103 )
      {
        v61 = *v27 >> 4;
        if ( v61 )
        {
          if ( v61 == 15 )
          {
            v75 = a9;
          }
          else
          {
            v62 = *v28;
            v63 = (*v28 & (unsigned int)v105) >> v99;
            v64 = v61;
            v65 = &unk_1403558F0;
            if ( (int)(v104 - v63) >= 0 )
              v65 = &unk_1403558B0;
            v66 = v65[v64] * (v104 - v63);
            v67 = &unk_1403558F0;
            v68 = v105 & (((v63 << 16) + v66) >> 16 << v99);
            v69 = (v62 & (unsigned int)v16) >> v15;
            if ( (int)(v100 - v69) >= 0 )
              v67 = &unk_1403558B0;
            v70 = v67[v64] * (v100 - v69);
            v71 = &unk_1403558F0;
            v72 = (v69 << 16) + v70;
            v73 = (v62 & (unsigned int)v19) >> v20;
            v74 = v16 & (HIWORD(v72) << v15) | v68;
            if ( (int)(v92 - v73) >= 0 )
              v71 = &unk_1403558B0;
            v75 = v19 & (((v73 << 16) + v71[v64] * (v92 - v73)) >> 16 << v20) | v74;
          }
          *v28 = v75;
        }
      }
      v26 += v97;
      v18 = v105;
      v25 += a7;
      --a8;
      v98 = v26;
      v96 = v25;
    }
    while ( a8 );
  }
}
