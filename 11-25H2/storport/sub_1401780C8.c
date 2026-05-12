/*
 * XREFs of sub_1401780C8 @ 0x1401780C8
 * Callers:
 *     sub_1400465E0 @ 0x1400465E0 (sub_1400465E0.c)
 * Callees:
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_1401A8CA0 @ 0x1401A8CA0 (sub_1401A8CA0.c)
 *     sub_1401AE9F8 @ 0x1401AE9F8 (sub_1401AE9F8.c)
 */

char sub_1401780C8()
{
  void *v0; // rax
  void *v1; // rdi
  char v2; // bl
  _BYTE KeyValueInformation[512]; // [rsp+20h] [rbp-218h] BYREF

  v0 = (void *)sub_1401AE9F8();
  v1 = v0;
  if ( v0 )
  {
    v2 = sub_1401A8CA0(v0, KeyValueInformation);
    ZwClose(v1);
    LOBYTE(v0) = v2;
  }
  return (char)v0;
}
