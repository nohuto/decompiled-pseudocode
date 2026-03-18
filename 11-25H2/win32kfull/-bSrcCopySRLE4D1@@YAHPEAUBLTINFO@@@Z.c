/*
 * XREFs of ?bSrcCopySRLE4D1@@YAHPEAUBLTINFO@@@Z @ 0x140319980
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall bSrcCopySRLE4D1(struct BLTINFO *a1)
{
  int v2; // r12d
  unsigned __int8 *v3; // r15
  __int64 v4; // rsi
  int v5; // r10d
  unsigned int v6; // r14d
  int v7; // r13d
  int v8; // edx
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // r11
  int v12; // ecx
  __int64 result; // rax
  char v14; // r8
  char v15; // bp
  int *v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  int v19; // edx
  int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // r14d
  unsigned __int8 *v23; // r15
  __int64 v24; // r11
  unsigned __int64 v25; // r9
  unsigned int v26; // r14d
  BOOL v27; // ecx
  char v28; // dl
  unsigned __int8 v29; // r12
  unsigned __int8 v30; // dl
  char v31; // cl
  unsigned int v32; // r14d
  int v33; // ebx
  unsigned int v34; // ecx
  unsigned __int8 v35; // al
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  char v38; // cl
  unsigned int v39; // eax
  unsigned __int8 *v40; // r15
  unsigned int v41; // r9d
  int v42; // eax
  unsigned __int8 *v43; // r15
  int v44; // ecx
  unsigned __int8 v45; // r12
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned int v48; // r9d
  unsigned int v49; // ebx
  __int64 v50; // r14
  __int64 v51; // r14
  unsigned int v52; // [rsp+20h] [rbp-88h]
  char v53; // [rsp+24h] [rbp-84h]
  unsigned __int8 v54; // [rsp+25h] [rbp-83h]
  int v55; // [rsp+28h] [rbp-80h]
  unsigned int v56; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v57; // [rsp+30h] [rbp-78h]
  int v58; // [rsp+34h] [rbp-74h]
  unsigned int v59; // [rsp+38h] [rbp-70h]
  int v60; // [rsp+3Ch] [rbp-6Ch]
  int v61; // [rsp+40h] [rbp-68h]
  int v62; // [rsp+44h] [rbp-64h]
  int v63; // [rsp+48h] [rbp-60h]
  int v64; // [rsp+4Ch] [rbp-5Ch]
  unsigned int v65; // [rsp+50h] [rbp-58h]
  __int64 v66; // [rsp+58h] [rbp-50h]
  char v67; // [rsp+B0h] [rbp+8h]
  char v68; // [rsp+C0h] [rbp+18h]
  int v69; // [rsp+C8h] [rbp+20h]
  char v70; // [rsp+C8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 22);
  v3 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 15);
  v6 = *((_DWORD *)a1 + 30);
  v7 = *((_DWORD *)a1 + 24);
  v8 = *((_DWORD *)a1 + 14);
  v9 = *((_DWORD *)a1 + 32);
  v63 = *((_DWORD *)a1 + 11);
  v10 = *((_QWORD *)a1 + 9);
  v61 = v2;
  v55 = v8;
  v60 = v5;
  v52 = *(_DWORD *)(v10 + 64);
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  LODWORD(v10) = *((_DWORD *)a1 + 23);
  v12 = *((_DWORD *)a1 + 25);
  v58 = v12;
  v66 = v11;
  v64 = v10;
  if ( v5 < (int)v10 )
    return 1LL;
  v14 = 0;
  v65 = (unsigned int)v2 >> 3;
  v15 = byte_140363B70[v2 & 7];
  v57 = (unsigned int)(v7 - 1) >> 3;
  v67 = ~byte_140363B70[v7 & 7];
  if ( v5 >= v12 )
    goto LABEL_10;
  if ( v9 >= v2 )
  {
    if ( v9 < v7 )
    {
      v14 = byte_140363B70[v9 & 7] & *(_BYTE *)((unsigned int)(v9 >> 3) + v4);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( v9 >= v7 )
  {
LABEL_8:
    v14 = *(_BYTE *)(((unsigned int)(v7 - 1) >> 3) + v4);
    goto LABEL_10;
  }
  v14 = v15 & *(_BYTE *)(((unsigned int)v2 >> 3) + v4);
LABEL_10:
  v16 = (int *)(v66 + 4);
  v17 = 1;
  v18 = 15LL;
  do
  {
    *v16 = v17;
    v17 ^= 1u;
    ++v16;
    --v18;
  }
  while ( v18 );
LABEL_12:
  v19 = v58;
LABEL_13:
  v20 = v55;
LABEL_14:
  v21 = v52;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v56 = v6 + 2;
        if ( v6 + 2 > v21 )
          return 0LL;
        v22 = *v3;
        v23 = v3 + 1;
        v24 = (unsigned int)(v9 >> 3);
        v25 = *v23;
        v3 = v23 + 1;
        if ( !v22 )
          break;
        if ( v5 < v19 && v9 < v7 )
        {
          if ( (int)(v22 + v9) > v2 )
          {
            if ( v9 < v2 )
            {
              v22 += v9 - v2;
              v9 = v2;
              v24 = (unsigned int)(v2 >> 3);
            }
            if ( (int)(v22 + v9) <= v7 )
            {
              v59 = 0;
            }
            else
            {
              v59 = v9 + v22 - v7;
              v22 = v7 - v9;
            }
            v46 = *(unsigned __int8 *)(v66 + 4 * (v25 >> 4));
            v54 = *(_BYTE *)(v66 + 4 * (v25 & 0xF));
            v53 = v46;
            v45 = byte_140363B80[2 * v46 + 12 + v54];
            LOBYTE(v46) = v9 & 7;
            v70 = v45;
            v68 = v9 & 7;
            v47 = (unsigned __int8)(7 - (v9 & 7));
            v62 = (unsigned __int8)(7 - (v9 & 7));
            if ( v22 >= (int)v47 + 1 )
              v48 = ((unsigned __int8)v22 - (int)v47 - 1) >> 3;
            else
              v48 = 0;
            v49 = v22 + v9;
            v50 = v22 - 8 * v48;
            if ( (int)v47 < (int)v50 )
            {
              *(_BYTE *)(v24 + v4) = v14 | ((unsigned __int8)(v45 & byte_140363B70[v47 + 1]) >> v68);
              LODWORD(v46) = v62;
              if ( (v62 & 1) == 0 )
              {
                v45 *= 2;
                if ( v70 < 0 )
                  v45 |= 1u;
              }
              LODWORD(v24) = v24 + 1;
              v14 = 0;
              v51 = -1 - (unsigned __int8)v62 + (unsigned int)v50;
            }
            else
            {
              v45 &= byte_140363B70[v50];
              v14 |= v45 >> v46;
              v51 = 0LL;
            }
            if ( v48 )
            {
              LOBYTE(v46) = v45;
              memset_0((void *)(v4 + (unsigned int)v24), v46, v48);
              v5 = v60;
              v14 = 0;
            }
            if ( (unsigned int)v51 < 9 )
              v14 |= v45 & byte_140363B70[v51];
            v9 = v59 + v49;
            v2 = v61;
            v6 = v56;
            goto LABEL_12;
          }
          v21 = v52;
        }
        v9 += v22;
        v6 = v56;
      }
      if ( !(_DWORD)v25 )
        break;
      if ( (_DWORD)v25 == 1 )
      {
        if ( v5 >= v19 || (v9 & 7) == 0 )
          return 0LL;
        if ( v9 < v2 )
        {
          if ( v9 < v7 )
            return 0LL;
        }
        else if ( v9 < v7 )
        {
          *(_BYTE *)(v24 + v4) = v14 | *(_BYTE *)(v24 + v4) & ~byte_140363B70[v9 & 7];
          return 0LL;
        }
        *(_BYTE *)(v57 + v4) = v14 | v67 & *(_BYTE *)(v57 + v4);
        return 0LL;
      }
      if ( (_DWORD)v25 != 2 )
      {
        v26 = ((unsigned int)(v25 + 1) >> 1) + v56;
        v56 = v26;
        if ( v26 <= v52 )
        {
          v27 = (((_DWORD)v25 + 1) & 2) != 0;
          v62 = v27;
          if ( v5 >= v58 || v9 >= v7 || (int)v25 + v9 <= v2 )
          {
            v9 += v25;
            v40 = &v3[(unsigned __int64)(unsigned int)(v25 + 1) >> 1];
          }
          else
          {
            if ( v9 >= v2 )
            {
              v29 = byte_140363B80[(unsigned __int8)(7 - (v9 & 7))];
            }
            else
            {
              v28 = v2 - v9;
              LODWORD(v25) = v25 - (v2 - v9);
              v3 += (unsigned __int64)(unsigned int)(v2 - v9) >> 1;
              v24 = (unsigned int)(v2 >> 3);
              v9 = v2;
              v29 = byte_140363B80[(unsigned __int8)(7 - (v2 & 7))];
              if ( (v28 & 1) != 0 )
              {
                v30 = *v3;
                v31 = v14 | v29;
                ++v3;
                LODWORD(v25) = v25 - 1;
                v29 >>= 1;
                v9 = v61 + 1;
                if ( !*(_BYTE *)(v66 + 4LL * (v30 & 0xF)) )
                  v31 = v14;
                v14 = v31;
              }
            }
            if ( (int)v25 + v9 <= v7 )
            {
              v32 = 0;
            }
            else
            {
              v32 = v9 + v25 - v7;
              LODWORD(v25) = v7 - v9;
            }
            v33 = v25 + v9;
            v34 = 0;
            v59 = v25 & 1;
            v69 = 0;
            while ( !v29 )
            {
LABEL_41:
              *(_BYTE *)(v24 + v4) = v14;
              v29 = 0x80;
              v24 = (unsigned int)(v24 + 1);
              v14 = 0;
              if ( !(_DWORD)v25 )
                goto LABEL_42;
            }
            while ( 1 )
            {
              v35 = v29;
              if ( !(_DWORD)v25 )
                break;
              if ( !v34 )
              {
                v36 = *v3++;
                v53 = *(_BYTE *)(v66 + 4 * (v36 >> 4));
                v34 = v69;
                v54 = *(_BYTE *)(v66 + 4 * (v36 & 0xF));
                v35 = v29;
              }
              v37 = v34;
              LODWORD(v25) = v25 - 1;
              v69 = v34 ^ 1;
              v38 = v14 | v35;
              if ( !*(&v53 + v37) )
                v38 = v14;
              v29 >>= 1;
              v14 = v38;
              v34 = v69;
              if ( !v29 )
                goto LABEL_41;
            }
LABEL_42:
            v39 = v32;
            if ( !v59 )
              v39 = v32 + 1;
            v2 = v61;
            v27 = v62;
            v40 = &v3[v39 >> 1];
            v9 = v32 + v33;
            v26 = v56;
          }
          v6 = v27 + v26;
          v3 = &v40[v27];
          goto LABEL_12;
        }
        return 0LL;
      }
      if ( v5 >= v19 )
      {
        v41 = v57;
      }
      else
      {
        if ( (v9 & 7) == 0 )
          goto LABEL_55;
        if ( v9 < v2 )
        {
          if ( v9 < v7 )
            goto LABEL_55;
        }
        else if ( v9 < v7 )
        {
          *(_BYTE *)((unsigned int)v24 + v4) = v14 | *(_BYTE *)((unsigned int)v24 + v4) & ~byte_140363B70[v9 & 7];
          v19 = v58;
LABEL_55:
          v41 = v57;
          goto LABEL_56;
        }
        v41 = v57;
        *(_BYTE *)(v57 + v4) = v14 | v67 & *(_BYTE *)(v57 + v4);
      }
LABEL_56:
      v6 = v56 + 2;
      if ( v56 + 2 > v52 )
        return 0LL;
      v42 = *v3;
      v43 = v3 + 1;
      v9 += v42;
      v44 = *v43;
      v3 = v43 + 1;
      v5 -= v44;
      v60 = v5;
      v4 += v44 * v63;
      if ( v5 < v64 )
      {
        *((_DWORD *)a1 + 31) = v6;
        *((_DWORD *)a1 + 34) = v9;
        goto LABEL_101;
      }
      v21 = v52;
      v20 = v55;
      if ( v5 < v19 )
      {
        if ( v9 >= v2 )
        {
          if ( v9 < v7 )
          {
            v14 = byte_140363B70[v9 & 7] & *(_BYTE *)((unsigned int)(v9 >> 3) + v4);
            goto LABEL_13;
          }
          goto LABEL_63;
        }
        if ( v9 >= v7 )
        {
LABEL_63:
          v14 = *(_BYTE *)(v41 + v4);
          goto LABEL_14;
        }
        v14 = v15 & *(_BYTE *)(v65 + v4);
        goto LABEL_14;
      }
    }
    if ( v5 < v19 && (v9 & 7) != 0 )
    {
      if ( v9 < v2 )
      {
        if ( v9 < v7 )
          goto LABEL_73;
      }
      else if ( v9 < v7 )
      {
        v19 = v58;
        *(_BYTE *)(v24 + v4) = v14 | *(_BYTE *)(v24 + v4) & ~byte_140363B70[v9 & 7];
LABEL_72:
        v20 = v55;
        goto LABEL_73;
      }
      *(_BYTE *)(v57 + v4) = v14 | v67 & *(_BYTE *)(v57 + v4);
      goto LABEL_72;
    }
LABEL_73:
    --v5;
    v4 += v63;
    v60 = v5;
    v9 = v20;
    if ( v5 < v64 )
      break;
    v6 = v56;
    v21 = v52;
    if ( v5 < v19 )
    {
      v14 = v15 & *(_BYTE *)(v65 + v4);
      goto LABEL_14;
    }
  }
  *((_DWORD *)a1 + 31) = v56;
  *((_DWORD *)a1 + 34) = v20;
LABEL_101:
  *((_QWORD *)a1 + 14) = v4;
  result = 1LL;
  *((_QWORD *)a1 + 13) = v3;
  *((_DWORD *)a1 + 33) = v5;
  return result;
}
