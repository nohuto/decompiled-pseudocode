/*
 * XREFs of ?bSrcCopySRLE8D1@@YAHPEAUBLTINFO@@@Z @ 0x14033BA20
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall bSrcCopySRLE8D1(struct BLTINFO *a1)
{
  int v2; // edx
  unsigned __int8 *v3; // rbp
  int v4; // r11d
  __int64 v5; // rsi
  unsigned int v6; // r12d
  int v7; // r13d
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
  unsigned int v19; // r12d
  int v20; // ecx
  int v21; // r12d
  __int64 v22; // rcx
  int v23; // ebx
  unsigned __int8 v24; // r14
  __int64 v25; // rax
  char v26; // cl
  unsigned __int8 *v27; // rbp
  unsigned int v28; // r9d
  int v29; // eax
  unsigned __int8 *v30; // rbp
  int v31; // ecx
  char v32; // cl
  int v33; // ebx
  int v34; // edx
  int v35; // r9d
  char v36; // dl
  unsigned int v38; // r12d
  char v39; // al
  char v40; // r8
  unsigned int v41; // r10d
  __int64 v42; // r14
  unsigned int v43; // [rsp+20h] [rbp-78h]
  int v44; // [rsp+24h] [rbp-74h]
  int v45; // [rsp+28h] [rbp-70h]
  int v46; // [rsp+28h] [rbp-70h]
  int v47; // [rsp+2Ch] [rbp-6Ch]
  unsigned int v48; // [rsp+30h] [rbp-68h]
  unsigned int v49; // [rsp+30h] [rbp-68h]
  int v50; // [rsp+34h] [rbp-64h]
  int v51; // [rsp+38h] [rbp-60h]
  unsigned int v52; // [rsp+3Ch] [rbp-5Ch]
  int v53; // [rsp+40h] [rbp-58h]
  int v54; // [rsp+44h] [rbp-54h]
  __int64 v55; // [rsp+48h] [rbp-50h]
  char v56; // [rsp+A0h] [rbp+8h]
  char v57; // [rsp+A8h] [rbp+10h]
  int v58; // [rsp+B0h] [rbp+18h]
  unsigned int v59; // [rsp+B8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 22);
  v3 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v4 = *((_DWORD *)a1 + 15);
  v5 = *((_QWORD *)a1 + 2);
  v6 = *((_DWORD *)a1 + 30);
  v7 = *((_DWORD *)a1 + 24);
  v8 = *((_DWORD *)a1 + 32);
  v50 = *((_DWORD *)a1 + 11);
  v44 = v2;
  v58 = *((_DWORD *)a1 + 25);
  v47 = v4;
  v59 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v55 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v53 = *((_DWORD *)a1 + 14);
  v51 = *((_DWORD *)a1 + 23);
  if ( v4 < v51 )
    return 1LL;
  v10 = 0;
  v52 = (unsigned int)v2 >> 3;
  v57 = byte_140371018[v2 & 7];
  v43 = (unsigned int)(v7 - 1) >> 3;
  v11 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v56 = ~byte_140371018[v7 & 7];
  if ( v4 >= *((_DWORD *)a1 + 25) )
    goto LABEL_10;
  if ( v8 < v2 )
  {
    if ( v8 < v7 )
    {
      v10 = byte_140371018[v2 & 7] & *(_BYTE *)(((unsigned int)v2 >> 3) + v5);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( v8 >= v7 )
  {
LABEL_8:
    v10 = *(_BYTE *)(((unsigned int)(v7 - 1) >> 3) + v5);
    goto LABEL_10;
  }
  v10 = byte_140371018[v8 & 7] & *(_BYTE *)((unsigned int)(v8 >> 3) + v5);
LABEL_10:
  v12 = 1;
  for ( i = 1LL; i < 256; ++i )
  {
    *(_DWORD *)(v55 + 4 * i) = v12;
    v12 ^= 1u;
  }
LABEL_12:
  v14 = v58;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 += 2;
        v48 = v6;
        if ( v6 > v11 )
          return 0LL;
        v15 = *v3;
        v16 = v3 + 1;
        v17 = (unsigned int)(v8 >> 3);
        v18 = *v16;
        v3 = v16 + 1;
        if ( !(_DWORD)v15 )
          break;
        if ( v4 < v14 && v8 < v7 && (int)v15 + v8 > v2 )
        {
          if ( v8 < v2 )
          {
            v15 = (unsigned int)(v8 - v2 + v15);
            v8 = v2;
            v17 = (unsigned int)(v2 >> 3);
          }
          if ( (int)v15 + v8 <= v7 )
          {
            v46 = 0;
          }
          else
          {
            v46 = v8 + v15 - v7;
            v15 = (unsigned int)(v7 - v8);
          }
          v32 = v8 & 7;
          v33 = v15 + v8;
          LOBYTE(v34) = 7 - v32;
          v35 = *(_DWORD *)(v55 + 4 * v18);
          v54 = v35;
          if ( (unsigned __int8)(7 - v32) < (unsigned __int8)v15 )
          {
            v34 = (unsigned __int8)v34;
            v38 = ((unsigned __int8)v15 - (unsigned __int8)v34 - 1) >> 3;
            v39 = *((_BYTE *)&unk_14037101F - (unsigned __int8)v34);
            if ( v35 )
              v40 = ~v39 | v10;
            else
              v40 = v39 & v10;
            *(_BYTE *)(v17 + v5) = v40;
            v41 = v17 + 1;
            v42 = -1 - (unsigned __int8)v34 + (unsigned int)v15;
            if ( v38 )
            {
              LOBYTE(v34) = -(v35 != 0);
              memset_0((void *)(v5 + v41), v34, v38);
              v4 = v47;
              v35 = v54;
              v42 = (unsigned int)v42 - 8 * v38;
            }
            v10 = 0;
            if ( (_DWORD)v42 && v35 && (unsigned int)v42 < 9 )
              v10 = byte_140371018[v42];
          }
          else if ( (unsigned int)v15 < 9 )
          {
            v36 = byte_140371018[v15] >> v32;
            if ( v35 )
              v10 |= v36;
            else
              v10 &= ~v36;
          }
          v8 = v46 + v33;
          v2 = v44;
          v6 = v48;
LABEL_90:
          v14 = v58;
          goto LABEL_92;
        }
        v8 += v15;
LABEL_92:
        v11 = v59;
      }
      if ( (_DWORD)v18 )
        break;
      if ( v4 < v14 && (v8 & 7) != 0 )
      {
        if ( v8 < v2 )
        {
          if ( v8 < v7 )
            goto LABEL_64;
        }
        else if ( v8 < v7 )
        {
          v2 = v44;
          *(_BYTE *)(v17 + v5) = v10 | *(_BYTE *)(v17 + v5) & ~byte_140371018[v8 & 7];
LABEL_63:
          v14 = v58;
          goto LABEL_64;
        }
        *(_BYTE *)(v43 + v5) = v10 | *(_BYTE *)(v43 + v5) & v56;
        goto LABEL_63;
      }
LABEL_64:
      --v4;
      v5 += v50;
      v8 = v53;
      v47 = v4;
      if ( v4 < v51 )
      {
        *((_DWORD *)a1 + 34) = v53;
        goto LABEL_94;
      }
      v11 = v59;
      if ( v4 < v14 )
        v10 = v57 & *(_BYTE *)(v52 + v5);
    }
    if ( (_DWORD)v18 == 1 )
      break;
    if ( (_DWORD)v18 != 2 )
    {
      v19 = v18 + v6;
      v49 = v19;
      if ( v19 > v59 )
        return 0LL;
      v20 = v18 & 1;
      v45 = v20;
      if ( v4 >= v58 || v8 >= v7 || (int)v18 + v8 <= v2 )
      {
        v8 += v18;
        v27 = &v3[v18];
      }
      else
      {
        if ( v8 < v2 )
        {
          v17 = (unsigned int)(v2 >> 3);
          LODWORD(v18) = v18 - (v2 - v8);
          v3 += (unsigned int)(v2 - v8);
          v8 = v2;
        }
        if ( (int)v18 + v8 <= v7 )
        {
          v21 = 0;
        }
        else
        {
          v21 = v8 + v18 - v7;
          LODWORD(v18) = v7 - v8;
        }
        v22 = (unsigned __int8)(7 - (v8 & 7));
        v23 = v18 + v8;
        v24 = byte_140371028[v22];
        while ( !v24 )
        {
LABEL_33:
          *(_BYTE *)(v17 + v5) = v10;
          v24 = 0x80;
          v17 = (unsigned int)(v17 + 1);
          v10 = 0;
          if ( !(_DWORD)v18 )
            goto LABEL_34;
        }
        while ( (_DWORD)v18 )
        {
          v25 = *v3++;
          v26 = v10 | v24;
          if ( !*(_DWORD *)(v55 + 4 * v25) )
            v26 = v10;
          LODWORD(v18) = v18 - 1;
          v24 >>= 1;
          v10 = v26;
          if ( !v24 )
            goto LABEL_33;
        }
LABEL_34:
        v2 = v44;
        v20 = v45;
        v27 = &v3[v21];
        v8 = v21 + v23;
        v19 = v49;
      }
      v6 = v20 + v19;
      v3 = &v27[v20];
      goto LABEL_90;
    }
    if ( v4 >= v14 )
    {
      v28 = (unsigned int)(v7 - 1) >> 3;
      goto LABEL_47;
    }
    if ( (v8 & 7) == 0 )
      goto LABEL_46;
    if ( v8 < v2 )
    {
      if ( v8 < v7 )
        goto LABEL_46;
    }
    else if ( v8 < v7 )
    {
      v2 = v44;
      *(_BYTE *)(v17 + v5) = v10 | *(_BYTE *)(v17 + v5) & ~byte_140371018[v8 & 7];
LABEL_46:
      v28 = (unsigned int)(v7 - 1) >> 3;
      goto LABEL_47;
    }
    v28 = (unsigned int)(v7 - 1) >> 3;
    *(_BYTE *)(v43 + v5) = v10 | *(_BYTE *)(v43 + v5) & v56;
LABEL_47:
    v11 = v59;
    v6 += 2;
    if ( v6 > v59 )
      return 0LL;
    v29 = *v3;
    v30 = v3 + 1;
    v8 += v29;
    v31 = *v30;
    v3 = v30 + 1;
    v4 -= v31;
    v47 = v4;
    v5 += v50 * v31;
    if ( v4 < v51 )
    {
      *((_DWORD *)a1 + 34) = v8;
LABEL_94:
      *((_QWORD *)a1 + 14) = v5;
      result = 1LL;
      *((_QWORD *)a1 + 13) = v3;
      *((_DWORD *)a1 + 31) = v6;
      *((_DWORD *)a1 + 33) = v4;
      return result;
    }
    v14 = v58;
    if ( v4 < v58 )
    {
      if ( v8 < v2 )
      {
        if ( v8 >= v7 )
          goto LABEL_54;
        v10 = v57 & *(_BYTE *)(v52 + v5);
      }
      else
      {
        if ( v8 < v7 )
        {
          v10 = byte_140371018[v8 & 7] & *(_BYTE *)((unsigned int)(v8 >> 3) + v5);
          goto LABEL_12;
        }
LABEL_54:
        v10 = *(_BYTE *)(v28 + v5);
      }
    }
  }
  if ( v4 < v14 && (v8 & 7) != 0 )
  {
    if ( v8 < v2 )
    {
      if ( v8 >= v7 )
        goto LABEL_102;
    }
    else
    {
      if ( v8 < v7 )
      {
        *(_BYTE *)(v17 + v5) = v10 | *(_BYTE *)(v17 + v5) & ~byte_140371018[v8 & 7];
        return 0LL;
      }
LABEL_102:
      *(_BYTE *)(v43 + v5) = v10 | *(_BYTE *)(v43 + v5) & v56;
    }
  }
  return 0LL;
}
