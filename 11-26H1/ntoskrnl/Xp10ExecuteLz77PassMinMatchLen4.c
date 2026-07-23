/*
 * XREFs of Xp10ExecuteLz77PassMinMatchLen4 @ 0x140813398
 * Callers:
 *     Xp10CompressBuffer @ 0x140811918 (Xp10CompressBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Xp10ExecuteLz77PassMinMatchLen4(
        __int64 a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        _DWORD *a6)
{
  __int64 v6; // r10
  unsigned __int64 v7; // rbp
  unsigned __int8 *v8; // r8
  int v9; // r11d
  int v10; // eax
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  _DWORD *v13; // r9
  unsigned int v14; // r9d
  unsigned int *v15; // r15
  unsigned int v16; // r12d
  unsigned __int8 *v17; // r13
  _BYTE *v18; // r14
  __int64 v19; // rdi
  unsigned __int8 *v20; // r11
  int v21; // edx
  int v22; // ebx
  int v23; // eax
  unsigned __int8 *v24; // rcx
  int v25; // edx
  int v26; // ebx
  int v27; // esi
  int v28; // edi
  unsigned __int8 *v29; // rcx
  int v30; // edx
  _DWORD *v31; // rbx
  _DWORD *v32; // rdx
  signed __int64 v33; // rdi
  unsigned int i; // ecx
  unsigned int *v35; // rbp
  unsigned int v36; // esi
  unsigned int v37; // r9d
  unsigned __int8 *v38; // rdx
  unsigned __int8 *v39; // rbx
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int8 *j; // rdx
  unsigned int v44; // eax
  unsigned int v45; // esi
  unsigned __int8 *v46; // rbp
  int v47; // r14d
  int v48; // edi
  _WORD *v49; // r9
  unsigned __int16 *v50; // rcx
  int v51; // r11d
  unsigned __int16 *v52; // rbx
  unsigned int v53; // ecx
  unsigned __int16 v54; // ax
  unsigned int v55; // edi
  _BYTE *v56; // r8
  int v57; // ecx
  unsigned __int8 v58; // al
  __int64 v59; // rax
  unsigned __int16 *v60; // rcx
  unsigned int v62; // [rsp+0h] [rbp-98h]
  _WORD *v63; // [rsp+8h] [rbp-90h]
  int v64; // [rsp+10h] [rbp-88h]
  unsigned int v65; // [rsp+14h] [rbp-84h]
  unsigned int v66; // [rsp+18h] [rbp-80h]
  unsigned __int8 *v67; // [rsp+20h] [rbp-78h]
  unsigned __int8 *v68; // [rsp+28h] [rbp-70h]
  unsigned __int8 *v69; // [rsp+30h] [rbp-68h]
  unsigned __int64 v70; // [rsp+38h] [rbp-60h]
  int v72; // [rsp+A8h] [rbp+10h]
  int v74; // [rsp+B8h] [rbp+20h]

  v74 = (int)a4;
  v6 = a1;
  v62 = 0;
  v7 = a3;
  v8 = a2 + 1;
  v9 = (int)a4;
  v10 = 1 << **(_WORD **)a1;
  *(_DWORD *)(a1 + 24) = 0;
  v66 = v10;
  memset64((void *)(a1 + 5664), (unsigned __int64)a2, 0xEF2uLL);
  memset64((void *)(a1 + 36272), (unsigned __int64)a2, 0x12EEuLL);
  v11 = *a2;
  *a4 = v11;
  v12 = a5 - 15;
  v13 = a4 + 1;
  ++*(_DWORD *)(v6 + 4 * v11 + 28);
  v63 = v13;
  v70 = v7 - 40;
  if ( (unsigned __int64)(a2 + 1) < v7 - 40 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v13 >= v12 )
        goto LABEL_100;
      v14 = v66;
      v15 = (unsigned int *)(v6 + 8);
      v67 = v8;
      v65 = 0;
      v16 = 0;
      v64 = 0;
      v17 = v8;
      v68 = v8;
      while ( 1 )
      {
        v18 = v8 + 1;
        v69 = v8 + 1;
        v19 = *v8 + 2 * v8[2] + 8 * v8[1] + 4 * (unsigned int)v8[3];
        v20 = *(unsigned __int8 **)(v6 + 8 * v19 + 5664);
        *(_QWORD *)(v6 + 8 * v19 + 5664) = v8;
        if ( *v20 != *v8
          || v20[1] != *v18
          || v20[2] != v8[2]
          || v20[3] != v8[3]
          || (int)v8 - (int)v20 >= v14
          || v8 == v20 )
        {
          v22 = 0;
          v72 = 0;
          i = 1;
          goto LABEL_39;
        }
        v21 = v20[4];
        v22 = 1;
        v23 = v8[4];
        v72 = 1;
        if ( (_BYTE)v21 == (_BYTE)v23 )
          goto LABEL_17;
        v24 = *(unsigned __int8 **)(v6 + 8LL * (unsigned int)(v19 + v23) + 36272);
        *(_QWORD *)(v6 + 8LL * (unsigned int)(v19 + v21) + 36272) = v20;
        if ( *(_DWORD *)v24 == *(_DWORD *)v8 )
        {
          v25 = v8[4];
          if ( v24[4] == (_BYTE)v25 && (int)v8 - (int)v24 < v14 && v8 != v24 )
          {
            v20 = v24;
            *(_QWORD *)(v6 + 8LL * (unsigned int)(v19 + v25) + 36272) = v8;
LABEL_17:
            v26 = v8[5];
            v27 = v20[5];
            if ( (_BYTE)v26 == (_BYTE)v27 )
            {
LABEL_24:
              v31 = v8 + 6;
              v32 = v20 + 14;
              v33 = v8 - v20;
              for ( i = 6; (unsigned __int64)v31 < v7 - 40 && i < v14 - 32 && *v31 == *(v32 - 2); i += 32 )
              {
                if ( *(_DWORD *)((char *)v32 + v33 - 4) != *(v32 - 1) )
                {
                  i += 4;
                  break;
                }
                if ( *(_DWORD *)((char *)v32 + v33) != *v32 )
                {
                  i += 8;
                  break;
                }
                if ( *(_DWORD *)((char *)v32 + v33 + 4) != v32[1] )
                {
                  i += 12;
                  break;
                }
                if ( *(_DWORD *)((char *)v32 + v33 + 8) != v32[2] )
                {
                  i += 16;
                  break;
                }
                if ( *(_DWORD *)((char *)v32 + v33 + 12) != v32[3] )
                {
                  i += 20;
                  break;
                }
                if ( *(_DWORD *)((char *)v32 + v33 + 16) != v32[4] )
                {
                  i += 24;
                  break;
                }
                if ( *(_DWORD *)((char *)v32 + v33 + 20) != v32[5] )
                {
                  i += 28;
                  break;
                }
                v31 += 8;
                v32 += 8;
              }
              v42 = i;
              for ( j = &v8[i]; (unsigned __int64)j < v7 && *j == v20[v42]; j = &v8[i] )
                v42 = ++i;
            }
            else
            {
              v28 = 2
                  * ((v8[2] ^ (unsigned __int8)__ROL1__(*v8, v8[4]))
                   + 4
                   * ((unsigned __int8)__ROR1__(*v18 ^ __ROL1__(v8[3], 3), 1)
                    + (unsigned __int8)__ROL1__(v8[4] ^ (__ROR1__(*v8, 1) + 69), 3)));
              v29 = *(unsigned __int8 **)(v6 + 8LL * (unsigned int)(v28 + v26) + 36272);
              *(_QWORD *)(v6 + 8LL * (unsigned int)(v28 + v27) + 36272) = v20;
              if ( *(_DWORD *)v8 == *(_DWORD *)v29 && v8[4] == v29[4] )
              {
                v30 = v8[5];
                if ( (_BYTE)v30 == v29[5] && (int)v8 - (int)v29 < v14 && v8 != v29 )
                {
                  v20 = v29;
                  *(_QWORD *)(v6 + 8LL * (unsigned int)(v28 + v30) + 36272) = v8;
                  goto LABEL_24;
                }
              }
              i = 5;
            }
            v22 = 1;
            goto LABEL_39;
          }
        }
        i = 4;
LABEL_39:
        v35 = v15;
        v36 = 0;
        v37 = v62;
        do
        {
          v38 = &v8[-*v35];
          if ( *v38 == *v8 && v38[1] == *v69 && v38[2] == v8[2] && v38[3] == v8[3] && v38 != v8 )
          {
            v39 = v8 + 4;
            LODWORD(v40) = 4;
            if ( (unsigned __int64)(v8 + 4) < a3 )
            {
              v41 = 4LL;
              do
              {
                if ( *v39 != v38[v41] )
                  break;
                v40 = (unsigned int)(v40 + 1);
                v41 = (unsigned int)v40;
                v39 = &v8[v40];
              }
              while ( (unsigned __int64)&v8[v40] < a3 );
            }
            if ( (unsigned int)v40 < i )
            {
              v22 = v72;
            }
            else
            {
              v22 = 2;
              v20 = &v8[-*v35];
              v72 = 2;
              v37 = v36;
              i = v40;
            }
          }
          ++v36;
          ++v35;
        }
        while ( v36 < 4 );
        v44 = v37;
        v45 = i;
        v62 = v37;
        if ( i < v65 )
        {
          v8 = v68;
          v44 = v16;
          v22 = v64;
        }
        v46 = v8;
        if ( i < v65 )
          v20 = v67;
        v47 = v22;
        if ( i < v65 )
          v45 = v65;
        v48 = (int)v20;
        v14 = v66;
        v68 = v8;
        v8 = v69;
        v16 = v44;
        v64 = v22;
        v6 = a1;
        v67 = v20;
        v65 = v45;
        v15 = (unsigned int *)(a1 + 8);
        if ( v69 - v17 > 2 )
          break;
        v7 = a3;
      }
      v49 = v63;
      v62 = v44;
      while ( v17 < v46 )
      {
        v50 = v49;
        *v49++ = *v17;
        ++*(_DWORD *)(a1 + 4LL * *v50 + 28);
        ++v17;
      }
      v51 = 0;
      v52 = v49;
      if ( v47 )
      {
        if ( v47 == 1 )
        {
          _BitScanReverse((unsigned int *)&v51, (_DWORD)v46 - v48);
          *v49 = 16 * (v51 + 20);
          *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 12);
          *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 8);
          *(_DWORD *)(a1 + 8) = (_DWORD)v46 - v48;
        }
        else if ( v47 == 2 )
        {
          *v49 = 16 * (v44 + 16);
          v53 = *(_DWORD *)(a1 + 4LL * v44 + 8);
          if ( v44 )
          {
            if ( v44 >= 3 )
            {
              *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 16);
              goto LABEL_83;
            }
            if ( v44 >= 2 )
LABEL_83:
              *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 12);
            *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 8);
            *v15 = v53;
          }
        }
        v54 = *v49;
        v55 = v45 - 4;
        if ( v45 - 4 < 0xF )
        {
          *v49 = v54 + v55;
          v13 = v49 + 1;
          v63 = v13;
        }
        else
        {
          v56 = v49 + 1;
          *v49 = v54 + 15;
          v13 = (_DWORD *)((char *)v49 + 3);
          v63 = v13;
          if ( v55 <= 0xF6 )
          {
            v58 = v45 - 19;
            *v56 = v45 - 19;
LABEL_91:
            v63 = v13;
          }
          else
          {
            _BitScanReverse((unsigned int *)&v57, v45 - 250);
            v58 = v57 - 24;
            *v56 = v57 - 24;
            if ( v45 - 250 > 1 )
            {
              *(_DWORD *)(a1 + 24) += v57;
              *v13 = v45 - 250 - (1 << v57);
              v13 = v56 + 5;
              v58 = *v56;
              goto LABEL_91;
            }
          }
          ++*(_DWORD *)(a1 + 4LL * v58 + 2844);
        }
        ++*(_DWORD *)(a1 + 4LL * *v52 + 28);
        if ( v47 == 1 && v51 )
        {
          *(_DWORD *)(a1 + 24) += v51;
          *v13++ = (_DWORD)v46 - (1 << v51) - (_DWORD)v67;
          v63 = v13;
        }
        v59 = v45;
      }
      else
      {
        *v49 = *v46;
        v13 = v49 + 1;
        v63 = v13;
        ++*(_DWORD *)(a1 + 4LL * *v52 + 28);
        v59 = 1LL;
      }
      v12 = a5 - 15;
      v8 = &v46[v59];
      v7 = a3;
      if ( (unsigned __int64)v8 >= v70 )
      {
LABEL_100:
        v9 = v74;
        break;
      }
    }
  }
  if ( (unsigned __int64)v8 < v7 )
  {
    do
    {
      if ( (unsigned __int64)v13 >= a5 )
        break;
      v60 = (unsigned __int16 *)v13;
      *(_WORD *)v13 = *v8++;
      v13 = (_DWORD *)((char *)v13 + 2);
      ++*(_DWORD *)(v6 + 4LL * *v60 + 28);
    }
    while ( (unsigned __int64)v8 < v7 );
    v9 = v74;
  }
  *a6 = (_DWORD)v13 - v9;
  return 0LL;
}
