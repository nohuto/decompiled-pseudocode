/*
 * XREFs of ?SetReferenceProperty@CSynchronousSuperWetInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14022F160
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x140021E48 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CSynchronousSuperWetInkMarshaler::SetReferenceProperty(
        DirectComposition::CSynchronousSuperWetInkMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v5; // r8d
  struct DirectComposition::CResourceMarshaler **v7; // r8
  int v8; // [rsp+38h] [rbp-20h]
  bool *v9; // [rsp+48h] [rbp-10h]

  *a5 = 0;
  if ( !a3 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             (__int64)this,
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 7,
             (unsigned int *)a4,
             1,
             41,
             (int *)this + 4,
             32,
             0,
             a5);
  v5 = a3 - 1;
  if ( v5 )
  {
    if ( v5 != 4 )
      return 3221225485LL;
    v9 = a5;
    v7 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 88);
    v8 = 1024;
  }
  else
  {
    v9 = a5;
    v7 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 64);
    v8 = 64;
  }
  return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
           (__int64)this,
           a2,
           v7,
           (unsigned int *)a4,
           1,
           157,
           (int *)this + 4,
           v8,
           0,
           v9);
}
