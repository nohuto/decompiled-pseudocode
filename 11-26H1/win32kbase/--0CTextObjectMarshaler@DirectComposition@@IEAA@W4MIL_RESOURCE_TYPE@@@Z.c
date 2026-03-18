/*
 * XREFs of ??0CTextObjectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14023B588
 * Callers:
 *     ??0CCompositionGlyphRunMarshaler@DirectComposition@@QEAA@XZ @ 0x14023B2FC (--0CCompositionGlyphRunMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CCompositionTextLineMarshaler@DirectComposition@@QEAA@XZ @ 0x14023B324 (--0CCompositionTextLineMarshaler@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056310 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CTextObjectMarshaler::CTextObjectMarshaler(__int64 a1, int a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  DirectComposition::CResourceMarshaler::CResourceMarshaler(a1, a2);
  result = v2;
  *v2 = &DirectComposition::CTextObjectMarshaler::`vftable';
  return result;
}
