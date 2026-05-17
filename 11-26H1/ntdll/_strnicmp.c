/*
 * XREFs of _strnicmp @ 0x180128940
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x180082DF0 (LdrpSnapKernelBaseExtensions.c)
 *     SbpLookup @ 0x1801595D8 (SbpLookup.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl strnicmp(const char *String1, const char *String2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)String1, (unsigned __int8 *)String2, MaxCount);
}
