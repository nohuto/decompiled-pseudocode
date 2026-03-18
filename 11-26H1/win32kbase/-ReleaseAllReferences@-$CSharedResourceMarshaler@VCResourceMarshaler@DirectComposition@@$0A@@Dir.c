/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1400A3AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ @ 0x1400A40BC (-Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ.c)
 */

__int64 __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,0>::ReleaseAllReferences(
        __int64 a1)
{
  DirectComposition::CSharedSystemResource *v2; // rcx
  __int64 result; // rax

  v2 = *(DirectComposition::CSharedSystemResource **)(a1 + 56);
  if ( v2 )
  {
    result = DirectComposition::CSharedSystemResource::Release(v2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
