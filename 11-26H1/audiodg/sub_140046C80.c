/*
 * XREFs of sub_140046C80 @ 0x140046C80
 * Callers:
 *     sub_14004CEC8 @ 0x14004CEC8 (sub_14004CEC8.c)
 *     sub_14004F9C4 @ 0x14004F9C4 (sub_14004F9C4.c)
 * Callees:
 *     sub_14004F788 @ 0x14004F788 (sub_14004F788.c)
 */

BOOL __fastcall sub_140046C80(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = ReleaseMutex(a1);
  if ( !result )
    sub_14004F788(retaddr, 2540LL);
  return result;
}
