/*
 * XREFs of ?SetReferenceProperty@CProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140246140
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1400AE290 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CProjectedShadowCasterMarshaler::SetReferenceProperty(
        __int64 a1,
        struct _RTL_GENERIC_TABLE *a2,
        int a3,
        unsigned int *a4,
        _BYTE *a5)
{
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  struct DirectComposition::CResourceMarshaler **v9; // r8
  struct DirectComposition::CResourceMarshaler **v10; // r8
  int v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+38h] [rbp-20h]
  _BYTE *v13; // [rsp+48h] [rbp-10h]
  _BYTE *v14; // [rsp+48h] [rbp-10h]

  v5 = a3 - 1;
  if ( !v5 )
  {
    v10 = (struct DirectComposition::CResourceMarshaler **)(a1 + 88);
    v14 = a5;
    v12 = 512;
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a1,
             a2,
             v10,
             a4,
             1,
             16,
             (int *)(a1 + 16),
             v12,
             0,
             v14);
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v10 = (struct DirectComposition::CResourceMarshaler **)(a1 + 96);
    v14 = a5;
    v12 = 2048;
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a1,
             a2,
             v10,
             a4,
             1,
             16,
             (int *)(a1 + 16),
             v12,
             0,
             v14);
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 != 1 )
      return 3221225485LL;
    v9 = (struct DirectComposition::CResourceMarshaler **)(a1 + 72);
    v13 = a5;
    v11 = 256;
  }
  else
  {
    v9 = (struct DirectComposition::CResourceMarshaler **)(a1 + 80);
    v13 = a5;
    v11 = 1024;
  }
  return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
           a1,
           a2,
           v9,
           a4,
           1,
           156,
           (int *)(a1 + 16),
           v11,
           0,
           v13);
}
