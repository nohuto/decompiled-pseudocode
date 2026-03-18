/*
 * XREFs of ?vDitherColor8bpp@@YAXPEAKPEAU_VERTEX_DATA@@1K@Z @ 0x14031ADA4
 * Callers:
 *     EngDitherColor @ 0x140291900 (EngDitherColor.c)
 * Callees:
 *     <none>
 */

void __fastcall vDitherColor8bpp(unsigned int *a1, struct _VERTEX_DATA *a2, struct _VERTEX_DATA *a3, unsigned int a4)
{
  struct _VERTEX_DATA *v5; // r11
  __int64 v7; // r8
  unsigned int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // r9d
  __int64 v11; // rdx
  struct _VERTEX_DATA *v12; // rdx
  struct _VERTEX_DATA *v13; // r8
  unsigned int *v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rcx
  char v19; // r8
  unsigned int i; // ecx
  __int64 v21; // rax
  unsigned int *v22; // rcx
  __int64 v23; // rax
  unsigned int *v24; // r11
  unsigned int v25; // r8d
  unsigned int *v26; // rdx
  unsigned int *v27; // rdi
  char v28; // r9
  unsigned int v29; // ecx
  unsigned int v30; // r8d
  unsigned int *v31; // rdx
  __int64 v32; // rax
  unsigned int v33; // ecx

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
    v14 = (unsigned int *)&unk_140370020;
    v15 = *((unsigned int *)v13 + 1);
    *((_DWORD *)v13 + 1) = 255;
    v16 = dword_140370160[v15];
    *a1 = v16;
    a1[1] = v16;
    a1[2] = v16;
    a1[3] = v16;
    a1[4] = v16;
    a1[5] = v16;
    a1[6] = v16;
    a1[7] = v16;
    a1[8] = v16;
    a1[9] = v16;
    a1[10] = v16;
    a1[11] = v16;
    a1[12] = v16;
    a1[13] = v16;
    a1[14] = v16;
    a1[15] = v16;
    while ( 1 )
    {
      v17 = *((unsigned int *)v5 + 1);
      v18 = *(unsigned int *)v5;
      if ( (_DWORD)v17 != 255 )
        break;
      v14 += v18;
LABEL_22:
      v5 = (struct _VERTEX_DATA *)((char *)v5 + 8);
      if ( v5 >= a3 )
        return;
    }
    v19 = byte_14036FE10[v17];
    if ( (*(_DWORD *)v5 & 3) != 1 )
    {
      if ( (*(_DWORD *)v5 & 3) != 2 )
      {
        if ( (*(_DWORD *)v5 & 3) != 3 )
          goto LABEL_20;
        *((_BYTE *)a1 + v14[2]) = v19;
      }
      *((_BYTE *)a1 + v14[1]) = v19;
    }
    *((_BYTE *)a1 + *v14) = v19;
    v14 += v18 & 3;
LABEL_20:
    for ( i = (unsigned int)v18 >> 2; i; --i )
    {
      *((_BYTE *)a1 + *v14) = v19;
      *((_BYTE *)a1 + v14[1]) = v19;
      *((_BYTE *)a1 + v14[2]) = v19;
      v21 = v14[3];
      v14 += 4;
      *((_BYTE *)a1 + v21) = v19;
    }
    goto LABEL_22;
  }
  v22 = (unsigned int *)((char *)a2 + 4);
  if ( a4 != 2 )
  {
    v33 = dword_140370160[*v22];
    *a1 = v33;
    a1[1] = v33;
    a1[2] = v33;
    a1[3] = v33;
    a1[4] = v33;
    a1[5] = v33;
    a1[6] = v33;
    a1[7] = v33;
    a1[8] = v33;
    a1[9] = v33;
    a1[10] = v33;
    a1[11] = v33;
    a1[12] = v33;
    a1[13] = v33;
    a1[14] = v33;
    a1[15] = v33;
    return;
  }
  v23 = *(unsigned int *)a2;
  v24 = (unsigned int *)((char *)a2 + 12);
  v25 = *((_DWORD *)a2 + 2);
  v26 = (unsigned int *)&unk_140370020;
  if ( (unsigned int)v23 < v25 )
  {
    v27 = v24;
    v25 = v23;
    v24 = v22;
  }
  else
  {
    v26 = (unsigned int *)((char *)&unk_140370020 + 4 * v23);
    v27 = v22;
  }
  v28 = byte_14036FE10[*v24];
  v29 = dword_140370160[*v27];
  *a1 = v29;
  a1[1] = v29;
  a1[2] = v29;
  a1[3] = v29;
  a1[4] = v29;
  a1[5] = v29;
  a1[6] = v29;
  a1[7] = v29;
  a1[8] = v29;
  a1[9] = v29;
  a1[10] = v29;
  a1[11] = v29;
  a1[12] = v29;
  a1[13] = v29;
  a1[14] = v29;
  a1[15] = v29;
  if ( (v25 & 3) != 1 )
  {
    if ( (v25 & 3) != 2 )
    {
      if ( (v25 & 3) != 3 )
        goto LABEL_34;
      *((_BYTE *)a1 + v26[2]) = v28;
    }
    *((_BYTE *)a1 + v26[1]) = v28;
  }
  *((_BYTE *)a1 + *v26) = v28;
  v26 += v25 & 3;
LABEL_34:
  v30 = v25 >> 2;
  if ( v30 )
  {
    v31 = v26 + 2;
    do
    {
      *((_BYTE *)a1 + *(v31 - 2)) = v28;
      *((_BYTE *)a1 + *(v31 - 1)) = v28;
      v32 = *v31;
      v31 += 4;
      *((_BYTE *)a1 + v32) = v28;
      *((_BYTE *)a1 + *(v31 - 3)) = v28;
      --v30;
    }
    while ( v30 );
  }
}
