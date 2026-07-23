/*
 * XREFs of fill_window @ 0x14062C1F4
 * Callers:
 *     deflate_fast @ 0x14062ADC0 (deflate_fast.c)
 *     deflate_huff @ 0x14062B310 (deflate_huff.c)
 *     deflate_rle @ 0x14062B480 (deflate_rle.c)
 *     deflate_slow @ 0x14062B740 (deflate_slow.c)
 * Callees:
 *     read_buf @ 0x14062C848 (read_buf.c)
 *     slide_hash @ 0x14062C8CC (slide_hash.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall fill_window(_QWORD *a1)
{
  unsigned int v1; // esi
  void **v2; // r15
  unsigned int *v3; // r14
  unsigned int v5; // edx
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // eax
  int buf; // eax
  unsigned int v10; // r10d
  unsigned int v11; // r9d
  unsigned int v12; // eax
  unsigned int v13; // r11d
  void *v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int16 v18; // dx
  int v19; // edx
  __int64 v20; // rcx
  int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned __int8 *v24; // rdx
  __int64 v25; // r11
  int v26; // ecx
  int v27; // r8d
  __int64 v28; // rbx
  __int64 v29; // rdx
  int v30; // r8d
  unsigned int v31; // r9d
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // rdx
  unsigned int v35; // ebx
  unsigned int v36; // esi
  unsigned int v37; // ebx
  unsigned int v38; // ebx
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
      v7 = *((_DWORD *)a1 + 57);
      *((_DWORD *)a1 + 58) -= v1;
      v8 = v7 - v1;
      *((_DWORD *)a1 + 53) -= v1;
      *((_DWORD *)a1 + 57) = v8;
      if ( *v3 > v8 )
        *v3 = v8;
      slide_hash(a1);
      v6 += v1;
    }
    if ( !*(_DWORD *)(*a1 + 8LL) )
      break;
    buf = read_buf(*a1, (char *)*v2 + *((unsigned int *)a1 + 59) + (unsigned __int64)*((unsigned int *)a1 + 57), v6);
    v10 = *v3;
    v11 = buf + *((_DWORD *)a1 + 59);
    *((_DWORD *)a1 + 59) = v11;
    v12 = v11 + v10;
    if ( *((_DWORD *)a1 + 1498) )
    {
      if ( v12 > 3 )
      {
        v13 = *((_DWORD *)a1 + 57) - v10;
        do
        {
          if ( !v10 )
            break;
          v14 = *v2;
          if ( HIDWORD(RtlpBootStatHandleLock.StackLimit) )
          {
            v15 = *(_DWORD *)((_BYTE *)v14 + (unsigned __int16)v13) & 0xFFFFFF;
            if ( *((int *)a1 + 63) < 6 )
              v15 = *(_DWORD *)((char *)v14 + (unsigned __int16)v13);
            v16 = *((_DWORD *)a1 + 51) & _mm_crc32_u32(0, v15);
            v17 = a1[23];
            v18 = *(_WORD *)(v17 + 2 * v16);
            *(_WORD *)(v17 + 2 * v16) = v13;
            *(_WORD *)(a1[22] + 2LL * ((unsigned int)(unsigned __int16)v13 & *((_DWORD *)a1 + 39))) = v18;
          }
          else
          {
            v19 = *((_DWORD *)a1 + 39);
            v20 = a1[22];
            v21 = *((unsigned __int8 *)v14 + (unsigned __int16)v13 + 2) ^ (*((_DWORD *)a1 + 48) << *((_DWORD *)a1 + 52));
            v22 = a1[23];
            v23 = *((_DWORD *)a1 + 51) & (unsigned int)v21;
            *((_DWORD *)a1 + 48) = v23;
            *(_WORD *)(v20 + 2LL * (v13 & (unsigned __int16)v19)) = *(_WORD *)(v22 + 2 * v23);
            *(_WORD *)(a1[23] + 2LL * *((unsigned int *)a1 + 48)) = v13;
          }
          --*v3;
          LOWORD(v13) = v13 + 1;
          v10 = *v3;
          v11 = *((_DWORD *)a1 + 59);
        }
        while ( *v3 + v11 > 3 );
      }
    }
    else if ( v12 >= 3 )
    {
      v24 = (unsigned __int8 *)*v2;
      v25 = *((_DWORD *)a1 + 57) - v10;
      v26 = *((_DWORD *)a1 + 52);
      v27 = *((unsigned __int8 *)*v2 + v25);
      *((_DWORD *)a1 + 48) = v27;
      v28 = (unsigned int)(v25 + 2);
      *((_DWORD *)a1 + 48) = *((_DWORD *)a1 + 51) & ((v27 << v26) ^ v24[(unsigned int)(v25 + 1)]);
      do
      {
        if ( !v10 )
          break;
        v29 = a1[23];
        v30 = *((_DWORD *)a1 + 39);
        v31 = *((unsigned __int8 *)*v2 + v28);
        v28 = (unsigned int)(v28 + 1);
        v32 = a1[22];
        v33 = *((_DWORD *)a1 + 51) & ((*((_DWORD *)a1 + 48) << *((_DWORD *)a1 + 52)) ^ v31);
        *((_DWORD *)a1 + 48) = v33;
        *(_WORD *)(v32 + 2LL * ((unsigned int)v25 & v30)) = *(_WORD *)(v29 + 2 * v33);
        *(_WORD *)(a1[23] + 2LL * *((unsigned int *)a1 + 48)) = v25;
        LODWORD(v25) = v25 + 1;
        v10 = --*v3;
        v11 = *((_DWORD *)a1 + 59);
      }
      while ( *v3 + v11 >= 3 );
      v1 = v39;
    }
  }
  while ( v11 < 0x106 && *(_DWORD *)(*a1 + 8LL) );
  v34 = *((unsigned int *)a1 + 1497);
  v35 = *((_DWORD *)a1 + 42);
  if ( (unsigned int)v34 < v35 )
  {
    v36 = *((_DWORD *)a1 + 57) + *((_DWORD *)a1 + 59);
    if ( (unsigned int)v34 >= v36 )
    {
      if ( (unsigned int)v34 < v36 + 258 )
      {
        v38 = v35 - v34;
        if ( v36 - (unsigned int)v34 + 258 <= v38 )
          v38 = v36 - v34 + 258;
        memset_0((void *)(a1[20] + v34), 0, v38);
        *((_DWORD *)a1 + 1497) += v38;
      }
    }
    else
    {
      v37 = v35 - v36;
      if ( v37 > 0x102 )
        v37 = 258;
      memset_0((void *)(a1[20] + v36), 0, v37);
      *((_DWORD *)a1 + 1497) = v37 + v36;
    }
  }
}
