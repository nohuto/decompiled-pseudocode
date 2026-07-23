/*
 * XREFs of IopCreateCmResourceList @ 0x1407A8E74
 * Callers:
 *     IopAllocateLegacyBootResources @ 0x140CCB498 (IopAllocateLegacyBootResources.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char *__fastcall IopCreateCmResourceList(__int64 a1, int a2, int a3, _QWORD *a4)
{
  unsigned int *v4; // r14
  int v7; // r9d
  __int64 v8; // r15
  __int64 v9; // rdi
  _DWORD *v10; // rbp
  _DWORD *v11; // rcx
  __int64 v12; // r10
  unsigned int v13; // eax
  _DWORD *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rax
  char *Pool2; // rbx
  _DWORD *v20; // rax
  _DWORD *v21; // r15
  char *v22; // r13
  unsigned int v23; // esi
  char *i; // r12
  unsigned int v25; // eax
  _DWORD *v26; // rcx
  size_t v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rax

  v4 = (unsigned int *)IopInitHalResources;
  v7 = a3;
  v8 = 4LL;
  v9 = 0LL;
  v10 = (char *)IopInitHalResources + 4;
  v11 = (char *)IopInitHalResources + 4;
  if ( !*(_DWORD *)IopInitHalResources )
    goto LABEL_32;
  v12 = *(unsigned int *)IopInitHalResources;
  do
  {
    v13 = v11[3];
    v14 = v11 + 4;
    v15 = 16LL;
    if ( v13 )
    {
      v16 = v13;
      do
      {
        v17 = 20LL;
        if ( *(_BYTE *)v14 == 5 )
          v17 = (unsigned int)v14[1] + 20LL;
        v15 += v17;
        v14 = (_DWORD *)((char *)v14 + v17);
        --v16;
      }
      while ( v16 );
      v7 = a3;
    }
    if ( *v11 == a2 && v11[1] == v7 )
      v9 += v15;
    v8 += v15;
    v11 = (_DWORD *)((char *)v11 + v15);
    --v12;
  }
  while ( v12 );
  if ( !v9 )
  {
LABEL_32:
    *a4 = IopInitHalResources;
    return 0LL;
  }
  if ( v9 + 4 == v8 )
  {
    *a4 = 0LL;
    return (char *)v4;
  }
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  v20 = (_DWORD *)ExAllocatePool2(0x100uLL);
  *a4 = v20;
  v21 = v20;
  if ( !v20 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 0LL;
  }
  *(_DWORD *)Pool2 = 0;
  v22 = (char *)(v20 + 1);
  *v20 = 0;
  v23 = 0;
  for ( i = Pool2 + 4; v23 < *v4; ++v23 )
  {
    v25 = v10[3];
    v26 = v10 + 4;
    v27 = 16LL;
    if ( v25 )
    {
      v28 = v25;
      do
      {
        v29 = 20LL;
        if ( *(_BYTE *)v26 == 5 )
          v29 = (unsigned int)v26[1] + 20LL;
        v27 += v29;
        v26 = (_DWORD *)((char *)v26 + v29);
        --v28;
      }
      while ( v28 );
    }
    if ( *v10 == a2 && v10[1] == a3 )
    {
      ++*(_DWORD *)Pool2;
      memmove(i, v10, v27);
      i += v27;
    }
    else
    {
      ++*v21;
      memmove(v22, v10, v27);
      v22 += v27;
    }
    v10 = (_DWORD *)((char *)v10 + v27);
  }
  return Pool2;
}
