/*
 * XREFs of sub_18007FA6C @ 0x18007FA6C
 * Callers:
 *     sub_18005D458 @ 0x18005D458 (sub_18005D458.c)
 *     sub_1800C31E8 @ 0x1800C31E8 (sub_1800C31E8.c)
 * Callees:
 *     sub_18007F984 @ 0x18007F984 (sub_18007F984.c)
 */

__int64 __fastcall sub_18007FA6C(__int64 a1, _OWORD *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  sub_18007F984(*(_OWORD **)(a1 + 8), a2);
  result = *(_QWORD *)(v2 + 8);
  *(_QWORD *)(v2 + 8) = result + 16;
  return result;
}
