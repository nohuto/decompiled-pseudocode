/*
 * XREFs of sub_140080A60 @ 0x140080A60
 * Callers:
 *     sub_1400B3B1D @ 0x1400B3B1D (sub_1400B3B1D.c)
 * Callees:
 *     sub_140084120 @ 0x140084120 (sub_140084120.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140080A60(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return sub_140084120(*(_QWORD *)a1 + 832LL);
  }
  return result;
}
