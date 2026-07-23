/*
 * XREFs of deflate_rle @ 0x180154944
 * Callers:
 *     deflate @ 0x180154300 (deflate.c)
 * Callees:
 *     fill_window @ 0x18010B0DC (fill_window.c)
 *     flush_pending @ 0x1801556B4 (flush_pending.c)
 *     _tr_flush_block @ 0x180156884 (_tr_flush_block.c)
 */

__int64 __fastcall deflate_rle(__int64 *a1)
{
  __int64 v1; // rdi
  unsigned int v3; // eax
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  char v7; // cl
  _BYTE *v8; // rax
  unsigned int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // eax
  bool v17; // zf
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v22; // eax
  __int64 v23; // rcx

  v1 = 0LL;
  while ( 1 )
  {
    v3 = *((_DWORD *)a1 + 59);
    if ( v3 <= 0x102 )
    {
      fill_window(a1);
      v3 = *((_DWORD *)a1 + 59);
      if ( !v3 )
        break;
    }
    *((_DWORD *)a1 + 54) = 0;
    if ( v3 < 3 )
      goto LABEL_22;
    v4 = *((unsigned int *)a1 + 57);
    if ( !(_DWORD)v4 )
      goto LABEL_22;
    v5 = a1[20];
    v6 = (unsigned int)v4;
    v7 = *(_BYTE *)(v5 + v4 - 1);
    if ( v7 != *(_BYTE *)(v5 + v4) )
      goto LABEL_22;
    if ( v7 != *(_BYTE *)(v5 + v4 + 1) )
      goto LABEL_22;
    v8 = (_BYTE *)((unsigned int)v4 + v5 + 2);
    if ( v7 != *v8 )
      goto LABEL_22;
    do
    {
      if ( v7 != *++v8 )
        break;
      if ( v7 != *++v8 )
        break;
      if ( v7 != *++v8 )
        break;
      if ( v7 != *++v8 )
        break;
      if ( v7 != *++v8 )
        break;
      if ( v7 != *++v8 )
        break;
      if ( v7 != *++v8 )
        break;
      if ( v7 != *++v8 )
        break;
    }
    while ( (unsigned __int64)v8 < v6 + v5 + 258 );
    v9 = *((_DWORD *)a1 + 59);
    v10 = (_DWORD)v8 - (v6 + v5);
    *((_DWORD *)a1 + 54) = v10;
    if ( v10 > v9 )
    {
      *((_DWORD *)a1 + 54) = v9;
      v10 = v9;
    }
    if ( v10 >= 3 )
    {
      v11 = (unsigned __int8)(*((_BYTE *)a1 + 216) - 3);
      *(_BYTE *)((unsigned int)(*((_DWORD *)a1 + 1489))++ + a1[743]) = 1;
      *(_BYTE *)((unsigned int)(*((_DWORD *)a1 + 1489))++ + a1[743]) = 0;
      *(_BYTE *)((unsigned int)(*((_DWORD *)a1 + 1489))++ + a1[743]) = v11;
      ++*((_WORD *)a1 + 2 * length_code[v11] + 648);
      ++*((_WORD *)a1 + 1280);
      v12 = *((_DWORD *)a1 + 54);
      *((_DWORD *)a1 + 59) -= v12;
      v13 = v12 + *((_DWORD *)a1 + 57);
      *((_DWORD *)a1 + 54) = 0;
    }
    else
    {
LABEL_22:
      v14 = 2LL;
      v15 = *(unsigned __int8 *)(*((unsigned int *)a1 + 57) + a1[20]);
      do
      {
        *(_BYTE *)(*((unsigned int *)a1 + 1489) + a1[743]) = 0;
        v16 = *((_DWORD *)a1 + 1489) + 1;
        *((_DWORD *)a1 + 1489) = v16;
        --v14;
      }
      while ( v14 );
      *(_BYTE *)(v16 + a1[743]) = v15;
      ++*((_DWORD *)a1 + 1489);
      ++*((_WORD *)a1 + 2 * v15 + 134);
      --*((_DWORD *)a1 + 59);
      v13 = *((_DWORD *)a1 + 57) + 1;
    }
    v17 = *((_DWORD *)a1 + 1489) == *((_DWORD *)a1 + 1490);
    *((_DWORD *)a1 + 57) = v13;
    if ( v17 )
    {
      v18 = *((_DWORD *)a1 + 53);
      v19 = v18 < 0 ? 0LL : a1[20] + (unsigned int)v18;
      tr_flush_block(a1, v19, (unsigned int)(v13 - v18), 0LL);
      v20 = *a1;
      *((_DWORD *)a1 + 53) = *((_DWORD *)a1 + 57);
      flush_pending(v20);
      if ( !*(_DWORD *)(*a1 + 24) )
        return 0LL;
    }
  }
  v22 = *((_DWORD *)a1 + 53);
  *((_DWORD *)a1 + 1494) = 0;
  if ( v22 >= 0 )
    v1 = a1[20] + (unsigned int)v22;
  tr_flush_block(a1, v1, (unsigned int)(*((_DWORD *)a1 + 57) - v22), 1LL);
  v23 = *a1;
  *((_DWORD *)a1 + 53) = *((_DWORD *)a1 + 57);
  flush_pending(v23);
  return (unsigned int)(*(_DWORD *)(*a1 + 24) != 0) + 2;
}
