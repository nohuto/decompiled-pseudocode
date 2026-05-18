/*
 * XREFs of sub_18003F3C4 @ 0x18003F3C4
 * Callers:
 *     sub_1800DABE5 @ 0x1800DABE5 (sub_1800DABE5.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 */

__int64 __fastcall sub_18003F3C4(__int64 a1)
{
  volatile signed __int32 *v1; // rcx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 16);
  if ( v1 )
    return sub_180010F00(v1);
  return result;
}
