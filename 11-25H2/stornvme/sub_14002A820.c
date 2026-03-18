/*
 * XREFs of sub_14002A820 @ 0x14002A820
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 */

__int64 __fastcall sub_14002A820(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _WORD *v4; // r8
  __int64 v5; // r9
  char v6; // dl

  result = sub_140005000(a2);
  if ( v4 )
  {
    v6 = *(_BYTE *)(v3 + 3);
    if ( v6 != 14 )
    {
      if ( v6 == 1 )
        *(_WORD *)(v5 + 220) = *v4;
      *(_BYTE *)(result + 4225) |= 8u;
    }
  }
  return result;
}
