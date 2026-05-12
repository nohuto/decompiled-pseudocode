/*
 * XREFs of _wcsnicmp @ 0x14005655A
 * Callers:
 *     sub_1401A8AEC @ 0x1401A8AEC (sub_1401A8AEC.c)
 *     sub_1401A8D44 @ 0x1401A8D44 (sub_1401A8D44.c)
 *     sub_1401A8F0C @ 0x1401A8F0C (sub_1401A8F0C.c)
 *     sub_1401AE7D8 @ 0x1401AE7D8 (sub_1401AE7D8.c)
 *     sub_1401B2250 @ 0x1401B2250 (sub_1401B2250.c)
 *     sub_1401B236C @ 0x1401B236C (sub_1401B236C.c)
 *     sub_1401B2484 @ 0x1401B2484 (sub_1401B2484.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsnicmp(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  return _wcsnicmp(Str1, Str2, MaxCount);
}
