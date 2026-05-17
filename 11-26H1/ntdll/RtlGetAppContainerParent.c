/*
 * XREFs of RtlGetAppContainerParent @ 0x180059570
 * Callers:
 *     RtlpGetTokenNamedObjectPath @ 0x180058660 (RtlpGetTokenNamedObjectPath.c)
 *     RtlDefaultNpAcl @ 0x18005B710 (RtlDefaultNpAcl.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlCompareMemory @ 0x1801631E0 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlGetAppContainerParent(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 Heap_0; // rax
  __int64 v6; // rcx
  _DWORD *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r8

  *a2 = 0LL;
  if ( *(_BYTE *)(a1 + 1) < 2u
    || *(_BYTE *)a1 != 1
    || RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) != 6
    || *(_DWORD *)(a1 + 8) != 2
    || *(_BYTE *)(a1 + 1) != 12 )
  {
    return 3221225485LL;
  }
  Heap_0 = RtlAllocateHeap_0();
  v6 = Heap_0;
  if ( !Heap_0 )
    return 3221225626LL;
  *(_WORD *)Heap_0 = 2049;
  v7 = (_DWORD *)(Heap_0 + 8);
  v8 = a1 - Heap_0;
  *(_DWORD *)(Heap_0 + 2) = RtlpAppPackageAuthority;
  v9 = 8LL;
  *(_WORD *)(Heap_0 + 6) = 3840;
  do
  {
    *v7 = *(_DWORD *)((char *)v7 + v8);
    ++v7;
    --v9;
  }
  while ( v9 );
  result = 0LL;
  *a2 = v6;
  return result;
}
