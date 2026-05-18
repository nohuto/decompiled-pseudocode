/*
 * XREFs of sub_1800531B0 @ 0x1800531B0
 * Callers:
 *     sub_1800C29D0 @ 0x1800C29D0 (sub_1800C29D0.c)
 * Callees:
 *     sub_180050314 @ 0x180050314 (sub_180050314.c)
 */

__int64 __fastcall sub_1800531B0(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_180050314(v1);
  return result;
}
