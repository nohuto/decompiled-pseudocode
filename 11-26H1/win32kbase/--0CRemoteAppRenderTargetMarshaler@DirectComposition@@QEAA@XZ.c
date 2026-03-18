/*
 * XREFs of ??0CRemoteAppRenderTargetMarshaler@DirectComposition@@QEAA@XZ @ 0x140054FE0
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056310 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CRemoteAppRenderTargetMarshaler::CRemoteAppRenderTargetMarshaler(
        DirectComposition::CRemoteAppRenderTargetMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 106LL);
  result = v1;
  *v1 = &DirectComposition::CRemoteAppRenderTargetMarshaler::`vftable';
  return result;
}
