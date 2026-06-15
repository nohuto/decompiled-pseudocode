/*
 * XREFs of sub_1400321C0 @ 0x1400321C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400321C0(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(a1 + 12));
  if ( !(_DWORD)result )
    *(_BYTE *)(a1 + 97) = 1;
  return result;
}
