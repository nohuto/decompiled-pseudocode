/*
 * XREFs of Xp10ExecuteLz77PassMinMatchLen3 @ 0x140812C50
 * Callers:
 *     Xp10CompressBuffer @ 0x140811918 (Xp10CompressBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Xp10ExecuteLz77PassMinMatchLen3(
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
  __int64 v19; // rdx
  unsigned __int8 *v20; // r11
  int v21; // edi
  int v22; // ebx
  int v23; // eax
  unsigned __int8 *v24; // rcx
  int v25; // edi
  int v26; // ebx
  int v27; // esi
  int v28; // edi
  unsigned __int8 *v29; // rcx
  int v30; // edx
  int v31; // ebx
  int v32; // esi
  int v33; // edi
  unsigned __int8 *v34; // rcx
  int v35; // edx
  _DWORD *v36; // rbx
  _DWORD *v37; // rdx
  signed __int64 v38; // rdi
  unsigned int i; // ecx
  unsigned int *v40; // rbp
  unsigned int v41; // esi
  unsigned int v42; // r9d
  unsigned __int8 *v43; // rdx
  __int64 v44; // rax
  unsigned __int8 *v45; // rbx
  unsigned int v46; // edi
  __int64 v47; // rax
  unsigned __int8 *j; // rdx
  unsigned int v49; // eax
  unsigned int v50; // esi
  unsigned __int8 *v51; // rbp
  int v52; // edi
  int v53; // r14d
  _WORD *v54; // r9
  unsigned __int16 *v55; // rcx
  int v56; // r11d
  unsigned __int16 *v57; // rbx
  unsigned int v58; // ecx
  unsigned __int16 v59; // ax
  unsigned int v60; // edi
  _BYTE *v61; // r8
  int v62; // ecx
  unsigned __int8 v63; // al
  __int64 v64; // rax
  unsigned __int16 *v65; // rcx
  unsigned int v67; // [rsp+0h] [rbp-88h]
  int v68; // [rsp+4h] [rbp-84h]
  _WORD *v69; // [rsp+8h] [rbp-80h]
  unsigned int v70; // [rsp+10h] [rbp-78h]
  unsigned int v71; // [rsp+14h] [rbp-74h]
  unsigned __int8 *v72; // [rsp+18h] [rbp-70h]
  unsigned __int8 *v73; // [rsp+20h] [rbp-68h]
  unsigned __int8 *v74; // [rsp+28h] [rbp-60h]
  unsigned __int64 v75; // [rsp+30h] [rbp-58h]
  int v77; // [rsp+98h] [rbp+10h]
  int v79; // [rsp+A8h] [rbp+20h]

  v79 = (int)a4;
  v6 = a1;
  v67 = 0;
  v7 = a3;
  v8 = a2 + 1;
  v9 = (int)a4;
  v10 = 1 << **(_WORD **)a1;
  *(_DWORD *)(a1 + 24) = 0;
  v71 = v10;
  memset64((void *)(a1 + 5664), (unsigned __int64)a2, 0xEF2uLL);
  memset64((void *)(a1 + 36272), (unsigned __int64)a2, 0x12EEuLL);
  v11 = *a2;
  *a4 = v11;
  v12 = a5 - 15;
  v13 = a4 + 1;
  ++*(_DWORD *)(v6 + 4 * v11 + 28);
  v69 = v13;
  v75 = v7 - 40;
  if ( (unsigned __int64)(a2 + 1) < v7 - 40 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v13 >= v12 )
        goto LABEL_105;
      v14 = v71;
      v15 = (unsigned int *)(v6 + 8);
      v72 = v8;
      v68 = 0;
      v16 = 0;
      v70 = 0;
      v17 = v8;
      v73 = v8;
      while ( 1 )
      {
        v18 = v8 + 1;
        v74 = v8 + 1;
        v19 = *v8 + 2 * v8[2] + 8 * (unsigned int)v8[1];
        v20 = *(unsigned __int8 **)(v6 + 8 * v19 + 5664);
        *(_QWORD *)(v6 + 8 * v19 + 5664) = v8;
        if ( *v20 != *v8 || v20[1] != *v18 || v20[2] != v8[2] || (int)v8 - (int)v20 >= v14 || v8 == v20 )
        {
          v22 = 0;
          v77 = 0;
          i = 1;
          goto LABEL_44;
        }
        v21 = v20[3];
        v22 = 1;
        v23 = v8[3];
        v77 = 1;
        if ( (_BYTE)v21 == (_BYTE)v23 )
          goto LABEL_16;
        v24 = *(unsigned __int8 **)(v6 + 8LL * (unsigned int)(v19 + v23) + 36272);
        *(_QWORD *)(v6 + 8LL * (unsigned int)(v19 + v21) + 36272) = v20;
        if ( *(_DWORD *)v24 == *(_DWORD *)v8 )
        {
          v25 = v8[3];
          if ( v24[3] == (_BYTE)v25 && (int)v8 - (int)v24 < v14 && v8 != v24 )
          {
            v20 = v24;
            *(_QWORD *)(v6 + 8LL * (unsigned int)(v19 + v25) + 36272) = v8;
LABEL_16:
            v26 = v20[4];
            v27 = v8[4];
            if ( (_BYTE)v26 != (_BYTE)v27 )
            {
              v28 = 2
                  * ((unsigned __int8)__ROR1__(*v18 ^ __ROL1__(v8[3] + *v8, 3), 1)
                   + 4 * (unsigned __int8)__ROL1__(*v8 ^ __ROR1__(v8[2] + *v18 + 97, 1), 3));
              v29 = *(unsigned __int8 **)(v6 + 8LL * (unsigned int)(v28 + v27) + 36272);
              *(_QWORD *)(v6 + 8LL * (unsigned int)(v28 + v26) + 36272) = v20;
              if ( *(_DWORD *)v8 == *(_DWORD *)v29 )
              {
                v30 = v8[4];
                if ( (_BYTE)v30 == v29[4] && (int)v8 - (int)v29 < v14 && v8 != v29 )
                {
                  v20 = v29;
                  *(_QWORD *)(v6 + 8LL * (unsigned int)(v28 + v30) + 36272) = v8;
                  goto LABEL_22;
                }
              }
              i = 4;
LABEL_43:
              v22 = 1;
              goto LABEL_44;
            }
LABEL_22:
            v31 = v8[5];
            v32 = v20[5];
            if ( (_BYTE)v31 != (_BYTE)v32 )
            {
              v33 = 2
                  * ((v8[2] ^ (unsigned __int8)__ROL1__(*v8, v8[4]))
                   + 4
                   * ((unsigned __int8)__ROR1__(*v18 ^ __ROL1__(v8[3], 3), 1)
                    + (unsigned __int8)__ROL1__(v8[4] ^ (__ROR1__(*v8, 1) + 69), 3)));
              v34 = *(unsigned __int8 **)(v6 + 8LL * (unsigned int)(v33 + v31) + 36272);
              *(_QWORD *)(v6 + 8LL * (unsigned int)(v33 + v32) + 36272) = v20;
              if ( *(_DWORD *)v8 != *(_DWORD *)v34
                || v8[4] != v34[4]
                || (v35 = v8[5], (_BYTE)v35 != v34[5])
                || (int)v8 - (int)v34 >= v14
                || v8 == v34 )
              {
                i = 5;
                goto LABEL_43;
              }
              v20 = v34;
              *(_QWORD *)(v6 + 8LL * (unsigned int)(v33 + v35) + 36272) = v8;
            }
            v36 = v8 + 6;
            v37 = v20 + 14;
            v38 = v8 - v20;
            for ( i = 6; (unsigned __int64)v36 < v7 - 40 && i < v14 - 32 && *v36 == *(v37 - 2); i += 32 )
            {
              if ( *(_DWORD *)((char *)v37 + v38 - 4) != *(v37 - 1) )
              {
                i += 4;
                break;
              }
              if ( *(_DWORD *)((char *)v37 + v38) != *v37 )
              {
                i += 8;
                break;
              }
              if ( *(_DWORD *)((char *)v37 + v38 + 4) != v37[1] )
              {
                i += 12;
                break;
              }
              if ( *(_DWORD *)((char *)v37 + v38 + 8) != v37[2] )
              {
                i += 16;
                break;
              }
              if ( *(_DWORD *)((char *)v37 + v38 + 12) != v37[3] )
              {
                i += 20;
                break;
              }
              if ( *(_DWORD *)((char *)v37 + v38 + 16) != v37[4] )
              {
                i += 24;
                break;
              }
              if ( *(_DWORD *)((char *)v37 + v38 + 20) != v37[5] )
              {
                i += 28;
                break;
              }
              v36 += 8;
              v37 += 8;
            }
            v47 = i;
            for ( j = &v8[i]; (unsigned __int64)j < v7 && *j == v20[v47]; j = &v8[i] )
              v47 = ++i;
            goto LABEL_43;
          }
        }
        i = 3;
LABEL_44:
        v40 = v15;
        v41 = 0;
        v42 = v67;
        do
        {
          v43 = &v8[-*v40];
          if ( *v43 == *v8 && v43[1] == *v74 && v43[2] == v8[2] && v43 != v8 )
          {
            v44 = 3LL;
            v45 = v8 + 3;
            v46 = 3;
            while ( (unsigned __int64)v45 < a3 && *v45 == v43[v44] )
            {
              v44 = ++v46;
              v45 = &v8[v46];
            }
            if ( v46 < i )
            {
              v22 = v77;
            }
            else
            {
              v22 = 2;
              v20 = &v8[-*v40];
              v77 = 2;
              v42 = v41;
              i = v46;
            }
          }
          ++v41;
          ++v40;
        }
        while ( v41 < 4 );
        v49 = v42;
        v50 = i;
        v67 = v42;
        if ( i < v70 )
        {
          v8 = v73;
          v49 = v16;
          v22 = v68;
        }
        v51 = v8;
        if ( i < v70 )
          v20 = v72;
        v52 = v22;
        if ( i < v70 )
          v50 = v70;
        v53 = (int)v20;
        v14 = v71;
        v73 = v8;
        v8 = v74;
        v16 = v49;
        v68 = v22;
        v6 = a1;
        v72 = v20;
        v70 = v50;
        v15 = (unsigned int *)(a1 + 8);
        if ( v74 - v17 > 2 )
          break;
        v7 = a3;
      }
      v54 = v69;
      v67 = v49;
      while ( v17 < v51 )
      {
        v55 = v54;
        *v54++ = *v17;
        ++*(_DWORD *)(a1 + 4LL * *v55 + 28);
        ++v17;
      }
      v56 = 0;
      v57 = v54;
      if ( v52 )
      {
        if ( v52 == 1 )
        {
          _BitScanReverse((unsigned int *)&v56, (_DWORD)v51 - v53);
          *v54 = 16 * (v56 + 20);
          *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 12);
          *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 8);
          *(_DWORD *)(a1 + 8) = (_DWORD)v51 - v53;
        }
        else if ( v52 == 2 )
        {
          *v54 = 16 * (v49 + 16);
          v58 = *(_DWORD *)(a1 + 4LL * v49 + 8);
          if ( v49 )
          {
            if ( v49 >= 3 )
            {
              *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 16);
              goto LABEL_88;
            }
            if ( v49 >= 2 )
LABEL_88:
              *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 12);
            *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 8);
            *v15 = v58;
          }
        }
        v59 = *v54;
        v60 = v50 - 3;
        if ( v50 - 3 < 0xF )
        {
          *v54 = v60 + v59;
          v13 = v54 + 1;
          v69 = v13;
        }
        else
        {
          v61 = v54 + 1;
          *v54 = v59 + 15;
          v13 = (_DWORD *)((char *)v54 + 3);
          v69 = v13;
          if ( v60 <= 0xF6 )
          {
            v63 = v50 - 18;
            *v61 = v50 - 18;
LABEL_96:
            v69 = v13;
          }
          else
          {
            _BitScanReverse((unsigned int *)&v62, v50 - 249);
            v63 = v62 - 24;
            *v61 = v62 - 24;
            if ( v50 - 249 > 1 )
            {
              *(_DWORD *)(a1 + 24) += v62;
              *v13 = v50 - 249 - (1 << v62);
              v13 = v61 + 5;
              v63 = *v61;
              goto LABEL_96;
            }
          }
          ++*(_DWORD *)(a1 + 4LL * v63 + 2844);
        }
        ++*(_DWORD *)(a1 + 4LL * *v57 + 28);
        if ( v68 == 1 && v56 )
        {
          *(_DWORD *)(a1 + 24) += v56;
          *v13++ = (_DWORD)v51 - (1 << v56) - v53;
          v69 = v13;
        }
        v64 = v50;
      }
      else
      {
        *v54 = *v51;
        v13 = v54 + 1;
        v69 = v13;
        ++*(_DWORD *)(a1 + 4LL * *v57 + 28);
        v64 = 1LL;
      }
      v12 = a5 - 15;
      v8 = &v51[v64];
      v7 = a3;
      if ( (unsigned __int64)v8 >= v75 )
      {
LABEL_105:
        v9 = v79;
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
      v65 = (unsigned __int16 *)v13;
      *(_WORD *)v13 = *v8++;
      v13 = (_DWORD *)((char *)v13 + 2);
      ++*(_DWORD *)(v6 + 4LL * *v65 + 28);
    }
    while ( (unsigned __int64)v8 < v7 );
    v9 = v79;
  }
  *a6 = (_DWORD)v13 - v9;
  return 0LL;
}
