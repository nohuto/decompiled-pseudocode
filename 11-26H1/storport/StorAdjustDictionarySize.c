/*
 * XREFs of StorAdjustDictionarySize @ 0x14012F72C
 * Callers:
 *     NvmeControllerAddNvmeNamespaceToList @ 0x1400F02D0 (NvmeControllerAddNvmeNamespaceToList.c)
 * Callees:
 *     StorInsertDictionary @ 0x1400383C0 (StorInsertDictionary.c)
 */

__int64 __fastcall StorAdjustDictionarySize(__int64 a1, unsigned int a2)
{
  int v2; // r8d
  unsigned int v3; // ebx
  int v6; // r8d
  int v7; // r8d
  __int64 v9; // rcx
  __int64 v10; // rbp
  _QWORD *Pool2; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rcx
  unsigned int v14; // r14d
  char *v15; // rbp
  __int64 **v16; // rdi
  __int64 *v17; // rdx
  __int64 *v18; // rax

  v2 = *(_DWORD *)(a1 + 8);
  v3 = 0;
  if ( v2 )
  {
    v6 = v2 - 1;
    if ( v6 )
    {
      v7 = v6 - 511;
      if ( v7 )
      {
        if ( v7 != 4 )
          return 3221225659LL;
        v9 = 72LL;
      }
      else
      {
        v9 = 64LL;
      }
    }
    else
    {
      v9 = 256LL;
    }
  }
  else
  {
    v9 = 128LL;
  }
  v10 = a2;
  Pool2 = (_QWORD *)ExAllocatePool2(v9, 16LL * a2, 1952672068LL);
  v12 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  if ( a2 )
  {
    v13 = Pool2;
    do
    {
      Pool2[1] = v13;
      *Pool2 = v13;
      v13 += 2;
      Pool2 += 2;
      --v10;
    }
    while ( v10 );
  }
  v14 = *(_DWORD *)(a1 + 4);
  v15 = *(char **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v12;
  *(_DWORD *)(a1 + 4) = a2;
  if ( v14 )
  {
    do
    {
      v16 = (__int64 **)&v15[16 * v3];
      while ( 1 )
      {
        v17 = *v16;
        if ( *v16 == (__int64 *)v16 )
          break;
        if ( (__int64 **)v17[1] != v16 || (v18 = (__int64 *)*v17, *(__int64 **)(*v17 + 8) != v17) )
          __fastfail(3u);
        *v16 = v18;
        v18[1] = (__int64)v16;
        StorInsertDictionary(a1, v17);
      }
      ++v3;
    }
    while ( v3 < v14 );
  }
  ExFreePoolWithTag(v15, 0x74636944u);
  return 0LL;
}
