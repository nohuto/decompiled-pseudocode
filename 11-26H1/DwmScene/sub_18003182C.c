/*
 * XREFs of sub_18003182C @ 0x18003182C
 * Callers:
 *     sub_18002F100 @ 0x18002F100 (sub_18002F100.c)
 *     sub_18002F1D0 @ 0x18002F1D0 (sub_18002F1D0.c)
 *     sub_1800D9601 @ 0x1800D9601 (sub_1800D9601.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 */

__int64 __fastcall sub_18003182C(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000C444(v1);
  return result;
}
