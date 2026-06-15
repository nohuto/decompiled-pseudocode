/*
 * XREFs of sub_14002F2D8 @ 0x14002F2D8
 * Callers:
 *     sub_1400A91A8 @ 0x1400A91A8 (sub_1400A91A8.c)
 *     sub_1400A948C @ 0x1400A948C (sub_1400A948C.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14002F2D8(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return sub_1400B6010(a1);
  return result;
}
