/*
 * XREFs of sub_1400D0FF0 @ 0x1400D0FF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400C5820 @ 0x1400C5820 (sub_1400C5820.c)
 *     sub_1400C5A64 @ 0x1400C5A64 (sub_1400C5A64.c)
 *     sub_1400C5FA8 @ 0x1400C5FA8 (sub_1400C5FA8.c)
 *     sub_1400EB850 @ 0x1400EB850 (sub_1400EB850.c)
 *     sub_1400ECAF8 @ 0x1400ECAF8 (sub_1400ECAF8.c)
 */

void __fastcall sub_1400D0FF0(PVOID IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v4; // rax

  sub_1400ECAF8(Context);
  sub_1400EB850(Context);
  sub_1400C5820(Context, 1);
  sub_1400C5FA8(Context, 1);
  sub_1400C5A64(Context, 1);
  v4 = Context[74];
  if ( v4 )
    *(_QWORD *)((char *)Context + 841) = *(_QWORD *)(v4 + 64);
}
