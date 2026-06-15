/*
 * XREFs of sub_14004EFD0 @ 0x14004EFD0
 * Callers:
 *     sub_14004F3B0 @ 0x14004F3B0 (sub_14004F3B0.c)
 * Callees:
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14004C6F4 @ 0x14004C6F4 (sub_14004C6F4.c)
 *     sub_14004C76C @ 0x14004C76C (sub_14004C76C.c)
 *     sub_14004E670 @ 0x14004E670 (sub_14004E670.c)
 *     sub_14004EE78 @ 0x14004EE78 (sub_14004EE78.c)
 *     sub_14004EE9C @ 0x14004EE9C (sub_14004EE9C.c)
 */

int __fastcall sub_14004EFD0(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rax
  SIZE_T v9; // rsi
  SIZE_T *v10; // rbx
  __int64 v11; // rbp
  void *v12; // rbx
  HANDLE ProcessHeap; // rax
  char *v14; // rcx
  char *v15; // rbx
  char *v16; // rax
  char *v17; // rax
  char *v18; // rax

  *(_DWORD *)(a1 + 4) = a3;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = 0LL;
  v5 = (_QWORD *)(a1 + 56);
  *(_WORD *)(a1 + 24) = *(_WORD *)(a2 + 64);
  *(_BYTE *)(a1 + 26) = *(_BYTE *)a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 136);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 144);
  *(_QWORD *)(a1 + 56) = 0LL;
  v6 = sub_14004EE9C(*(_QWORD *)(a2 + 24));
  v7 = sub_14004EE78(*(_QWORD *)(a2 + 56)) + v6;
  v8 = sub_14004EE78(*(_QWORD *)(a2 + 128));
  v9 = v8 + v7;
  v10 = (SIZE_T *)(a1 + 72);
  if ( !*(_QWORD *)(a1 + 64) || *v10 < v9 )
  {
    v8 = (__int64)sub_14004E670(8u, v9);
    v11 = v8;
    if ( v8 )
    {
      v12 = *(void **)(a1 + 64);
      ProcessHeap = GetProcessHeap();
      LODWORD(v8) = HeapFree(ProcessHeap, 0, v12);
      *(_QWORD *)(a1 + 64) = v11;
      v10 = (SIZE_T *)(a1 + 72);
      *(_QWORD *)(a1 + 72) = v9;
    }
    v5 = (_QWORD *)(a1 + 56);
  }
  v14 = *(char **)(a1 + 64);
  if ( v14 )
  {
    v15 = &v14[*v10];
    v16 = sub_14004C6F4(v14, v15, *(_BYTE **)(a2 + 56), (_QWORD *)(a1 + 16));
    v17 = sub_14004C6F4(v16, v15, *(_BYTE **)(a2 + 128), (_QWORD *)(a1 + 32));
    v18 = sub_14004C76C(v17, v15, *(_WORD **)(a2 + 24), v5);
    LODWORD(v8) = (unsigned int)memset(v18, 0, v15 - v18);
  }
  return v8;
}
