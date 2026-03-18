/*
 * XREFs of IopSetCopyInformationExtension @ 0x14046CD44
 * Callers:
 *     IopAllocateAndPopulateWriteIrp @ 0x1404BA6B0 (IopAllocateAndPopulateWriteIrp.c)
 *     IopReadFile @ 0x1408F856C (IopReadFile.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x14046CD80 (IopAllocateIrpExtension.c)
 */

__int64 __fastcall IopSetCopyInformationExtension(__int64 a1, _OWORD *a2)
{
  __int64 IrpExtension; // rax

  IrpExtension = IopAllocateIrpExtension(a1, 9LL);
  if ( !IrpExtension )
    return 3221225626LL;
  *(_OWORD *)(IrpExtension + 64) = *a2;
  return 0LL;
}
