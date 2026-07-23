/*
 * XREFs of _tr_flush_block @ 0x140638E50
 * Callers:
 *     deflate_fast @ 0x14062ADC0 (deflate_fast.c)
 *     deflate_huff @ 0x14062B310 (deflate_huff.c)
 *     deflate_rle @ 0x14062B480 (deflate_rle.c)
 *     deflate_slow @ 0x14062B740 (deflate_slow.c)
 * Callees:
 *     _tr_stored_block @ 0x14063910C (_tr_stored_block.c)
 *     bi_windup @ 0x140639294 (bi_windup.c)
 *     build_tree @ 0x1406392F4 (build_tree.c)
 *     compress_block @ 0x14063955C (compress_block.c)
 *     detect_data_type @ 0x14063993C (detect_data_type.c)
 *     init_block @ 0x140639C74 (init_block.c)
 *     scan_tree @ 0x140639DAC (scan_tree.c)
 *     send_all_trees @ 0x140639ECC (send_all_trees.c)
 */

__int64 __fastcall tr_flush_block(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // esi
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // r10
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // r14
  __int64 *v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 i; // rcx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // ecx
  int v23; // eax
  bool v24; // zf
  __int16 v25; // r10
  char v26; // cl
  __int64 v27; // rcx
  __int16 v28; // r8
  __int64 *v29; // rdx
  __int64 *v30; // r8
  __int64 v31; // rcx
  int v32; // edx
  __int16 v33; // r8
  int v34; // eax
  __int64 result; // rax

  v5 = a3;
  v8 = 0LL;
  if ( *(int *)(a1 + 252) <= 0 )
  {
    v22 = a3 + 5;
    v21 = a3 + 5;
    v14 = (__int64 *)(a1 + 2560);
    v13 = (__int64 *)(a1 + 268);
  }
  else
  {
    if ( *(_DWORD *)(*(_QWORD *)a1 + 72LL) == 2 )
    {
      v9 = detect_data_type(a1, a2, a3, 0LL);
      *(_DWORD *)(v10 + 72) = v9;
    }
    build_tree(a1, a1 + 2960, a3, v8);
    build_tree(a1, a1 + 2984, v11, v12);
    v13 = (__int64 *)(a1 + 268);
    scan_tree(a1, a1 + 268, *(unsigned int *)(a1 + 2968));
    v14 = (__int64 *)(a1 + 2560);
    scan_tree(v15, a1 + 2560, *(unsigned int *)(a1 + 2992));
    build_tree(v16, a1 + 3008, v17, v18);
    LODWORD(v8) = 18;
    for ( i = 18LL; i >= 3; --i )
    {
      if ( *(_WORD *)(a1 + 4LL * *((unsigned __int8 *)qword_1400385E8 + i) + 2806) )
        break;
      LODWORD(v8) = v8 - 1;
    }
    v20 = *(_DWORD *)(a1 + 5968) + 10;
    *(_DWORD *)(a1 + 5964) += v8 + 2 * v8 + 17;
    v21 = v20 >> 3;
    v22 = (unsigned int)(*(_DWORD *)(a1 + 5964) + 10) >> 3;
    if ( v21 <= v22 || *(_DWORD *)(a1 + 256) == 4 )
      v22 = v21;
  }
  if ( v5 + 4 <= v22 && a2 )
  {
    tr_stored_block(a1, a2, v5, a4);
  }
  else
  {
    v23 = *(_DWORD *)(a1 + 5984);
    v24 = v21 == v22;
    v25 = *(_WORD *)(a1 + 5980);
    v26 = v23;
    if ( v24 )
    {
      if ( v23 <= 13 )
      {
        v28 = v25 | (((_WORD)a4 + 2) << v23);
        *(_DWORD *)(a1 + 5984) = v23 + 3;
      }
      else
      {
        v27 = *(_QWORD *)(a1 + 16);
        *(_WORD *)(a1 + 5980) = v25 | (((_WORD)a4 + 2) << v23);
        *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v27) = *(_BYTE *)(a1 + 5980);
        *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
        LODWORD(v27) = *(_DWORD *)(a1 + 5984);
        ++*(_DWORD *)(a1 + 40);
        *(_DWORD *)(a1 + 5984) = v27 - 13;
        v28 = (unsigned __int16)(a4 + 2) >> (16 - v27);
      }
      *(_WORD *)(a1 + 5980) = v28;
      v29 = qword_140037F20;
      v30 = qword_140038570;
    }
    else
    {
      if ( v23 <= 13 )
      {
        v34 = v23 + 3;
        v33 = v25 | (((_WORD)a4 + 4) << v26);
      }
      else
      {
        v31 = *(_QWORD *)(a1 + 16);
        *(_WORD *)(a1 + 5980) = v25 | (((_WORD)a4 + 4) << v23);
        *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v31) = *(_BYTE *)(a1 + 5980);
        *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
        v32 = *(_DWORD *)(a1 + 5984);
        ++*(_DWORD *)(a1 + 40);
        v33 = (unsigned __int16)(a4 + 4) >> (16 - v32);
        v34 = v32 - 13;
      }
      *(_DWORD *)(a1 + 5984) = v34;
      *(_WORD *)(a1 + 5980) = v33;
      send_all_trees(
        a1,
        (unsigned int)(*(_DWORD *)(a1 + 2968) + 1),
        (unsigned int)(*(_DWORD *)(a1 + 2992) + 1),
        (unsigned int)(v8 + 1));
      v30 = v14;
      v29 = v13;
    }
    compress_block(a1, v29, v30);
  }
  result = init_block(a1);
  if ( a4 )
    return bi_windup();
  return result;
}
