/*
 * XREFs of ?SetReferenceProperty@CCaptureControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140237C00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1400AE290 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CCaptureControllerMarshaler::SetReferenceProperty(
        __int64 a1,
        struct _RTL_GENERIC_TABLE *a2,
        int a3,
        unsigned int *a4,
        _BYTE *a5)
{
  struct DirectComposition::CResourceMarshaler **v6; // r8
  int v7; // [rsp+38h] [rbp-20h]
  _BYTE *v8; // [rsp+48h] [rbp-10h]

  *a5 = 0;
  switch ( a3 )
  {
    case 0:
      v8 = a5;
      v6 = (struct DirectComposition::CResourceMarshaler **)(a1 + 56);
      v7 = 64;
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a1,
               a2,
               v6,
               a4,
               1,
               156,
               (int *)(a1 + 16),
               v7,
               0,
               v8);
    case 3:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a1,
               a2,
               (struct DirectComposition::CResourceMarshaler **)(a1 + 80),
               a4,
               1,
               148,
               (int *)(a1 + 16),
               512,
               0,
               a5);
    case 6:
      v8 = a5;
      v6 = (struct DirectComposition::CResourceMarshaler **)(a1 + 96);
      v7 = 4096;
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a1,
               a2,
               v6,
               a4,
               1,
               156,
               (int *)(a1 + 16),
               v7,
               0,
               v8);
    case 10:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a1,
               a2,
               (struct DirectComposition::CResourceMarshaler **)(a1 + 144),
               a4,
               1,
               160,
               (int *)(a1 + 16),
               0x8000,
               0,
               a5);
    default:
      return 3221225485LL;
  }
}
