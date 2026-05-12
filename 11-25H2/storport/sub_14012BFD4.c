/*
 * XREFs of sub_14012BFD4 @ 0x14012BFD4
 * Callers:
 *     sub_14012C040 @ 0x14012C040 (sub_14012C040.c)
 *     sub_14012C230 @ 0x14012C230 (sub_14012C230.c)
 *     sub_14012C9C0 @ 0x14012C9C0 (sub_14012C9C0.c)
 *     sub_14012CAD0 @ 0x14012CAD0 (sub_14012CAD0.c)
 * Callees:
 *     sub_1400F7308 @ 0x1400F7308 (sub_1400F7308.c)
 *     sub_1400F7368 @ 0x1400F7368 (sub_1400F7368.c)
 */

BOOLEAN __fastcall sub_14012BFD4(__int64 a1)
{
  BOOLEAN v2; // di
  IRP *v3; // rcx

  v2 = 1;
  if ( sub_1400F7308(a1) )
  {
    v3 = *(IRP **)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) + 72LL);
    if ( v3 )
    {
      v2 = IoCancelIrp(v3);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) + 72LL) = 0LL;
    }
    sub_1400F7368(a1);
  }
  return v2;
}
