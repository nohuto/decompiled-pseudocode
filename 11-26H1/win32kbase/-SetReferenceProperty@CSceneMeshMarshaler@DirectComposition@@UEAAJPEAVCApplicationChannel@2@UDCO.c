/*
 * XREFs of ?SetReferenceProperty@CSceneMeshMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140238170
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1400AE290 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CSceneMeshMarshaler::SetReferenceProperty(
        __int64 a1,
        struct _RTL_GENERIC_TABLE *a2,
        int a3,
        unsigned int *a4,
        _BYTE *a5)
{
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d

  *a5 = 0;
  v5 = a3 - 1;
  if ( !v5 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a1,
             a2,
             (struct DirectComposition::CResourceMarshaler **)(a1 + 64),
             a4,
             1,
             134,
             (int *)(a1 + 16),
             128,
             0,
             a5);
  v6 = v5 - 1;
  if ( !v6 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a1,
             a2,
             (struct DirectComposition::CResourceMarshaler **)(a1 + 72),
             a4,
             1,
             134,
             (int *)(a1 + 16),
             256,
             0,
             a5);
  v7 = v6 - 1;
  if ( !v7 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a1,
             a2,
             (struct DirectComposition::CResourceMarshaler **)(a1 + 80),
             a4,
             1,
             134,
             (int *)(a1 + 16),
             512,
             0,
             a5);
  v8 = v7 - 1;
  if ( !v8 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a1,
             a2,
             (struct DirectComposition::CResourceMarshaler **)(a1 + 88),
             a4,
             1,
             134,
             (int *)(a1 + 16),
             1024,
             0,
             a5);
  v9 = v8 - 1;
  if ( !v9 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a1,
             a2,
             (struct DirectComposition::CResourceMarshaler **)(a1 + 96),
             a4,
             1,
             134,
             (int *)(a1 + 16),
             2048,
             0,
             a5);
  v10 = v9 - 1;
  if ( !v10 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a1,
             a2,
             (struct DirectComposition::CResourceMarshaler **)(a1 + 104),
             a4,
             1,
             134,
             (int *)(a1 + 16),
             4096,
             0,
             a5);
  if ( v10 == 1 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a1,
             a2,
             (struct DirectComposition::CResourceMarshaler **)(a1 + 112),
             a4,
             1,
             134,
             (int *)(a1 + 16),
             0x2000,
             0,
             a5);
  return 3221225485LL;
}
