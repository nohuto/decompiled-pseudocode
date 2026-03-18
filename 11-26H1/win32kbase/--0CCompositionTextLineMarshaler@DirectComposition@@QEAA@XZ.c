/*
 * XREFs of ??0CCompositionTextLineMarshaler@DirectComposition@@QEAA@XZ @ 0x14023B324
 * Callers:
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x14018B4DC (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 * Callees:
 *     ??0CTextObjectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14023B588 (--0CTextObjectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CCompositionTextLineMarshaler::CCompositionTextLineMarshaler(
        DirectComposition::CCompositionTextLineMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CTextObjectMarshaler::CTextObjectMarshaler(this, 32LL);
  result = v1;
  *v1 = &DirectComposition::CCompositionTextLineMarshaler::`vftable';
  return result;
}
