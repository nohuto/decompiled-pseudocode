/*
 * XREFs of ExpWnfFindScopeInstance @ 0x1409C85C0
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x1409C6D00 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfDeleteScopeById @ 0x1409FD74C (ExpWnfDeleteScopeById.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

_QWORD *__fastcall ExpWnfFindScopeInstance(_QWORD **a1, const void *a2, unsigned int a3)
{
  _QWORD *v3; // rbx
  size_t v5; // rsi

  v3 = *a1;
  v5 = a3;
  while ( v3 != a1 )
  {
    if ( (_DWORD)v5 == *((_DWORD *)v3 - 3) && !memcmp(a2, (const void *)*(v3 - 1), v5) )
      return v3 - 4;
    v3 = (_QWORD *)*v3;
  }
  return 0LL;
}
