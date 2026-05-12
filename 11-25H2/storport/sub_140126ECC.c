/*
 * XREFs of sub_140126ECC @ 0x140126ECC
 * Callers:
 *     sub_140127440 @ 0x140127440 (sub_140127440.c)
 *     sub_140127FB0 @ 0x140127FB0 (sub_140127FB0.c)
 * Callees:
 *     sub_140126F38 @ 0x140126F38 (sub_140126F38.c)
 *     sub_14012A294 @ 0x14012A294 (sub_14012A294.c)
 */

BOOLEAN __fastcall sub_140126ECC(__int64 a1)
{
  BOOLEAN v2; // di
  IRP *v3; // rcx

  v2 = 1;
  if ( (unsigned __int8)sub_140126F38() )
  {
    v3 = *(IRP **)(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL) + 72LL);
    if ( v3 )
    {
      v2 = IoCancelIrp(v3);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL) + 72LL) = 0LL;
    }
    sub_14012A294(a1);
  }
  return v2;
}
