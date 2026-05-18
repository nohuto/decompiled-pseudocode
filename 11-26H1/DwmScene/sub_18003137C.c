/*
 * XREFs of sub_18003137C @ 0x18003137C
 * Callers:
 *     sub_1800313E8 @ 0x1800313E8 (sub_1800313E8.c)
 *     sub_18005CC70 @ 0x18005CC70 (sub_18005CC70.c)
 *     sub_1800D95DD @ 0x1800D95DD (sub_1800D95DD.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_18003137C(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_18000E26C(v1, 0x20uLL);
  return result;
}
