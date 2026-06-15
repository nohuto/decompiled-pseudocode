/*
 * XREFs of pfns @ 0x1400377A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_1400377D8 @ 0x1400377D8 (sub_1400377D8.c)
 */

void __fastcall pfns(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context)
{
  __int64 v3; // rcx

  sub_1400377D8(*Context);
  v3 = Context[1];
  if ( v3 )
    sub_140007588(v3);
  j_j__o_free(Context, 16LL);
}
