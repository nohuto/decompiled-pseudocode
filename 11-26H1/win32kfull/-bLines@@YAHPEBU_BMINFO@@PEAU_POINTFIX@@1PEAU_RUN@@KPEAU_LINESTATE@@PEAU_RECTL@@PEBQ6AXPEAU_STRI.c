/*
 * XREFs of ?bLines@@YAHPEBU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEBQ6AXPEAU_STRIP@@03@ZKPEAKJPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1401154E8
 * Callers:
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x140114F8C (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall bLines(
        const struct _BMINFO *a1,
        struct _POINTFIX *a2,
        struct _POINTFIX *a3,
        struct _RUN *a4,
        unsigned int a5,
        struct _LINESTATE *a6,
        struct _RECTL *a7,
        void (*const *a8)(struct _STRIP *, const struct _BMINFO *, struct _LINESTATE *),
        unsigned int a9,
        unsigned int *a10,
        int a11,
        struct _W32KCDD_ENG_CALLBACKS *a12)
{
  struct _POINTFIX *v12; // rsi
  signed int v14; // r13d
  FIX x; // r12d
  FIX v16; // ecx
  FIX y; // r14d
  FIX v18; // eax
  unsigned int v19; // esi
  int v20; // r10d
  FIX v21; // edx
  unsigned int v22; // r12d
  unsigned int v23; // r14d
  int v24; // ecx
  __int64 v25; // rcx
  int v26; // r8d
  int v27; // r10d
  __int64 v28; // rcx
  signed __int64 v29; // rax
  int v30; // r9d
  int v31; // edx
  signed int v32; // edi
  int v33; // r9d
  unsigned __int64 v34; // r11
  int v35; // ecx
  int v36; // edx
  int v37; // r8d
  int v38; // r10d
  unsigned int *v39; // rdx
  int *v40; // r10
  int v41; // edi
  unsigned __int64 v42; // r13
  int v43; // edx
  int v44; // ecx
  int v45; // r8d
  char *v46; // rax
  unsigned int v48; // eax
  unsigned int v49; // edx
  unsigned int v50; // eax
  unsigned int v51; // ecx
  __int64 v52; // rax
  unsigned int v53; // r10d
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rtt
  __int64 v56; // r13
  unsigned int v57; // r8d
  unsigned int v58; // r12d
  int v59; // r10d
  int v60; // edx
  int v61; // ecx
  int v62; // r8d
  unsigned int v63; // r12d
  unsigned int v64; // ecx
  __int64 v65; // rcx
  int v66; // eax
  int v67; // eax
  int *v68; // r13
  int v69; // eax
  int *v70; // rcx
  int *v71; // rdx
  int v72; // eax
  int v73; // ecx
  int v74; // ecx
  int v75; // ecx
  int v76; // ecx
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // r12
  int v79; // [rsp+20h] [rbp-308h]
  unsigned int v80; // [rsp+24h] [rbp-304h]
  unsigned int v81; // [rsp+2Ch] [rbp-2FCh]
  void (*v82)(struct _STRIP *, const struct _BMINFO *, struct _LINESTATE *); // [rsp+30h] [rbp-2F8h]
  __int64 v83; // [rsp+30h] [rbp-2F8h]
  __int64 v84; // [rsp+40h] [rbp-2E8h]
  int v85; // [rsp+48h] [rbp-2E0h]
  int v86; // [rsp+58h] [rbp-2D0h]
  unsigned int v87; // [rsp+5Ch] [rbp-2CCh]
  int v88; // [rsp+60h] [rbp-2C8h]
  int v89; // [rsp+64h] [rbp-2C4h]
  int v90; // [rsp+70h] [rbp-2B8h]
  char v91; // [rsp+78h] [rbp-2B0h]
  struct _POINTFIX *v94; // [rsp+98h] [rbp-290h]
  __int64 v95; // [rsp+A0h] [rbp-288h]
  struct _POINTFIX *v96; // [rsp+118h] [rbp-210h]
  _DWORD v97[4]; // [rsp+120h] [rbp-208h] BYREF
  unsigned int *v98; // [rsp+130h] [rbp-1F8h]
  int v99; // [rsp+138h] [rbp-1F0h]
  _BYTE v100[400]; // [rsp+13Ch] [rbp-1ECh] BYREF
  char v101; // [rsp+2CCh] [rbp-5Ch] BYREF
  struct _W32KCDD_ENG_CALLBACKS *v102; // [rsp+2D0h] [rbp-58h]
  unsigned int *v103; // [rsp+2D8h] [rbp-50h]

  v12 = a3;
  v94 = a3;
  if ( a1 <= (const struct _BMINFO *)&off_140358C90 )
  {
    v96 = &a3[a5];
    v87 = 0;
    v88 = 0;
    v89 = 0;
    v84 = 0LL;
    v95 = 0LL;
    v79 = 0;
    v85 = 0;
    v14 = 0;
    v81 = 0;
    memset_0(v97, 0, 0x1B0uLL);
    v102 = a12;
    v103 = a10;
    while ( 1 )
    {
      x = a2->x;
      v16 = v12->x;
      y = a2->y;
      v18 = v12->y;
      v19 = a9 | 0x20;
      if ( v16 >= x )
        v19 = a9;
      v20 = v18;
      if ( v16 >= x )
        v20 = y;
      v21 = v16;
      if ( v16 >= x )
      {
        v21 = x;
        y = v18;
        x = v16;
      }
      if ( y < v20 )
      {
        v20 = -v20;
        y = -y;
        v19 |= 8u;
      }
      v22 = x - v21;
      v80 = v22;
      if ( (v22 & 0x80000000) != 0 || (v23 = y - v20, (v23 & 0x80000000) != 0) )
      {
        v35 = v79;
        goto LABEL_37;
      }
      v24 = v21;
      if ( v23 >= v22 )
      {
        if ( v23 == v22 )
        {
          v19 |= 0x10u;
        }
        else
        {
          v48 = v22;
          v22 = v23;
          v80 = v23;
          v23 = v48;
          v24 = v20;
          v20 = v21;
          v19 |= 5u;
        }
      }
      v19 |= gaflRound[(v19 >> 2) & 7];
      v88 = v24 >> 4;
      v89 = v20 >> 4;
      v25 = v24 & 0xF;
      v26 = v25;
      v27 = v20 & 0xF;
      v28 = (int)v23 * v25;
      v29 = (int)v22 * (unsigned __int64)(unsigned int)(v27 + 8) - v28 - 1;
      if ( (v19 & 0x8000) == 0 )
        v29 = (int)v22 * (unsigned __int64)(unsigned int)(v27 + 8) - v28;
      v84 = v29 >> 4;
      v95 = ~(v29 >> 4);
      v30 = ((_BYTE)v27 + (_BYTE)v23) & 0xF;
      v31 = ((_BYTE)v26 + (_BYTE)v22) & 0xF;
      v32 = (v26 + v22) >> 4;
      if ( (v19 & 0x20) == 0 )
      {
        --v32;
        if ( (((_BYTE)v26 + (_BYTE)v22) & 0xF) != 0 )
        {
          if ( (((_BYTE)v27 + (_BYTE)v23) & 0xF) != 0 )
          {
            v74 = 8 - v30;
            if ( 8 - v30 < 0 )
              v74 = v30 - 8;
            if ( v74 <= v31 )
              v32 = (v26 + v22) >> 4;
          }
          else if ( v31 - (unsigned int)((v19 & 0x80) != 0) + 8 >= 0x10 )
          {
            v32 = (v26 + v22) >> 4;
          }
        }
        if ( (v19 & 0x90) != 0x90 )
          goto LABEL_19;
        if ( (((_BYTE)v26 + (_BYTE)v22) & 0xF) != 0 && v30 == v31 + 8 )
          --v32;
        if ( v26 && v27 == v26 + 8 )
        {
          v33 = 0;
        }
        else
        {
LABEL_19:
          v33 = 0;
          if ( v26 )
          {
            if ( v27 )
            {
              v75 = 8 - v27;
              if ( 8 - v27 < 0 )
                v75 = v27 - 8;
              if ( v75 <= v26 )
                v33 = 1;
            }
            else
            {
              LOBYTE(v33) = v26 - (unsigned int)((v19 & 0x80) != 0) + 8 >= 0x10;
            }
          }
        }
        LODWORD(v34) = 0;
        if ( v84 >= 0 )
          LODWORD(v34) = (unsigned int)v84 >= v22 - (v23 & -v33);
        goto LABEL_22;
      }
      if ( (((_BYTE)v27 + (_BYTE)v23) & 0xF) != 0 )
      {
        v76 = 8 - v30;
        if ( 8 - v30 < 0 )
          v76 = v30 - 8;
        if ( (unsigned int)(v31 + v76) > 0x10 )
LABEL_44:
          ++v32;
      }
      else if ( v31 - (unsigned int)((v19 & 0x80) != 0) + 8 >= 0x10 )
      {
        goto LABEL_44;
      }
      if ( (v19 & 0x90) != 0x10 )
        goto LABEL_46;
      if ( (((_BYTE)v27 + (_BYTE)v23) & 0xF) != 0 && v31 == v30 + 8 )
        ++v32;
      if ( !v27 || v26 != v27 + 8 )
      {
LABEL_46:
        v49 = 0;
        v33 = 1;
        if ( !v27 )
        {
          v50 = v26 - ((v19 & 0x80) != 0) + 8;
          if ( v50 >= 0x10 )
            v49 = v23;
          v33 = 2 - (v50 < 0x10);
          goto LABEL_50;
        }
        v73 = 8 - v27;
        if ( 8 - v27 < 0 )
          v73 = v27 - 8;
        if ( (unsigned int)(v26 + v73) <= 0x10 )
          goto LABEL_50;
      }
      v49 = v23;
      v33 = 2;
LABEL_50:
      LODWORD(v34) = 0;
      v51 = v84 + v49;
      v52 = (v84 + v49) >> 32;
      if ( v52 >= 0 )
      {
        if ( v52 > 0 || v51 >= 2 * v22 - v23 )
          LODWORD(v34) = 2;
        else
          LODWORD(v34) = v51 >= v22 - v23;
      }
LABEL_22:
      v85 = v34;
      v35 = v33;
      v79 = v33;
      v14 = v32;
      v81 = v32;
      if ( v32 >= v33 )
      {
        if ( (v19 & 0x40) != 0 )
        {
          v53 = v23;
          v87 = v23;
          goto LABEL_56;
        }
        goto LABEL_24;
      }
LABEL_37:
      while ( (v19 & 0x40) != 0 )
      {
        if ( !--a5 )
          return 1LL;
        v53 = v87;
LABEL_56:
        if ( (v19 & 0x20) != 0 )
        {
          v33 = v14 - a4->iStop;
          v32 = v14 - a4->iStart;
        }
        else
        {
          v33 = v35 + a4->iStart;
          v32 = v35 + a4->iStop;
        }
        ++a4;
        v23 = v53;
        *((_DWORD *)a6 + 8) = *((_DWORD *)a6 + 9);
        v54 = v53 * (unsigned __int64)(unsigned int)v33 + v84;
        if ( v54 >= 0xFFFFFFFF )
          v34 = v54 / v22;
        else
          LODWORD(v34) = (unsigned int)v54 / v22;
LABEL_24:
        if ( (v19 & 0x400) != 0 )
        {
          v56 = *(unsigned int *)((char *)a6 + (-(__int64)((v19 & 5) != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 92);
          v57 = *((_DWORD *)a6 + 23);
          if ( (v19 & 5) == 0 )
            v57 = *((_DWORD *)a6 + 22);
          if ( v57 == (_DWORD)v56 || (unsigned __int64)v23 * v56 <= v22 * (unsigned __int64)v57 )
          {
            *((_DWORD *)a6 + 2) = v57;
            *((_DWORD *)a6 + 3) = 0;
            *((_DWORD *)a6 + 4) = v57;
            v58 = v81 - v79;
            v59 = v19 & 0x20;
            LODWORD(v56) = v57;
            if ( (v19 & 0x20) != 0 )
            {
              v60 = v81 - v33 + 1;
            }
            else
            {
              v60 = v33 - v79;
              v59 = 0;
            }
          }
          else
          {
            v77 = v84 + v23 * (unsigned __int64)v81;
            if ( v77 >= 0xFFFFFFFF )
              v78 = v77 / v22;
            else
              LODWORD(v78) = (unsigned int)v77 / v22;
            *((_DWORD *)a6 + 2) = 0;
            *((_DWORD *)a6 + 3) = v56;
            *((_DWORD *)a6 + 4) = v56;
            v59 = v19 & 0x20;
            if ( (v19 & 0x20) != 0 )
              v60 = v78 - v34 + 1;
            else
              v60 = v34 - v85;
            v58 = v78 - v85;
          }
          v61 = *((_DWORD *)a6 + 8);
          v62 = v61 + v60 * v56;
          v63 = v61 + v56 * (v58 + 1);
          *((_DWORD *)a6 + 8) = v63;
          v64 = *((_DWORD *)a6 + 7);
          if ( v62 >= v64 )
            v62 %= v64;
          if ( v63 >= v64 )
            *((_DWORD *)a6 + 8) = v63 % v64;
          if ( v59 )
          {
            v62 = -v62;
            if ( v62 < 0 )
              v62 += v64;
            v65 = *((_QWORD *)a6 + 8);
            v83 = v65 + 4LL * (unsigned int)(*((_DWORD *)a6 + 25) - 1);
            v66 = *((_DWORD *)a6 + 21) == 0;
          }
          else
          {
            v65 = *((_QWORD *)a6 + 9);
            v83 = v65 + 4LL * (unsigned int)(*((_DWORD *)a6 + 25) - 1);
            v66 = *((_DWORD *)a6 + 21);
          }
          *((_DWORD *)a6 + 20) = v66;
          *((_QWORD *)a6 + 5) = v65;
          *((_QWORD *)a6 + 6) = v83;
          v67 = *((_DWORD *)a6 + 6);
          if ( v62 >= v67 )
          {
            v62 -= v67;
            if ( (*((_DWORD *)a6 + 25) & 1) != 0 )
              *((_DWORD *)a6 + 20) = *((_DWORD *)a6 + 20) == 0;
          }
          v68 = (int *)*((_QWORD *)a6 + 5);
          v91 = (char)v68;
          *((_QWORD *)a6 + 7) = v68;
          v69 = *v68;
          LOBYTE(v70) = (_BYTE)v68;
          if ( v62 >= *v68 )
          {
            v71 = v68 + 1;
            do
            {
              v72 = *v68;
              v70 = v71;
              *((_QWORD *)a6 + 7) = v71;
              v62 -= v72;
              ++v68;
              ++v71;
              v69 = *v70;
            }
            while ( v62 >= *v70 );
            LOBYTE(v68) = v91;
          }
          *((_DWORD *)a6 + 5) = v69 - v62;
          if ( (((_BYTE)v70 - (_BYTE)v68) & 4) != 0 )
            *((_DWORD *)a6 + 20) = *((_DWORD *)a6 + 20) == 0;
          v22 = v80;
        }
        v36 = v33 + v88;
        v37 = v34 + v89;
        if ( (v19 & 5) == 0 )
        {
          v37 = v33 + v88;
          v36 = v34 + v89;
        }
        v38 = -v36;
        if ( (v19 & 8) == 0 )
          v38 = v36;
        if ( 2 * v23 > v22 )
        {
          v19 |= 2u;
          v95 = v84 - v22;
          v23 = v22 - v23;
          LODWORD(v34) = v33 - v34;
        }
        v97[1] = v19;
        v82 = a8[v19 & 3];
        v99 = v37 & *((_DWORD *)a1 + 7);
        v97[2] = a11;
        v39 = &a10[v38 * a11];
        if ( *((int *)a1 + 6) < 0 )
          v98 = (unsigned int *)((char *)v39 + 3 * v37);
        else
          v98 = &v39[(__int64)v37 >> *((_DWORD *)a1 + 6)];
        v40 = (int *)v100;
        v41 = v32 - v33 + 1;
        LODWORD(v42) = 0;
        v43 = 0;
        v90 = 0;
        v86 = 0;
        if ( v23 )
        {
          v55 = v95 + (unsigned int)(v34 + 1) * (unsigned __int64)v22;
          v42 = v55 % v23;
          v44 = v55 / v23 - v33 + 1;
          v86 = v22 % v23;
          v43 = v22 / v23;
          v90 = v22 / v23;
        }
        else
        {
          v44 = 0x7FFFFFFF;
        }
        while ( 1 )
        {
          v45 = v41;
          v41 -= v44;
          v46 = (char *)(v40 + 1);
          if ( v41 <= 0 )
            break;
          *v40++ = v44;
          if ( v46 == &v101 )
          {
            v97[0] = ((char *)v40 - v100) >> 2;
            ((void (__fastcall *)(_DWORD *, const struct _BMINFO *, struct _LINESTATE *))v82)(v97, a1, a6);
            v40 = (int *)v100;
            v43 = v90;
          }
          v44 = v43;
          LODWORD(v42) = v42 + v86;
          if ( (unsigned int)v42 >= v23 )
          {
            LODWORD(v42) = v42 - v23;
            v44 = v43 + 1;
          }
        }
        *v40 = v45;
        v97[0] = ((char *)v40 - v100 + 4) >> 2;
        ((void (__fastcall *)(_DWORD *, const struct _BMINFO *, struct _LINESTATE *))v82)(v97, a1, a6);
        v14 = v81;
        v35 = v79;
      }
      a2 = v94;
      v12 = v94 + 1;
      v94 = v12;
      if ( v12 >= v96 )
        return 1LL;
    }
  }
  return 0LL;
}
