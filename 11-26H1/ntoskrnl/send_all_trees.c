/*
 * XREFs of send_all_trees @ 0x140639ECC
 * Callers:
 *     _tr_flush_block @ 0x140638E50 (_tr_flush_block.c)
 * Callees:
 *     send_tree @ 0x14063A124 (send_tree.c)
 */

__int64 __fastcall send_all_trees(__int64 a1, int a2, int a3, unsigned int a4)
{
  __int64 v5; // rsi
  int v6; // ecx
  _DWORD *v9; // r9
  __int64 *v10; // r11
  __int16 v11; // ax
  int v12; // eax
  __int16 v13; // r10
  int v14; // edx
  __int16 v15; // ax
  int v16; // eax
  __int16 v17; // di
  int v18; // r10d
  __int64 v19; // rcx
  int v20; // edx
  __int16 v21; // r8
  int v22; // eax
  __int64 *v23; // r10
  __int64 v24; // rdi
  __int16 v25; // dx
  int v26; // ecx
  __int64 v27; // rax
  unsigned __int16 v28; // r8
  __int16 v29; // ax
  __int64 v30; // rcx
  __int16 v31; // ax
  __int64 v32; // rdx
  int v33; // eax

  v5 = a4;
  v6 = *(_DWORD *)(a1 + 5984);
  v9 = (_DWORD *)(a1 + 40);
  v10 = (__int64 *)(a1 + 16);
  v11 = *(_WORD *)(a1 + 5980) | (((_WORD)a2 - 257) << v6);
  *(_WORD *)(a1 + 5980) = v11;
  if ( v6 <= 11 )
  {
    v14 = v6 + 5;
    v13 = v11;
  }
  else
  {
    *(_BYTE *)((unsigned int)(*v9)++ + *v10) = v11;
    *(_BYTE *)((unsigned int)*v9 + *v10) = *(_BYTE *)(a1 + 5981);
    v12 = *(_DWORD *)(a1 + 5984);
    ++*v9;
    v13 = (unsigned __int16)(a2 - 257) >> (16 - v12);
    v14 = v12 - 11;
  }
  *(_DWORD *)(a1 + 5984) = v14;
  v15 = v13 | (((_WORD)a3 - 1) << v14);
  *(_WORD *)(a1 + 5980) = v15;
  if ( v14 <= 11 )
  {
    v18 = v14 + 5;
    v17 = v15;
  }
  else
  {
    *(_BYTE *)((unsigned int)(*v9)++ + *v10) = v15;
    *(_BYTE *)((unsigned int)*v9 + *v10) = *(_BYTE *)(a1 + 5981);
    v16 = *(_DWORD *)(a1 + 5984);
    ++*v9;
    v17 = (unsigned __int16)(a3 - 1) >> (16 - v16);
    v18 = v16 - 11;
  }
  *(_DWORD *)(a1 + 5984) = v18;
  if ( v18 <= 12 )
  {
    v22 = v18 + 4;
    v21 = v17 | (((_WORD)v5 - 4) << v18);
  }
  else
  {
    v19 = *v10;
    *(_WORD *)(a1 + 5980) = v17 | (((_WORD)v5 - 4) << v18);
    *(_BYTE *)((unsigned int)(*v9)++ + v19) = *(_BYTE *)(a1 + 5980);
    *(_BYTE *)((unsigned int)*v9 + *v10) = *(_BYTE *)(a1 + 5981);
    v20 = *(_DWORD *)(a1 + 5984);
    ++*v9;
    v21 = (unsigned __int16)(v5 - 4) >> (16 - v20);
    v22 = v20 - 12;
  }
  *(_DWORD *)(a1 + 5984) = v22;
  *(_WORD *)(a1 + 5980) = v21;
  if ( (int)v5 > 0 )
  {
    v23 = qword_1400385E8;
    v24 = v5;
    v25 = v21;
    do
    {
      v26 = *(_DWORD *)(a1 + 5984);
      v27 = *(unsigned __int8 *)v23;
      if ( v26 <= 13 )
      {
        v21 |= *(_WORD *)(a1 + 4 * v27 + 2806) << v26;
        v33 = v26 + 3;
      }
      else
      {
        v28 = *(_WORD *)(a1 + 4 * v27 + 2806);
        v29 = v28 << v26;
        v30 = *v10;
        v31 = v25 | v29;
        v32 = (unsigned int)*v9;
        *(_WORD *)(a1 + 5980) = v31;
        *(_BYTE *)(v32 + v30) = v31;
        *(_BYTE *)((unsigned int)++*v9 + *v10) = *(_BYTE *)(a1 + 5981);
        LODWORD(v32) = *(_DWORD *)(a1 + 5984);
        ++*v9;
        v21 = v28 >> (16 - v32);
        v33 = v32 - 13;
      }
      v23 = (__int64 *)((char *)v23 + 1);
      *(_DWORD *)(a1 + 5984) = v33;
      *(_WORD *)(a1 + 5980) = v21;
      v25 = v21;
      --v24;
    }
    while ( v24 );
  }
  send_tree(a1, a1 + 268, (unsigned int)(a2 - 1));
  return send_tree(a1, a1 + 2560, (unsigned int)(a3 - 1));
}
