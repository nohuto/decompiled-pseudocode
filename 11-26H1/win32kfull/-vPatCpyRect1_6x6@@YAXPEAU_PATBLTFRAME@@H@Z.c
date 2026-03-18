/*
 * XREFs of ?vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x140338650
 * Callers:
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x140265848 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 * Callees:
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void __fastcall vPatCpyRect1_6x6(struct _PATBLTFRAME *a1, int a2)
{
  int v2; // eax
  int v3; // r10d
  int *v4; // r14
  struct _PATBLTFRAME *v5; // rbx
  int v6; // r8d
  int v7; // r13d
  int v8; // esi
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // edi
  int v13; // r9d
  int v14; // r12d
  int v15; // eax
  int v16; // r11d
  int v17; // esi
  unsigned __int8 *v18; // rdi
  unsigned __int8 *v19; // rax
  int v20; // edi
  int v21; // r11d
  int v22; // r15d
  int v23; // edx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // esi
  _DWORD *v28; // rbx
  char *v29; // r13
  char *v30; // rax
  int v31; // ecx
  int v32; // r14d
  unsigned int v33; // edi
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // r8d
  int v38; // ecx
  int v39; // edx
  int v40; // esi
  int v41; // ecx
  int v42; // edi
  int v43; // r8d
  int v44; // esi
  _DWORD *v45; // rsi
  _DWORD *v46; // rdi
  unsigned __int64 v47; // rcx
  char *v48; // rdi
  int v49; // r14d
  size_t v50; // rbx
  __int64 v51; // r12
  int v52; // r15d
  _DWORD *v53; // rsi
  _DWORD *v54; // rdi
  unsigned __int64 v55; // rcx
  char *v56; // rdi
  int v57; // r14d
  size_t v58; // rbx
  int v59; // r15d
  _DWORD *v60; // rsi
  _DWORD *v61; // rdi
  unsigned __int64 v62; // rcx
  int *v63; // rdi
  int v64; // r14d
  size_t v65; // rbx
  int v66; // r12d
  __int64 v67; // rcx
  __int64 v68; // rdi
  int v69; // r15d
  _DWORD *v70; // rsi
  _DWORD *v71; // rdi
  unsigned __int64 v72; // rcx
  int *v73; // rdi
  int v74; // r14d
  size_t v75; // rbx
  bool v76; // zf
  int v77; // [rsp+28h] [rbp-69h]
  int v78; // [rsp+28h] [rbp-69h]
  int v79; // [rsp+28h] [rbp-69h]
  int v80; // [rsp+2Ch] [rbp-65h]
  int v81; // [rsp+30h] [rbp-61h]
  int v82; // [rsp+34h] [rbp-5Dh]
  char v83; // [rsp+38h] [rbp-59h]
  int v84; // [rsp+3Ch] [rbp-55h]
  int v85; // [rsp+40h] [rbp-51h]
  int v86; // [rsp+44h] [rbp-4Dh]
  _BYTE Src[12]; // [rsp+48h] [rbp-49h] BYREF
  int v88; // [rsp+54h] [rbp-3Dh]
  unsigned int Size; // [rsp+58h] [rbp-39h]
  int Size_4; // [rsp+5Ch] [rbp-35h]
  int v91; // [rsp+60h] [rbp-31h]
  int v92; // [rsp+64h] [rbp-2Dh]
  int v93; // [rsp+68h] [rbp-29h]
  int v94; // [rsp+6Ch] [rbp-25h]
  unsigned __int8 *v95; // [rsp+70h] [rbp-21h]
  int *v96; // [rsp+78h] [rbp-19h]
  int v97; // [rsp+80h] [rbp-11h]
  int v98; // [rsp+84h] [rbp-Dh]
  int v99; // [rsp+88h] [rbp-9h]
  __int64 v100; // [rsp+90h] [rbp-1h]
  void *v101; // [rsp+98h] [rbp+7h]
  __int64 v102; // [rsp+A0h] [rbp+Fh]
  struct _PATBLTFRAME *v103; // [rsp+A8h] [rbp+17h]
  __int64 v104; // [rsp+B0h] [rbp+1Fh]
  unsigned __int8 *v105; // [rsp+B8h] [rbp+27h]

  v2 = *((_DWORD *)a1 + 4);
  v3 = 0;
  v4 = (int *)*((_QWORD *)a1 + 3);
  v5 = a1;
  v103 = a1;
  v94 = a2;
  v6 = 6 * v2;
  v96 = v4;
  v81 = 6 * v2;
  v93 = v2;
  do
  {
    v7 = *v4;
    v8 = v4[2];
    v9 = v4[1];
    v10 = *v4 & 0x1F;
    v11 = *v4;
    v92 = v9;
    v12 = *((_DWORD *)&aulMsk + v10);
    v85 = v12;
    v13 = ~v12;
    v84 = ~v12;
    v14 = *((_DWORD *)&aulMsk + (v8 & 0x1F));
    if ( v14 == -1 )
      v14 = 0;
    v15 = *((_DWORD *)v5 + 4) * v9;
    v16 = ~v14;
    v86 = v14;
    v91 = ~v14;
    v101 = (void *)(*(_QWORD *)v5 + v15 + 4 * (v11 >> 5));
    v17 = (v8 >> 5) - ((v7 + 31) >> 5);
    if ( v17 == -1 )
      goto LABEL_12;
    if ( v17 )
    {
      if ( v12 == -1 )
        v3 = 3 - (v14 != 0);
      else
        LOBYTE(v3) = v14 == 0;
      goto LABEL_13;
    }
    if ( v12 == -1 || !v14 )
    {
LABEL_12:
      v3 = 9;
      v85 = v16 & v12;
      v13 = ~(v16 & v12);
      v84 = v13;
    }
    else
    {
      v3 = 8;
    }
LABEL_13:
    v18 = (unsigned __int8 *)*((_QWORD *)v5 + 1);
    Size_4 = v3;
    if ( v9 == *((_DWORD *)v5 + 9) )
    {
      v95 = v18;
    }
    else
    {
      v95 = &v18[8 * ((v9 - *((_DWORD *)v5 + 9) + 6 * (1 - (v9 - *((_DWORD *)v5 + 9)) / 6)) % 6)];
      v4 = v96;
    }
    v19 = v18 + 48;
    v20 = v92;
    v105 = v19;
    v21 = v17 / 3;
    v99 = v17 / 3;
    v22 = v17 % 3;
    Size = 4 * v17;
    v82 = v17 % 3;
    v83 = *((_BYTE *)v5 + 32);
    v80 = (v7 >> 5) % 3;
    v23 = 6;
    v24 = v4[3] - v92;
    if ( v24 >= 6 || (v23 = v4[3] - v92, v24) )
    {
      v25 = v93;
      v97 = (unsigned __int8)(6 - v83);
      v100 = v22;
      v26 = v17;
      v27 = (v7 >> 5) % 3;
      v102 = v26;
      while ( 1 )
      {
        v28 = v101;
        v98 = v23 - 1;
        v29 = (char *)v101;
        v30 = (char *)v101 + v25;
        v31 = v4[3] - v20;
        v101 = v30;
        v92 = v20 + 1;
        v32 = (v31 + 5) / 6;
        v33 = *v95 >> 2;
        if ( v83 )
          v33 = ((unsigned __int8)(*v95 >> 2 << v97) | (unsigned __int8)(v33 >> v83)) & 0x3F;
        v34 = v33 | ((v33 | ((v33 | ((v33 | (v33 << 6)) << 6)) << 6)) << 6);
        if ( v3 == 9 )
        {
          if ( v27 )
          {
            if ( v27 == 1 )
            {
              v35 = 16 * v34;
              v33 >>= 2;
            }
            else
            {
              v35 = v34 << 6;
            }
          }
          else
          {
            v35 = 4 * v34;
            v33 >>= 4;
          }
          v36 = v33 | v35;
          HIBYTE(v77) = v36;
          LOBYTE(v77) = HIBYTE(v36);
          BYTE1(v77) = BYTE2(v36);
          BYTE2(v77) = BYTE1(v36);
          *(_DWORD *)Src = v77;
          do
          {
            *v28 = v85 & v77 | v13 & *v28;
            v28 = (_DWORD *)((char *)v28 + v6);
            --v32;
          }
          while ( v32 );
          goto LABEL_87;
        }
        HIBYTE(v78) = (v33 >> 4) | (4 * v34);
        LOBYTE(v78) = ((v33 >> 4) | (4 * v34)) >> 24;
        BYTE1(v78) = ((v33 >> 4) | (4 * v34)) >> 16;
        BYTE2(v78) = (unsigned __int16)((v33 >> 4) | (4 * v34)) >> 8;
        v37 = v78;
        v38 = (v33 >> 2) | (16 * v34);
        v39 = v33 | (v34 << 6);
        HIBYTE(v78) = v38;
        *(_DWORD *)Src = v37;
        LOBYTE(v78) = HIBYTE(v38);
        BYTE1(v78) = BYTE2(v38);
        BYTE2(v78) = BYTE1(v38);
        v40 = v78;
        v41 = v78;
        LOBYTE(v79) = HIBYTE(v39);
        BYTE1(v79) = BYTE2(v39);
        BYTE2(v79) = BYTE1(v39);
        HIBYTE(v79) = v39;
        v42 = v79;
        *(_DWORD *)&Src[8] = v79;
        *(_DWORD *)&Src[4] = v40;
        if ( v80 == 1 )
        {
          v40 = v79;
          *(_DWORD *)&Src[4] = v79;
          v42 = v37;
          *(_DWORD *)&Src[8] = v37;
          v37 = v41;
          *(_DWORD *)Src = v41;
        }
        else if ( v80 == 2 )
        {
          v42 = v40;
          *(_DWORD *)&Src[8] = v40;
          v40 = v37;
          *(_DWORD *)&Src[4] = v37;
          v37 = v79;
          *(_DWORD *)Src = v79;
        }
        v88 = v37;
        if ( !v3 )
        {
          v66 = v85 & v37;
          v67 = v100;
          *v28 = v85 & v37 | v13 & *v28;
          v68 = 4 * v67;
          v69 = v91 & *(_DWORD *)&Src[4 * v67 + 4];
          v104 = 4 * v67;
          if ( v21 > 0 )
          {
            v70 = v28 + 1;
            *(_QWORD *)(v28 + 1) = *(_QWORD *)&Src[4];
            v71 = v28 + 4;
            v28[3] = v37;
            v72 = (12 * (unsigned __int64)(unsigned int)v21 - 12) >> 2;
            v28 += 3 * (unsigned int)v21;
            while ( v72 )
            {
              *v71++ = *v70++;
              --v72;
            }
            v68 = v104;
            LODWORD(v67) = v100;
          }
          if ( v82 )
          {
            memmove(v28 + 1, &Src[4], (unsigned int)(4 * v67));
            v13 = v84;
            v28 = (_DWORD *)((char *)v28 + v68);
          }
          v6 = v81;
          v28[1] = v69 | v86 & v28[1];
          v73 = (int *)&v29[v81];
          v74 = v32 - 1;
          if ( v74 )
          {
            v75 = Size;
            do
            {
              *v73 = v66 | v13 & *v73;
              memmove(v73 + 1, v29 + 4, v75);
              v13 = v84;
              v73[v102 + 1] = v69 | v86 & v73[v102 + 1];
              v73 = (int *)((char *)v73 + v81);
              --v74;
            }
            while ( v74 );
            v14 = v86;
            goto LABEL_62;
          }
          v14 = v86;
          goto LABEL_85;
        }
        if ( v3 == 1 )
          break;
        switch ( v3 )
        {
          case 2:
            v51 = 4 * v100;
            v52 = v91 & *(_DWORD *)&Src[4 * v100];
            if ( v21 > 0 )
            {
              v53 = v28;
              *(_QWORD *)v28 = *(_QWORD *)Src;
              v28[2] = v42;
              v54 = v28 + 3;
              v55 = (12 * (unsigned __int64)(unsigned int)v21 - 12) >> 2;
              v28 += 3 * (unsigned int)v21;
              while ( v55 )
              {
                *v54++ = *v53++;
                --v55;
              }
            }
            if ( v82 )
            {
              memmove(v28, Src, (unsigned int)(4 * v82));
              v28 = (_DWORD *)((char *)v28 + v51);
            }
            v6 = v81;
            v14 = v86;
            *v28 = v52 | v86 & *v28;
            v56 = &v29[v81];
            v57 = v32 - 1;
            if ( v57 )
            {
              v58 = Size;
              do
              {
                memmove(v56, v29, v58);
                *(_DWORD *)&v56[4 * v102] = v52 | v86 & *(_DWORD *)&v56[4 * v102];
                v56 += v81;
                --v57;
              }
              while ( v57 );
LABEL_62:
              v22 = v82;
              goto LABEL_42;
            }
            goto LABEL_85;
          case 3:
            if ( v21 > 0 )
            {
              v45 = v28;
              *(_QWORD *)v28 = *(_QWORD *)Src;
              v28[2] = v42;
              v46 = v28 + 3;
              v47 = (12 * (unsigned __int64)(unsigned int)v21 - 12) >> 2;
              v28 += 3 * (unsigned int)v21;
              while ( v47 )
              {
                *v46++ = *v45++;
                --v47;
              }
            }
            if ( v22 )
              memmove(v28, Src, (unsigned int)(4 * v22));
            v6 = v81;
            v48 = &v29[v81];
            v49 = v32 - 1;
            if ( v49 )
            {
              v50 = Size;
              do
              {
                memmove(v48, v29, v50);
                v48 += v81;
                --v49;
              }
              while ( v49 );
LABEL_42:
              v6 = v81;
            }
LABEL_86:
            v27 = v80;
            goto LABEL_87;
          case 8:
            v43 = v85 & v37;
            v44 = v91 & v40;
            do
            {
              *v28 = v43 | v13 & *v28;
              v28[1] = v44 | v14 & v28[1];
              v28 = (_DWORD *)((char *)v28 + v81);
              --v32;
            }
            while ( v32 );
            goto LABEL_42;
        }
        v6 = v81;
        v27 = v80;
LABEL_87:
        v5 = v103;
        v95 += 8;
        if ( v95 == v105 )
          v95 = (unsigned __int8 *)*((_QWORD *)v103 + 1);
        v23 = v98;
        v13 = v84;
        v3 = Size_4;
        v21 = v99;
        v4 = v96;
        v20 = v92;
        v25 = v93;
        if ( !v98 )
          goto LABEL_90;
      }
      v59 = v85 & v37;
      *v28 = v85 & v37 | v13 & *v28;
      if ( v21 > 0 )
      {
        v60 = v28 + 1;
        *(_QWORD *)(v28 + 1) = *(_QWORD *)&Src[4];
        v61 = v28 + 4;
        v28[3] = v37;
        v62 = (12 * (unsigned __int64)(unsigned int)v21 - 12) >> 2;
        v28 += 3 * (unsigned int)v21;
        while ( v62 )
        {
          *v61++ = *v60++;
          --v62;
        }
      }
      if ( v82 )
      {
        memmove(v28 + 1, &Src[4], (unsigned int)(4 * v82));
        v13 = v84;
      }
      v6 = v81;
      v63 = (int *)&v29[v81];
      v64 = v32 - 1;
      if ( v64 )
      {
        v65 = Size;
        do
        {
          *v63 = v59 | v13 & *v63;
          memmove(v63 + 1, v29 + 4, v65);
          v13 = v84;
          v63 = (int *)((char *)v63 + v81);
          --v64;
        }
        while ( v64 );
        goto LABEL_62;
      }
LABEL_85:
      v22 = v82;
      goto LABEL_86;
    }
LABEL_90:
    v4 += 4;
    v76 = v94-- == 1;
    v3 = 0;
    v96 = v4;
  }
  while ( !v76 );
}
