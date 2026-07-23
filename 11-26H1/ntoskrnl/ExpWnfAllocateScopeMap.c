/*
 * XREFs of ExpWnfAllocateScopeMap @ 0x1409C7268
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x1409C6D00 (ExpWnfResolveScopeInstance.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpWnfAllocateScopeMap(_QWORD *a1)
{
  __int64 Pool2; // rax
  _DWORD *v3; // rbx
  unsigned int v5; // r8d
  _QWORD *v6; // rdx
  __int64 v7; // rax
  _DWORD *v8; // rax

  Pool2 = ExAllocatePool2(0x100uLL);
  v3 = (_DWORD *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset_0((void *)(Pool2 + 4), 0, 0xACuLL);
  v5 = 0;
  *v3 = 11536641;
  v6 = v3 + 10;
  do
  {
    v7 = (int)v5++;
    v8 = &v3[6 * v7 + 10];
    v6[1] = v8;
    *v6 = v8;
    *(v6 - 1) = 0LL;
    v6 += 3;
  }
  while ( v5 < 6 );
  *a1 = v3;
  return 0LL;
}
