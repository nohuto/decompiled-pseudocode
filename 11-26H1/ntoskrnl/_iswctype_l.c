/*
 * XREFs of _iswctype_l @ 0x14053B328
 * Callers:
 *     wcstoxlX @ 0x14053ABBC (wcstoxlX.c)
 *     wcstoxq @ 0x14053B040 (wcstoxq.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype_l(wint_t C, wctype_t Type, _locale_t Locale)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & (*pwctype)[C];
}
