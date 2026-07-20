/*
 * XREFs of SmpFindRegistryValueEx @ 0x1400095D4
 * Callers:
 *     SmpInitializeKnownDllsInternal @ 0x140008F30 (SmpInitializeKnownDllsInternal.c)
 *     SmpBuildSubSystemLists @ 0x1400136A0 (SmpBuildSubSystemLists.c)
 * Callees:
 *     <none>
 */

const UNICODE_STRING *__fastcall SmpFindRegistryValueEx(const UNICODE_STRING **a1, const UNICODE_STRING *a2)
{
  const UNICODE_STRING *i; // rbx

  for ( i = *a1; i != (const UNICODE_STRING *)a1; i = *(const UNICODE_STRING **)&i->Length )
  {
    if ( !RtlCompareUnicodeString(i + 1, a2, 1u) )
      return i;
  }
  return 0LL;
}
