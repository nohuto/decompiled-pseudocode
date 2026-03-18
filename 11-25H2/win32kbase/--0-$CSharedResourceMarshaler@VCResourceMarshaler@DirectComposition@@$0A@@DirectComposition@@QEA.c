/*
 * XREFs of ??0?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@W4MIL_RESOURCE_TYPE@@@Z @ 0x140054168
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400ACB50 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140053FB4 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,0>::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,0>(
        _QWORD *a1,
        __int64 a2,
        int a3)
{
  DirectComposition::CResourceMarshaler::CResourceMarshaler((__int64)a1, a3);
  a1[7] = a2;
  *a1 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,0>::`vftable';
  return a1;
}
