/*
 * XREFs of ViGetContextPointer @ 0x140C2281C
 * Callers:
 *     VfInsertContext @ 0x140640BC0 (VfInsertContext.c)
 *     VfRemoveContext @ 0x140640D60 (VfRemoveContext.c)
 *     ViQueryObjectContext @ 0x140C228D0 (ViQueryObjectContext.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x14046CD80 (IopAllocateIrpExtension.c)
 */

__int64 __fastcall ViGetContextPointer(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // edx
  __int64 IrpExtension; // rax

  result = 0LL;
  if ( !a2 )
    return *(_QWORD *)(a1 + 312) + 104LL;
  v3 = a2 - 1;
  if ( !v3 )
    return *(_QWORD *)(a1 + 48) + 72LL;
  if ( v3 == 1 )
  {
    IrpExtension = IopAllocateIrpExtension(a1, 3);
    return (IrpExtension + 8) & -(__int64)(IrpExtension != 0);
  }
  return result;
}
