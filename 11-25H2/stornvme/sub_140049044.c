/*
 * XREFs of sub_140049044 @ 0x140049044
 * Callers:
 *     DriverEntry @ 0x140049010 (DriverEntry.c)
 * Callees:
 *     <none>
 */

uintptr_t sub_140049044()
{
  uintptr_t result; // rax

  if ( !_security_cookie || _security_cookie == 0x2B992DDFA232LL )
    __fastfail(6u);
  result = ~_security_cookie;
  qword_140042008 = ~_security_cookie;
  return result;
}
