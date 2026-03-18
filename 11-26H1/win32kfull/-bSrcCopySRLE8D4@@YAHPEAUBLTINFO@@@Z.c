/*
 * XREFs of ?bSrcCopySRLE8D4@@YAHPEAUBLTINFO@@@Z @ 0x14033C380
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall bSrcCopySRLE8D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // rsi
  __int64 v2; // r9
  unsigned __int8 *v3; // r15
  __int64 v4; // rbp
  unsigned int v5; // r10d
  int v6; // r12d
  int v7; // edx
  int v8; // r8d
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
  unsigned __int8 *v22; // r15
  __int64 v23; // rdx
  unsigned int v24; // r10d
  unsigned int v25; // r11d
  unsigned int v26; // eax
  __int64 v27; // rax
  int v28; // ebx
  unsigned int v29; // edx
  __int64 v30; // rax
  unsigned __int8 *v31; // r15
  char v32; // cl
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int8 *v35; // r15
  __int64 v36; // rax
  int v37; // eax
  unsigned __int8 *v38; // r15
  int v39; // ecx
  unsigned int v40; // eax
  unsigned int v41; // ecx
  char v42; // al
  unsigned int v43; // ebx
  size_t v44; // r8
  int v45; // [rsp+20h] [rbp-88h]
  int v46; // [rsp+28h] [rbp-80h]
  unsigned int v47; // [rsp+2Ch] [rbp-7Ch]
  int v48; // [rsp+34h] [rbp-74h]
  __int64 v49; // [rsp+38h] [rbp-70h]
  int v50; // [rsp+40h] [rbp-68h]
  int v51; // [rsp+44h] [rbp-64h]
  unsigned int v52; // [rsp+48h] [rbp-60h]
  __int64 v53; // [rsp+50h] [rbp-58h]
  char v55; // [rsp+B8h] [rbp+10h]
  unsigned int v56; // [rsp+C0h] [rbp+18h]
  int v57; // [rsp+C8h] [rbp+20h]

  v1 = a1;
  v2 = *((int *)a1 + 11);
  v3 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 30);
  v6 = *((_DWORD *)a1 + 15);
  v7 = *((_DWORD *)a1 + 25);
  v8 = *((_DWORD *)a1 + 14);
  v9 = *((_DWORD *)a1 + 24);
  v10 = *((_DWORD *)a1 + 32);
  v56 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v11 = *(_QWORD *)a1;
  v12 = *((_DWORD *)a1 + 22);
  v50 = v2;
  v57 = v12;
  v49 = *(_QWORD *)(v11 + 16);
  v46 = *((_DWORD *)v1 + 23);
  v45 = v7;
  v51 = v8;
  if ( v6 < v46 )
    return 1LL;
  v14 = (unsigned int)(v9 - 1) >> 1;
  v15 = v10 >> 1;
  v16 = 0;
  v47 = (unsigned int)v12 >> 1;
  if ( v6 < v7 )
  {
    if ( v15 < (unsigned int)v12 >> 1 )
    {
      v17 = (unsigned int)v12 >> 1;
    }
    else
    {
      v17 = (unsigned int)(v9 - 1) >> 1;
      if ( v15 <= v14 )
        v17 = v10 >> 1;
    }
    v18 = v17;
    v12 = v57;
    v16 = *(_BYTE *)(v18 + v4);
  }
  v53 = v2;
LABEL_11:
  v19 = v56;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 += 2;
      v20 = (unsigned int)(v10 >> 1);
      v52 = v5;
      if ( v5 > v19 )
        return 0LL;
      v21 = *v3;
      v22 = v3 + 1;
      v23 = *v22;
      v3 = v22 + 1;
      if ( !v21 )
        break;
      if ( v6 < v45 && v10 < v9 )
      {
        if ( (int)(v21 + v10) > v12 )
        {
          if ( v10 < v12 )
          {
            v21 += v10 - v12;
            v10 = v12;
            v20 = (unsigned int)(v12 >> 1);
          }
          if ( (int)(v21 + v10) <= v9 )
          {
            v48 = 0;
          }
          else
          {
            v48 = v10 + v21 - v9;
            v21 = v9 - v10;
          }
          LOBYTE(v23) = *(_BYTE *)(v49 + 4 * v23);
          if ( (v10 & 1) != 0 )
          {
            ++v10;
            *(_BYTE *)(v20 + v4) = v16 ^ (v16 ^ v23) & 0xF;
            LODWORD(v20) = v20 + 1;
            --v21;
          }
          v42 = 16 * v23;
          v16 = (16 * v23) | v23 & 0xF;
          v55 = 16 * v23;
          v43 = v21 + v10;
          v44 = v21 >> 1;
          if ( (_DWORD)v44 )
          {
            LOBYTE(v23) = (16 * v23) | v23 & 0xF;
            memset_0((void *)(v4 + (unsigned int)v20), v23, v44);
            v5 = v52;
            v42 = v55;
            v14 = (unsigned int)(v9 - 1) >> 1;
          }
          if ( (v43 & 1) != 0 )
            v16 = v42 | v16 & 0xF;
          v10 = v48 + v43;
          goto LABEL_78;
        }
        v19 = v56;
      }
      v10 += v21;
    }
    if ( (_DWORD)v23 )
    {
      if ( (_DWORD)v23 == 1 )
      {
        if ( v6 < v45 )
        {
          if ( v10 >= v12 && v10 < v9 && (v10 & 1) != 0 )
          {
            *(_BYTE *)(v20 + v4) = v16 ^ (*(_BYTE *)(v20 + v4) ^ v16) & 0xF;
          }
          else if ( (v9 & 1) != 0 && v10 >= v9 )
          {
            *(_BYTE *)(v14 + v4) = v16 ^ (*(_BYTE *)(v14 + v4) ^ v16) & 0xF;
          }
        }
      }
      else if ( (_DWORD)v23 == 2 )
      {
        if ( v6 < v45 )
        {
          if ( v10 >= v12 && v10 < v9 && (v10 & 1) != 0 )
          {
            v16 ^= (*(_BYTE *)(v20 + v4) ^ v16) & 0xF;
            *(_BYTE *)(v20 + v4) = v16;
          }
          else if ( (v9 & 1) != 0 && v10 >= v9 )
          {
            v16 ^= (*(_BYTE *)(v14 + v4) ^ v16) & 0xF;
            *(_BYTE *)(v14 + v4) = v16;
          }
        }
        v5 += 2;
        if ( v5 <= v56 )
        {
          v37 = *v3;
          v38 = v3 + 1;
          v10 += v37;
          v39 = *v38;
          v3 = v38 + 1;
          v6 -= v39;
          v4 += v50 * v39;
          if ( v6 < v46 )
          {
            *((_DWORD *)v1 + 34) = v10;
            goto LABEL_82;
          }
          v12 = v57;
          v40 = v10 >> 1;
          if ( v6 >= v45 )
            goto LABEL_11;
          if ( v40 < v47 )
          {
            v41 = v47;
          }
          else
          {
            v41 = v14;
            if ( v40 <= v14 )
              v41 = v10 >> 1;
          }
          v16 = *(_BYTE *)(v41 + v4);
LABEL_78:
          v12 = v57;
          goto LABEL_11;
        }
      }
      else
      {
        v24 = v23 + v5;
        if ( v24 <= v56 )
        {
          v25 = v23 & 1;
          if ( v6 >= v45 || v10 >= v9 || (int)v23 + v10 <= v12 )
          {
            v35 = &v3[v23];
            v10 += v23;
          }
          else
          {
            if ( v10 < v12 )
            {
              v26 = v12 - v10;
              v10 = v57;
              LODWORD(v23) = v23 - v26;
              v20 = (unsigned int)(v57 >> 1);
              v3 += v26;
            }
            if ( (int)v23 + v10 > v9 )
            {
              v21 = v10 + v23 - v9;
              LODWORD(v23) = v9 - v10;
            }
            if ( (v10 & 1) != 0 )
            {
              v27 = *v3;
              ++v10;
              ++v3;
              v16 ^= (v16 ^ *(_BYTE *)(v49 + 4 * v27)) & 0xF;
              *(_BYTE *)(v20 + v4) = v16;
              v20 = (unsigned int)(v20 + 1);
              LODWORD(v23) = v23 - 1;
            }
            v28 = v23 + v10;
            v29 = (unsigned int)v23 >> 1;
            if ( v29 )
            {
              do
              {
                v30 = *v3;
                v31 = v3 + 1;
                v32 = *(_BYTE *)(v49 + 4 * v30);
                v33 = *v31;
                v3 = v31 + 1;
                v16 = (16 * v32) | *(_BYTE *)(v49 + 4 * v33) & 0xF;
                *(_BYTE *)(v20 + v4) = v16;
                v20 = (unsigned int)(v20 + 1);
                --v29;
              }
              while ( v29 );
              v1 = a1;
            }
            if ( (v28 & 1) != 0 )
            {
              v34 = *v3++;
              v16 = v16 & 0xF | (16 * *(_BYTE *)(v49 + 4 * v34));
            }
            v35 = &v3[v21];
            v10 = v21 + v28;
          }
          v5 = v25 + v24;
          v36 = v25;
          v14 = (unsigned int)(v9 - 1) >> 1;
          v3 = &v35[v36];
          goto LABEL_78;
        }
      }
      return 0LL;
    }
    if ( v6 < v45 )
    {
      if ( v10 >= v12 && v10 < v9 && (v10 & 1) != 0 )
      {
        v16 ^= (*(_BYTE *)(v20 + v4) ^ v16) & 0xF;
        *(_BYTE *)(v20 + v4) = v16;
      }
      else if ( (v9 & 1) != 0 && v10 >= v9 )
      {
        v16 ^= (*(_BYTE *)(v14 + v4) ^ v16) & 0xF;
        *(_BYTE *)(v14 + v4) = v16;
      }
    }
    v4 += v53;
    --v6;
    v10 = v51;
    if ( v6 < v46 )
      break;
    v12 = v57;
    v19 = v56;
    if ( v6 < v45 )
    {
      v16 = *(_BYTE *)(v47 + v4);
      goto LABEL_11;
    }
  }
  *((_DWORD *)v1 + 34) = v51;
LABEL_82:
  *((_QWORD *)v1 + 14) = v4;
  result = 1LL;
  *((_QWORD *)v1 + 13) = v3;
  *((_DWORD *)v1 + 31) = v5;
  *((_DWORD *)v1 + 33) = v6;
  return result;
}
