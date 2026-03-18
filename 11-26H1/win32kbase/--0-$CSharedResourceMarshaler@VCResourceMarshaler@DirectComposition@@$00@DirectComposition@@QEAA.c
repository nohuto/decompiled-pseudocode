/*
 * XREFs of ??0?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$00@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@W4MIL_RESOURCE_TYPE@@@Z @ 0x140055FC8
 * Callers:
 *     ??0CVisualTargetMarshaler@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z @ 0x140056DA0 (--0CVisualTargetMarshaler@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056310 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,1>::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,1>(
        __int64 a1)
{
  _QWORD *v1; // rcx
  __int64 v2; // r8

  DirectComposition::CResourceMarshaler::CResourceMarshaler(a1, 110LL);
  v1[7] = v2;
  *v1 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,1>::`vftable';
  return v1;
}
