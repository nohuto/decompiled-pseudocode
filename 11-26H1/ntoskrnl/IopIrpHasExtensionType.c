/*
 * XREFs of IopIrpHasExtensionType @ 0x14041C8C0
 * Callers:
 *     IopPerfCompleteRequest @ 0x1403FB3E8 (IopPerfCompleteRequest.c)
 *     IoMakeAssociatedIrpPriv @ 0x1404578A8 (IoMakeAssociatedIrpPriv.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x1405CE430 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x1405CE480 (IoClearFsTrackOffsetState.c)
 *     IoSetFsZeroingOffset @ 0x1405CE520 (IoSetFsZeroingOffset.c)
 *     IoSetFsZeroingOffsetRequired @ 0x1405CE560 (IoSetFsZeroingOffsetRequired.c)
 * Callees:
 *     <none>
 */

bool __fastcall IopIrpHasExtensionType(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  int v3; // ecx

  v2 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 )
    return a2 == 2;
  if ( v2 )
  {
    v3 = *(unsigned __int16 *)(v2 + 2);
    if ( _bittest(&v3, a2) )
      return 1;
  }
  return 0;
}
