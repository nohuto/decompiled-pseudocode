/*
 * XREFs of ?bSrcCopySRLE8D1@@YAHPEAUBLTINFO@@@Z @ 0x140318AA0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall bSrcCopySRLE8D1(struct BLTINFO *a1)
{
  int v2; // edx
  unsigned __int8 *v3; // rbp
  __int64 v4; // rsi
  unsigned int v5; // r11d
  int v6; // r13d
  int v7; // r12d
  int v8; // ebx
  __int64 result; // rax
  char v10; // r8
  unsigned int v11; // r10d
  int v12; // ecx
  __int64 i; // rax
  int v14; // ecx
  __int64 v15; // r14
  unsigned __int8 *v16; // rbp
  __int64 v17; // r10
  __int64 v18; // r9
  unsigned int v19; // r11d
  int v20; // ecx
  __int64 v21; // rax
  int v22; // r11d
  __int64 v23; // rcx
  int v24; // ebx
  unsigned __int8 v25; // r14
  __int64 v26; // rdx
  char v27; // cl
  unsigned __int8 *v28; // rbp
  unsigned int v29; // r9d
  int v30; // eax
  unsigned __int8 *v31; // rbp
  int v32; // ecx
  char v33; // cl
  int v34; // ebx
  unsigned __int8 v35; // dl
  int v36; // r9d
  char v37; // dl
  int v38; // r11d
  char *v39; // rcx
  unsigned int v40; // edx
  char v41; // al
  char v42; // r8
  unsigned int v43; // r10d
  __int64 v44; // r14
  size_t v45; // r8
  unsigned int v46; // [rsp+20h] [rbp-78h]
  unsigned int v47; // [rsp+24h] [rbp-74h]
  unsigned int v48; // [rsp+24h] [rbp-74h]
  int v49; // [rsp+28h] [rbp-70h]
  int v50; // [rsp+2Ch] [rbp-6Ch]
  int v51; // [rsp+2Ch] [rbp-6Ch]
  int v52; // [rsp+30h] [rbp-68h]
  int v53; // [rsp+34h] [rbp-64h]
  unsigned int v54; // [rsp+38h] [rbp-60h]
  int v55; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v56; // [rsp+40h] [rbp-58h]
  int v57; // [rsp+44h] [rbp-54h]
  __int64 v58; // [rsp+48h] [rbp-50h]
  char v59; // [rsp+A0h] [rbp+8h]
  char v60; // [rsp+A8h] [rbp+10h]
  int v61; // [rsp+B0h] [rbp+18h]
  unsigned int v62; // [rsp+B8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 22);
  v3 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 30);
  v6 = *((_DWORD *)a1 + 24);
  v7 = *((_DWORD *)a1 + 15);
  v8 = *((_DWORD *)a1 + 32);
  v52 = *((_DWORD *)a1 + 11);
  v49 = v2;
  v61 = *((_DWORD *)a1 + 25);
  v62 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v58 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v55 = *((_DWORD *)a1 + 14);
  v53 = *((_DWORD *)a1 + 23);
  if ( v7 < v53 )
    return 1LL;
  v10 = 0;
  v54 = (unsigned int)v2 >> 3;
  v60 = byte_140363B70[v2 & 7];
  v46 = (unsigned int)(v6 - 1) >> 3;
  v11 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v59 = ~byte_140363B70[v6 & 7];
  if ( v7 >= *((_DWORD *)a1 + 25) )
    goto LABEL_10;
  if ( v8 < v2 )
  {
    if ( v8 < v6 )
    {
      v10 = byte_140363B70[v2 & 7] & *(_BYTE *)(((unsigned int)v2 >> 3) + v4);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( v8 >= v6 )
  {
LABEL_8:
    v10 = *(_BYTE *)(((unsigned int)(v6 - 1) >> 3) + v4);
    goto LABEL_10;
  }
  v10 = byte_140363B70[v8 & 7] & *(_BYTE *)((unsigned int)(v8 >> 3) + v4);
LABEL_10:
  v12 = 1;
  for ( i = 1LL; i < 256; ++i )
  {
    *(_DWORD *)(v58 + 4 * i) = v12;
    v12 ^= 1u;
  }
LABEL_12:
  v14 = v61;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v5 += 2;
        v47 = v5;
        if ( v5 > v11 )
          return 0LL;
        v15 = *v3;
        v16 = v3 + 1;
        v17 = (unsigned int)(v8 >> 3);
        v18 = *v16;
        v3 = v16 + 1;
        if ( !(_DWORD)v15 )
          break;
        if ( v7 < v14 && v8 < v6 && (int)v15 + v8 > v2 )
        {
          if ( v8 < v2 )
          {
            v15 = (unsigned int)(v8 - v2 + v15);
            v8 = v2;
            v17 = (unsigned int)(v2 >> 3);
          }
          if ( (int)v15 + v8 <= v6 )
          {
            v51 = 0;
          }
          else
          {
            v51 = v8 + v15 - v6;
            v15 = (unsigned int)(v6 - v8);
          }
          v33 = v8 & 7;
          v34 = v15 + v8;
          v35 = 7 - v33;
          v36 = *(_DWORD *)(v58 + 4 * v18);
          v57 = v36;
          if ( (unsigned __int8)(7 - v33) >= (unsigned __int8)v15 )
          {
            if ( (unsigned int)v15 < 9 )
            {
              v37 = byte_140363B70[v15] >> v33;
              if ( v36 )
                v10 |= v37;
              else
                v10 &= ~v37;
            }
            goto LABEL_91;
          }
          v38 = v35;
          v39 = (char *)&unk_140363B77 - v35;
          v40 = ((unsigned __int8)v15 - v35 - 1) >> 3;
          v41 = *v39;
          v56 = v40;
          if ( v36 )
            v42 = ~v41 | v10;
          else
            v42 = v41 & v10;
          *(_BYTE *)(v17 + v4) = v42;
          v43 = v17 + 1;
          v44 = (unsigned int)(-1 - v38 + v15);
          v10 = 0;
          if ( v40 )
          {
            v45 = v40;
            LOBYTE(v40) = -(v36 != 0);
            memset_0((void *)(v4 + v43), v40, v45);
            v36 = v57;
            v10 = 0;
            v44 = (unsigned int)v44 - 8 * v56;
          }
          if ( (_DWORD)v44 )
          {
            if ( v36 )
            {
              v5 = v47;
              if ( (unsigned int)v44 < 9 )
                v10 = byte_140363B70[v44];
LABEL_91:
              v8 = v51 + v34;
              v2 = v49;
LABEL_92:
              v14 = v61;
              goto LABEL_94;
            }
            v10 = 0;
          }
          v5 = v47;
          goto LABEL_91;
        }
        v8 += v15;
LABEL_94:
        v11 = v62;
      }
      if ( (_DWORD)v18 )
        break;
      if ( v7 < v14 && (v8 & 7) != 0 )
      {
        if ( v8 < v2 )
        {
          if ( v8 < v6 )
            goto LABEL_64;
        }
        else if ( v8 < v6 )
        {
          v2 = v49;
          *(_BYTE *)(v17 + v4) = v10 | *(_BYTE *)(v17 + v4) & ~byte_140363B70[v8 & 7];
LABEL_63:
          v14 = v61;
          goto LABEL_64;
        }
        *(_BYTE *)(v46 + v4) = v10 | v59 & *(_BYTE *)(v46 + v4);
        goto LABEL_63;
      }
LABEL_64:
      --v7;
      v4 += v52;
      v8 = v55;
      if ( v7 < v53 )
      {
        *((_DWORD *)a1 + 34) = v55;
        goto LABEL_96;
      }
      v11 = v62;
      if ( v7 < v14 )
        v10 = v60 & *(_BYTE *)(v54 + v4);
    }
    if ( (_DWORD)v18 == 1 )
      break;
    if ( (_DWORD)v18 != 2 )
    {
      v19 = v18 + v5;
      v48 = v19;
      if ( v19 > v62 )
        return 0LL;
      v20 = v18 & 1;
      v50 = v20;
      if ( v7 >= v61 || v8 >= v6 || (int)v18 + v8 <= v2 )
      {
        v8 += v18;
        v28 = &v3[v18];
      }
      else
      {
        if ( v8 < v2 )
        {
          v21 = (unsigned int)(v2 - v8);
          v17 = (unsigned int)(v2 >> 3);
          LODWORD(v18) = v18 - v21;
          v8 = v2;
          v3 += v21;
        }
        if ( (int)v18 + v8 <= v6 )
        {
          v22 = 0;
        }
        else
        {
          v22 = v8 + v18 - v6;
          LODWORD(v18) = v6 - v8;
        }
        v23 = (unsigned __int8)(7 - (v8 & 7));
        v24 = v18 + v8;
        v25 = byte_140363B80[v23];
        while ( !v25 )
        {
LABEL_33:
          *(_BYTE *)(v17 + v4) = v10;
          v25 = 0x80;
          v17 = (unsigned int)(v17 + 1);
          v10 = 0;
          if ( !(_DWORD)v18 )
            goto LABEL_34;
        }
        while ( (_DWORD)v18 )
        {
          v26 = *v3++;
          v27 = v10 | v25;
          LODWORD(v18) = v18 - 1;
          if ( !*(_DWORD *)(v58 + 4 * v26) )
            v27 = v10;
          v25 >>= 1;
          v10 = v27;
          if ( !v25 )
            goto LABEL_33;
        }
LABEL_34:
        v20 = v50;
        v2 = v49;
        v28 = &v3[v22];
        v8 = v22 + v24;
        v19 = v48;
      }
      v5 = v20 + v19;
      v3 = &v28[v20];
      goto LABEL_92;
    }
    if ( v7 >= v14 )
    {
      v29 = (unsigned int)(v6 - 1) >> 3;
      goto LABEL_47;
    }
    if ( (v8 & 7) == 0 )
      goto LABEL_46;
    if ( v8 < v2 )
    {
      if ( v8 < v6 )
        goto LABEL_46;
    }
    else if ( v8 < v6 )
    {
      v2 = v49;
      *(_BYTE *)(v17 + v4) = v10 | *(_BYTE *)(v17 + v4) & ~byte_140363B70[v8 & 7];
LABEL_46:
      v29 = (unsigned int)(v6 - 1) >> 3;
      goto LABEL_47;
    }
    v29 = (unsigned int)(v6 - 1) >> 3;
    *(_BYTE *)(v46 + v4) = v10 | v59 & *(_BYTE *)(v46 + v4);
LABEL_47:
    v11 = v62;
    v5 += 2;
    if ( v5 > v62 )
      return 0LL;
    v30 = *v3;
    v31 = v3 + 1;
    v8 += v30;
    v32 = *v31;
    v3 = v31 + 1;
    v7 -= v32;
    v4 += v32 * v52;
    if ( v7 < v53 )
    {
      *((_DWORD *)a1 + 34) = v8;
LABEL_96:
      *((_QWORD *)a1 + 14) = v4;
      result = 1LL;
      *((_QWORD *)a1 + 13) = v3;
      *((_DWORD *)a1 + 31) = v5;
      *((_DWORD *)a1 + 33) = v7;
      return result;
    }
    v14 = v61;
    if ( v7 < v61 )
    {
      if ( v8 < v2 )
      {
        if ( v8 >= v6 )
          goto LABEL_54;
        v10 = v60 & *(_BYTE *)(v54 + v4);
      }
      else
      {
        if ( v8 < v6 )
        {
          v10 = byte_140363B70[v8 & 7] & *(_BYTE *)((unsigned int)(v8 >> 3) + v4);
          goto LABEL_12;
        }
LABEL_54:
        v10 = *(_BYTE *)(v29 + v4);
      }
    }
  }
  if ( v7 < v14 && (v8 & 7) != 0 )
  {
    if ( v8 < v2 )
    {
      if ( v8 >= v6 )
        goto LABEL_104;
    }
    else
    {
      if ( v8 < v6 )
      {
        *(_BYTE *)(v17 + v4) = v10 | *(_BYTE *)(v17 + v4) & ~byte_140363B70[v8 & 7];
        return 0LL;
      }
LABEL_104:
      *(_BYTE *)(v46 + v4) = v10 | v59 & *(_BYTE *)(v46 + v4);
    }
  }
  return 0LL;
}
