/*
 * XREFs of sub_140012944 @ 0x140012944
 * Callers:
 *     sub_140012624 @ 0x140012624 (sub_140012624.c)
 *     sub_1400329EC @ 0x1400329EC (sub_1400329EC.c)
 * Callees:
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 *     sub_1400296E0 @ 0x1400296E0 (sub_1400296E0.c)
 */

__int64 __fastcall sub_140012944(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rsi
  __int64 result; // rax

  v2 = byte_140168DA9;
  if ( !a1 )
    return 3221225485LL;
  v3 = a1 + 376;
  if ( !(unsigned __int8)sub_140020090(a1 + 376, 20LL) )
    return 3221225659LL;
  if ( ((*(_BYTE *)(a1 + 110) & 0x20) != 0) == v2 )
    return 0LL;
  result = sub_1400296E0(v3, 20LL);
  if ( (int)result >= 0 )
    *(_BYTE *)(a1 + 110) ^= (*(_BYTE *)(a1 + 110) ^ (32 * v2)) & 0x20;
  return result;
}
