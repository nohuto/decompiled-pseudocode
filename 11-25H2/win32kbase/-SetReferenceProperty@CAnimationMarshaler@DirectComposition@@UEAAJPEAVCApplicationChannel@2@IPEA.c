/*
 * XREFs of ?SetReferenceProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140134E20
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x140021E48 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CAnimationMarshaler::SetReferenceProperty(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  char v6; // [rsp+70h] [rbp+18h] BYREF

  if ( !a3 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             (__int64)this,
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 9,
             (unsigned int *)a4,
             0,
             156,
             (int *)this + 4,
             64,
             1,
             a5);
  if ( a3 != 7 || *((_QWORD *)this + 16) || *((_QWORD *)this + 12) )
    return 3221225485LL;
  return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
           (__int64)this,
           a2,
           (struct DirectComposition::CResourceMarshaler **)this + 16,
           (unsigned int *)a4,
           0,
           93,
           (int *)this + 4,
           0,
           0,
           &v6);
}
