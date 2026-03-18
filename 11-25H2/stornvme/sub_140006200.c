/*
 * XREFs of sub_140006200 @ 0x140006200
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 */

__int64 __fastcall sub_140006200(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _BYTE *v4; // r8
  __int64 v5; // r9

  result = sub_140005000(a2);
  if ( *(_BYTE *)(v3 + 3) == 1 )
  {
    if ( v4 )
      *(_BYTE *)(v5 + 3956) = *(_BYTE *)(v5 + 3956) & 0xFB | (4 * (*v4 & 1));
    else
      *(_BYTE *)(v3 + 3) = 4;
  }
  *(_BYTE *)(result + 4225) |= 8u;
  return result;
}
