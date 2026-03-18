/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCLegacyAnimationTriggerMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x14015D790
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ @ 0x1400F0604 (-Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ.c)
 */

LONG_PTR __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CLegacyAnimationTriggerMarshaler,2>::ReleaseAllReferences(
        __int64 a1)
{
  LONG_PTR result; // rax

  result = *(_QWORD *)(a1 + 64);
  if ( result )
  {
    *(_DWORD *)(result + 36) = 0;
    result = DirectComposition::CSharedSystemResource::Release(*(DirectComposition::CSharedSystemResource **)(a1 + 64));
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  return result;
}
