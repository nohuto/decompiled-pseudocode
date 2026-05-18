/*
 * XREFs of sub_180010390 @ 0x180010390
 * Callers:
 *     sub_180010770 @ 0x180010770 (sub_180010770.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000E16C @ 0x18000E16C (sub_18000E16C.c)
 *     sub_18000E1E4 @ 0x18000E1E4 (sub_18000E1E4.c)
 *     sub_18000FF18 @ 0x18000FF18 (sub_18000FF18.c)
 *     sub_180010238 @ 0x180010238 (sub_180010238.c)
 *     sub_18001025C @ 0x18001025C (sub_18001025C.c)
 */

int __fastcall sub_180010390(__int64 a1, __int64 a2, int a3)
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
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  void *v18; // rax

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
  v6 = sub_18001025C(*(_QWORD *)(a2 + 24));
  v7 = sub_180010238(*(_QWORD *)(a2 + 56)) + v6;
  v8 = sub_180010238(*(_QWORD *)(a2 + 128));
  v9 = v8 + v7;
  v10 = (SIZE_T *)(a1 + 72);
  if ( !*(_QWORD *)(a1 + 64) || *v10 < v9 )
  {
    v8 = (__int64)sub_18000FF18(8u, v9);
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
  v14 = *(_QWORD *)(a1 + 64);
  if ( v14 )
  {
    v15 = v14 + *v10;
    v16 = sub_18000E16C(v14, v15, *(_BYTE **)(a2 + 56), (_QWORD *)(a1 + 16));
    v17 = sub_18000E16C(v16, v15, *(_BYTE **)(a2 + 128), (_QWORD *)(a1 + 32));
    v18 = (void *)sub_18000E1E4(v17, v15, *(_WORD **)(a2 + 24), v5);
    LODWORD(v8) = (unsigned int)memset(v18, 0, v15 - (_QWORD)v18);
  }
  return v8;
}
