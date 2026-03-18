/*
 * XREFs of ?bSrcCopySRLE4D4@@YAHPEAUBLTINFO@@@Z @ 0x1402320E0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall bSrcCopySRLE4D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // rsi
  __int64 v2; // r9
  char *v3; // rbp
  __int64 v4; // r15
  unsigned int v5; // r10d
  int v6; // r12d
  int v7; // r8d
  int v8; // edx
  int v9; // r13d
  int v10; // ebx
  __int64 v11; // rax
  int v12; // ecx
  __int64 result; // rax
  unsigned int v14; // r11d
  unsigned int v15; // eax
  char v16; // di
  unsigned int v17; // ecx
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // r9
  unsigned int v21; // r8d
  unsigned __int8 *v22; // rbp
  unsigned __int64 v23; // rdx
  unsigned int v24; // r10d
  BOOL v25; // r11d
  unsigned __int64 v26; // rax
  char v27; // al
  char v28; // cl
  unsigned int v29; // r8d
  int v30; // eax
  unsigned __int64 v31; // rcx
  char v32; // r10
  __int64 v33; // r9
  unsigned int v34; // ebx
  unsigned __int64 v35; // rcx
  char v36; // dl
  unsigned __int64 v37; // rcx
  unsigned int i; // edx
  unsigned int v39; // ecx
  unsigned __int64 v40; // rbp
  unsigned int v41; // edx
  int v42; // eax
  unsigned __int8 *v43; // rbp
  int v44; // ecx
  unsigned int v45; // eax
  unsigned int v46; // ecx
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rcx
  char v50; // dl
  char v51; // r11
  char v52; // al
  __int64 v53; // rax
  unsigned int v54; // ebx
  size_t v55; // r8
  unsigned int v56; // [rsp+20h] [rbp-88h]
  int v57; // [rsp+24h] [rbp-84h]
  unsigned int v58; // [rsp+28h] [rbp-80h]
  unsigned int v59; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v60; // [rsp+2Ch] [rbp-7Ch]
  __int64 v61; // [rsp+38h] [rbp-70h]
  int v62; // [rsp+40h] [rbp-68h]
  int v63; // [rsp+44h] [rbp-64h]
  int v64; // [rsp+48h] [rbp-60h]
  int v65; // [rsp+4Ch] [rbp-5Ch]
  __int64 v66; // [rsp+50h] [rbp-58h]
  int v68; // [rsp+B8h] [rbp+10h]
  char v69; // [rsp+B8h] [rbp+10h]
  int v70; // [rsp+C0h] [rbp+18h]
  unsigned int v71; // [rsp+C8h] [rbp+20h]

  v1 = a1;
  v2 = *((int *)a1 + 11);
  v3 = (char *)*((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 30);
  v6 = *((_DWORD *)a1 + 15);
  v7 = *((_DWORD *)a1 + 25);
  v8 = *((_DWORD *)a1 + 14);
  v9 = *((_DWORD *)a1 + 24);
  v10 = *((_DWORD *)a1 + 32);
  v71 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v11 = *(_QWORD *)a1;
  v12 = *((_DWORD *)a1 + 22);
  v64 = v2;
  v70 = v12;
  v61 = *(_QWORD *)(v11 + 16);
  v62 = *((_DWORD *)v1 + 23);
  v57 = v7;
  v65 = v8;
  if ( v6 < v62 )
    return 1LL;
  v56 = (unsigned int)(v9 - 1) >> 1;
  v14 = (unsigned int)v12 >> 1;
  v15 = v10 >> 1;
  v16 = 0;
  v58 = (unsigned int)v12 >> 1;
  if ( v6 < v7 )
  {
    if ( v15 < v14 )
    {
      v17 = (unsigned int)v12 >> 1;
    }
    else
    {
      v17 = (unsigned int)(v9 - 1) >> 1;
      if ( v15 <= v17 )
        v17 = v10 >> 1;
    }
    v18 = v17;
    v12 = v70;
    v16 = *(_BYTE *)(v18 + v4);
  }
  v66 = v2;
LABEL_11:
  v19 = v71;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 += 2;
      v20 = (unsigned int)(v10 >> 1);
      v59 = v5;
      if ( v5 > v19 )
        return 0LL;
      v21 = (unsigned __int8)*v3;
      v22 = (unsigned __int8 *)(v3 + 1);
      v23 = *v22;
      v3 = (char *)(v22 + 1);
      if ( !v21 )
        break;
      if ( v6 < v57 && v10 < v9 )
      {
        if ( (int)(v21 + v10) > v12 )
        {
          if ( v10 < v12 )
          {
            LODWORD(v20) = v14;
            v48 = v12 - v10;
            v10 = v12;
            v21 -= v48;
          }
          if ( (int)(v21 + v10) <= v9 )
          {
            v63 = 0;
          }
          else
          {
            v63 = v10 + v21 - v9;
            v21 = v9 - v10;
          }
          v49 = v23 & 0xF;
          v50 = *(_BYTE *)(v61 + 4 * (v23 >> 4));
          v51 = *(_BYTE *)(v61 + 4 * v49);
          v52 = v51;
          if ( (v10 & 1) != 0 )
          {
            v53 = (unsigned int)v20;
            LODWORD(v20) = v20 + 1;
            ++v10;
            *(_BYTE *)(v53 + v4) = v16 ^ (v16 ^ v50) & 0xF;
            --v21;
            v52 = v50;
            v50 = v51;
          }
          LOBYTE(v23) = 16 * v50;
          v69 = v23;
          v16 = v23 | v52 & 0xF;
          v54 = v21 + v10;
          v55 = v21 >> 1;
          if ( (_DWORD)v55 )
          {
            LOBYTE(v23) = v23 | v52 & 0xF;
            memset_0((void *)(v4 + (unsigned int)v20), v23, v55);
            LOBYTE(v23) = v69;
            v5 = v59;
          }
          if ( (v54 & 1) != 0 )
            v16 = v23 | v16 & 0xF;
          v10 = v63 + v54;
          goto LABEL_96;
        }
        v19 = v71;
      }
      v10 += v21;
    }
    if ( (_DWORD)v23 )
    {
      if ( (_DWORD)v23 == 1 )
      {
        if ( v6 < v57 )
        {
          if ( v10 >= v12 && v10 < v9 && (v10 & 1) != 0 )
          {
            *(_BYTE *)(v20 + v4) = v16 ^ (*(_BYTE *)(v20 + v4) ^ v16) & 0xF;
          }
          else if ( (v9 & 1) != 0 && v10 >= v9 )
          {
            *(_BYTE *)(v56 + v4) = v16 ^ (*(_BYTE *)(v56 + v4) ^ v16) & 0xF;
          }
        }
        return 0LL;
      }
      if ( (_DWORD)v23 != 2 )
      {
        v24 = ((unsigned int)(v23 + 1) >> 1) + v5;
        v60 = v24;
        if ( v24 <= v71 )
        {
          v25 = (((_DWORD)v23 + 1) & 2) != 0;
          if ( v6 >= v57 || v10 >= v9 || (int)v23 + v10 <= v70 )
          {
            v10 += v23;
            v40 = (unsigned __int64)&v3[(unsigned __int64)(unsigned int)(v23 + 1) >> 1];
            goto LABEL_50;
          }
          if ( v10 < v70 )
          {
            v20 = v58;
            v26 = (unsigned int)(v70 - v10);
            LODWORD(v23) = v23 - v26;
            v10 = v70;
            v3 += v26 >> 1;
            if ( (v26 & 1) != 0 )
            {
              v27 = *v3++;
              v28 = *(_BYTE *)(v61 + 4LL * (v27 & 0xF));
              if ( (v70 & 1) != 0 )
              {
                v16 ^= (v16 ^ v28) & 0xF;
                *(_BYTE *)(v58 + v4) = v16;
                v20 = v58 + 1;
              }
              else
              {
                v16 = v16 & 0xF | (16 * v28);
              }
              v12 = v70;
              v10 = v70 + 1;
              LODWORD(v23) = v23 - 1;
              if ( !(_DWORD)v23 )
              {
                v5 = v25 + v24;
                v3 += v25;
LABEL_28:
                v14 = v58;
                goto LABEL_11;
              }
            }
          }
          if ( (int)v23 + v10 <= v9 )
          {
            v29 = 0;
          }
          else
          {
            v29 = v10 + v23 - v9;
            LODWORD(v23) = v9 - v10;
          }
          if ( (_DWORD)v23 )
          {
            v30 = v23 + v10;
            v68 = v23 + v10;
            if ( (v10 & 1) != 0 )
            {
              v31 = (unsigned __int8)*v3++;
              v32 = *(_BYTE *)(v61 + 4 * (v31 & 0xF));
              v16 ^= (*(_BYTE *)(v61 + 4 * (v31 >> 4)) ^ v16) & 0xF;
              *(_BYTE *)(v20 + v4) = v16;
              v33 = (unsigned int)(v20 + 1);
              v34 = (unsigned int)(v23 - 1) >> 1;
              if ( v34 )
              {
                do
                {
                  v35 = (unsigned __int8)*v3++;
                  v36 = 16 * v32;
                  v32 = *(_BYTE *)(v61 + 4 * (v35 & 0xF));
                  v16 = v36 | *(_BYTE *)(v61 + 4 * (v35 >> 4)) & 0xF;
                  *(_BYTE *)(v33 + v4) = v16;
                  v33 = (unsigned int)(v33 + 1);
                  --v34;
                }
                while ( v34 );
                v1 = a1;
              }
              v10 = v30;
              if ( (v30 & 1) != 0 )
              {
                v37 = v29 + 1;
                v16 = v16 & 0xF | (16 * v32);
              }
              else
              {
                v37 = v29;
              }
              v24 = v60;
              goto LABEL_47;
            }
            for ( i = (unsigned int)v23 >> 1; i; --i )
            {
              v39 = (unsigned __int8)*v3++;
              v16 = *(_BYTE *)(v61 + 4LL * (v39 & 0xF)) & 0xF | (16 * *(_BYTE *)(v61 + 4 * ((unsigned __int64)v39 >> 4)));
              *(_BYTE *)(v20 + v4) = v16;
              v20 = (unsigned int)(v20 + 1);
            }
            if ( (v30 & 1) != 0 )
            {
              v10 = v68;
              v16 = v16 & 0xF | (16 * *(_BYTE *)(v61 + 4 * ((unsigned __int64)(unsigned __int8)*v3 >> 4)));
              v40 = (unsigned __int64)&v3[((unsigned __int64)v29 >> 1) + 1];
LABEL_48:
              v10 += v29;
LABEL_50:
              v5 = v25 + v24;
              v3 = (char *)(v25 + v40);
LABEL_96:
              v12 = v70;
              goto LABEL_28;
            }
            v10 = v68;
          }
          v37 = v29 + 1;
LABEL_47:
          v40 = (unsigned __int64)&v3[v37 >> 1];
          goto LABEL_48;
        }
        return 0LL;
      }
      if ( v6 < v57 )
      {
        if ( v10 >= v12 && v10 < v9 && (v10 & 1) != 0 )
        {
          v16 ^= (*(_BYTE *)(v20 + v4) ^ v16) & 0xF;
          *(_BYTE *)(v20 + v4) = v16;
        }
        else if ( (v9 & 1) != 0 && v10 >= v9 )
        {
          v41 = (unsigned int)(v9 - 1) >> 1;
          v16 ^= (*(_BYTE *)(v56 + v4) ^ v16) & 0xF;
          *(_BYTE *)(v56 + v4) = v16;
LABEL_57:
          v5 += 2;
          if ( v5 > v71 )
            return 0LL;
          v42 = (unsigned __int8)*v3;
          v43 = (unsigned __int8 *)(v3 + 1);
          v10 += v42;
          v44 = *v43;
          v3 = (char *)(v43 + 1);
          v6 -= v44;
          v4 += v64 * v44;
          if ( v6 < v62 )
          {
            *((_DWORD *)v1 + 34) = v10;
            goto LABEL_100;
          }
          v12 = v70;
          v45 = v10 >> 1;
          if ( v6 < v57 )
          {
            if ( v45 < v14 )
            {
              v46 = v14;
            }
            else
            {
              v46 = v41;
              if ( v45 <= v41 )
                v46 = v10 >> 1;
            }
            v47 = v46;
            goto LABEL_80;
          }
          goto LABEL_11;
        }
      }
      v41 = (unsigned int)(v9 - 1) >> 1;
      goto LABEL_57;
    }
    if ( v6 < v57 )
    {
      if ( v10 >= v12 && v10 < v9 && (v10 & 1) != 0 )
      {
        v16 ^= (*(_BYTE *)(v20 + v4) ^ v16) & 0xF;
        *(_BYTE *)(v20 + v4) = v16;
      }
      else if ( (v9 & 1) != 0 && v10 >= v9 )
      {
        v16 ^= (*(_BYTE *)(v56 + v4) ^ v16) & 0xF;
        *(_BYTE *)(v56 + v4) = v16;
      }
    }
    v4 += v66;
    --v6;
    v10 = v65;
    if ( v6 < v62 )
      break;
    v12 = v70;
    v19 = v71;
    if ( v6 < v57 )
    {
      v47 = v14;
LABEL_80:
      v16 = *(_BYTE *)(v47 + v4);
      v12 = v70;
      goto LABEL_11;
    }
  }
  *((_DWORD *)v1 + 34) = v65;
LABEL_100:
  *((_QWORD *)v1 + 14) = v4;
  result = 1LL;
  *((_QWORD *)v1 + 13) = v3;
  *((_DWORD *)v1 + 31) = v5;
  *((_DWORD *)v1 + 33) = v6;
  return result;
}
