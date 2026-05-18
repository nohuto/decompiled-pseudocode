/*
 * XREFs of sub_18001D650 @ 0x18001D650
 * Callers:
 *     sub_18001D9D0 @ 0x18001D9D0 (sub_18001D9D0.c)
 *     sub_1800D8BF4 @ 0x1800D8BF4 (sub_1800D8BF4.c)
 * Callees:
 *     sub_18001CB70 @ 0x18001CB70 (sub_18001CB70.c)
 */

__int64 __fastcall sub_18001D650(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18001CB70(*(void ***)(a1 + 8), *(_QWORD *)a1);
  return result;
}
