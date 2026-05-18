/*
 * XREFs of sub_18003F2A4 @ 0x18003F2A4
 * Callers:
 *     sub_18003E2E8 @ 0x18003E2E8 (sub_18003E2E8.c)
 * Callees:
 *     sub_18003F5A4 @ 0x18003F5A4 (sub_18003F5A4.c)
 */

__int64 __fastcall sub_18003F2A4(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18003F5A4(v1);
  return result;
}
