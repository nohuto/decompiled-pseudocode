/*
 * XREFs of sub_18000EB40 @ 0x18000EB40
 * Callers:
 *     sub_18000E6C8 @ 0x18000E6C8 (sub_18000E6C8.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 * Callees:
 *     sub_180010F4C @ 0x180010F4C (sub_180010F4C.c)
 */

BOOL __fastcall sub_18000EB40(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = CloseHandle(a1);
  if ( !result )
    sub_180010F4C(retaddr, 2530LL);
  return result;
}
