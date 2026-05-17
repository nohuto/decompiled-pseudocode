/*
 * XREFs of _iswctype_l @ 0x18012ADE0
 * Callers:
 *     wcstoxq @ 0x180129258 (wcstoxq.c)
 *     wcstoxlX @ 0x18012E2C8 (wcstoxlX.c)
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
