/*
 * XREFs of RtlpInitializeHandleTableForAtomTable @ 0x1409BDC0C
 * Callers:
 *     RtlCreateAtomTableEx @ 0x1404CD530 (RtlCreateAtomTableEx.c)
 * Callees:
 *     ExpAllocateHandleTable @ 0x1409BCEF8 (ExpAllocateHandleTable.c)
 */

bool __fastcall RtlpInitializeHandleTableForAtomTable(__int64 a1)
{
  __int64 HandleTable; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax

  HandleTable = ExpAllocateHandleTable(0LL, 1);
  v3 = HandleTable;
  if ( HandleTable )
  {
    v4 = (_QWORD *)(HandleTable + 24);
    v4[1] = v4;
    *v4 = v4;
  }
  else
  {
    v3 = 0LL;
  }
  *(_QWORD *)(a1 + 16) = v3;
  return v3 != 0;
}
