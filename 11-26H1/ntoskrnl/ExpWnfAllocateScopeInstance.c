/*
 * XREFs of ExpWnfAllocateScopeInstance @ 0x14094CB9C
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x14094B390 (ExpWnfResolveScopeInstance.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpWnfAllocateScopeInstance(_QWORD *a1, int a2, const void *a3, unsigned int a4)
{
  _DWORD *Pool2; // rax
  _DWORD *v9; // rbx
  __int64 result; // rax

  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  v9 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset_0(Pool2, 0, 0x50uLL);
  *v9 = 5245186;
  v9[4] = a2;
  v9[5] = a4;
  if ( a4 )
  {
    *((_QWORD *)v9 + 3) = v9 + 20;
    memmove(v9 + 20, a3, a4);
  }
  *((_QWORD *)v9 + 6) = 0LL;
  result = 0LL;
  *((_QWORD *)v9 + 7) = 0LL;
  *a1 = v9;
  return result;
}
