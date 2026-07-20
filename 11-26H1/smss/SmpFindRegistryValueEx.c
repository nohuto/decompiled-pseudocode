/*
 * XREFs of SmpFindRegistryValueEx @ 0x140008F4C
 * Callers:
 *     SmpInitializeKnownDllsInternal @ 0x1400088B0 (SmpInitializeKnownDllsInternal.c)
 *     SmpBuildSubSystemLists @ 0x1400132D0 (SmpBuildSubSystemLists.c)
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
