/*
 * XREFs of sub_180027670 @ 0x180027670
 * Callers:
 *     sub_1800C0910 @ 0x1800C0910 (sub_1800C0910.c)
 * Callees:
 *     sub_180027484 @ 0x180027484 (sub_180027484.c)
 *     sub_1800297F4 @ 0x1800297F4 (sub_1800297F4.c)
 */

__int64 __fastcall sub_180027670(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( !v2 || !*((_BYTE *)a1 + 8) )
    sub_180027484(1);
  result = sub_1800297F4(v2);
  *((_BYTE *)a1 + 8) = 0;
  return result;
}
