/*
 * XREFs of ?SetReferenceProperty@CProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140151860
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x140021E48 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CProjectedShadowCasterMarshaler::SetReferenceProperty(
        DirectComposition::CProjectedShadowCasterMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  struct DirectComposition::CResourceMarshaler **v10; // r8
  int *v11; // rcx
  struct DirectComposition::CResourceMarshaler **v12; // r8
  int *v13; // rcx
  int v14; // [rsp+38h] [rbp-20h]
  int v15; // [rsp+38h] [rbp-20h]
  bool *v16; // [rsp+48h] [rbp-10h]
  bool *v17; // [rsp+48h] [rbp-10h]

  v6 = a3 - 1;
  if ( !v6 )
  {
    v12 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 88);
    v17 = a5;
    v13 = (int *)((char *)this + 16);
    v15 = 256;
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             (__int64)this,
             a2,
             v12,
             (unsigned int *)a4,
             1,
             17,
             v13,
             v15,
             0,
             v17);
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v12 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 96);
    v17 = a5;
    v13 = (int *)((char *)this + 16);
    v15 = 1024;
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             (__int64)this,
             a2,
             v12,
             (unsigned int *)a4,
             1,
             17,
             v13,
             v15,
             0,
             v17);
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 != 1 )
      return 3221225485LL;
    v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 72);
    v16 = a5;
    v11 = (int *)((char *)this + 16);
    v14 = 128;
  }
  else
  {
    v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 80);
    v16 = a5;
    v11 = (int *)((char *)this + 16);
    v14 = 512;
  }
  return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
           (__int64)this,
           a2,
           v10,
           (unsigned int *)a4,
           1,
           182,
           v11,
           v14,
           0,
           v16);
}
