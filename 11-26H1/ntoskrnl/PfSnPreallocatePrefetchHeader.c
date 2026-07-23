/*
 * XREFs of PfSnPreallocatePrefetchHeader @ 0x140988658
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1409887A0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PfSnPreallocatePrefetchHeader(__int64 *a1)
{
  size_t v2; // rdi
  __int64 Pool2; // rax
  char *v4; // r9
  __int64 v5; // r8
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rax
  char *v9; // rdx
  int v10; // edi
  void *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  v2 = (unsigned int)(68 * *(_DWORD *)(*a1 + 88));
  Pool2 = ExAllocatePool2(0x100uLL);
  v4 = (char *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v5 = *a1;
  v6 = 0;
  a1[7] = Pool2;
  if ( *(_DWORD *)(v5 + 88) )
  {
    do
    {
      v7 = 56LL * v6;
      v8 = a1[7];
      ++v6;
      *(_OWORD *)(v7 + v8) = 0LL;
      *(_OWORD *)(v7 + v8 + 16) = 0LL;
      *(_QWORD *)(v7 + v8 + 24) |= 0x200000000uLL;
      v5 = *a1;
    }
    while ( v6 < *(_DWORD *)(*a1 + 88) );
  }
  v9 = &v4[56 * *(unsigned int *)(v5 + 88)];
  a1[8] = (__int64)v9;
  a1[9] = (__int64)&v9[8 * *(unsigned int *)(v5 + 88)];
  memset_0(v4, 0, v2);
  v10 = *(_DWORD *)(*a1 + 88) + *(_DWORD *)(*a1 + 120);
  v11 = (void *)ExAllocatePool2(0x100uLL);
  a1[14] = (__int64)v11;
  if ( !v11 )
    return 3221225626LL;
  memset_0(v11, 0, (unsigned int)(24 * v10));
  *((_DWORD *)a1 + 31) = v10;
  v12 = ExAllocatePool2(0x100uLL);
  a1[10] = v12;
  if ( !v12 )
    return 3221225626LL;
  v13 = ExAllocatePool2(0x40uLL);
  a1[11] = v13;
  return v13 != 0 ? 0 : 0xC000009A;
}
