/*
 * XREFs of ??0CPropertySetMarshaler@DirectComposition@@QEAA@XZ @ 0x14005628C
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CPropertyChangeResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400562C8 (--0CPropertyChangeResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CPropertySetMarshaler::CPropertySetMarshaler(
        DirectComposition::CPropertySetMarshaler *this)
{
  _QWORD *v1; // rcx

  DirectComposition::CPropertyChangeResourceMarshaler::CPropertyChangeResourceMarshaler(this, 100LL);
  *v1 = &DirectComposition::CPropertySetMarshaler::`vftable';
  v1[9] = 0LL;
  v1[10] = 0LL;
  v1[11] = 0LL;
  v1[12] = 0LL;
  return v1;
}
