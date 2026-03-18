/*
 * XREFs of KeIsThreadedDpcThread @ 0x140481634
 * Callers:
 *     MiGroupZeroHugeRange @ 0x140705024 (MiGroupZeroHugeRange.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsThreadedDpcThread(__int64 a1)
{
  return *(_QWORD *)(a1 + 1376) == (_QWORD)KiExecuteDpc;
}
