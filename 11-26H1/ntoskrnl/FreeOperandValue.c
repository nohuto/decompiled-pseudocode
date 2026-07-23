/*
 * XREFs of FreeOperandValue @ 0x140A7045C
 * Callers:
 *     LocalGetConditionForString @ 0x140A70494 (LocalGetConditionForString.c)
 *     GetOperandValue @ 0x140A70FD0 (GetOperandValue.c)
 * Callees:
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
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
