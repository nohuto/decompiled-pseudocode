/*
 * XREFs of ?SetReferenceProperty@CVisualCaptureMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140244BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1400AE290 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CVisualCaptureMarshaler::SetReferenceProperty(
        __int64 a1,
        struct _RTL_GENERIC_TABLE *a2,
        int a3,
        unsigned int *a4,
        _BYTE *a5)
{
  int v5; // r8d
  int v6; // r8d
  struct DirectComposition::CResourceMarshaler **v8; // r8

  v5 = a3 - 1;
  if ( !v5 )
  {
    v8 = (struct DirectComposition::CResourceMarshaler **)(a1 + 72);
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a1,
             a2,
             v8,
             a4,
             1,
             156,
             (int *)(a1 + 16),
             0,
             0,
             a5);
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v8 = (struct DirectComposition::CResourceMarshaler **)(a1 + 80);
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a1,
             a2,
             v8,
             a4,
             1,
             156,
             (int *)(a1 + 16),
             0,
             0,
             a5);
  }
  if ( v6 == 1 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a1,
             a2,
             (struct DirectComposition::CResourceMarshaler **)(a1 + 88),
             a4,
             1,
             31,
             (int *)(a1 + 16),
             0,
             0,
             a5);
  else
    return 3221225485LL;
}
