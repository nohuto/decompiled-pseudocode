/*
 * XREFs of _tr_flush_block @ 0x180156884
 * Callers:
 *     deflate_fast @ 0x180122510 (deflate_fast.c)
 *     deflate_huff @ 0x1801547D4 (deflate_huff.c)
 *     deflate_rle @ 0x180154944 (deflate_rle.c)
 *     deflate_slow @ 0x180154C00 (deflate_slow.c)
 * Callees:
 *     build_tree @ 0x18011E880 (build_tree.c)
 *     scan_tree @ 0x180123FE0 (scan_tree.c)
 *     _tr_stored_block @ 0x180156B40 (_tr_stored_block.c)
 *     bi_windup @ 0x180156CC8 (bi_windup.c)
 *     compress_block @ 0x180156D28 (compress_block.c)
 *     detect_data_type @ 0x180157108 (detect_data_type.c)
 *     init_block @ 0x18015718C (init_block.c)
 *     send_all_trees @ 0x180157204 (send_all_trees.c)
 */

__int64 __fastcall tr_flush_block(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // esi
  int v8; // r9d
  int v9; // eax
  __int64 v10; // r10
  void *v11; // r14
  void *v12; // r15
  _WORD *v13; // rcx
  int *v14; // rcx
  __int64 i; // rcx
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  int v19; // eax
  bool v20; // zf
  __int16 v21; // r10
  char v22; // cl
  __int64 v23; // rcx
  __int16 v24; // r8
  void *v25; // rdx
  void *v26; // r8
  __int64 v27; // rcx
  int v28; // edx
  __int16 v29; // r8
  int v30; // eax
  __int64 result; // rax

  v5 = a3;
  v8 = 0;
  if ( *(int *)(a1 + 252) <= 0 )
  {
    v18 = a3 + 5;
    v17 = a3 + 5;
    v12 = (void *)(a1 + 2560);
    v11 = (void *)(a1 + 268);
  }
  else
  {
    if ( *(_DWORD *)(*(_QWORD *)a1 + 72LL) == 2 )
    {
      v9 = detect_data_type(a1, a2, a3, 0LL);
      *(_DWORD *)(v10 + 72) = v9;
    }
    build_tree((int *)a1, a1 + 2960);
    build_tree((int *)a1, a1 + 2984);
    v11 = (void *)(a1 + 268);
    scan_tree((_WORD *)a1, a1 + 268, *(_DWORD *)(a1 + 2968));
    v12 = (void *)(a1 + 2560);
    scan_tree(v13, a1 + 2560, *(_DWORD *)(a1 + 2992));
    build_tree(v14, a1 + 3008);
    v8 = 18;
    for ( i = 18LL; i >= 3; --i )
    {
      if ( *(_WORD *)(a1 + 4LL * byte_180191F90[i] + 2806) )
        break;
      --v8;
    }
    v16 = *(_DWORD *)(a1 + 5968) + 10;
    *(_DWORD *)(a1 + 5964) += v8 + 2 * v8 + 17;
    v17 = v16 >> 3;
    v18 = (unsigned int)(*(_DWORD *)(a1 + 5964) + 10) >> 3;
    if ( v17 <= v18 || *(_DWORD *)(a1 + 256) == 4 )
      v18 = v17;
  }
  if ( v5 + 4 <= v18 && a2 )
  {
    tr_stored_block(a1, a2, v5, a4);
  }
  else
  {
    v19 = *(_DWORD *)(a1 + 5984);
    v20 = v17 == v18;
    v21 = *(_WORD *)(a1 + 5980);
    v22 = v19;
    if ( v20 )
    {
      if ( v19 <= 13 )
      {
        v24 = v21 | (((_WORD)a4 + 2) << v19);
        *(_DWORD *)(a1 + 5984) = v19 + 3;
      }
      else
      {
        v23 = *(_QWORD *)(a1 + 16);
        *(_WORD *)(a1 + 5980) = v21 | (((_WORD)a4 + 2) << v19);
        *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v23) = *(_BYTE *)(a1 + 5980);
        *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
        LODWORD(v23) = *(_DWORD *)(a1 + 5984);
        ++*(_DWORD *)(a1 + 40);
        *(_DWORD *)(a1 + 5984) = v23 - 13;
        v24 = (unsigned __int16)(a4 + 2) >> (16 - v23);
      }
      *(_WORD *)(a1 + 5980) = v24;
      v25 = &unk_180191B10;
      v26 = &unk_180191840;
    }
    else
    {
      if ( v19 <= 13 )
      {
        v30 = v19 + 3;
        v29 = v21 | (((_WORD)a4 + 4) << v22);
      }
      else
      {
        v27 = *(_QWORD *)(a1 + 16);
        *(_WORD *)(a1 + 5980) = v21 | (((_WORD)a4 + 4) << v19);
        *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v27) = *(_BYTE *)(a1 + 5980);
        *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
        v28 = *(_DWORD *)(a1 + 5984);
        ++*(_DWORD *)(a1 + 40);
        v29 = (unsigned __int16)(a4 + 4) >> (16 - v28);
        v30 = v28 - 13;
      }
      *(_DWORD *)(a1 + 5984) = v30;
      *(_WORD *)(a1 + 5980) = v29;
      send_all_trees(
        a1,
        (unsigned int)(*(_DWORD *)(a1 + 2968) + 1),
        (unsigned int)(*(_DWORD *)(a1 + 2992) + 1),
        (unsigned int)(v8 + 1));
      v26 = v12;
      v25 = v11;
    }
    compress_block(a1, v25, v26);
  }
  result = init_block(a1);
  if ( a4 )
    return bi_windup();
  return result;
}
