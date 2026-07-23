/*
 * XREFs of Xp10ExecuteLz77PassMinMatchLen3 @ 0x18010E964
 * Callers:
 *     Xp10CompressBuffer @ 0x1801519AC (Xp10CompressBuffer.c)
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
  unsigned __int64 v7; // rsi
  unsigned __int8 *v8; // r8
  int v9; // r11d
  unsigned int v10; // ebp
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  _DWORD *v13; // r9
  unsigned int v14; // r9d
  unsigned int v15; // r12d
  unsigned int *v16; // r15
  _BYTE *v17; // r14
  __int64 v18; // rdx
  unsigned __int8 *v19; // r11
  int v20; // eax
  int v21; // ebx
  unsigned __int8 *v22; // rcx
  int v23; // edi
  int v24; // edi
  int v25; // ebx
  unsigned __int8 *v26; // rcx
  int v27; // edx
  int v28; // ebx
  int v29; // edi
  unsigned __int8 *v30; // rcx
  int v31; // edx
  _DWORD *v32; // rbx
  _DWORD *v33; // rdx
  signed __int64 v34; // rdi
  unsigned int i; // ecx
  unsigned int *v36; // rbp
  unsigned int v37; // esi
  unsigned int v38; // r13d
  unsigned __int8 *v39; // rdx
  __int64 v40; // rax
  unsigned __int8 *v41; // rbx
  unsigned int v42; // edi
  __int64 v43; // rax
  unsigned __int8 *j; // rdx
  unsigned int v45; // eax
  unsigned int v46; // esi
  unsigned __int8 *v47; // rbp
  unsigned __int8 *v48; // r13
  int v49; // edx
  int v50; // edi
  _WORD *v51; // r9
  unsigned __int16 *v52; // rcx
  int v53; // r11d
  unsigned __int16 *v54; // rbx
  unsigned int v55; // ecx
  unsigned __int16 v56; // ax
  unsigned int v57; // edi
  _BYTE *v58; // r8
  int v59; // ecx
  unsigned __int8 v60; // al
  __int64 v61; // rax
  unsigned __int16 *v62; // rcx
  unsigned int v64; // [rsp+0h] [rbp-98h]
  int v65; // [rsp+4h] [rbp-94h]
  _WORD *v66; // [rsp+8h] [rbp-90h]
  unsigned int v67; // [rsp+10h] [rbp-88h]
  unsigned __int8 *v68; // [rsp+18h] [rbp-80h]
  unsigned __int8 *v69; // [rsp+20h] [rbp-78h]
  unsigned __int8 *v70; // [rsp+28h] [rbp-70h]
  unsigned __int8 *v71; // [rsp+30h] [rbp-68h]
  unsigned __int64 v72; // [rsp+38h] [rbp-60h]
  int v74; // [rsp+A8h] [rbp+10h]
  int v76; // [rsp+B8h] [rbp+20h]

  v76 = (int)a4;
  v6 = a1;
  v64 = 0;
  v7 = a3;
  v8 = a2 + 1;
  v9 = (int)a4;
  v10 = 1 << **(_WORD **)a1;
  *(_DWORD *)(a1 + 24) = 0;
  memset64((void *)(a1 + 5664), (unsigned __int64)a2, 0xEF2uLL);
  v67 = v10;
  memset64((void *)(a1 + 36272), (unsigned __int64)a2, 0x12EEuLL);
  v11 = *a2;
  *a4 = v11;
  v12 = a5 - 15;
  v13 = a4 + 1;
  ++*(_DWORD *)(v6 + 4 * v11 + 28);
  v66 = v13;
  v72 = v7 - 40;
  if ( (unsigned __int64)(a2 + 1) < v7 - 40 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v13 >= v12 )
        goto LABEL_101;
      v14 = 0;
      v68 = v8;
      v15 = 0;
      v65 = 0;
      v71 = v8;
      v16 = (unsigned int *)(v6 + 8);
      v69 = v8;
      while ( 1 )
      {
        v17 = v8 + 1;
        v70 = v8 + 1;
        v18 = *v8 + 2 * v8[2] + 8 * (unsigned int)v8[1];
        v19 = *(unsigned __int8 **)(v6 + 8 * v18 + 5664);
        *(_QWORD *)(v6 + 8 * v18 + 5664) = v8;
        if ( *v19 != *v8 || v19[1] != *v17 || v19[2] != v8[2] || (int)v8 - (int)v19 >= v10 || v8 == v19 )
        {
          v21 = 0;
          v74 = 0;
          i = 1;
          goto LABEL_44;
        }
        v20 = v8[3];
        v21 = 1;
        v74 = 1;
        if ( v19[3] == (_BYTE)v20 )
          goto LABEL_16;
        v22 = *(unsigned __int8 **)(v6 + 8LL * (unsigned int)(v18 + v20) + 36272);
        *(_QWORD *)(v6 + 8LL * ((unsigned int)v18 + v19[3]) + 36272) = v19;
        if ( *(_DWORD *)v22 == *(_DWORD *)v8 )
        {
          v23 = v8[3];
          if ( v22[3] == (_BYTE)v23 && (int)v8 - (int)v22 < v10 && v8 != v22 )
          {
            v19 = v22;
            *(_QWORD *)(v6 + 8LL * (unsigned int)(v18 + v23) + 36272) = v8;
LABEL_16:
            v24 = v8[4];
            if ( v19[4] != (_BYTE)v24 )
            {
              v25 = 2
                  * ((unsigned __int8)__ROR1__(*v17 ^ __ROL1__(v8[3] + *v8, 3), 1)
                   + 4 * (unsigned __int8)__ROL1__(*v8 ^ __ROR1__(v8[2] + *v17 + 97, 1), 3));
              v26 = *(unsigned __int8 **)(v6 + 8LL * (unsigned int)(v25 + v24) + 36272);
              *(_QWORD *)(v6 + 8LL * (v25 + (unsigned int)v19[4]) + 36272) = v19;
              if ( *(_DWORD *)v8 == *(_DWORD *)v26 )
              {
                v27 = v8[4];
                if ( (_BYTE)v27 == v26[4] && (int)v8 - (int)v26 < v10 && v8 != v26 )
                {
                  v19 = v26;
                  *(_QWORD *)(v6 + 8LL * (unsigned int)(v25 + v27) + 36272) = v8;
                  goto LABEL_22;
                }
              }
              i = 4;
LABEL_43:
              v21 = 1;
              goto LABEL_44;
            }
LABEL_22:
            v28 = v19[5];
            if ( v8[5] != (_BYTE)v28 )
            {
              v29 = 2
                  * ((v8[2] ^ (unsigned __int8)__ROL1__(*v8, v8[4]))
                   + 4
                   * ((unsigned __int8)__ROR1__(*v17 ^ __ROL1__(v8[3], 3), 1)
                    + (unsigned __int8)__ROL1__(v8[4] ^ (__ROR1__(*v8, 1) + 69), 3)));
              v30 = *(unsigned __int8 **)(v6 + 8LL * (v29 + (unsigned int)v8[5]) + 36272);
              *(_QWORD *)(v6 + 8LL * (unsigned int)(v29 + v28) + 36272) = v19;
              if ( *(_DWORD *)v8 != *(_DWORD *)v30
                || v8[4] != v30[4]
                || (v31 = v8[5], (_BYTE)v31 != v30[5])
                || (int)v8 - (int)v30 >= v10
                || v8 == v30 )
              {
                i = 5;
                goto LABEL_43;
              }
              v19 = v30;
              *(_QWORD *)(v6 + 8LL * (unsigned int)(v29 + v31) + 36272) = v8;
            }
            v32 = v8 + 6;
            v33 = v19 + 14;
            v34 = v8 - v19;
            for ( i = 6; (unsigned __int64)v32 < v7 - 40 && i < v10 - 32 && *v32 == *(v33 - 2); i += 32 )
            {
              if ( *(_DWORD *)((char *)v33 + v34 - 4) != *(v33 - 1) )
              {
                i += 4;
                break;
              }
              if ( *(_DWORD *)((char *)v33 + v34) != *v33 )
              {
                i += 8;
                break;
              }
              if ( *(_DWORD *)((char *)v33 + v34 + 4) != v33[1] )
              {
                i += 12;
                break;
              }
              if ( *(_DWORD *)((char *)v33 + v34 + 8) != v33[2] )
              {
                i += 16;
                break;
              }
              if ( *(_DWORD *)((char *)v33 + v34 + 12) != v33[3] )
              {
                i += 20;
                break;
              }
              if ( *(_DWORD *)((char *)v33 + v34 + 16) != v33[4] )
              {
                i += 24;
                break;
              }
              if ( *(_DWORD *)((char *)v33 + v34 + 20) != v33[5] )
              {
                i += 28;
                break;
              }
              v32 += 8;
              v33 += 8;
            }
            v43 = i;
            for ( j = &v8[i]; (unsigned __int64)j < v7 && *j == v19[v43]; j = &v8[i] )
              v43 = ++i;
            goto LABEL_43;
          }
        }
        i = 3;
LABEL_44:
        v36 = v16;
        v37 = 0;
        v38 = v64;
        do
        {
          v39 = &v8[-*v36];
          if ( *v39 == *v8 && v39[1] == *v70 && v39[2] == v8[2] && v39 != v8 )
          {
            v40 = 3LL;
            v41 = v8 + 3;
            v42 = 3;
            while ( (unsigned __int64)v41 < a3 && *v41 == v39[v40] )
            {
              v40 = ++v42;
              v41 = &v8[v42];
            }
            if ( v42 < i )
            {
              v21 = v74;
            }
            else
            {
              v21 = 2;
              v19 = &v8[-*v36];
              v74 = 2;
              v38 = v37;
              i = v42;
            }
          }
          ++v37;
          ++v36;
        }
        while ( v37 < 4 );
        v64 = v38;
        v45 = v38;
        v46 = i;
        if ( i < v14 )
        {
          v8 = v69;
          v45 = v15;
          v21 = v65;
          v46 = v14;
          v19 = v68;
        }
        v47 = v8;
        v48 = v71;
        v49 = v21;
        v69 = v8;
        v50 = (int)v19;
        v8 = v70;
        v15 = v45;
        v65 = v21;
        v68 = v19;
        v6 = a1;
        v14 = v46;
        v16 = (unsigned int *)(a1 + 8);
        if ( v70 - v71 > 2 )
          break;
        v7 = a3;
        v10 = v67;
      }
      v51 = v66;
      v64 = v45;
      while ( v48 < v47 )
      {
        v52 = v51;
        *v51++ = *v48;
        ++*(_DWORD *)(a1 + 4LL * *v52 + 28);
        ++v48;
      }
      v53 = 0;
      v54 = v51;
      if ( v49 )
      {
        if ( v49 == 1 )
        {
          _BitScanReverse((unsigned int *)&v53, (_DWORD)v47 - v50);
          *v51 = 16 * (v53 + 20);
          *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 12);
          *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 8);
          *(_DWORD *)(a1 + 8) = (_DWORD)v47 - v50;
        }
        else if ( v49 == 2 )
        {
          *v51 = 16 * (v45 + 16);
          v55 = *(_DWORD *)(a1 + 4LL * v45 + 8);
          if ( v45 )
          {
            if ( v45 >= 3 )
            {
              *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 16);
              goto LABEL_84;
            }
            if ( v45 >= 2 )
LABEL_84:
              *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 12);
            *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 8);
            *v16 = v55;
          }
        }
        v56 = *v51;
        v57 = v46 - 3;
        if ( v46 - 3 < 0xF )
        {
          *v51 = v57 + v56;
          v13 = v51 + 1;
          v66 = v13;
        }
        else
        {
          v58 = v51 + 1;
          *v51 = v56 + 15;
          v13 = (_DWORD *)((char *)v51 + 3);
          v66 = v13;
          if ( v57 <= 0xF6 )
          {
            v60 = v46 - 18;
            *v58 = v46 - 18;
LABEL_92:
            v66 = v13;
          }
          else
          {
            _BitScanReverse((unsigned int *)&v59, v46 - 249);
            v60 = v59 - 24;
            *v58 = v59 - 24;
            if ( v46 - 249 > 1 )
            {
              *(_DWORD *)(a1 + 24) += v59;
              *v13 = v46 - 249 - (1 << v59);
              v13 = v58 + 5;
              v60 = *v58;
              goto LABEL_92;
            }
          }
          ++*(_DWORD *)(a1 + 4LL * v60 + 2844);
        }
        ++*(_DWORD *)(a1 + 4LL * *v54 + 28);
        if ( v49 == 1 && v53 )
        {
          *(_DWORD *)(a1 + 24) += v53;
          *v13++ = (_DWORD)v47 - (1 << v53) - (_DWORD)v68;
          v66 = v13;
        }
        v61 = v46;
      }
      else
      {
        *v51 = *v47;
        v13 = v51 + 1;
        v66 = v13;
        ++*(_DWORD *)(a1 + 4LL * *v54 + 28);
        v61 = 1LL;
      }
      v7 = a3;
      v8 = &v47[v61];
      v10 = v67;
      v12 = a5 - 15;
      if ( (unsigned __int64)v8 >= v72 )
      {
LABEL_101:
        v9 = v76;
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
      v62 = (unsigned __int16 *)v13;
      *(_WORD *)v13 = *v8++;
      v13 = (_DWORD *)((char *)v13 + 2);
      ++*(_DWORD *)(v6 + 4LL * *v62 + 28);
    }
    while ( (unsigned __int64)v8 < v7 );
    v9 = v76;
  }
  *a6 = (_DWORD)v13 - v9;
  return 0LL;
}
