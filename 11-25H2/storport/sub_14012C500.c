/*
 * XREFs of sub_14012C500 @ 0x14012C500
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400F7308 @ 0x1400F7308 (sub_1400F7308.c)
 *     sub_1400F7368 @ 0x1400F7368 (sub_1400F7368.c)
 *     sub_14012C594 @ 0x14012C594 (sub_14012C594.c)
 */

void __fastcall sub_14012C500(_QWORD *Context)
{
  ++*(_QWORD *)(*(_QWORD *)(Context[16] + 32LL) + 24LL);
  if ( sub_1400F7308((__int64)Context) )
  {
    *(_DWORD *)(*(_QWORD *)(Context[16] + 8LL) + 32LL) |= 4u;
    sub_14012C594(Context);
    sub_1400F7368((__int64)Context);
  }
}
