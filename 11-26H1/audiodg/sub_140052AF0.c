/*
 * XREFs of sub_140052AF0 @ 0x140052AF0
 * Callers:
 *     sub_14002FA30 @ 0x14002FA30 (sub_14002FA30.c)
 * Callees:
 *     sub_140052EBC @ 0x140052EBC (sub_140052EBC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140052AF0(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return sub_140052EBC();
  }
  return result;
}
