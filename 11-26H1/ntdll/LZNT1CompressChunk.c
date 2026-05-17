/*
 * XREFs of LZNT1CompressChunk @ 0x1800FB4EC
 * Callers:
 *     RtlCompressBufferLZNT1 @ 0x1800FB3E0 (RtlCompressBufferLZNT1.c)
 * Callees:
 *     memmove @ 0x180164700 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LZNT1CompressChunk(
        __int64 (__fastcall *a1)(char *),
        char *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        int *a6,
        __int64 a7)
{
  char v8; // r8
  char *v9; // r12
  char *v10; // rdi
  char *v11; // rbx
  _DWORD *v12; // r13
  __int64 (__fastcall *v13)(char *); // r10
  char *v14; // rcx
  _WORD *v15; // r14
  __int64 v17; // rdx
  int v18; // r9d
  int v19; // ebp
  unsigned int *v20; // r14
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  char *v25; // rax
  int v26; // ebx
  int v28; // eax
  unsigned int v29; // esi
  char v30; // [rsp+20h] [rbp-58h]
  unsigned __int64 v31; // [rsp+28h] [rbp-50h]
  char v33; // [rsp+88h] [rbp+10h]

  v8 = 0;
  v9 = (char *)(a4 + 1);
  v33 = 0;
  v10 = a2;
  v11 = (char *)a4 + 3;
  if ( (unsigned __int64)(a2 + 4096) < a3 )
    a3 = (unsigned __int64)(a2 + 4096);
  v12 = &LZNT1Formats;
  v13 = a1;
  v14 = (char *)a5;
  v15 = a4;
  v17 = a7;
  if ( (unsigned __int64)a4 + 4095 < a5 )
    v14 = (char *)a4 + 4095;
  LOBYTE(v18) = 0;
  LOBYTE(v19) = 0;
  v31 = (unsigned __int64)v14;
  v30 = 0;
  *(_QWORD *)a7 = v10;
  *(_QWORD *)(a7 + 8) = a3;
  *(_DWORD *)(a7 + 16) = 4098;
  if ( (unsigned __int64)v10 >= a3 )
  {
LABEL_16:
    if ( v9 >= v14 )
      LODWORD(v11) = (_DWORD)v11 - 1;
    else
      *v9 = v19;
    v26 = (_DWORD)v11 - (_DWORD)v15;
    *a6 = v26;
    *v15 = (v26 - 3) & 0xFFF | 0xB000;
    return v8 == 0 ? 0x117 : 0;
  }
  v20 = (unsigned int *)&unk_1801830DC;
  while ( 1 )
  {
    if ( &a2[*v20] < v10 )
    {
      do
      {
        v28 = v12[7];
        v12 += 5;
        *(_DWORD *)(v17 + 16) = v28;
      }
      while ( &a2[v12[3]] < v10 );
      v8 = v33;
      v20 = v12 + 3;
    }
    if ( (unsigned __int64)(v10 + 3) <= a3 )
    {
      v21 = v13(v10);
      v22 = v21;
      if ( v21 )
      {
        if ( (unsigned __int64)(v11 + 1) >= v31 )
          break;
        LOBYTE(v18) = v30;
        v14 = (char *)v31;
        *(_WORD *)v11 = (v21 - 3) | (((_WORD)v10 - *(_WORD *)(a7 + 24) - 1) << *((_BYTE *)v12 + 16));
        v23 = 2LL;
        v24 = v22;
        v19 = (unsigned __int8)v19 | (1 << v30);
        v8 = v33;
        goto LABEL_12;
      }
      v14 = (char *)v31;
      v8 = v33;
      LOBYTE(v18) = v30;
    }
    if ( v11 >= v14 )
      break;
    v24 = 1LL;
    v8 |= *v10;
    *v11 = *v10;
    v19 = (unsigned __int8)v19 & ~(1 << v18);
    v33 = v8;
    v23 = 1LL;
LABEL_12:
    v25 = &v11[v23];
    v10 += v24;
    v18 = ((_BYTE)v18 + 1) & 7;
    v11 = v25;
    v30 = v18;
    if ( v18 || (unsigned __int64)v10 >= a3 )
    {
      v17 = a7;
      v13 = a1;
      if ( (unsigned __int64)v10 >= a3 )
        break;
    }
    else
    {
      v17 = a7;
      v11 = v25 + 1;
      v13 = a1;
      *v9 = v19;
      LOBYTE(v19) = 0;
      v9 = v25;
    }
  }
  v15 = a4;
  if ( (unsigned __int64)v10 >= a3 )
  {
    v14 = (char *)v31;
    v8 = v33;
    goto LABEL_16;
  }
  v29 = a3 - (_DWORD)a2;
  if ( (unsigned __int64)a4 + v29 + 2 > a5 )
    return 3221225507LL;
  memmove(a4 + 1, a2, v29);
  *a6 = v29 + 2;
  *a4 = (v29 - 1) & 0xFFF | 0x3000;
  return 0LL;
}
