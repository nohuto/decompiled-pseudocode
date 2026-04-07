/*
 * XREFs of ?SetGroup@CPrimitive@@QEAAXPEAVCPrimitiveGroupVisual@@@Z @ 0x18007DCBC
 * Callers:
 *     ?RemoveAllPrimitives@CPrimitiveGroupVisual@@QEAAXXZ @ 0x1800881CC (-RemoveAllPrimitives@CPrimitiveGroupVisual@@QEAAXXZ.c)
 *     ?AppendPrimitive@CPrimitiveGroupVisual@@QEAAXPEAVCPrimitive@@@Z @ 0x1800BDB34 (-AppendPrimitive@CPrimitiveGroupVisual@@QEAAXPEAVCPrimitive@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPrimitive::SetGroup(CPrimitive *this, struct CPrimitiveGroupVisual *a2)
{
  *((_QWORD *)this + 2) = a2;
}
