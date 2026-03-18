/*
 * XREFs of ?SetReferenceProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140198EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x140021E48 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 *     ?SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14004A710 (-SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  struct DirectComposition::CResourceMarshaler **v6; // r8
  int *v7; // [rsp+30h] [rbp-28h]
  int v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+40h] [rbp-18h]
  bool *v10; // [rsp+48h] [rbp-10h]
  char v11; // [rsp+70h] [rbp+18h] BYREF

  switch ( a3 )
  {
    case 11:
      v6 = this + 16;
      v10 = a5;
      v9 = 1;
      v8 = 2048;
      v7 = (int *)(this + 2);
      break;
    case 24:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               (__int64)this,
               a2,
               this + 20,
               (unsigned int *)a4,
               1,
               2,
               (int *)this + 4,
               2048,
               1,
               a5);
    case 25:
      v6 = this + 17;
      v10 = (bool *)&v11;
      v9 = 0;
      v8 = 0;
      v7 = (int *)(this + 2);
      break;
    default:
      return DirectComposition::CBaseExpressionMarshaler::SetReferenceProperty(
               (DirectComposition::CBaseExpressionMarshaler *)this,
               a2,
               a3,
               a4,
               a5);
  }
  return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
           (__int64)this,
           a2,
           v6,
           (unsigned int *)a4,
           0,
           156,
           v7,
           v8,
           v9,
           v10);
}
