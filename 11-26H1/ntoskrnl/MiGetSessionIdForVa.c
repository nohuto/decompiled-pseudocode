/*
 * XREFs of MiGetSessionIdForVa @ 0x14038E1A8
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14036C478 (MiCopyDataPageToImagePage.c)
 *     MiResolveMappedFileFaultInitialize @ 0x14036F9B8 (MiResolveMappedFileFaultInitialize.c)
 *     MiValidateInPageEntries @ 0x14038C410 (MiValidateInPageEntries.c)
 *     MiIssueHardFault @ 0x14038D350 (MiIssueHardFault.c)
 *     MiFaultGetFileExtents @ 0x14050CBDC (MiFaultGetFileExtents.c)
 *     MiPrivateFixup @ 0x14051D784 (MiPrivateFixup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSessionIdForVa(unsigned __int64 a1)
{
  _KPROCESS *Process; // rax
  unsigned __int64 CycleTime; // rcx

  if ( a1 >= 0xFFFF800000000000uLL )
    return 0xFFFFFFFFLL;
  Process = KeGetCurrentThread()->ApcState.Process;
  CycleTime = Process[1].CycleTime;
  if ( !CycleTime || (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(CycleTime + 8);
}
