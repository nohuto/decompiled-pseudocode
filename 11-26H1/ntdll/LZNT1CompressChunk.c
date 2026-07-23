/*
 * XREFs of LZNT1CompressChunk @ 0x1800FAC6C
 * Callers:
 *     RtlCompressBufferLZNT1 @ 0x1800FAB60 (RtlCompressBufferLZNT1.c)
 * Callees:
 *     memmove @ 0x180164600 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LZNT1CompressChunk(
        __int64 (__fastcall *a1)(_BYTE *),
        _BYTE *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        int *a6,
        __int64 a7)
{
  char v8; // r8
  char *v9; // r12
  _BYTE *v10; // r14
  _WORD *v11; // rbx
  _DWORD *v12; // r13
  __int64 (__fastcall *v13)(_BYTE *); // r10
  char *v14; // rcx
  _WORD *v15; // r15
  __int64 v17; // rdx
  int v18; // r9d
  int v19; // esi
  unsigned int *v20; // rax
  unsigned __int64 v21; // r15
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  _BYTE *v25; // rcx
  _WORD *v26; // rax
  bool v27; // cf
  int v28; // ebx
  int v30; // eax
  unsigned int v31; // edi
  char v32; // [rsp+20h] [rbp-68h]
  unsigned int *v33; // [rsp+28h] [rbp-60h]
  unsigned __int64 v34; // [rsp+30h] [rbp-58h]
  char v36; // [rsp+98h] [rbp+10h]

  v8 = 0;
  v9 = (char *)(a4 + 1);
  v36 = 0;
  v10 = a2;
  v11 = (_WORD *)((char *)a4 + 3);
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
  v34 = (unsigned __int64)v14;
  v32 = 0;
  *(_QWORD *)a7 = v10;
  *(_QWORD *)(a7 + 8) = a3;
  *(_DWORD *)(a7 + 16) = 4098;
  if ( (unsigned __int64)v10 >= a3 )
  {
LABEL_17:
    if ( v9 >= v14 )
      LODWORD(v11) = (_DWORD)v11 - 1;
    else
      *v9 = v19;
    v28 = (_DWORD)v11 - (_DWORD)v15;
    *a6 = v28;
    *v15 = (v28 - 3) & 0xFFF | 0xB000;
    return v8 == 0 ? 0x117 : 0;
  }
  v20 = (unsigned int *)&unk_18018201C;
  v21 = (unsigned __int64)v14;
  v33 = (unsigned int *)&unk_18018201C;
  while ( 1 )
  {
    if ( &a2[*v20] < v10 )
    {
      do
      {
        v30 = v12[7];
        v12 += 5;
        *(_DWORD *)(v17 + 16) = v30;
        v33 = v12 + 3;
      }
      while ( &a2[v12[3]] < v10 );
      v21 = v34;
    }
    if ( (unsigned __int64)(v10 + 3) <= a3 )
    {
      v22 = v13(v10);
      if ( v22 )
      {
        if ( (unsigned __int64)v11 + 1 >= v21 )
          break;
        LOBYTE(v18) = v32;
        v23 = v22;
        v8 = v36;
        *v11 = (v22 - 3) | (((_WORD)v10 - *(_WORD *)(a7 + 24) - 1) << *((_BYTE *)v12 + 16));
        v19 = (unsigned __int8)v19 | (1 << v32);
        v24 = 2LL;
        goto LABEL_12;
      }
      v8 = v36;
      LOBYTE(v18) = v32;
    }
    if ( (unsigned __int64)v11 >= v21 )
      break;
    v23 = 1LL;
    v8 |= *v10;
    *(_BYTE *)v11 = *v10;
    v19 = (unsigned __int8)v19 & ~(1 << v18);
    v36 = v8;
    v24 = 1LL;
LABEL_12:
    v25 = &v10[v23];
    v26 = (_WORD *)((char *)v11 + v24);
    v10 = v25;
    v18 = ((_BYTE)v18 + 1) & 7;
    v11 = v26;
    v32 = v18;
    if ( v18 )
    {
      v27 = (unsigned __int64)v25 < a3;
LABEL_14:
      v20 = v33;
      v17 = a7;
      v13 = a1;
      if ( !v27 )
        break;
    }
    else
    {
      v27 = (unsigned __int64)v25 < a3;
      if ( (unsigned __int64)v25 >= a3 )
        goto LABEL_14;
      v17 = a7;
      v11 = (_WORD *)((char *)v26 + 1);
      v13 = a1;
      *v9 = v19;
      v9 = (char *)v26;
      v20 = v33;
      LOBYTE(v19) = 0;
    }
  }
  v15 = a4;
  if ( (unsigned __int64)v10 >= a3 )
  {
    v14 = (char *)v34;
    v8 = v36;
    goto LABEL_17;
  }
  v31 = a3 - (_DWORD)a2;
  if ( (unsigned __int64)a4 + v31 + 2 > a5 )
    return 3221225507LL;
  memmove(a4 + 1, a2, v31);
  *a6 = v31 + 2;
  *a4 = (v31 - 1) & 0xFFF | 0x3000;
  return 0LL;
}
