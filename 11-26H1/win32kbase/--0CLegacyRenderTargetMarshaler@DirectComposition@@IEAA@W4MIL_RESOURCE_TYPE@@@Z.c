/*
 * XREFs of ??0CLegacyRenderTargetMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140055830
 * Callers:
 *     ??0CLegacyStereoRenderTargetMarshaler@DirectComposition@@QEAA@XZ @ 0x14005580C (--0CLegacyStereoRenderTargetMarshaler@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056310 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CLegacyRenderTargetMarshaler::CLegacyRenderTargetMarshaler(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CResourceMarshaler::CResourceMarshaler(a1, 74LL);
  result = v1;
  *v1 = &DirectComposition::CLegacyRenderTargetMarshaler::`vftable';
  return result;
}
