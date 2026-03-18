/*
 * XREFs of ??0CVisualReferenceControllerMarshaler@DirectComposition@@QEAA@XZ @ 0x140055CA4
 * Callers:
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x14018B4DC (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 * Callees:
 *     ??0CVisualReferenceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140055CC8 (--0CVisualReferenceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CVisualReferenceControllerMarshaler::CVisualReferenceControllerMarshaler(
        DirectComposition::CVisualReferenceControllerMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CVisualReferenceMarshaler::CVisualReferenceMarshaler(this);
  result = v1;
  *v1 = &DirectComposition::CVisualReferenceControllerMarshaler::`vftable';
  return result;
}
