/*
 * XREFs of sub_140007C98 @ 0x140007C98
 * Callers:
 *     sub_14000802C @ 0x14000802C (sub_14000802C.c)
 *     sub_140008174 @ 0x140008174 (sub_140008174.c)
 * Callees:
 *     sub_14000802C @ 0x14000802C (sub_14000802C.c)
 */

__int64 __fastcall sub_140007C98(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  bool v3; // zf

  result = *(_QWORD *)(a1 + 32);
  *a2 = result;
  v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v3 )
    return sub_14000802C();
  return result;
}
