/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCManipulationTransformMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1400A3910
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ @ 0x1400A40BC (-Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ.c)
 */

__int64 __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CManipulationTransformMarshaler,2>::ReleaseAllReferences(
        __int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 128);
  if ( result )
  {
    *(_DWORD *)(result + 36) = 0;
    result = DirectComposition::CSharedSystemResource::Release(*(DirectComposition::CSharedSystemResource **)(a1 + 128));
    *(_QWORD *)(a1 + 128) = 0LL;
  }
  return result;
}
