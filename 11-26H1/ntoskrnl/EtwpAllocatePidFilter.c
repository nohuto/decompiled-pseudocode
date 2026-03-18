/*
 * XREFs of EtwpAllocatePidFilter @ 0x140AA1C34
 * Callers:
 *     EtwpAllocateFilter @ 0x140AA11F0 (EtwpAllocateFilter.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAllocatePidFilter(__int64 a1, unsigned int **a2)
{
  unsigned int v4; // ebx
  unsigned int *Pool2; // rax
  unsigned int *v6; // rdi
  __int64 result; // rax
  const void *v8; // rdx

  if ( *a2 )
    return 3221225485LL;
  v4 = *(_DWORD *)(a1 + 8) >> 2;
  if ( v4 > 8 )
    return 3221225485LL;
  Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL);
  v6 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v8 = *(const void **)a1;
  *Pool2 = v4;
  memmove(Pool2 + 1, v8, 4LL * v4);
  result = 0LL;
  *a2 = v6;
  return result;
}
