/*
 * XREFs of sub_1401B9044 @ 0x1401B9044
 * Callers:
 *     StorPortInitialize @ 0x14006FFB0 (StorPortInitialize.c)
 *     DriverEntry @ 0x1401B9010 (DriverEntry.c)
 * Callees:
 *     <none>
 */

uintptr_t sub_1401B9044()
{
  uintptr_t result; // rax

  if ( !_security_cookie || _security_cookie == 0x2B992DDFA232LL )
    __fastfail(6u);
  result = ~_security_cookie;
  qword_140168388 = ~_security_cookie;
  return result;
}
