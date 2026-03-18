/*
 * XREFs of ??0?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056D40
 * Callers:
 *     ?OpenInternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIPEBUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x140056510 (-OpenInternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIPEBUResourceObject@.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056310 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,0>::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,0>(
        __int64 a1,
        __int64 a2,
        int a3)
{
  _QWORD *v3; // rcx
  __int64 v4; // r9

  DirectComposition::CResourceMarshaler::CResourceMarshaler(a1, a3);
  v3[7] = v4;
  *v3 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,0>::`vftable';
  return v3;
}
