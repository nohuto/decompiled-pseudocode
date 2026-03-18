/*
 * XREFs of IopAllocateIrpWithExtension @ 0x14045DC8C
 * Callers:
 *     IoAllocateIrp @ 0x14026C4D0 (IoAllocateIrp.c)
 *     IoAllocateIrpEx @ 0x14026C530 (IoAllocateIrpEx.c)
 *     IopAllocateIrpExReturn @ 0x14026C640 (IopAllocateIrpExReturn.c)
 *     IopMountVolume @ 0x140B1E87C (IopMountVolume.c)
 *     IopInitializeReserveIrps @ 0x140CBD6C0 (IopInitializeReserveIrps.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x14026C684 (IopAllocateIrpPrivate.c)
 *     IopIsActivityTracingEnabled @ 0x14045BD70 (IopIsActivityTracingEnabled.c)
 *     IopInitActivityIdIrp @ 0x140481F80 (IopInitActivityIdIrp.c)
 */

__int64 __fastcall IopAllocateIrpWithExtension(__int64 a1, char a2, char a3)
{
  __int64 IrpPrivate; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx

  IrpPrivate = IopAllocateIrpPrivate(0LL, a2 + 2, a3);
  v4 = IrpPrivate;
  if ( IrpPrivate )
  {
    *(_QWORD *)(IrpPrivate + 184) -= 144LL;
    v5 = *(_QWORD *)(IrpPrivate + 184);
    *(_BYTE *)(IrpPrivate + 67) -= 2;
    *(_BYTE *)(IrpPrivate + 66) -= 2;
    *(_QWORD *)(IrpPrivate + 200) = v5;
    if ( IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(v4);
  }
  return v4;
}
