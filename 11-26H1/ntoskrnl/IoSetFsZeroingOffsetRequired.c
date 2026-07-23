/*
 * XREFs of IoSetFsZeroingOffsetRequired @ 0x1405CE560
 * Callers:
 *     <none>
 * Callees:
 *     IopIrpHasExtensionType @ 0x14041C8C0 (IopIrpHasExtensionType.c)
 *     IopAllocateIrpExtension @ 0x140466500 (IopAllocateIrpExtension.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x1404B7B8C (IopIrpHasValidCombinationOfExtensionTypes.c)
 */

__int64 __fastcall IoSetFsZeroingOffsetRequired(__int64 a1)
{
  int v1; // edx
  __int64 v2; // r11
  __int64 v4; // r11
  __int64 IrpExtension; // rax

  if ( IopIrpHasExtensionType(a1, 4u) )
    return 3221225505LL;
  if ( !IopIrpHasValidCombinationOfExtensionTypes(v2, v1) )
    return 3221225659LL;
  IrpExtension = IopAllocateIrpExtension(v4, 4);
  if ( !IrpExtension )
    return 3221225626LL;
  *(_DWORD *)(IrpExtension + 40) = 0;
  return 0LL;
}
