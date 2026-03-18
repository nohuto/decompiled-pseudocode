/*
 * XREFs of __security_init_cookie @ 0x140BCDC0C
 * Callers:
 *     HalInitSystem @ 0x140B3B6C0 (HalInitSystem.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_init_cookie()
{
  if ( !RtlCopyFromUser__fo_ || RtlCopyFromUser__fo_ == 0x2B992DDFA232LL )
    __fastfail(6u);
  _security_cookie_complement = ~RtlCopyFromUser__fo_;
}
