/*
 * XREFs of sub_1800D86A8 @ 0x1800D86A8
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800184CC @ 0x1800184CC (sub_1800184CC.c)
 */

__int64 __fastcall sub_1800D86A8(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_1800184CC(*(__int64 (__fastcall *****)(_QWORD, __int64))(a2 + 160));
  }
  return result;
}
