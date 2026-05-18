/*
 * XREFs of sub_18007EBB8 @ 0x18007EBB8
 * Callers:
 *     sub_1800172BC @ 0x1800172BC (sub_1800172BC.c)
 *     sub_1800434CC @ 0x1800434CC (sub_1800434CC.c)
 *     sub_18006624C @ 0x18006624C (sub_18006624C.c)
 * Callees:
 *     sub_18007C6F4 @ 0x18007C6F4 (sub_18007C6F4.c)
 */

__int64 __fastcall sub_18007EBB8(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_18007C6F4(*(_QWORD *)(a1 + 16), a2);
  return sub_18007EBF0(a1, v5, a3);
}
