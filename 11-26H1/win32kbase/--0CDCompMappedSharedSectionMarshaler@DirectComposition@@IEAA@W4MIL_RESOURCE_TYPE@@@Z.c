/*
 * XREFs of ??0CDCompMappedSharedSectionMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140055E18
 * Callers:
 *     ??0CCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition@@QEAA@XZ @ 0x140055B68 (--0CCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CSharedSectionMarshaler@DirectComposition@@QEAA@XZ @ 0x140055DB0 (--0CSharedSectionMarshaler@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ??0CSharedSectionBaseMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140055E3C (--0CSharedSectionBaseMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CDCompMappedSharedSectionMarshaler::CDCompMappedSharedSectionMarshaler(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  DirectComposition::CSharedSectionBaseMarshaler::CSharedSectionBaseMarshaler(a1, a2);
  result = v2;
  *v2 = &DirectComposition::CDCompMappedSharedSectionMarshaler::`vftable';
  return result;
}
