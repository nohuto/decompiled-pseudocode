/*
 * XREFs of ?SetReferenceProperty@CSynchronousSuperWetInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140238600
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1400AE290 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CSynchronousSuperWetInkMarshaler::SetReferenceProperty(
        __int64 a1,
        struct _RTL_GENERIC_TABLE *a2,
        int a3,
        unsigned int *a4,
        _BYTE *a5)
{
  int v5; // r8d
  struct DirectComposition::CResourceMarshaler **v7; // r8
  int v8; // [rsp+38h] [rbp-20h]
  _BYTE *v9; // [rsp+48h] [rbp-10h]

  *a5 = 0;
  if ( !a3 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a1,
             a2,
             (struct DirectComposition::CResourceMarshaler **)(a1 + 56),
             a4,
             1,
             31,
             (int *)(a1 + 16),
             64,
             0,
             a5);
  v5 = a3 - 1;
  if ( v5 )
  {
    if ( v5 != 4 )
      return 3221225485LL;
    v9 = a5;
    v7 = (struct DirectComposition::CResourceMarshaler **)(a1 + 88);
    v8 = 2048;
  }
  else
  {
    v9 = a5;
    v7 = (struct DirectComposition::CResourceMarshaler **)(a1 + 64);
    v8 = 128;
  }
  return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
           a1,
           a2,
           v7,
           a4,
           1,
           133,
           (int *)(a1 + 16),
           v8,
           0,
           v9);
}
