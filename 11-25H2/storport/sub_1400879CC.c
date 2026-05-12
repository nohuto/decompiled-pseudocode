/*
 * XREFs of sub_1400879CC @ 0x1400879CC
 * Callers:
 *     sub_1401A2614 @ 0x1401A2614 (sub_1401A2614.c)
 * Callees:
 *     sub_1400889A8 @ 0x1400889A8 (sub_1400889A8.c)
 *     sub_140088A30 @ 0x140088A30 (sub_140088A30.c)
 */

__int64 __fastcall sub_1400879CC(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( !a1 || !a2 )
    return 3221225485LL;
  result = sub_1400889A8();
  if ( (_DWORD)result == -1073741637 )
    result = sub_140088A30(a1, a2);
  if ( (int)result >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 64);
    v6 = *(_QWORD *)(v5 + 144);
    if ( (v6 & 0x40000) == 0 )
      *(_QWORD *)(v5 + 144) = v6 | 0x40000;
  }
  return result;
}
