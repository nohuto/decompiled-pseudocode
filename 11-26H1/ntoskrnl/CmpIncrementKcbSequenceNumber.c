/*
 * XREFs of CmpIncrementKcbSequenceNumber @ 0x140ABFF70
 * Callers:
 *     CmDeleteLayeredKey @ 0x140446A10 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x1406E2950 (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpIncrementKcbSequenceNumber(__int64 a1)
{
  ++*(_QWORD *)(a1 + 304);
}
