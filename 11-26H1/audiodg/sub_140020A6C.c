/*
 * XREFs of sub_140020A6C @ 0x140020A6C
 * Callers:
 *     sub_1400208E8 @ 0x1400208E8 (sub_1400208E8.c)
 *     sub_140020994 @ 0x140020994 (sub_140020994.c)
 *     sub_1400209D0 @ 0x1400209D0 (sub_1400209D0.c)
 * Callees:
 *     sub_1400547F8 @ 0x1400547F8 (sub_1400547F8.c)
 */

bool __fastcall sub_140020A6C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a2 != a4 )
    return 0;
  if ( a2 )
    return (unsigned int)sub_1400547F8(a1, a3, a2) == 0;
  return 1;
}
