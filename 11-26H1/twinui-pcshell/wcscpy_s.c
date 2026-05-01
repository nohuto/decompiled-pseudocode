/*
 * XREFs of wcscpy_s @ 0x1802C9E90
 * Callers:
 *     ?PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z @ 0x18015A37C (-PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z.c)
 *     ?Insert@RtlNameValueArray@@QEAAJPEBG00_K@Z @ 0x18015C760 (-Insert@RtlNameValueArray@@QEAAJPEBG00_K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
errno_t __cdecl wcscpy_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source)
{
  return _o_wcscpy_s(Destination, SizeInWords, Source);
}
