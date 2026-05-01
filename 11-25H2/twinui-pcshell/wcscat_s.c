/*
 * XREFs of wcscat_s @ 0x1802D2FB4
 * Callers:
 *     ?PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z @ 0x18013C2DC (-PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
errno_t __cdecl wcscat_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source)
{
  return _o_wcscat_s(Destination, SizeInWords, Source);
}
