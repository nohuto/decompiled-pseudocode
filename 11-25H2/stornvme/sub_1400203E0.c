/*
 * XREFs of sub_1400203E0 @ 0x1400203E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 */

__int64 __fastcall sub_1400203E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8

  result = sub_140005000(a2);
  if ( *(_BYTE *)(v3 + 3) == 1 && !v4 )
    *(_BYTE *)(v3 + 3) = 4;
  *(_BYTE *)(result + 4225) |= 8u;
  return result;
}
