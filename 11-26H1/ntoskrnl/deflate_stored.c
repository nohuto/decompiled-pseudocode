/*
 * XREFs of deflate_stored @ 0x14062BD90
 * Callers:
 *     deflate @ 0x14062A8EC (deflate.c)
 * Callees:
 *     flush_pending @ 0x14062C544 (flush_pending.c)
 *     read_buf @ 0x14062C848 (read_buf.c)
 *     _tr_stored_block @ 0x14063910C (_tr_stored_block.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall deflate_stored(_QWORD *a1, int a2)
{
  unsigned int v3; // r13d
  BOOL v5; // ebp
  unsigned int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // r14d
  unsigned int v10; // esi
  int v11; // edx
  _QWORD *v12; // rax
  unsigned int v13; // r15d
  __int64 v14; // rdx
  void *v15; // rcx
  unsigned int v16; // edx
  unsigned int v17; // eax
  __int64 v18; // rcx
  size_t v19; // r8
  char *v20; // rcx
  unsigned int v21; // eax
  int v22; // ecx
  unsigned int v23; // edx
  unsigned int v25; // ebx
  __int64 v26; // rax
  int v27; // ecx
  unsigned int v28; // edx
  char *v29; // rcx
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // esi
  int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ebx
  unsigned int v36; // ecx
  unsigned int v37; // eax
  __int64 v38; // rcx
  int v39; // [rsp+50h] [rbp+8h]

  v3 = *((_DWORD *)a1 + 37);
  if ( *((_DWORD *)a1 + 6) - 5 <= v3 )
    v3 = *((_DWORD *)a1 + 6) - 5;
  v5 = 0;
  v39 = *(_DWORD *)(*a1 + 8LL);
  do
  {
    v6 = (*((_DWORD *)a1 + 1496) + 42) >> 3;
    v7 = *(_DWORD *)(*a1 + 24LL);
    if ( v7 < v6 )
      break;
    v8 = v7 - v6;
    v9 = *((_DWORD *)a1 + 57) - *((_DWORD *)a1 + 53);
    v10 = 0xFFFF;
    v11 = *(_DWORD *)(*a1 + 8LL);
    if ( v11 + v9 < 0xFFFF )
      v10 = v11 + v9;
    if ( v10 > v8 )
      v10 = v8;
    if ( v10 < v3 )
    {
      if ( v10 )
      {
        if ( !a2 )
          break;
      }
      else if ( a2 != 4 )
      {
        break;
      }
      if ( v10 != v11 + v9 )
        break;
    }
    v5 = a2 == 4 && v10 == v11 + v9;
    tr_stored_block(a1, 0LL, 0LL, v5);
    *(_BYTE *)((unsigned int)(*((_DWORD *)a1 + 10) - 4) + a1[2]) = v10;
    *(_BYTE *)((unsigned int)(*((_DWORD *)a1 + 10) - 3) + a1[2]) = BYTE1(v10);
    *(_BYTE *)((unsigned int)(*((_DWORD *)a1 + 10) - 2) + a1[2]) = ~(_BYTE)v10;
    *(_BYTE *)((unsigned int)(*((_DWORD *)a1 + 10) - 1) + a1[2]) = (unsigned __int16)~(_WORD)v10 >> 8;
    flush_pending(*a1);
    if ( v9 )
    {
      if ( v9 > v10 )
        v9 = v10;
      memmove(*(void **)(*a1 + 16LL), (const void *)(a1[20] + *((int *)a1 + 53)), v9);
      *(_QWORD *)(*a1 + 16LL) += v9;
      *(_DWORD *)(*a1 + 24LL) -= v9;
      *(_DWORD *)(*a1 + 28LL) += v9;
      *((_DWORD *)a1 + 53) += v9;
      v10 -= v9;
    }
    if ( v10 )
    {
      read_buf(*a1, *(_QWORD *)(*a1 + 16LL), v10);
      *(_QWORD *)(*a1 + 16LL) += v10;
      *(_DWORD *)(*a1 + 24LL) -= v10;
      *(_DWORD *)(*a1 + 28LL) += v10;
    }
  }
  while ( !v5 );
  v12 = (_QWORD *)*a1;
  v13 = v39 - *(_DWORD *)(*a1 + 8LL);
  if ( v39 != *(_DWORD *)(*a1 + 8LL) )
  {
    v14 = *((unsigned int *)a1 + 37);
    if ( v13 < (unsigned int)v14 )
    {
      v18 = *((unsigned int *)a1 + 57);
      if ( *((_DWORD *)a1 + 42) - (int)v18 <= v13 )
      {
        v19 = (unsigned int)(v18 - v14);
        v20 = (char *)a1[20];
        *((_DWORD *)a1 + 57) = v19;
        memmove(v20, &v20[v14], v19);
        v21 = *((_DWORD *)a1 + 1493);
        if ( v21 < 2 )
          *((_DWORD *)a1 + 1493) = v21 + 1;
        v18 = *((unsigned int *)a1 + 57);
        if ( *((_DWORD *)a1 + 1494) > (unsigned int)v18 )
          *((_DWORD *)a1 + 1494) = v18;
      }
      memmove((void *)(a1[20] + v18), (const void *)(*(_QWORD *)*a1 - v13), v13);
      v22 = *((_DWORD *)a1 + 1494);
      v16 = v13 + *((_DWORD *)a1 + 57);
      if ( v13 > *((_DWORD *)a1 + 37) - v22 )
        v13 = *((_DWORD *)a1 + 37) - v22;
      v17 = v22 + v13;
    }
    else
    {
      v15 = (void *)a1[20];
      *((_DWORD *)a1 + 1493) = 2;
      memmove(v15, (const void *)(*v12 - (unsigned int)v14), (unsigned int)v14);
      v16 = *((_DWORD *)a1 + 37);
      v17 = v16;
    }
    *((_DWORD *)a1 + 57) = v16;
    *((_DWORD *)a1 + 1494) = v17;
    *((_DWORD *)a1 + 53) = v16;
  }
  v23 = *((_DWORD *)a1 + 57);
  if ( *((_DWORD *)a1 + 1497) < v23 )
    *((_DWORD *)a1 + 1497) = v23;
  if ( v5 )
    return 3LL;
  if ( (a2 & 0xFFFFFFFB) != 0 && !*(_DWORD *)(*a1 + 8LL) && v23 == *((_DWORD *)a1 + 53) )
    return 1LL;
  v25 = *((_DWORD *)a1 + 42) - v23;
  if ( *(_DWORD *)(*a1 + 8LL) > v25 )
  {
    v26 = *((unsigned int *)a1 + 37);
    v27 = *((_DWORD *)a1 + 53);
    if ( v27 >= (int)v26 )
    {
      v28 = v23 - v26;
      *((_DWORD *)a1 + 53) = v27 - v26;
      v29 = (char *)a1[20];
      *((_DWORD *)a1 + 57) = v28;
      memmove(v29, &v29[v26], v28);
      v30 = *((_DWORD *)a1 + 1493);
      if ( v30 < 2 )
        *((_DWORD *)a1 + 1493) = v30 + 1;
      v25 += *((_DWORD *)a1 + 37);
      v31 = *((_DWORD *)a1 + 57);
      if ( *((_DWORD *)a1 + 1494) > v31 )
        *((_DWORD *)a1 + 1494) = v31;
    }
  }
  v32 = *(_DWORD *)(*a1 + 8LL);
  if ( v25 <= v32 )
    v32 = v25;
  if ( v32 )
  {
    read_buf(*a1, a1[20] + *((unsigned int *)a1 + 57), v32);
    v33 = *((_DWORD *)a1 + 1494);
    *((_DWORD *)a1 + 57) += v32;
    if ( v32 > *((_DWORD *)a1 + 37) - v33 )
      v32 = *((_DWORD *)a1 + 37) - v33;
    *((_DWORD *)a1 + 1494) = v33 + v32;
  }
  v34 = *((_DWORD *)a1 + 57);
  if ( *((_DWORD *)a1 + 1497) < v34 )
    *((_DWORD *)a1 + 1497) = v34;
  v35 = *((_DWORD *)a1 + 6) - ((*((_DWORD *)a1 + 1496) + 42) >> 3);
  if ( v35 > 0xFFFF )
    v35 = 0xFFFF;
  v36 = v34 - *((_DWORD *)a1 + 53);
  v37 = *((_DWORD *)a1 + 37);
  if ( v35 <= v37 )
    v37 = v35;
  if ( v36 >= v37 )
  {
    if ( v36 > v35 )
      goto LABEL_74;
    goto LABEL_73;
  }
  if ( v36 )
  {
    if ( !a2 )
      return v5 ? 2 : 0;
  }
  else if ( a2 != 4 )
  {
    return v5 ? 2 : 0;
  }
  if ( !*(_DWORD *)(*a1 + 8LL) && v36 <= v35 )
  {
LABEL_73:
    v35 = v36;
LABEL_74:
    v5 = a2 == 4 && !*(_DWORD *)(*a1 + 8LL) && v35 == v36;
    tr_stored_block(a1, a1[20] + *((int *)a1 + 53), v35, v5);
    v38 = *a1;
    *((_DWORD *)a1 + 53) += v35;
    flush_pending(v38);
  }
  return v5 ? 2 : 0;
}
