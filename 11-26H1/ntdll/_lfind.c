/*
 * XREFs of _lfind @ 0x180127ED0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 *     _guard_check_icall$thunk$15021643654165956172 @ 0x18016F010 (_guard_check_icall$thunk$15021643654165956172.c)
 */

void *__cdecl lfind(
        const void *Key,
        const void *Base,
        unsigned int *NumOfElements,
        unsigned int SizeOfElements,
        _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
{
  int v5; // ebp
  __int64 v6; // r14
  char *v8; // rbx

  v5 = 0;
  v6 = SizeOfElements;
  v8 = (char *)Base;
  if ( !Key || !NumOfElements || !Base && *NumOfElements || !SizeOfElements || !CompareFunction )
  {
    invalid_parameter();
    return 0LL;
  }
  if ( !*NumOfElements )
    return 0LL;
  while ( ((unsigned int (__fastcall *)(const void *, char *))CompareFunction)(Key, v8) )
  {
    v8 += v6;
    if ( ++v5 >= *NumOfElements )
      return 0LL;
  }
  return v8;
}
