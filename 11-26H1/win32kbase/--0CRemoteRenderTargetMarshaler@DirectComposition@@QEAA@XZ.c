/*
 * XREFs of ??0CRemoteRenderTargetMarshaler@DirectComposition@@QEAA@XZ @ 0x140054F90
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056310 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CRemoteRenderTargetMarshaler::CRemoteRenderTargetMarshaler(
        DirectComposition::CRemoteRenderTargetMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 107LL);
  result = v1;
  *v1 = &DirectComposition::CRemoteRenderTargetMarshaler::`vftable';
  return result;
}
