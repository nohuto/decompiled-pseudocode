/*
 * XREFs of IopIrpHasExtensionType @ 0x14042F9B0
 * Callers:
 *     IopPerfCompleteRequest @ 0x1403FEBF8 (IopPerfCompleteRequest.c)
 *     IoMakeAssociatedIrpPriv @ 0x14045DD08 (IoMakeAssociatedIrpPriv.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x1405CBBC0 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x1405CBC10 (IoClearFsTrackOffsetState.c)
 *     IoSetFsZeroingOffset @ 0x1405CBCB0 (IoSetFsZeroingOffset.c)
 *     IoSetFsZeroingOffsetRequired @ 0x1405CBCF0 (IoSetFsZeroingOffsetRequired.c)
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
