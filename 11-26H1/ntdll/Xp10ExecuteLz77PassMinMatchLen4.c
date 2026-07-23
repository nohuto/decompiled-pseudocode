/*
 * XREFs of Xp10ExecuteLz77PassMinMatchLen4 @ 0x1801524A0
 * Callers:
 *     Xp10CompressBuffer @ 0x1801519AC (Xp10CompressBuffer.c)
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
  __int64 v18; // rdi
  unsigned __int8 *v19; // r11
  int v20; // eax
  int v21; // ebx
  unsigned __int8 *v22; // rcx
  int v23; // edx
  int v24; // ebx
  int v25; // edi
  unsigned __int8 *v26; // rcx
  int v27; // edx
  _DWORD *v28; // rbx
  _DWORD *v29; // rdx
  signed __int64 v30; // rdi
  unsigned int i; // ecx
  unsigned int *v32; // rbp
  unsigned int v33; // esi
  unsigned int v34; // r13d
  unsigned __int8 *v35; // rdx
  unsigned __int8 *v36; // rbx
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int8 *j; // rdx
  unsigned int v41; // eax
  unsigned int v42; // esi
  unsigned __int8 *v43; // rbp
  unsigned __int8 *v44; // r13
  int v45; // edx
  int v46; // r14d
  _WORD *v47; // r9
  unsigned __int16 *v48; // rcx
  int v49; // r11d
  unsigned __int16 *v50; // rbx
  unsigned int v51; // ecx
  unsigned __int16 v52; // ax
  unsigned int v53; // edi
  _BYTE *v54; // r8
  int v55; // ecx
  unsigned __int8 v56; // al
  __int64 v57; // rax
  unsigned __int16 *v58; // rcx
  unsigned int v60; // [rsp+0h] [rbp-98h]
  int v61; // [rsp+4h] [rbp-94h]
  _WORD *v62; // [rsp+8h] [rbp-90h]
  unsigned int v63; // [rsp+10h] [rbp-88h]
  unsigned __int8 *v64; // [rsp+18h] [rbp-80h]
  unsigned __int8 *v65; // [rsp+20h] [rbp-78h]
  unsigned __int8 *v66; // [rsp+28h] [rbp-70h]
  unsigned __int8 *v67; // [rsp+30h] [rbp-68h]
  unsigned __int64 v68; // [rsp+38h] [rbp-60h]
  int v70; // [rsp+A8h] [rbp+10h]
  int v72; // [rsp+B8h] [rbp+20h]

  v72 = (int)a4;
  v6 = a1;
  v60 = 0;
  v7 = a3;
  v8 = a2 + 1;
  v9 = (int)a4;
  v10 = 1 << **(_WORD **)a1;
  *(_DWORD *)(a1 + 24) = 0;
  memset64((void *)(a1 + 5664), (unsigned __int64)a2, 0xEF2uLL);
  v63 = v10;
  memset64((void *)(a1 + 36272), (unsigned __int64)a2, 0x12EEuLL);
  v11 = *a2;
  *a4 = v11;
  v12 = a5 - 15;
  v13 = a4 + 1;
  ++*(_DWORD *)(v6 + 4 * v11 + 28);
  v62 = v13;
  v68 = v7 - 40;
  if ( (unsigned __int64)(a2 + 1) < v7 - 40 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v13 >= v12 )
        goto LABEL_96;
      v61 = 0;
      v14 = 0;
      v64 = v8;
      v15 = 0;
      v67 = v8;
      v65 = v8;
      v16 = (unsigned int *)(v6 + 8);
      while ( 1 )
      {
        v17 = v8 + 1;
        v66 = v8 + 1;
        v18 = *v8 + 2 * v8[2] + 8 * v8[1] + 4 * (unsigned int)v8[3];
        v19 = *(unsigned __int8 **)(v6 + 8 * v18 + 5664);
        *(_QWORD *)(v6 + 8 * v18 + 5664) = v8;
        if ( *v19 != *v8
          || v19[1] != *v17
          || v19[2] != v8[2]
          || v19[3] != v8[3]
          || (int)v8 - (int)v19 >= v10
          || v8 == v19 )
        {
          v21 = 0;
          v70 = 0;
          i = 1;
          goto LABEL_39;
        }
        v20 = v8[4];
        v21 = 1;
        v70 = 1;
        if ( v19[4] == (_BYTE)v20 )
          goto LABEL_17;
        v22 = *(unsigned __int8 **)(v6 + 8LL * (unsigned int)(v18 + v20) + 36272);
        *(_QWORD *)(v6 + 8LL * ((unsigned int)v18 + v19[4]) + 36272) = v19;
        if ( *(_DWORD *)v22 == *(_DWORD *)v8 )
        {
          v23 = v8[4];
          if ( v22[4] == (_BYTE)v23 && (int)v8 - (int)v22 < v10 && v8 != v22 )
          {
            v19 = v22;
            *(_QWORD *)(v6 + 8LL * (unsigned int)(v18 + v23) + 36272) = v8;
LABEL_17:
            v24 = v19[5];
            if ( v8[5] == (_BYTE)v24 )
            {
LABEL_24:
              v28 = v8 + 6;
              v29 = v19 + 14;
              v30 = v8 - v19;
              for ( i = 6; (unsigned __int64)v28 < v7 - 40 && i < v10 - 32 && *v28 == *(v29 - 2); i += 32 )
              {
                if ( *(_DWORD *)((char *)v29 + v30 - 4) != *(v29 - 1) )
                {
                  i += 4;
                  break;
                }
                if ( *(_DWORD *)((char *)v29 + v30) != *v29 )
                {
                  i += 8;
                  break;
                }
                if ( *(_DWORD *)((char *)v29 + v30 + 4) != v29[1] )
                {
                  i += 12;
                  break;
                }
                if ( *(_DWORD *)((char *)v29 + v30 + 8) != v29[2] )
                {
                  i += 16;
                  break;
                }
                if ( *(_DWORD *)((char *)v29 + v30 + 12) != v29[3] )
                {
                  i += 20;
                  break;
                }
                if ( *(_DWORD *)((char *)v29 + v30 + 16) != v29[4] )
                {
                  i += 24;
                  break;
                }
                if ( *(_DWORD *)((char *)v29 + v30 + 20) != v29[5] )
                {
                  i += 28;
                  break;
                }
                v28 += 8;
                v29 += 8;
              }
              v39 = i;
              for ( j = &v8[i]; (unsigned __int64)j < v7 && *j == v19[v39]; j = &v8[i] )
                v39 = ++i;
            }
            else
            {
              v25 = 2
                  * ((v8[2] ^ (unsigned __int8)__ROL1__(*v8, v8[4]))
                   + 4
                   * ((unsigned __int8)__ROR1__(*v17 ^ __ROL1__(v8[3], 3), 1)
                    + (unsigned __int8)__ROL1__(v8[4] ^ (__ROR1__(*v8, 1) + 69), 3)));
              v26 = *(unsigned __int8 **)(v6 + 8LL * (v25 + (unsigned int)v8[5]) + 36272);
              *(_QWORD *)(v6 + 8LL * (unsigned int)(v25 + v24) + 36272) = v19;
              if ( *(_DWORD *)v8 == *(_DWORD *)v26 && v8[4] == v26[4] )
              {
                v27 = v8[5];
                if ( (_BYTE)v27 == v26[5] && (int)v8 - (int)v26 < v10 && v8 != v26 )
                {
                  v19 = v26;
                  *(_QWORD *)(v6 + 8LL * (unsigned int)(v25 + v27) + 36272) = v8;
                  goto LABEL_24;
                }
              }
              i = 5;
            }
            v21 = 1;
            goto LABEL_39;
          }
        }
        i = 4;
LABEL_39:
        v32 = v16;
        v33 = 0;
        v34 = v60;
        do
        {
          v35 = &v8[-*v32];
          if ( *v35 == *v8 && v35[1] == *v66 && v35[2] == v8[2] && v35[3] == v8[3] && v35 != v8 )
          {
            v36 = v8 + 4;
            LODWORD(v37) = 4;
            if ( (unsigned __int64)(v8 + 4) < a3 )
            {
              v38 = 4LL;
              do
              {
                if ( *v36 != v35[v38] )
                  break;
                v37 = (unsigned int)(v37 + 1);
                v38 = (unsigned int)v37;
                v36 = &v8[v37];
              }
              while ( (unsigned __int64)&v8[v37] < a3 );
            }
            if ( (unsigned int)v37 < i )
            {
              v21 = v70;
            }
            else
            {
              v21 = 2;
              v19 = &v8[-*v32];
              v70 = 2;
              v34 = v33;
              i = v37;
            }
          }
          ++v33;
          ++v32;
        }
        while ( v33 < 4 );
        v60 = v34;
        v41 = v34;
        v42 = i;
        if ( i < v14 )
        {
          v8 = v65;
          v41 = v15;
          v21 = v61;
          v42 = v14;
          v19 = v64;
        }
        v43 = v8;
        v44 = v67;
        v45 = v21;
        v65 = v8;
        v46 = (int)v19;
        v8 = v66;
        v15 = v41;
        v61 = v21;
        v64 = v19;
        v6 = a1;
        v14 = v42;
        v16 = (unsigned int *)(a1 + 8);
        if ( v66 - v67 > 2 )
          break;
        v7 = a3;
        v10 = v63;
      }
      v47 = v62;
      v60 = v41;
      while ( v44 < v43 )
      {
        v48 = v47;
        *v47++ = *v44;
        ++*(_DWORD *)(a1 + 4LL * *v48 + 28);
        ++v44;
      }
      v49 = 0;
      v50 = v47;
      if ( v45 )
      {
        if ( v45 == 1 )
        {
          _BitScanReverse((unsigned int *)&v49, (_DWORD)v43 - v46);
          *v47 = 16 * (v49 + 20);
          *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 12);
          *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 8);
          *(_DWORD *)(a1 + 8) = (_DWORD)v43 - v46;
        }
        else if ( v45 == 2 )
        {
          *v47 = 16 * (v41 + 16);
          v51 = *(_DWORD *)(a1 + 4LL * v41 + 8);
          if ( v41 )
          {
            if ( v41 >= 3 )
            {
              *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 16);
              goto LABEL_79;
            }
            if ( v41 >= 2 )
LABEL_79:
              *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 12);
            *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 8);
            *v16 = v51;
          }
        }
        v52 = *v47;
        v53 = v42 - 4;
        if ( v42 - 4 < 0xF )
        {
          *v47 = v52 + v53;
          v13 = v47 + 1;
          v62 = v13;
        }
        else
        {
          v54 = v47 + 1;
          *v47 = v52 + 15;
          v13 = (_DWORD *)((char *)v47 + 3);
          v62 = v13;
          if ( v53 <= 0xF6 )
          {
            v56 = v42 - 19;
            *v54 = v42 - 19;
LABEL_87:
            v62 = v13;
          }
          else
          {
            _BitScanReverse((unsigned int *)&v55, v42 - 250);
            v56 = v55 - 24;
            *v54 = v55 - 24;
            if ( v42 - 250 > 1 )
            {
              *(_DWORD *)(a1 + 24) += v55;
              *v13 = v42 - 250 - (1 << v55);
              v13 = v54 + 5;
              v56 = *v54;
              goto LABEL_87;
            }
          }
          ++*(_DWORD *)(a1 + 4LL * v56 + 2844);
        }
        ++*(_DWORD *)(a1 + 4LL * *v50 + 28);
        if ( v45 == 1 && v49 )
        {
          *(_DWORD *)(a1 + 24) += v49;
          *v13++ = (_DWORD)v43 - (1 << v49) - v46;
          v62 = v13;
        }
        v57 = v42;
      }
      else
      {
        *v47 = *v43;
        v13 = v47 + 1;
        v62 = v13;
        ++*(_DWORD *)(a1 + 4LL * *v50 + 28);
        v57 = 1LL;
      }
      v7 = a3;
      v8 = &v43[v57];
      v10 = v63;
      v12 = a5 - 15;
      if ( (unsigned __int64)v8 >= v68 )
      {
LABEL_96:
        v9 = v72;
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
      v58 = (unsigned __int16 *)v13;
      *(_WORD *)v13 = *v8++;
      v13 = (_DWORD *)((char *)v13 + 2);
      ++*(_DWORD *)(v6 + 4LL * *v58 + 28);
    }
    while ( (unsigned __int64)v8 < v7 );
    v9 = v72;
  }
  *a6 = (_DWORD)v13 - v9;
  return 0LL;
}
