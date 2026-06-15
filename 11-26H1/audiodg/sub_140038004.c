/*
 * XREFs of sub_140038004 @ 0x140038004
 * Callers:
 *     sub_140046EA8 @ 0x140046EA8 (sub_140046EA8.c)
 *     sub_14004D618 @ 0x14004D618 (sub_14004D618.c)
 * Callees:
 *     sub_140025BFC @ 0x140025BFC (sub_140025BFC.c)
 */

__int64 __fastcall sub_140038004(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  _WORD *v5; // rax
  __int64 v6; // r8
  __int64 result; // rax

  v4 = 260LL;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0x80070057 : 0;
  if ( v4 )
  {
    v6 = (260 - v4) & -(__int64)(v4 != 0);
    return sub_140025BFC(&a1[v6], 260 - v6, v6, a3);
  }
  return result;
}
