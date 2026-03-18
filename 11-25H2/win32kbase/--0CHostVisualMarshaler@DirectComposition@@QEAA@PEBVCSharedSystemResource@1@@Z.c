/*
 * XREFs of ??0CHostVisualMarshaler@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z @ 0x140198174
 * Callers:
 *     ?OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1400502F8 (-OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject.c)
 * Callees:
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x140053F68 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 */

DirectComposition::CHostVisualMarshaler *__fastcall DirectComposition::CHostVisualMarshaler::CHostVisualMarshaler(
        DirectComposition::CHostVisualMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2)
{
  DirectComposition::CVisualMarshaler::CVisualMarshaler(this);
  *((_QWORD *)this + 46) = a2;
  *(_QWORD *)this = &DirectComposition::CHostVisualMarshaler::`vftable';
  return this;
}
