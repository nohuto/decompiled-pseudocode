/*
 * XREFs of sub_18008CC2C @ 0x18008CC2C
 * Callers:
 *     sub_18008D524 @ 0x18008D524 (sub_18008D524.c)
 *     sub_18008D604 @ 0x18008D604 (sub_18008D604.c)
 * Callees:
 *     sub_18007F984 @ 0x18007F984 (sub_18007F984.c)
 */

void __fastcall sub_18008CC2C(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax

  sub_18007F984(*(_OWORD **)(a1 + 8), a2);
  *(_QWORD *)(v2 + 8) += 16LL;
}
