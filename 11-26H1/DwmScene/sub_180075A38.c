/*
 * XREFs of sub_180075A38 @ 0x180075A38
 * Callers:
 *     sub_18007544C @ 0x18007544C (sub_18007544C.c)
 *     sub_1800DCD5F @ 0x1800DCD5F (sub_1800DCD5F.c)
 * Callees:
 *     sub_18002E290 @ 0x18002E290 (sub_18002E290.c)
 */

__int64 __fastcall sub_180075A38(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18002E290(*(void ***)(a1 + 8), *(_QWORD *)a1);
  return result;
}
