/*
 * XREFs of ??0CDataSourceReaderMarshaler@DirectComposition@@QEAA@XZ @ 0x14005592C
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056310 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CDataSourceReaderMarshaler::CDataSourceReaderMarshaler(
        DirectComposition::CDataSourceReaderMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 40LL);
  result = v1;
  *v1 = &DirectComposition::CDataSourceReaderMarshaler::`vftable';
  return result;
}
