/*
 * XREFs of Amd64InitializeUncoreStatus @ 0x1405A6B28
 * Callers:
 *     Amd64InitializeCacheStatus @ 0x1405A6754 (Amd64InitializeCacheStatus.c)
 *     Amd64InitializeDataFabricStatus @ 0x1405A68F8 (Amd64InitializeDataFabricStatus.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 *__fastcall Amd64InitializeUncoreStatus(__int64 a1, __int64 **a2, int a3, unsigned int a4)
{
  __int64 *v4; // rbx
  __int64 v6; // r14
  int v8; // r15d
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  void *v12; // rax
  ULONG_PTR v13; // r8
  __int64 v14; // rcx
  char *v15; // rax
  char *v16; // rbp
  ULONG_PTR v17; // r8
  __int64 v18; // rcx
  __int64 ***v19; // rax

  v4 = *a2;
  v6 = a4;
  v8 = a1;
  while ( 1 )
  {
    v9 = 0LL;
    if ( v4 == (__int64 *)a2 )
      break;
    if ( *((_DWORD *)v4 + 8) == a3 )
    {
      if ( v4 )
        return v4;
      break;
    }
    v4 = (__int64 *)*v4;
  }
  v10 = HalpMmAllocCtxAlloc(a1, 40LL);
  v4 = (__int64 *)v10;
  if ( !v10 )
    KeBugCheckEx(0x5Cu, 0x9003uLL, 0x28uLL, (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\pc\\amd64.c", 0x55FuLL);
  *(_OWORD *)v10 = 0LL;
  *(_OWORD *)(v10 + 16) = 0LL;
  *(_QWORD *)(v10 + 32) = 0LL;
  *(_DWORD *)(v10 + 32) = a3;
  *(_DWORD *)(v10 + 16) = v8;
  v12 = (void *)HalpMmAllocCtxAlloc(v11, (unsigned int)(48 * v6));
  v4[3] = (__int64)v12;
  v13 = (unsigned int)(48 * v6);
  if ( !v12 )
    KeBugCheckEx(0x5Cu, 0x9003uLL, v13, (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\pc\\amd64.c", 0x577uLL);
  memset_0(v12, 0, v13);
  v15 = (char *)HalpMmAllocCtxAlloc(v14, (unsigned int)(16 * v6));
  v16 = v15;
  v17 = (unsigned int)(16 * v6);
  if ( !v15 )
    KeBugCheckEx(0x5Cu, 0x9003uLL, v17, (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\pc\\amd64.c", 0x587uLL);
  memset_0(v15, 0, v17);
  if ( (_DWORD)v6 )
  {
    v18 = v6;
    do
    {
      v9 += 48LL;
      *(_QWORD *)(v4[3] + v9 - 32) = v16;
      v16 += 16;
      --v18;
    }
    while ( v18 );
  }
  v19 = (__int64 ***)a2[1];
  if ( *v19 != a2 )
    __fastfail(3u);
  *v4 = (__int64)a2;
  v4[1] = (__int64)v19;
  *v19 = (__int64 **)v4;
  a2[1] = v4;
  return v4;
}
