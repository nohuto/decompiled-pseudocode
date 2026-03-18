/*
 * XREFs of MiAweControlArea @ 0x14048FC84
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x1404808D0 (MiReleaseControlAreaCharges.c)
 *     MiReferenceAweHandle @ 0x140513A44 (MiReferenceAweHandle.c)
 *     MmGetSectionInformation @ 0x1408E5780 (MmGetSectionInformation.c)
 *     MiInitializeDataMapParameters @ 0x1409C4D18 (MiInitializeDataMapParameters.c)
 *     MiDeletePageFileSectionNodes @ 0x140A8186C (MiDeletePageFileSectionNodes.c)
 *     MiDereferenceFailedControlArea @ 0x140B25454 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAweControlArea(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 64) || (*(_DWORD *)(a1 + 56) & 0x400) != 0 )
    return 0LL;
  else
    return (*(_DWORD *)(a1 + 92) >> 17) & 1;
}
