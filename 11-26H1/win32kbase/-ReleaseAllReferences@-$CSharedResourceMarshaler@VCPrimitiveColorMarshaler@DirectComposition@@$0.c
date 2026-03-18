/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCPrimitiveColorMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x14023BE50
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ @ 0x1400A40BC (-Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ.c)
 */

LONG_PTR __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CPrimitiveColorMarshaler,2>::ReleaseAllReferences(
        __int64 a1)
{
  LONG_PTR result; // rax

  result = *(_QWORD *)(a1 + 72);
  if ( result )
  {
    *(_DWORD *)(result + 36) = 0;
    result = DirectComposition::CSharedSystemResource::Release(*(DirectComposition::CSharedSystemResource **)(a1 + 72));
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  return result;
}
