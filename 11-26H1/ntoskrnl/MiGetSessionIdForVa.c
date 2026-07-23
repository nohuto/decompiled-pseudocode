/*
 * XREFs of MiGetSessionIdForVa @ 0x14038FF58
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14036E218 (MiCopyDataPageToImagePage.c)
 *     MiResolveMappedFileFaultInitialize @ 0x140371768 (MiResolveMappedFileFaultInitialize.c)
 *     MiValidateInPageEntries @ 0x14038E1C0 (MiValidateInPageEntries.c)
 *     MiIssueHardFault @ 0x14038F100 (MiIssueHardFault.c)
 *     MiFaultGetFileExtents @ 0x14050664C (MiFaultGetFileExtents.c)
 *     MiPrivateFixup @ 0x14051FCB0 (MiPrivateFixup.c)
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
