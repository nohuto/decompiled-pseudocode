/*
 * XREFs of ?vSrcCopyS1D8@@YAXPEAUBLTINFO@@@Z @ 0x140185E50
 * Callers:
 *     EngCopyBits @ 0x140070750 (EngCopyBits.c)
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400F9EFC (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall vSrcCopyS1D8(struct BLTINFO *a1)
{
  __int64 v1; // rax
  struct BLTINFO *v2; // r10
  BOOL v3; // r12d
  __int64 v4; // rdx
  char *v5; // rcx
  int v6; // r8d
  int v7; // r9d
  char v8; // al
  int v9; // r14d
  int v10; // r15d
  int v11; // eax
  unsigned int v12; // r11d
  int v13; // ecx
  int v14; // r8d
  unsigned int v15; // edi
  int v16; // esi
  int v17; // eax
  signed int v18; // ecx
  int v19; // edx
  unsigned __int8 v20; // r13
  _BYTE *v21; // rdx
  int v22; // r9d
  _BYTE *v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdi
  char v26; // r14
  _BYTE *v27; // rbx
  unsigned __int8 v28; // r11
  _BYTE *v29; // rcx
  unsigned __int64 v30; // rax
  int v31; // r11d
  __int64 v32; // rdx
  _DWORD *v33; // r9
  int v34; // ecx
  _BYTE *v35; // r8
  __int64 v36; // rax
  __int64 v37; // r13
  __int64 v38; // r12
  _BYTE *v39; // rdx
  unsigned int v40; // ecx
  __int64 v41; // rax
  int v42; // r11d
  unsigned __int64 v43; // rdx
  _BYTE *v44; // r8
  unsigned int v45; // ecx
  unsigned int v46; // eax
  __int64 v47; // r12
  _BYTE *v48; // rcx
  unsigned __int8 v49; // r9
  unsigned __int64 v50; // rax
  char v51; // r13
  char v52; // si
  __int64 v53; // r10
  unsigned __int8 v54; // r11
  _BYTE *i; // rcx
  unsigned __int8 v56; // r9
  _BYTE *v57; // rcx
  unsigned __int64 v58; // rax
  char v59; // r12
  char v60; // si
  __int64 v61; // r15
  _BYTE *v62; // r13
  unsigned __int8 v63; // al
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rax
  __int64 v66; // r13
  __int64 v67; // rax
  unsigned __int8 v68; // r11
  _BYTE *v69; // rcx
  unsigned __int64 v70; // rax
  char v71; // [rsp+8h] [rbp-69h]
  _BYTE v72[4]; // [rsp+Ch] [rbp-65h]
  int v73; // [rsp+10h] [rbp-61h]
  int v74; // [rsp+14h] [rbp-5Dh]
  int v75; // [rsp+18h] [rbp-59h]
  int v76; // [rsp+1Ch] [rbp-55h]
  int v77; // [rsp+20h] [rbp-51h]
  unsigned int v78; // [rsp+24h] [rbp-4Dh]
  __int64 v79; // [rsp+28h] [rbp-49h]
  int v80; // [rsp+30h] [rbp-41h]
  __int64 v81; // [rsp+38h] [rbp-39h]
  __int64 v82; // [rsp+40h] [rbp-31h]
  struct BLTINFO *v83; // [rsp+48h] [rbp-29h]
  _DWORD v84[2]; // [rsp+58h] [rbp-19h]
  int v85; // [rsp+60h] [rbp-11h]
  int v86; // [rsp+64h] [rbp-Dh]
  int v87; // [rsp+68h] [rbp-9h]
  int v88; // [rsp+6Ch] [rbp-5h]
  int v89; // [rsp+70h] [rbp-1h]
  int v90; // [rsp+74h] [rbp+3h]
  int v91; // [rsp+78h] [rbp+7h]
  int v92; // [rsp+7Ch] [rbp+Bh]
  int v93; // [rsp+80h] [rbp+Fh]
  int v94; // [rsp+84h] [rbp+13h]
  int v95; // [rsp+88h] [rbp+17h]
  int v96; // [rsp+8Ch] [rbp+1Bh]
  int v97; // [rsp+90h] [rbp+1Fh]
  int v98; // [rsp+94h] [rbp+23h]

  v1 = *(_QWORD *)a1;
  v2 = a1;
  v83 = a1;
  v3 = 1;
  v76 = 1;
  v4 = 0LL;
  v5 = *(char **)(v1 + 16);
  v6 = *(_DWORD *)v5;
  v7 = *((_DWORD *)v5 + 1);
  do
  {
    v8 = *v5;
    v5 += 4;
    v72[v4++] = v8;
  }
  while ( v4 < 2 );
  v9 = *((_DWORD *)v2 + 11);
  v10 = *((_DWORD *)v2 + 10);
  v73 = v9;
  v75 = v10;
  v11 = *((_DWORD *)v2 + 12);
  v84[0] = ((v6 | (v6 << 8)) << 16) | v6 | (v6 << 8);
  v12 = v11 & 7;
  LODWORD(v79) = v11;
  v91 = v7 | (v84[0] << 8);
  v78 = v12;
  v87 = v6 | (v91 << 8);
  v93 = v7 | (v87 << 8);
  v88 = v6 | (v93 << 8);
  v85 = v6 | (v88 << 8);
  v92 = v7 | (v85 << 8);
  v95 = v7 | (v92 << 8);
  v97 = v7 | (v95 << 8);
  v98 = v7 | (v97 << 8);
  v90 = v6 | (v98 << 8);
  v94 = v7 | (v90 << 8);
  v96 = v7 | (v94 << 8);
  v89 = v6 | (v96 << 8);
  v86 = v6 | (v89 << 8);
  v13 = v6 | (v86 << 8);
  v14 = *((_DWORD *)v2 + 14);
  v84[1] = v13;
  v15 = v14 & 7;
  v16 = (unsigned __int8)(v12 - v15 + 8);
  v17 = 8;
  if ( v12 >= v15 )
    v16 = (unsigned __int8)(v12 - v15);
  v18 = *((_DWORD *)v2 + 7);
  LOBYTE(v17) = 8 - v16;
  v77 = v16;
  v74 = v17;
  v80 = v18 + v14;
  v19 = (v18 + v14) >> 3;
  if ( v19 == v14 >> 3 )
  {
    v20 = 0;
    v71 = 0;
    v3 = (int)(v18 + v12) > 8;
  }
  else
  {
    v31 = *((_DWORD *)v2 + 8);
    LODWORD(v32) = v19 - ((v14 + 7) >> 3);
    v71 = 1;
    v33 = (_DWORD *)(*((_QWORD *)v2 + 2) + ((v14 + 7) & 0xFFFFFFFFFFFFFFF8uLL));
    v20 = 1;
    v34 = v9 - 8 * v32;
    v35 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)(int)(v79 + (-v15 & 7)) >> 3));
    LODWORD(v36) = v10 - v32;
    if ( v31 )
    {
      v32 = (int)v32;
      v36 = (int)v36;
      v82 = (int)v32;
      v79 = (int)v36;
      v37 = v34;
      if ( (_BYTE)v16 )
      {
        v59 = v16;
        v60 = v74;
        v61 = (int)v36;
        do
        {
          v62 = &v35[v32];
          --v31;
          v63 = *v35 << v59;
          if ( v35 != &v35[v32] )
          {
            do
            {
              v64 = v63 | ((unsigned __int64)(unsigned __int8)*++v35 >> v60);
              *v33 = v84[v64 >> 4];
              v33[1] = v84[v64 & 0xF];
              v33 += 2;
              v63 = *v35 << v59;
            }
            while ( v35 != v62 );
            v32 = v82;
          }
          v33 = (_DWORD *)((char *)v33 + v34);
          v35 += v61;
        }
        while ( v31 );
        v2 = v83;
        LOBYTE(v16) = v77;
        v9 = v73;
        v10 = v75;
      }
      else
      {
        v38 = (int)v32;
        do
        {
          --v31;
          v39 = &v35[v38];
          if ( v35 != &v35[v38] )
          {
            do
            {
              v40 = (unsigned __int8)*v35++;
              *v33 = v84[(unsigned __int64)v40 >> 4];
              v33[1] = v84[v40 & 0xF];
              v33 += 2;
            }
            while ( v35 != v39 );
            v36 = v79;
          }
          v33 = (_DWORD *)((char *)v33 + v37);
          v35 += v36;
        }
        while ( v31 );
      }
      v20 = 1;
      v3 = v76;
    }
    v12 = v78;
    v18 = 8 - v15;
  }
  if ( v15 | v20 ^ 1 )
  {
    v21 = (_BYTE *)(*((_QWORD *)v2 + 2) + *((int *)v2 + 14));
    v22 = *((_DWORD *)v2 + 8);
    v23 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)*((int *)v2 + 12) >> 3));
    if ( v22 )
    {
      if ( v12 > v15 )
      {
        if ( v3 )
        {
          v51 = v16;
          v52 = v74;
          v53 = v18;
          do
          {
            --v22;
            v54 = ((unsigned __int8)(*v23 << v51) | (unsigned __int8)(v23[1] >> v52)) << v15;
            for ( i = v21; i != &v21[v53]; ++i )
            {
              v65 = v54;
              v54 *= 2;
              *i = v72[v65 >> 7];
            }
            v21 += v9;
            v23 += v10;
          }
          while ( v22 );
          v2 = v83;
          LOBYTE(v16) = v77;
        }
        else
        {
          v75 = (unsigned __int8)v16;
          v66 = v18;
          v67 = v10;
          do
          {
            --v22;
            v68 = *v23 << v16 << v15;
            v69 = v21;
            if ( v21 != &v21[v66] )
            {
              do
              {
                v70 = v68;
                v68 *= 2;
                *v69++ = v72[v70 >> 7];
              }
              while ( v69 != &v21[v66] );
              v67 = v10;
            }
            v21 += v9;
            v23 += v67;
          }
          while ( v22 );
        }
        v20 = v71;
      }
      else
      {
        v24 = v18;
        v25 = v9;
        v26 = v78;
        v81 = v18;
        do
        {
          v27 = &v21[v24];
          --v22;
          v28 = *v23 << v26;
          v29 = v21;
          if ( v21 != &v21[v24] )
          {
            do
            {
              v30 = v28;
              v28 *= 2;
              *v29++ = v72[v30 >> 7];
            }
            while ( v29 != v27 );
            v24 = v81;
          }
          v21 += v25;
          v23 += v10;
        }
        while ( v22 );
      }
      v9 = v73;
    }
  }
  if ( (v80 & 7) != 0 )
  {
    if ( v20 )
    {
      v41 = *((int *)v2 + 13);
      v42 = *((_DWORD *)v2 + 8);
      v43 = *((_QWORD *)v2 + 2) + (v80 & 0xFFFFFFFFFFFFFFF8uLL);
      v44 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((v41 - 1) >> 3));
      v45 = ((_BYTE)v80 - 1) & 7;
      v46 = ((_BYTE)v41 - 1) & 7;
      if ( v42 )
      {
        v47 = v45 + 1;
        if ( v46 >= v45 )
        {
          do
          {
            --v42;
            v56 = *v44 << v16;
            v57 = (_BYTE *)v43;
            if ( v43 != v47 + v43 )
            {
              do
              {
                v58 = v56;
                v56 *= 2;
                *v57++ = v72[v58 >> 7];
              }
              while ( v57 != (_BYTE *)(v47 + v43) );
            }
            v43 += v9;
            v44 += v10;
          }
          while ( v42 );
        }
        else
        {
          do
          {
            --v42;
            v48 = (_BYTE *)v43;
            v49 = (*v44 >> v74) | (*(v44 - 1) << v16);
            if ( v43 != v47 + v43 )
            {
              do
              {
                v50 = v49;
                v49 *= 2;
                *v48++ = v72[v50 >> 7];
              }
              while ( v48 != (_BYTE *)(v47 + v43) );
            }
            v43 += v9;
            v44 += v10;
          }
          while ( v42 );
        }
      }
    }
  }
}
