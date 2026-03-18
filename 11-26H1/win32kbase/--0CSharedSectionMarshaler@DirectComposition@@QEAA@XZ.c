/*
 * XREFs of ??0CSharedSectionMarshaler@DirectComposition@@QEAA@XZ @ 0x140055DB0
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CDCompMappedSharedSectionMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140055E18 (--0CDCompMappedSharedSectionMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CSharedSectionMarshaler::CSharedSectionMarshaler(
        DirectComposition::CSharedSectionMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CDCompMappedSharedSectionMarshaler::CDCompMappedSharedSectionMarshaler(this, 132LL);
  result = v1;
  *v1 = &DirectComposition::CSharedSectionMarshaler::`vftable';
  return result;
}
