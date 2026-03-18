/*
 * XREFs of FreeOperandValue @ 0x140A6348C
 * Callers:
 *     LocalGetConditionForString @ 0x140A634C4 (LocalGetConditionForString.c)
 *     GetOperandValue @ 0x140A64000 (GetOperandValue.c)
 * Callees:
 *     SddlpFree @ 0x1409ED230 (SddlpFree.c)
 */

void __fastcall FreeOperandValue(_QWORD *a1)
{
  void *v2; // rcx

  if ( a1 )
  {
    v2 = (void *)a1[1];
    if ( v2 )
    {
      if ( !*(_BYTE *)a1 )
        SddlpFree(v2);
    }
    SddlpFree(a1);
  }
}
