/*
 * XREFs of MiAweControlArea @ 0x140489730
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x14047A210 (MiReleaseControlAreaCharges.c)
 *     MiReferenceAweHandle @ 0x14050D4B4 (MiReferenceAweHandle.c)
 *     MmGetSectionInformation @ 0x1408EBD40 (MmGetSectionInformation.c)
 *     MiInitializeDataMapParameters @ 0x140995CF8 (MiInitializeDataMapParameters.c)
 *     MiDeletePageFileSectionNodes @ 0x140A876DC (MiDeletePageFileSectionNodes.c)
 *     MiDereferenceFailedControlArea @ 0x140B275E4 (MiDereferenceFailedControlArea.c)
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
