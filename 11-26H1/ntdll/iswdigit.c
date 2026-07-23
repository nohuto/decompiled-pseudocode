/*
 * XREFs of iswdigit @ 0x18012AAF0
 * Callers:
 *     RtlpIsDosDeviceName_Ustr @ 0x1800333F0 (RtlpIsDosDeviceName_Ustr.c)
 * Callees:
 *     <none>
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
