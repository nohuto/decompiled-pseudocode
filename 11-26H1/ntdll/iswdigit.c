/*
 * XREFs of iswdigit @ 0x18012AD80
 * Callers:
 *     RtlpIsDosDeviceName_Ustr @ 0x180048E70 (RtlpIsDosDeviceName_Ustr.c)
 * Callees:
 *     <none>
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
