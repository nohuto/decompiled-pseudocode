/*
 * XREFs of ?SetReferenceProperty@CProjectedShadowReceiverMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x1402464A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1400AE290 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CProjectedShadowReceiverMarshaler::SetReferenceProperty(
        __int64 a1,
        struct _RTL_GENERIC_TABLE *a2,
        int a3,
        unsigned int *a4,
        _BYTE *a5)
{
  int v5; // r8d

  v5 = a3 - 1;
  if ( !v5 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a1,
             a2,
             (struct DirectComposition::CResourceMarshaler **)(a1 + 72),
             a4,
             1,
             16,
             (int *)(a1 + 16),
             256,
             0,
             a5);
  if ( v5 == 2 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a1,
             a2,
             (struct DirectComposition::CResourceMarshaler **)(a1 + 88),
             a4,
             1,
             156,
             (int *)(a1 + 16),
             1024,
             0,
             a5);
  return 3221225485LL;
}
