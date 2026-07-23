/*
 * XREFs of _stricmp @ 0x1801285A0
 * Callers:
 *     AVrfpFindClosestThunkDuplicate @ 0x180138044 (AVrfpFindClosestThunkDuplicate.c)
 *     ImportTablepInsertFunctionSorted @ 0x18013B11C (ImportTablepInsertFunctionSorted.c)
 *     LdrpGetDelayloadDescriptor @ 0x18015C30C (LdrpGetDelayloadDescriptor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl stricmp(const char *String1, const char *String2)
{
  return _ascii_stricmp((unsigned __int8 *)String1, (unsigned __int8 *)String2);
}
