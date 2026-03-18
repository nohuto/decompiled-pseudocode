/*
 * XREFs of ??0CVisualSurfaceMarshaler@DirectComposition@@QEAA@XZ @ 0x140055E88
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056310 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CVisualSurfaceMarshaler::CVisualSurfaceMarshaler(
        DirectComposition::CVisualSurfaceMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 162LL);
  result = v1;
  *v1 = &DirectComposition::CVisualSurfaceMarshaler::`vftable';
  return result;
}
