/*
 * XREFs of ?vDitherColor4bpp@@YAXPEAKPEAU_VERTEX_DATA@@1K@Z @ 0x140303370
 * Callers:
 *     EngDitherColor @ 0x140303920 (EngDitherColor.c)
 * Callees:
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall vDitherColor4bpp(unsigned int *a1, struct _VERTEX_DATA *a2, struct _VERTEX_DATA *a3, unsigned int a4)
{
  struct _VERTEX_DATA *v5; // r10
  struct _VERTEX_DATA *v7; // r8
  unsigned int v8; // ecx
  unsigned int v9; // r9d
  struct _VERTEX_DATA *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rax
  unsigned int *v13; // rcx
  unsigned int v14; // edx
  char v15; // r8
  unsigned int i; // edx
  __int64 v17; // rax
  unsigned int *v18; // rbx
  __int64 v19; // r9
  char *v20; // r10
  unsigned int v21; // r8d
  int v22; // edx
  unsigned int *v23; // rcx
  __int64 v24; // rax
  char v25; // r9
  unsigned int v26; // r8d
  unsigned int *v27; // rcx
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
    v7 = (struct _VERTEX_DATA *)((char *)a2 + 16);
    if ( a4 == 3 )
    {
      v8 = *((_DWORD *)a2 + 2);
      v9 = v8;
      if ( v8 < *(_DWORD *)v7 )
        v9 = *(_DWORD *)v7;
      v7 = (struct _VERTEX_DATA *)((char *)a2 + (v8 < *(_DWORD *)v7 ? 16LL : 8LL));
    }
    else
    {
      v9 = *(_DWORD *)v7;
      if ( *(_DWORD *)v7 < *((_DWORD *)a2 + 6) )
      {
        v7 = (struct _VERTEX_DATA *)((char *)a2 + 24);
        v9 = *((_DWORD *)a2 + 6);
      }
    }
    v10 = (struct _VERTEX_DATA *)((char *)a2 + 8);
    v11 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 <= v9 )
    {
      v11 = v9;
      v10 = v7;
    }
    if ( *(_DWORD *)v5 > v11 )
      v10 = v5;
    v12 = *((unsigned int *)v10 + 1);
    *((_DWORD *)v10 + 1) = 255;
    v38 = dword_140362CC0[v12];
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
    v13 = (unsigned int *)&unk_140362AF0;
    while ( *((_DWORD *)v5 + 1) == 255 )
    {
      v13 += *(unsigned int *)v5;
LABEL_23:
      v5 = (struct _VERTEX_DATA *)((char *)v5 + 8);
      if ( v5 >= a3 )
        goto LABEL_38;
    }
    v14 = *(_DWORD *)v5;
    v15 = *((_BYTE *)v5 + 4);
    if ( (*(_DWORD *)v5 & 3) != 1 )
    {
      if ( (*(_DWORD *)v5 & 3) != 2 )
      {
        if ( (*(_DWORD *)v5 & 3) != 3 )
          goto LABEL_21;
        *((_BYTE *)&v38 + v13[2]) = v15;
      }
      *((_BYTE *)&v38 + v13[1]) = v15;
    }
    *((_BYTE *)&v38 + *v13) = v15;
    v13 += v14 & 3;
LABEL_21:
    for ( i = v14 >> 2; i; --i )
    {
      *((_BYTE *)&v38 + *v13) = v15;
      *((_BYTE *)&v38 + v13[1]) = v15;
      *((_BYTE *)&v38 + v13[2]) = v15;
      v17 = v13[3];
      v13 += 4;
      *((_BYTE *)&v38 + v17) = v15;
    }
    goto LABEL_23;
  }
  v18 = (unsigned int *)((char *)a2 + 4);
  if ( a4 != 2 )
  {
    v37 = dword_140362CC0[*v18];
    v29 = v37 | (16 * v37);
    v30 = v29;
    v31 = v29;
    v32 = v29;
    v33 = v29;
    v34 = v29;
    v35 = v29;
    v36 = v29;
    goto LABEL_40;
  }
  v19 = *(unsigned int *)a2;
  v20 = (char *)a2 + 12;
  v21 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)v19 < v21 )
  {
    v24 = *(unsigned int *)v20;
    v21 = *(_DWORD *)a2;
    v20 = (char *)a2 + 4;
    v22 = dword_140362CC0[v24];
    v23 = (unsigned int *)&unk_140362AF0;
  }
  else
  {
    v22 = dword_140362CC0[*v18];
    v23 = (unsigned int *)((char *)&unk_140362AF0 + 4 * v19);
  }
  v25 = *v20;
  v38 = v22;
  v39 = v22;
  v40 = v22;
  v41 = v22;
  v42 = v22;
  v43 = v22;
  v44 = v22;
  v45 = v22;
  v46 = v22;
  v47 = v22;
  v48 = v22;
  v49 = v22;
  v50 = v22;
  v51 = v22;
  v52 = v22;
  v53 = v22;
  switch ( v21 & 3 )
  {
    case 1u:
      goto LABEL_34;
    case 2u:
LABEL_33:
      *((_BYTE *)&v38 + v23[1]) = v25;
LABEL_34:
      *((_BYTE *)&v38 + *v23) = v25;
      v23 += v21 & 3;
      break;
    case 3u:
      *((_BYTE *)&v38 + v23[2]) = v25;
      goto LABEL_33;
  }
  v26 = v21 >> 2;
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
LABEL_38:
  v29 = v53 | (16 * v52);
  v30 = v51 | (16 * v50);
  v31 = v49 | (16 * v48);
  v32 = v47 | (16 * v46);
  v33 = v45 | (16 * v44);
  v34 = v43 | (16 * v42);
  v35 = v41 | (16 * v40);
  v36 = v39 | (16 * v38);
LABEL_40:
  *a1 = v36;
  a1[1] = v35;
  a1[2] = v34;
  a1[3] = v33;
  a1[4] = v32;
  a1[5] = v31;
  a1[6] = v30;
  a1[7] = v29;
}
