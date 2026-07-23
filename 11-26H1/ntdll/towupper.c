/*
 * XREFs of towupper @ 0x18012D680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
