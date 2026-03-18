/*
 * XREFs of ?SetReferenceProperty@CYCbCrSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x14023FBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1400AE290 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CYCbCrSurfaceMarshaler::SetReferenceProperty(
        __int64 a1,
        struct _RTL_GENERIC_TABLE *a2,
        int a3,
        unsigned int *a4,
        _BYTE *a5)
{
  struct DirectComposition::CResourceMarshaler **v6; // r8

  if ( a3 )
  {
    if ( a3 != 1 )
      return 3221225485LL;
    v6 = (struct DirectComposition::CResourceMarshaler **)(a1 + 64);
  }
  else
  {
    v6 = (struct DirectComposition::CResourceMarshaler **)(a1 + 56);
  }
  return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
           a1,
           a2,
           v6,
           a4,
           1,
           31,
           (int *)(a1 + 16),
           0,
           0,
           a5);
}
