/*
 * XREFs of ?bSrcCopySRLE4D1@@YAHPEAUBLTINFO@@@Z @ 0x14033C940
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall bSrcCopySRLE4D1(struct BLTINFO *a1)
{
  int v2; // r11d
  _BYTE *v3; // rbp
  __int64 v4; // rsi
  int v5; // r13d
  int v6; // r12d
  int v7; // ebx
  __int64 v8; // r10
  int v9; // eax
  int v10; // ecx
  __int64 result; // rax
  char v12; // r8
  unsigned int v13; // r14d
  int *v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // edx
  int v18; // ecx
  unsigned int v19; // r14d
  unsigned __int8 *v20; // rbp
  __int64 v21; // r10
  unsigned __int64 v22; // r9
  unsigned int v23; // edx
  BOOL v24; // ecx
  unsigned __int64 v25; // rax
  char v26; // dl
  unsigned __int8 v27; // r14
  __int64 v28; // rdx
  char v29; // al
  char v30; // cl
  int v31; // ebx
  __int64 v32; // rdx
  unsigned int v33; // ecx
  char v34; // cl
  unsigned int v35; // eax
  _BYTE *v36; // rbp
  unsigned int v37; // r9d
  int v38; // eax
  unsigned __int8 *v39; // rbp
  int v40; // ecx
  __int64 v41; // rdx
  char v42; // cl
  __int64 v43; // rdx
  unsigned int v44; // r9d
  unsigned int v45; // ebx
  __int64 v46; // r14
  unsigned __int64 v47; // rdx
  __int64 v48; // r14
  __int64 v49; // rax
  unsigned __int8 v50; // al
  int Val; // [rsp+20h] [rbp-88h]
  unsigned __int8 Vala; // [rsp+20h] [rbp-88h]
  int v53; // [rsp+24h] [rbp-84h]
  unsigned int v54; // [rsp+28h] [rbp-80h]
  unsigned int v55; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v56; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v57; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v58; // [rsp+30h] [rbp-78h]
  BOOL v59; // [rsp+34h] [rbp-74h]
  int v60; // [rsp+34h] [rbp-74h]
  int v61; // [rsp+38h] [rbp-70h]
  unsigned int v62; // [rsp+38h] [rbp-70h]
  int v63; // [rsp+3Ch] [rbp-6Ch]
  int v64; // [rsp+40h] [rbp-68h]
  unsigned int v65; // [rsp+44h] [rbp-64h]
  int v66; // [rsp+48h] [rbp-60h]
  __int64 v67; // [rsp+50h] [rbp-58h]
  int v68; // [rsp+58h] [rbp-50h]
  char v69; // [rsp+B0h] [rbp+8h]
  char v70; // [rsp+B8h] [rbp+10h]
  int v71; // [rsp+C0h] [rbp+18h]
  char v72; // [rsp+C0h] [rbp+18h]
  char v73; // [rsp+C8h] [rbp+20h]
  unsigned __int8 v74; // [rsp+C9h] [rbp+21h]

  v2 = *((_DWORD *)a1 + 22);
  v3 = (_BYTE *)*((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 24);
  v6 = *((_DWORD *)a1 + 15);
  v7 = *((_DWORD *)a1 + 32);
  v63 = *((_DWORD *)a1 + 11);
  v55 = *((_DWORD *)a1 + 30);
  v66 = v2;
  v68 = *((_DWORD *)a1 + 14);
  v54 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v9 = *((_DWORD *)a1 + 23);
  v10 = *((_DWORD *)a1 + 25);
  v53 = v10;
  v67 = v8;
  v64 = v9;
  if ( v6 < v9 )
    return 1LL;
  v12 = 0;
  v65 = (unsigned int)v2 >> 3;
  v70 = byte_140371018[v2 & 7];
  v58 = (unsigned int)(v5 - 1) >> 3;
  v13 = v54;
  v69 = ~byte_140371018[v5 & 7];
  if ( v6 >= v10 )
    goto LABEL_10;
  if ( v7 < v2 )
  {
    if ( v7 < v5 )
    {
      v12 = byte_140371018[v2 & 7] & *(_BYTE *)(((unsigned int)v2 >> 3) + v4);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( v7 >= v5 )
  {
LABEL_8:
    v12 = *(_BYTE *)(((unsigned int)(v5 - 1) >> 3) + v4);
    goto LABEL_10;
  }
  v12 = byte_140371018[v7 & 7] & *(_BYTE *)((unsigned int)(v7 >> 3) + v4);
LABEL_10:
  v14 = (int *)(v8 + 4);
  v15 = 1;
  v16 = 15LL;
  do
  {
    *v14 = v15;
    v15 ^= 1u;
    ++v14;
    --v16;
  }
  while ( v16 );
  v17 = v55;
LABEL_13:
  v18 = v53;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v17 += 2;
        v56 = v17;
        if ( v17 > v13 )
          return 0LL;
        v19 = (unsigned __int8)*v3;
        v20 = v3 + 1;
        v21 = (unsigned int)(v7 >> 3);
        v22 = *v20;
        v3 = v20 + 1;
        if ( !v19 )
          break;
        if ( v6 < v18 && v7 < v5 && (int)(v19 + v7) > v2 )
        {
          if ( v7 < v2 )
          {
            v19 += v7 - v2;
            v7 = v2;
            v21 = (unsigned int)(v2 >> 3);
          }
          if ( (int)(v19 + v7) <= v5 )
          {
            v62 = 0;
          }
          else
          {
            v62 = v7 + v19 - v5;
            v19 = v5 - v7;
          }
          v41 = *(unsigned __int8 *)(v67 + 4 * (v22 >> 4));
          v74 = *(_BYTE *)(v67 + 4 * (v22 & 0xF));
          v73 = v41;
          v42 = byte_140371028[2 * v41 + 12 + v74];
          v72 = v7 & 7;
          Vala = v42;
          v43 = (unsigned __int8)(7 - (v7 & 7));
          v60 = v43;
          if ( v19 >= (int)v43 + 1 )
            v44 = ((unsigned __int8)v19 - (int)v43 - 1) >> 3;
          else
            v44 = 0;
          v45 = v19 + v7;
          v46 = v19 - 8 * v44;
          if ( (int)v43 < (int)v46 )
          {
            v49 = v43;
            v47 = 0x140000000uLL;
            *(_BYTE *)(v21 + v4) = v12 | ((unsigned __int8)(v42 & byte_140371018[v49 + 1]) >> v72);
            if ( (v60 & 1) == 0 )
            {
              LODWORD(v47) = (unsigned __int8)(2 * v42);
              v50 = (2 * v42) | 1;
              if ( v42 >= 0 )
                v50 = 2 * v42;
              Vala = v50;
            }
            LODWORD(v21) = v21 + 1;
            v12 = 0;
            v48 = (unsigned int)(-1 - v60 + v46);
          }
          else
          {
            v47 = 0x140000000uLL;
            Vala = byte_140371018[v46] & v42;
            v12 |= Vala >> v72;
            v48 = 0LL;
          }
          if ( v44 )
          {
            LOBYTE(v47) = Vala;
            memset_0((void *)(v4 + (unsigned int)v21), v47, v44);
            v2 = v66;
            v12 = 0;
          }
          if ( (unsigned int)v48 < 9 )
            v12 |= Vala & byte_140371018[v48];
          v7 = v62 + v45;
          v17 = v56;
LABEL_100:
          v18 = v53;
          goto LABEL_102;
        }
        v7 += v19;
LABEL_102:
        v13 = v54;
      }
      if ( (_DWORD)v22 )
        break;
      if ( v6 < v18 && (v7 & 7) != 0 )
      {
        if ( v7 < v2 )
        {
          if ( v7 < v5 )
            goto LABEL_74;
        }
        else if ( v7 < v5 )
        {
          *(_BYTE *)(v21 + v4) = v12 | *(_BYTE *)(v21 + v4) & ~byte_140371018[v7 & 7];
LABEL_73:
          v18 = v53;
          goto LABEL_74;
        }
        *(_BYTE *)(v58 + v4) = v12 | *(_BYTE *)(v58 + v4) & v69;
        goto LABEL_73;
      }
LABEL_74:
      --v6;
      v4 += v63;
      v7 = v68;
      if ( v6 < v64 )
      {
        *((_DWORD *)a1 + 34) = v68;
        goto LABEL_104;
      }
      v13 = v54;
      if ( v6 < v18 )
        v12 = v70 & *(_BYTE *)(v65 + v4);
    }
    if ( (_DWORD)v22 == 1 )
      break;
    if ( (_DWORD)v22 != 2 )
    {
      v23 = ((unsigned int)(v22 + 1) >> 1) + v17;
      v57 = v23;
      if ( v23 > v54 )
        return 0LL;
      v24 = (((_DWORD)v22 + 1) & 2) != 0;
      v59 = v24;
      if ( v6 >= v53 || v7 >= v5 || (int)v22 + v7 <= v2 )
      {
        v7 += v22;
        v36 = &v3[(unsigned __int64)(unsigned int)(v22 + 1) >> 1];
      }
      else
      {
        if ( v7 >= v2 )
        {
          v27 = byte_140371028[(unsigned __int8)(7 - (v7 & 7))];
        }
        else
        {
          v25 = (unsigned int)(v2 - v7);
          v26 = v2 - v7;
          LODWORD(v22) = v22 - v25;
          v3 += v25 >> 1;
          v21 = (unsigned int)(v2 >> 3);
          v7 = v2;
          v27 = byte_140371028[(unsigned __int8)(7 - (v2 & 7))];
          if ( (v26 & 1) != 0 )
          {
            v7 = v2 + 1;
            v28 = *v3 & 0xF;
            v29 = v12 | v27;
            v27 >>= 1;
            v30 = v29;
            ++v3;
            LODWORD(v22) = v22 - 1;
            if ( !*(_BYTE *)(v67 + 4 * v28) )
              v30 = v12;
            v12 = v30;
          }
        }
        if ( (int)v22 + v7 <= v5 )
        {
          Val = 0;
        }
        else
        {
          Val = v7 + v22 - v5;
          LODWORD(v22) = v5 - v7;
        }
        v31 = v22 + v7;
        v32 = 0LL;
        v61 = v22 & 1;
        v71 = 0;
        while ( !v27 )
        {
LABEL_41:
          *(_BYTE *)(v21 + v4) = v12;
          v27 = 0x80;
          v21 = (unsigned int)(v21 + 1);
          v12 = 0;
          if ( !(_DWORD)v22 )
            goto LABEL_42;
        }
        while ( (_DWORD)v22 )
        {
          if ( !(_DWORD)v32 )
          {
            v33 = (unsigned __int8)*v3++;
            v73 = *(_BYTE *)(v67 + 4 * ((unsigned __int64)v33 >> 4));
            v2 = v66;
            v74 = *(_BYTE *)(v67 + 4LL * (v33 & 0xF));
          }
          v34 = v12 | v27;
          if ( !*(&v73 + v32) )
            v34 = v12;
          v32 = v71 ^ 1u;
          LODWORD(v22) = v22 - 1;
          v71 ^= 1u;
          v27 >>= 1;
          v12 = v34;
          if ( !v27 )
          {
            v71 = v32;
            goto LABEL_41;
          }
        }
LABEL_42:
        v35 = Val;
        if ( !v61 )
          v35 = Val + 1;
        v23 = v57;
        v36 = &v3[v35 >> 1];
        v7 = Val + v31;
        v24 = v59;
      }
      v17 = v24 + v23;
      v3 = &v36[v24];
      goto LABEL_100;
    }
    if ( v6 >= v18 )
    {
      v37 = (unsigned int)(v5 - 1) >> 3;
      goto LABEL_57;
    }
    if ( (v7 & 7) == 0 )
      goto LABEL_56;
    if ( v7 < v2 )
    {
      if ( v7 < v5 )
        goto LABEL_56;
    }
    else if ( v7 < v5 )
    {
      *(_BYTE *)((unsigned int)v21 + v4) = v12 | *(_BYTE *)((unsigned int)v21 + v4) & ~byte_140371018[v7 & 7];
LABEL_56:
      v37 = (unsigned int)(v5 - 1) >> 3;
      goto LABEL_57;
    }
    v37 = (unsigned int)(v5 - 1) >> 3;
    *(_BYTE *)(v58 + v4) = v12 | *(_BYTE *)(v58 + v4) & v69;
LABEL_57:
    v13 = v54;
    v17 += 2;
    if ( v17 > v54 )
      return 0LL;
    v38 = (unsigned __int8)*v3;
    v39 = v3 + 1;
    v7 += v38;
    v40 = *v39;
    v3 = v39 + 1;
    v6 -= v40;
    v4 += v63 * v40;
    if ( v6 < v64 )
    {
      *((_DWORD *)a1 + 34) = v7;
LABEL_104:
      *((_QWORD *)a1 + 14) = v4;
      result = 1LL;
      *((_QWORD *)a1 + 13) = v3;
      *((_DWORD *)a1 + 31) = v17;
      *((_DWORD *)a1 + 33) = v6;
      return result;
    }
    v18 = v53;
    if ( v6 < v53 )
    {
      if ( v7 < v2 )
      {
        if ( v7 >= v5 )
          goto LABEL_64;
        v12 = v70 & *(_BYTE *)(v65 + v4);
      }
      else
      {
        if ( v7 < v5 )
        {
          v12 = byte_140371018[v7 & 7] & *(_BYTE *)((unsigned int)(v7 >> 3) + v4);
          goto LABEL_13;
        }
LABEL_64:
        v12 = *(_BYTE *)(v37 + v4);
      }
    }
  }
  if ( v6 < v18 && (v7 & 7) != 0 )
  {
    if ( v7 < v2 )
    {
      if ( v7 >= v5 )
        goto LABEL_112;
    }
    else
    {
      if ( v7 < v5 )
      {
        *(_BYTE *)(v21 + v4) = v12 | *(_BYTE *)(v21 + v4) & ~byte_140371018[v7 & 7];
        return 0LL;
      }
LABEL_112:
      *(_BYTE *)(v58 + v4) = v12 | *(_BYTE *)(v58 + v4) & v69;
    }
  }
  return 0LL;
}
