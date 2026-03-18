/*
 * XREFs of ?vDitherColor4bpp@@YAXPEAKPEAU_VERTEX_DATA@@1K@Z @ 0x14031AAB0
 * Callers:
 *     EngDitherColor @ 0x140291900 (EngDitherColor.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall vDitherColor4bpp(unsigned int *a1, struct _VERTEX_DATA *a2, struct _VERTEX_DATA *a3, unsigned int a4)
{
  struct _VERTEX_DATA *v5; // r10
  __int64 v7; // r8
  unsigned int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // r9d
  __int64 v11; // rdx
  struct _VERTEX_DATA *v12; // rdx
  struct _VERTEX_DATA *v13; // r8
  unsigned int *v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // r8d
  char v17; // cl
  unsigned int i; // r8d
  __int64 v19; // rax
  char *v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // r8d
  unsigned int *v23; // rdx
  char *v24; // r9
  char v25; // r9
  unsigned int v26; // r8d
  unsigned int *v27; // rdx
  __int64 v28; // rax
  int v29; // eax
  int v30; // ecx
  int v31; // edx
  int v32; // r8d
  int v33; // r9d
  int v34; // r10d
  int v35; // ebx
  int v36; // edi
  int v37; // ecx
  int v38; // [rsp+0h] [rbp-50h]
  int v39; // [rsp+4h] [rbp-4Ch]
  int v40; // [rsp+8h] [rbp-48h]
  int v41; // [rsp+Ch] [rbp-44h]
  int v42; // [rsp+10h] [rbp-40h]
  int v43; // [rsp+14h] [rbp-3Ch]
  int v44; // [rsp+18h] [rbp-38h]
  int v45; // [rsp+1Ch] [rbp-34h]
  int v46; // [rsp+20h] [rbp-30h]
  int v47; // [rsp+24h] [rbp-2Ch]
  int v48; // [rsp+28h] [rbp-28h]
  int v49; // [rsp+2Ch] [rbp-24h]
  int v50; // [rsp+30h] [rbp-20h]
  int v51; // [rsp+34h] [rbp-1Ch]
  int v52; // [rsp+38h] [rbp-18h]
  int v53; // [rsp+3Ch] [rbp-14h]

  v5 = a2;
  if ( a4 > 2 )
  {
    if ( a4 == 3 )
    {
      v7 = *((_DWORD *)a2 + 2) < *((_DWORD *)a2 + 4) ? 16LL : 8LL;
      v8 = *(_DWORD *)((char *)a2 + v7);
    }
    else
    {
      v8 = *((_DWORD *)a2 + 4);
      if ( v8 < *((_DWORD *)a2 + 6) )
      {
        v7 = 24LL;
        v8 = *((_DWORD *)a2 + 6);
      }
      else
      {
        v7 = 16LL;
      }
    }
    v9 = *((_DWORD *)a2 + 2);
    v10 = v9;
    v11 = 8LL;
    if ( v9 <= v8 )
    {
      v11 = v7;
      v10 = v8;
    }
    v12 = (struct _VERTEX_DATA *)((char *)v5 + v11);
    v13 = v5;
    if ( *(_DWORD *)v5 <= v10 )
      v13 = v12;
    v14 = (unsigned int *)&unk_14036FF20;
    v15 = *((unsigned int *)v13 + 1);
    *((_DWORD *)v13 + 1) = 255;
    v38 = dword_140370120[v15];
    v39 = v38;
    v40 = v38;
    v41 = v38;
    v42 = v38;
    v43 = v38;
    v44 = v38;
    v45 = v38;
    v46 = v38;
    v47 = v38;
    v48 = v38;
    v49 = v38;
    v50 = v38;
    v51 = v38;
    v52 = v38;
    v53 = v38;
    while ( *((_DWORD *)v5 + 1) == 255 )
    {
      v14 += *(unsigned int *)v5;
LABEL_22:
      v5 = (struct _VERTEX_DATA *)((char *)v5 + 8);
      if ( v5 >= a3 )
        goto LABEL_37;
    }
    v16 = *(_DWORD *)v5;
    v17 = *((_BYTE *)v5 + 4);
    if ( (*(_DWORD *)v5 & 3) != 1 )
    {
      if ( (*(_DWORD *)v5 & 3) != 2 )
      {
        if ( (*(_DWORD *)v5 & 3) != 3 )
          goto LABEL_20;
        *((_BYTE *)&v38 + v14[2]) = v17;
      }
      *((_BYTE *)&v38 + v14[1]) = v17;
    }
    *((_BYTE *)&v38 + *v14) = v17;
    v14 += v16 & 3;
LABEL_20:
    for ( i = v16 >> 2; i; --i )
    {
      *((_BYTE *)&v38 + *v14) = v17;
      *((_BYTE *)&v38 + v14[1]) = v17;
      *((_BYTE *)&v38 + v14[2]) = v17;
      v19 = v14[3];
      v14 += 4;
      *((_BYTE *)&v38 + v19) = v17;
    }
    goto LABEL_22;
  }
  v20 = (char *)a2 + 4;
  if ( a4 != 2 )
  {
    v37 = dword_140370120[*(unsigned int *)v20];
    v29 = v37 | (16 * v37);
    v30 = v29;
    v31 = v29;
    v32 = v29;
    v33 = v29;
    v34 = v29;
    v35 = v29;
    v36 = v29;
    goto LABEL_39;
  }
  v21 = *(unsigned int *)a2;
  v22 = *((_DWORD *)a2 + 2);
  v23 = (unsigned int *)&unk_14036FF20;
  if ( (unsigned int)v21 < v22 )
  {
    v24 = v20;
    v22 = v21;
    v20 = (char *)v5 + 12;
  }
  else
  {
    v23 = (unsigned int *)((char *)&unk_14036FF20 + 4 * v21);
    v24 = (char *)v5 + 12;
  }
  v25 = *v24;
  v38 = dword_140370120[*(unsigned int *)v20];
  v39 = v38;
  v40 = v38;
  v41 = v38;
  v42 = v38;
  v43 = v38;
  v44 = v38;
  v45 = v38;
  v46 = v38;
  v47 = v38;
  v48 = v38;
  v49 = v38;
  v50 = v38;
  v51 = v38;
  v52 = v38;
  v53 = v38;
  switch ( v22 & 3 )
  {
    case 1u:
      goto LABEL_33;
    case 2u:
LABEL_32:
      *((_BYTE *)&v38 + v23[1]) = v25;
LABEL_33:
      *((_BYTE *)&v38 + *v23) = v25;
      v23 += v22 & 3;
      break;
    case 3u:
      *((_BYTE *)&v38 + v23[2]) = v25;
      goto LABEL_32;
  }
  v26 = v22 >> 2;
  if ( v26 )
  {
    v27 = v23 + 2;
    do
    {
      *((_BYTE *)&v38 + *(v27 - 2)) = v25;
      *((_BYTE *)&v38 + *(v27 - 1)) = v25;
      v28 = *v27;
      v27 += 4;
      *((_BYTE *)&v38 + v28) = v25;
      *((_BYTE *)&v38 + *(v27 - 3)) = v25;
      --v26;
    }
    while ( v26 );
  }
LABEL_37:
  v29 = v53 | (16 * v52);
  v30 = v51 | (16 * v50);
  v31 = v49 | (16 * v48);
  v32 = v47 | (16 * v46);
  v33 = v45 | (16 * v44);
  v34 = v43 | (16 * v42);
  v35 = v41 | (16 * v40);
  v36 = v39 | (16 * v38);
LABEL_39:
  *a1 = v36;
  a1[1] = v35;
  a1[2] = v34;
  a1[3] = v33;
  a1[4] = v32;
  a1[5] = v31;
  a1[6] = v30;
  a1[7] = v29;
}
