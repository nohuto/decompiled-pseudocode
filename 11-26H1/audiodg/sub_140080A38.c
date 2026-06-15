/*
 * XREFs of sub_140080A38 @ 0x140080A38
 * Callers:
 *     sub_1400B3666 @ 0x1400B3666 (sub_1400B3666.c)
 * Callees:
 *     sub_140006C48 @ 0x140006C48 (sub_140006C48.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140080A38(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return sub_140006C48(**(_QWORD **)a1);
  }
  return result;
}
