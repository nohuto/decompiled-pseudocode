/*
 * XREFs of ?SetReferenceProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140194110
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1400AE290 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 *     ?SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x1401C00E0 (-SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetReferenceProperty(
        __int64 a1,
        struct _RTL_GENERIC_TABLE *a2,
        int a3,
        unsigned int *a4,
        char *a5)
{
  struct DirectComposition::CResourceMarshaler **v6; // r8
  int v7; // [rsp+28h] [rbp-30h]
  int *v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+40h] [rbp-18h]
  char *v11; // [rsp+48h] [rbp-10h]
  char v12; // [rsp+70h] [rbp+18h] BYREF

  switch ( a3 )
  {
    case 12:
      v6 = (struct DirectComposition::CResourceMarshaler **)(a1 + 136);
      v11 = a5;
      v10 = 1;
      v9 = 4096;
      v8 = (int *)(a1 + 16);
      break;
    case 25:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a1,
               a2,
               (struct DirectComposition::CResourceMarshaler **)(a1 + 184),
               a4,
               1,
               3,
               (int *)(a1 + 16),
               4096,
               1,
               a5);
    case 26:
      v6 = (struct DirectComposition::CResourceMarshaler **)(a1 + 144);
      v11 = &v12;
      v10 = 0;
      v9 = 0;
      v8 = (int *)(a1 + 16);
      break;
    case 36:
      v6 = (struct DirectComposition::CResourceMarshaler **)(a1 + 192);
      if ( *(_QWORD *)(a1 + 192) )
        return 3221225485LL;
      v11 = a5;
      v10 = 1;
      v9 = 0x80000;
      v8 = (int *)(a1 + 16);
      v7 = 4;
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(a1, a2, v6, a4, 0, v7, v8, v9, v10, v11);
    default:
      return DirectComposition::CBaseExpressionMarshaler::SetReferenceProperty(a1);
  }
  v7 = 132;
  return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(a1, a2, v6, a4, 0, v7, v8, v9, v10, v11);
}
