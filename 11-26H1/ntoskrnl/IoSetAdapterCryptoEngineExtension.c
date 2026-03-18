/*
 * XREFs of IoSetAdapterCryptoEngineExtension @ 0x1405CBC50
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateIrpExtension @ 0x14046CD80 (IopAllocateIrpExtension.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x1404BE33C (IopIrpHasValidCombinationOfExtensionTypes.c)
 */

__int64 __fastcall IoSetAdapterCryptoEngineExtension(__int64 a1, _OWORD *a2)
{
  __int64 v3; // r11
  __int64 IrpExtension; // rax

  if ( !IopIrpHasValidCombinationOfExtensionTypes(a1, 7) )
    return 3221225659LL;
  IrpExtension = IopAllocateIrpExtension(v3, 7);
  if ( !IrpExtension )
    return 3221225626LL;
  *(_OWORD *)(IrpExtension + 40) = *a2;
  return 0LL;
}
