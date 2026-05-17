/*
 * XREFs of wcsncmp @ 0x18012DC80
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x18002E860 (LdrpSearchResourceSection_U.c)
 *     LdrpResCompareResourceNames @ 0x1800AA320 (LdrpResCompareResourceNames.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x1800BFFC0 (LdrpCompareResourceNamesWithValidation.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsncmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  if ( !MaxCount )
    return 0;
  while ( --MaxCount && *String1 && *String1 == *String2 )
  {
    ++String1;
    ++String2;
  }
  return *String1 - *String2;
}
