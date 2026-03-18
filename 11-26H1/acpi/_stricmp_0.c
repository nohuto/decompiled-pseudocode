/*
 * XREFs of _stricmp_0 @ 0x140055DF7
 * Callers:
 *     OSInterface @ 0x140016870 (OSInterface.c)
 *     Debugger @ 0x14006F69C (Debugger.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl stricmp_0(const char *Str1, const char *Str2)
{
  return _stricmp(Str1, Str2);
}
