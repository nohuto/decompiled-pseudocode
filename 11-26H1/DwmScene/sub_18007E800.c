/*
 * XREFs of sub_18007E800 @ 0x18007E800
 * Callers:
 *     sub_180033140 @ 0x180033140 (sub_180033140.c)
 *     sub_18007DD3C @ 0x18007DD3C (sub_18007DD3C.c)
 * Callees:
 *     sub_18007E644 @ 0x18007E644 (sub_18007E644.c)
 */

__int64 __fastcall sub_18007E800(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 112) )
    return sub_18007E644(a1);
  return result;
}
