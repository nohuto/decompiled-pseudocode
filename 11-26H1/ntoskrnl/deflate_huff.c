/*
 * XREFs of deflate_huff @ 0x14062B310
 * Callers:
 *     deflate @ 0x14062A8EC (deflate.c)
 * Callees:
 *     fill_window @ 0x14062C1F4 (fill_window.c)
 *     flush_pending @ 0x14062C544 (flush_pending.c)
 *     _tr_flush_block @ 0x140638E50 (_tr_flush_block.c)
 */

__int64 __fastcall deflate_huff(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned int v7; // eax
  int v8; // r8d
  int v9; // r8d
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v15; // eax
  __int64 v16; // rcx

  v1 = 0LL;
  while ( 1 )
  {
    if ( !*((_DWORD *)a1 + 59) )
    {
      fill_window(a1);
      if ( !*((_DWORD *)a1 + 59) )
        break;
    }
    v3 = *((unsigned int *)a1 + 57);
    v4 = 2LL;
    v5 = a1[20];
    *((_DWORD *)a1 + 54) = 0;
    v6 = *(unsigned __int8 *)(v3 + v5);
    do
    {
      *(_BYTE *)(*((unsigned int *)a1 + 1489) + a1[743]) = 0;
      v7 = *((_DWORD *)a1 + 1489) + 1;
      *((_DWORD *)a1 + 1489) = v7;
      --v4;
    }
    while ( v4 );
    *(_BYTE *)(v7 + a1[743]) = v6;
    ++*((_DWORD *)a1 + 1489);
    ++*((_WORD *)a1 + 2 * v6 + 134);
    v8 = *((_DWORD *)a1 + 57);
    --*((_DWORD *)a1 + 59);
    v9 = v8 + 1;
    v10 = *((_DWORD *)a1 + 1490);
    *((_DWORD *)a1 + 57) = v9;
    if ( *((_DWORD *)a1 + 1489) == v10 )
    {
      v11 = *((_DWORD *)a1 + 53);
      v12 = v11 < 0 ? 0LL : a1[20] + (unsigned int)v11;
      tr_flush_block(a1, v12, (unsigned int)(v9 - v11), 0LL);
      v13 = *a1;
      *((_DWORD *)a1 + 53) = *((_DWORD *)a1 + 57);
      flush_pending(v13);
      if ( !*(_DWORD *)(*a1 + 24) )
        return 0LL;
    }
  }
  v15 = *((_DWORD *)a1 + 53);
  *((_DWORD *)a1 + 1494) = 0;
  if ( v15 >= 0 )
    v1 = a1[20] + (unsigned int)v15;
  tr_flush_block(a1, v1, (unsigned int)(*((_DWORD *)a1 + 57) - v15), 1LL);
  v16 = *a1;
  *((_DWORD *)a1 + 53) = *((_DWORD *)a1 + 57);
  flush_pending(v16);
  return (unsigned int)(*(_DWORD *)(*a1 + 24) != 0) + 2;
}
