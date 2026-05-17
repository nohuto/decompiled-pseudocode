/*
 * XREFs of _stricmp @ 0x180128830
 * Callers:
 *     AVrfpFindClosestThunkDuplicate @ 0x1801382D4 (AVrfpFindClosestThunkDuplicate.c)
 *     ImportTablepInsertFunctionSorted @ 0x18013B3AC (ImportTablepInsertFunctionSorted.c)
 *     LdrpGetDelayloadDescriptor @ 0x18015C44C (LdrpGetDelayloadDescriptor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl stricmp(const char *String1, const char *String2)
{
  return _ascii_stricmp((unsigned __int8 *)String1, (unsigned __int8 *)String2);
}
