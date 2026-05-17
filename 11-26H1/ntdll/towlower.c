/*
 * XREFs of towlower @ 0x18012D8E0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x1800AC4D0 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     iswctype @ 0x18012AE10 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
