/*
 * XREFs of sub_1409EA128 @ 0x1409EA128
 * Callers:
 *     sub_1409E8670 @ 0x1409E8670 (sub_1409E8670.c)
 *     sub_1409EB030 @ 0x1409EB030 (sub_1409EB030.c)
 *     sub_1409EB3C4 @ 0x1409EB3C4 (sub_1409EB3C4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409EA128(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( !_InterlockedAdd64((volatile signed __int64 *)(a1 + 80), 1uLL) )
      return 3221225701LL;
  }
  return result;
}
