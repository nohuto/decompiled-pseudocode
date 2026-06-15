/*
 * XREFs of sub_14003A568 @ 0x14003A568
 * Callers:
 *     sub_14003A538 @ 0x14003A538 (sub_14003A538.c)
 *     sub_1400AEFF6 @ 0x1400AEFF6 (sub_1400AEFF6.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14003A568(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    return sub_1400453E4(v1, 32LL);
  return result;
}
