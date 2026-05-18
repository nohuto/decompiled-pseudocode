/*
 * XREFs of sub_18001F3BC @ 0x18001F3BC
 * Callers:
 *     sub_18007B100 @ 0x18007B100 (sub_18007B100.c)
 *     sub_1800879C4 @ 0x1800879C4 (sub_1800879C4.c)
 *     sub_1800977D4 @ 0x1800977D4 (sub_1800977D4.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_18001F3BC(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18000E26C(*(void **)(a1 + 8), 4LL * *(_QWORD *)(a1 + 16));
  return result;
}
