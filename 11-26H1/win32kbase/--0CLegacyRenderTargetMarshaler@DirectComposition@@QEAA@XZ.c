/*
 * XREFs of ??0CLegacyRenderTargetMarshaler@DirectComposition@@QEAA@XZ @ 0x140055858
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056310 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CLegacyRenderTargetMarshaler::CLegacyRenderTargetMarshaler(
        DirectComposition::CLegacyRenderTargetMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 73LL);
  result = v1;
  *v1 = &DirectComposition::CLegacyRenderTargetMarshaler::`vftable';
  return result;
}
