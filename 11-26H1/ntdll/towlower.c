/*
 * XREFs of towlower @ 0x18012D650
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x1800AB600 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     iswctype @ 0x18012AB80 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
