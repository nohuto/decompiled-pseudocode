/*
 * XREFs of EtwpTiAllocVadQueryEventWriteWorkItemContext @ 0x14025A4F4
 * Callers:
 *     EtwpTiAsyncVadQueryEventWrite @ 0x14025A374 (EtwpTiAsyncVadQueryEventWrite.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpTiAllocVadQueryEventWriteWorkItemContext(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        void *Src,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9)
{
  unsigned int v9; // esi
  __int64 v10; // r14
  unsigned int i; // r10d
  unsigned __int64 v14; // rdi
  unsigned int v15; // eax
  unsigned __int64 v16; // rbp
  _QWORD *Pool2; // rax
  _QWORD *v18; // rbx
  char *v19; // r15
  const void **v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r13
  __int64 v23; // rax
  char *v24; // rdx
  unsigned int v25; // ecx
  __int64 v26; // rax
  void *v27; // rcx

  v9 = 0;
  v10 = a3;
  for ( i = 0; i < a3; ++i )
  {
    if ( v9 + *(_DWORD *)(a1 + 16LL * i + 8) < v9 )
      return 3221225621LL;
    v9 += *(_DWORD *)(a1 + 16LL * i + 8);
  }
  v14 = 16LL * a2;
  if ( v14 > 0xFFFFFFFF )
    return 3221225621LL;
  v15 = v14 + 88;
  if ( (unsigned int)v14 >= 0xFFFFFFA8 )
    return 3221225621LL;
  if ( v15 + v9 < v15 )
    return 3221225621LL;
  v16 = 8LL * a6;
  if ( v16 > 0xFFFFFFFF || v15 + v9 + (unsigned int)v16 < v15 + v9 )
    return 3221225621LL;
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  v18 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v19 = (char *)Pool2 + (unsigned int)v14 + 88;
  Pool2[4] = Pool2 + 11;
  Pool2[5] = v19;
  Pool2[9] = &v19[v9];
  if ( (_DWORD)v10 )
  {
    v20 = (const void **)(a1 + 8);
    v21 = -8 - a1;
    v22 = v10;
    do
    {
      memmove(v19, *(v20 - 1), *(unsigned int *)v20);
      v23 = v18[4];
      v24 = (char *)v20 + v21;
      v25 = *(_DWORD *)v20;
      *(_QWORD *)&v24[v23] = v19;
      *(_QWORD *)&v24[v23 + 8] = v25;
      v26 = *(unsigned int *)v20;
      v20 += 2;
      v19 += v26;
      --v22;
    }
    while ( v22 );
  }
  *((_DWORD *)v18 + 12) = v10;
  ObfReferenceObjectWithTag(a4, 0x69547445u);
  v27 = (void *)v18[9];
  v18[8] = a4;
  memmove(v27, Src, (unsigned int)v16);
  v18[7] = a7;
  v18[10] = a8;
  *((_DWORD *)v18 + 13) = a6;
  *a9 = v18;
  return 0LL;
}
