/*
 * XREFs of ??0CCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition@@QEAA@XZ @ 0x140055B68
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CDCompMappedSharedSectionMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140055E18 (--0CDCompMappedSharedSectionMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CCrossContainerGuestReadWriteSharedSectionMarshaler::CCrossContainerGuestReadWriteSharedSectionMarshaler(
        DirectComposition::CCrossContainerGuestReadWriteSharedSectionMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CDCompMappedSharedSectionMarshaler::CDCompMappedSharedSectionMarshaler(this, 37LL);
  result = v1;
  *v1 = &DirectComposition::CCrossContainerGuestReadWriteSharedSectionMarshaler::`vftable';
  return result;
}
