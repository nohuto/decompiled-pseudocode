/*
 * XREFs of sub_1800343D0 @ 0x1800343D0
 * Callers:
 *     sub_180063990 @ 0x180063990 (sub_180063990.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 */

__int64 __fastcall sub_1800343D0(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // r10
  _QWORD *v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r9

  v3 = *(_QWORD *)(a1 + 704);
  v4 = a2;
  v5 = a3;
  if ( (*(_QWORD *)(a1 + 712) - v3) >> 4 <= (unsigned __int64)a3 )
  {
    std::_Xout_of_range("invalid vector subscript");
    __debugbreak();
  }
  sub_180012C40(v4, (_QWORD *)(v3 + 16 * v5));
  return v6;
}
