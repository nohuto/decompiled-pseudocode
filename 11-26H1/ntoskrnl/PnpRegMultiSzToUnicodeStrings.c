/*
 * XREFs of PnpRegMultiSzToUnicodeStrings @ 0x140CCD754
 * Callers:
 *     PiInitCacheGroupInformation @ 0x140CC7034 (PiInitCacheGroupInformation.c)
 * Callees:
 *     PnpFreeUnicodeStringList @ 0x1405DF8CC (PnpFreeUnicodeStringList.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpRegMultiSzToUnicodeStrings(_DWORD *a1, ULONG_PTR *a2, unsigned int *a3)
{
  ULONG_PTR *v3; // r15
  _WORD *v6; // rcx
  _WORD *v7; // rdi
  unsigned int v8; // edx
  _WORD *v9; // rax
  unsigned int v10; // eax
  ULONG_PTR Pool2; // rax
  unsigned int v12; // ebp
  _WORD *v13; // rbx
  const void *v14; // r14
  _WORD *v15; // rsi
  unsigned int v16; // r12d
  void *v17; // rax
  PVOID *v18; // r15
  __int64 v19; // r13
  PVOID *v20; // rcx
  unsigned int v21; // ebx
  void *v22; // rax
  PVOID *v23; // rdi
  unsigned int v24; // [rsp+60h] [rbp+8h]

  v3 = a2;
  if ( a1[1] != 7 )
    return 3221225485LL;
  v6 = (_WORD *)((char *)a1 + (unsigned int)a1[2]);
  v7 = (_WORD *)((char *)v6 + (unsigned int)a1[3]);
  v8 = 0;
  if ( v6 != v7 )
  {
    v9 = v6 + 1;
    do
    {
      if ( !*v6 )
      {
        ++v8;
        if ( v9 == v7 || !*v9 )
          break;
      }
      ++v6;
      ++v9;
    }
    while ( v6 != v7 );
  }
  v10 = v8 + 1;
  if ( v6 != v7 )
    v10 = v8;
  v24 = v10;
  Pool2 = ExAllocatePool2(256LL, 16LL * v10, 0x75737050u);
  *v3 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v12 = 0;
  v13 = (_WORD *)((char *)a1 + (unsigned int)a1[2]);
  v14 = v13;
  v15 = v13 + 1;
  while ( v13 != v7 )
  {
    if ( !*v13 )
    {
      v16 = (_DWORD)v13 - (_DWORD)v14 + 2;
      v17 = (void *)ExAllocatePool2(256LL, v16, 0x75737050u);
      v18 = (PVOID *)*v3;
      v19 = 2LL * v12;
      v18[2 * v12 + 1] = v17;
      if ( !v17 )
      {
        v20 = v18;
LABEL_22:
        PnpFreeUnicodeStringList(v20, v12);
        return 3221225626LL;
      }
      memmove(v17, v14, v16);
      WORD1(v18[2 * v12++]) = v16;
      LOWORD(v18[v19]) = (_WORD)v13 - (_WORD)v14;
      if ( v15 == v7 || !*v15 )
        goto LABEL_28;
      v3 = a2;
      v14 = v15;
    }
    ++v13;
    ++v15;
  }
  v21 = (_DWORD)v13 - (_DWORD)v14;
  v22 = (void *)ExAllocatePool2(256LL, v21 + 2LL, 0x75737050u);
  v23 = (PVOID *)*v3;
  *(_QWORD *)(*v3 + 16LL * v12 + 8) = v22;
  if ( !v22 )
  {
    v20 = v23;
    goto LABEL_22;
  }
  if ( v21 )
    memmove(v22, v14, v21);
  *((_WORD *)v23[2 * v12 + 1] + ((unsigned __int64)v21 >> 1)) = 0;
  LOWORD(v23[2 * v12]) = v21;
  WORD1(v23[2 * v12]) = v21 + 2;
LABEL_28:
  *a3 = v24;
  return 0LL;
}
