/*
 * XREFs of ??0CSharedSectionBaseMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140055E3C
 * Callers:
 *     ??0CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@QEAA@XZ @ 0x1400558DC (--0CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CDCompMappedSharedSectionMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140055E18 (--0CDCompMappedSharedSectionMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056310 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CSharedSectionBaseMarshaler::CSharedSectionBaseMarshaler(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  DirectComposition::CResourceMarshaler::CResourceMarshaler(a1, a2);
  result = v2;
  *v2 = &DirectComposition::CSharedSectionBaseMarshaler::`vftable';
  return result;
}
