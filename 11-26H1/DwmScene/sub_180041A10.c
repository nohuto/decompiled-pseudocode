/*
 * XREFs of sub_180041A10 @ 0x180041A10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003F5A4 @ 0x18003F5A4 (sub_18003F5A4.c)
 */

LPVOID __fastcall sub_180041A10(__int64 a1)
{
  void *v1; // rcx
  LPVOID result; // rax

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    return sub_18003F5A4(v1);
  return result;
}
