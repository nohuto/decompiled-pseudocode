/*
 * XREFs of sub_180010208 @ 0x180010208
 * Callers:
 *     sub_18000E6E8 @ 0x18000E6E8 (sub_18000E6E8.c)
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 * Callees:
 *     sub_180010F4C @ 0x180010F4C (sub_180010F4C.c)
 */

BOOL __fastcall sub_180010208(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = ReleaseMutex(a1);
  if ( !result )
    sub_180010F4C(retaddr, 2540LL);
  return result;
}
