/*
 * XREFs of sub_14004DE1C @ 0x14004DE1C
 * Callers:
 *     sub_1400403C4 @ 0x1400403C4 (sub_1400403C4.c)
 *     sub_14004DE1C @ 0x14004DE1C (sub_14004DE1C.c)
 * Callees:
 *     sub_140038358 @ 0x140038358 (sub_140038358.c)
 *     sub_14004DE1C @ 0x14004DE1C (sub_14004DE1C.c)
 */

char __fastcall sub_14004DE1C(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  char result; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  _BYTE *v11; // r10
  __int64 v12; // rax
  _BYTE *v13; // rbx
  char *v14; // rdi
  _BYTE *v15; // r8
  size_t v16; // rbx
  size_t v17; // r10

  result = 0;
  *a3 = 0;
  if ( a2 )
  {
    result = sub_14004DE1C(a1, *(_QWORD *)(a2 + 16), a3, a4);
    v9 = *(_QWORD *)(a2 + 32);
    if ( v9 )
    {
      if ( !*(_DWORD *)v9 )
        *(_DWORD *)v9 = _InterlockedIncrement(&dword_1400E7B54);
      if ( !*(_DWORD *)(a1 + 80) )
      {
        *(_OWORD *)(a1 + 80) = *(_OWORD *)v9;
        *(_QWORD *)(a1 + 96) = *(_QWORD *)(v9 + 16);
      }
      v10 = -1LL;
      v11 = &a3[a4];
      v12 = -1LL;
      *(_OWORD *)(a1 + 104) = *(_OWORD *)v9;
      *(_QWORD *)(a1 + 120) = *(_QWORD *)(v9 + 16);
      do
        ++v12;
      while ( a3[v12] );
      v13 = &a3[v12];
      if ( v11 - v13 > 2 )
      {
        *v13 = 92;
        v14 = v13 + 1;
        v15 = *(_BYTE **)(v9 + 8);
        do
          ++v10;
        while ( v15[v10] );
        v16 = v10 + 1;
        v17 = v11 - v14;
        if ( v10 + 1 >= v17 )
          v16 = v17;
        sub_140038358(v14, v17, v15, v16);
        v14[v16 - 1] = 0;
      }
      return 1;
    }
  }
  return result;
}
