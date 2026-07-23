/*
 * XREFs of _iswctype_l @ 0x18012AB50
 * Callers:
 *     wcstoxq @ 0x180128FC8 (wcstoxq.c)
 *     wcstoxlX @ 0x18012E034 (wcstoxlX.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype_l(wint_t C, wctype_t Type, _locale_t Locale)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & pwctype[C];
}
