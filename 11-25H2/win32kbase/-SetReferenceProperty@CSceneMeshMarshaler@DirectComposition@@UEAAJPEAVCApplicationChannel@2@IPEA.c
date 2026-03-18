/*
 * XREFs of ?SetReferenceProperty@CSceneMeshMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14022ED60
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x140021E48 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CSceneMeshMarshaler::SetReferenceProperty(
        DirectComposition::CSceneMeshMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
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
             (__int64)this,
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 8,
             (unsigned int *)a4,
             1,
             158,
             (int *)this + 4,
             64,
             0,
             a5);
  v6 = v5 - 1;
  if ( !v6 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             (__int64)this,
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 9,
             (unsigned int *)a4,
             1,
             158,
             (int *)this + 4,
             128,
             0,
             a5);
  v7 = v6 - 1;
  if ( !v7 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             (__int64)this,
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 10,
             (unsigned int *)a4,
             1,
             158,
             (int *)this + 4,
             256,
             0,
             a5);
  v8 = v7 - 1;
  if ( !v8 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             (__int64)this,
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 11,
             (unsigned int *)a4,
             1,
             158,
             (int *)this + 4,
             512,
             0,
             a5);
  v9 = v8 - 1;
  if ( !v9 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             (__int64)this,
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 12,
             (unsigned int *)a4,
             1,
             158,
             (int *)this + 4,
             1024,
             0,
             a5);
  v10 = v9 - 1;
  if ( !v10 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             (__int64)this,
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 13,
             (unsigned int *)a4,
             1,
             158,
             (int *)this + 4,
             2048,
             0,
             a5);
  if ( v10 == 1 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             (__int64)this,
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 14,
             (unsigned int *)a4,
             1,
             158,
             (int *)this + 4,
             4096,
             0,
             a5);
  return 3221225485LL;
}
