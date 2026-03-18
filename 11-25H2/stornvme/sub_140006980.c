/*
 * XREFs of sub_140006980 @ 0x140006980
 * Callers:
 *     sub_140006730 @ 0x140006730 (sub_140006730.c)
 *     sub_140008590 @ 0x140008590 (sub_140008590.c)
 *     sub_140008F00 @ 0x140008F00 (sub_140008F00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140006980(__int64 a1, char a2)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = a1;
  if ( (*(_BYTE *)(a1 + 21) & 0x20) == 0 && (unsigned int)(*(_DWORD *)(a1 + 16) - 1) <= 1 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 12LL) = 1 << a2;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    *(_BYTE *)(a1 + 21) |= 0x20u;
  }
  return result;
}
