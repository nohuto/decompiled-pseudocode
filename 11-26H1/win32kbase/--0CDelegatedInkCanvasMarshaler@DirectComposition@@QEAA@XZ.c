/*
 * XREFs of ??0CDelegatedInkCanvasMarshaler@DirectComposition@@QEAA@XZ @ 0x14023B374
 * Callers:
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x14018B4DC (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 * Callees:
 *     ??0CSuperWetSourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14023B4E0 (--0CSuperWetSourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CDelegatedInkCanvasMarshaler::CDelegatedInkCanvasMarshaler(
        DirectComposition::CDelegatedInkCanvasMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CSuperWetSourceMarshaler::CSuperWetSourceMarshaler(this, 42LL);
  result = v1;
  *v1 = &DirectComposition::CDelegatedInkCanvasMarshaler::`vftable';
  return result;
}
