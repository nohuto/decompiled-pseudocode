/*
 * XREFs of fill_window @ 0x18010B0DC
 * Callers:
 *     deflate_fast @ 0x180122510 (deflate_fast.c)
 *     deflate_huff @ 0x1801547D4 (deflate_huff.c)
 *     deflate_rle @ 0x180154944 (deflate_rle.c)
 *     deflate_slow @ 0x180154C00 (deflate_slow.c)
 * Callees:
 *     read_buf @ 0x1801210E0 (read_buf.c)
 *     slide_hash @ 0x1801559BC (slide_hash.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

void __fastcall fill_window(_QWORD *a1)
{
  unsigned int v1; // esi
  void **v2; // r15
  unsigned int *v3; // r14
  unsigned int v5; // edx
  unsigned int v6; // ebx
  int buf; // eax
  unsigned int v8; // r10d
  unsigned int v9; // r9d
  unsigned int v10; // eax
  unsigned int v11; // r11d
  void *v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int16 v16; // dx
  __int64 v17; // rdx
  unsigned int v18; // ebx
  unsigned int v19; // esi
  unsigned int v20; // ebx
  unsigned __int8 *v21; // rdx
  __int64 v22; // r11
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // rbx
  __int64 v26; // rdx
  int v27; // r8d
  unsigned int v28; // r9d
  __int64 v29; // rcx
  __int64 v30; // r9
  unsigned int v31; // ebx
  int v32; // edx
  __int64 v33; // rcx
  int v34; // r8d
  __int64 v35; // rax
  __int64 v36; // r8
  int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // [rsp+70h] [rbp+8h]

  v1 = *((_DWORD *)a1 + 37);
  v2 = (void **)(a1 + 20);
  v39 = v1;
  v3 = (unsigned int *)(a1 + 747);
  do
  {
    v5 = *((_DWORD *)a1 + 57);
    v6 = *((_DWORD *)a1 + 42) - v5 - *((_DWORD *)a1 + 59);
    if ( v5 >= v1 + *((_DWORD *)a1 + 37) - 262 )
    {
      memmove(*v2, (char *)*v2 + v1, v1 - v6);
      v37 = *((_DWORD *)a1 + 57);
      *((_DWORD *)a1 + 58) -= v1;
      v38 = v37 - v1;
      *((_DWORD *)a1 + 53) -= v1;
      *((_DWORD *)a1 + 57) = v38;
      if ( *v3 > v38 )
        *v3 = v38;
      slide_hash(a1);
      v6 += v1;
    }
    if ( !*(_DWORD *)(*a1 + 8LL) )
      break;
    buf = read_buf(*a1, (char *)*v2 + *((unsigned int *)a1 + 59) + (unsigned __int64)*((unsigned int *)a1 + 57), v6);
    v8 = *v3;
    v9 = buf + *((_DWORD *)a1 + 59);
    *((_DWORD *)a1 + 59) = v9;
    v10 = v9 + v8;
    if ( *((_DWORD *)a1 + 1498) )
    {
      if ( v10 > 3 )
      {
        v11 = *((_DWORD *)a1 + 57) - v8;
        do
        {
          if ( !v8 )
            break;
          v12 = *v2;
          if ( x86_cpu_enable_simd )
          {
            v13 = *(_DWORD *)((_BYTE *)v12 + (unsigned __int16)v11) & 0xFFFFFF;
            if ( *((int *)a1 + 63) < 6 )
              v13 = *(_DWORD *)((char *)v12 + (unsigned __int16)v11);
            v14 = *((_DWORD *)a1 + 51) & _mm_crc32_u32(0, v13);
            v15 = a1[23];
            v16 = *(_WORD *)(v15 + 2 * v14);
            *(_WORD *)(v15 + 2 * v14) = v11;
            *(_WORD *)(a1[22] + 2LL * ((unsigned int)(unsigned __int16)v11 & *((_DWORD *)a1 + 39))) = v16;
          }
          else
          {
            v32 = *((_DWORD *)a1 + 39);
            v33 = a1[22];
            v34 = *((unsigned __int8 *)v12 + (unsigned __int16)v11 + 2) ^ (*((_DWORD *)a1 + 48) << *((_DWORD *)a1 + 52));
            v35 = a1[23];
            v36 = *((_DWORD *)a1 + 51) & (unsigned int)v34;
            *((_DWORD *)a1 + 48) = v36;
            *(_WORD *)(v33 + 2LL * (v11 & (unsigned __int16)v32)) = *(_WORD *)(v35 + 2 * v36);
            *(_WORD *)(a1[23] + 2LL * *((unsigned int *)a1 + 48)) = v11;
          }
          --*v3;
          LOWORD(v11) = v11 + 1;
          v8 = *v3;
          v9 = *((_DWORD *)a1 + 59);
        }
        while ( *v3 + v9 > 3 );
      }
    }
    else if ( v10 >= 3 )
    {
      v21 = (unsigned __int8 *)*v2;
      v22 = *((_DWORD *)a1 + 57) - v8;
      v23 = *((_DWORD *)a1 + 52);
      v24 = *((unsigned __int8 *)*v2 + v22);
      *((_DWORD *)a1 + 48) = v24;
      v25 = (unsigned int)(v22 + 2);
      *((_DWORD *)a1 + 48) = *((_DWORD *)a1 + 51) & ((v24 << v23) ^ v21[(unsigned int)(v22 + 1)]);
      do
      {
        if ( !v8 )
          break;
        v26 = a1[23];
        v27 = *((_DWORD *)a1 + 39);
        v28 = *((unsigned __int8 *)*v2 + v25);
        v25 = (unsigned int)(v25 + 1);
        v29 = a1[22];
        v30 = *((_DWORD *)a1 + 51) & ((*((_DWORD *)a1 + 48) << *((_DWORD *)a1 + 52)) ^ v28);
        *((_DWORD *)a1 + 48) = v30;
        *(_WORD *)(v29 + 2LL * ((unsigned int)v22 & v27)) = *(_WORD *)(v26 + 2 * v30);
        *(_WORD *)(a1[23] + 2LL * *((unsigned int *)a1 + 48)) = v22;
        LODWORD(v22) = v22 + 1;
        v8 = --*v3;
        v9 = *((_DWORD *)a1 + 59);
      }
      while ( *v3 + v9 >= 3 );
      v1 = v39;
    }
  }
  while ( v9 < 0x106 && *(_DWORD *)(*a1 + 8LL) );
  v17 = *((unsigned int *)a1 + 1497);
  v18 = *((_DWORD *)a1 + 42);
  if ( (unsigned int)v17 < v18 )
  {
    v19 = *((_DWORD *)a1 + 57) + *((_DWORD *)a1 + 59);
    if ( (unsigned int)v17 >= v19 )
    {
      if ( (unsigned int)v17 < v19 + 258 )
      {
        v31 = v18 - v17;
        if ( v19 - (unsigned int)v17 + 258 <= v31 )
          v31 = v19 - v17 + 258;
        memset_thunk_772440563353939046((void *)(a1[20] + v17), 0, v31);
        *((_DWORD *)a1 + 1497) += v31;
      }
    }
    else
    {
      v20 = v18 - v19;
      if ( v20 > 0x102 )
        v20 = 258;
      memset_thunk_772440563353939046((void *)(a1[20] + v19), 0, v20);
      *((_DWORD *)a1 + 1497) = v20 + v19;
    }
  }
}
