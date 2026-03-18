/*
 * XREFs of VfDriverEnableVerifier @ 0x140C46844
 * Callers:
 *     VfDriverEnableVerifierForAll @ 0x140C20194 (VfDriverEnableVerifierForAll.c)
 *     MmEnableOrDisableVerifierForDriver @ 0x140C46610 (MmEnableOrDisableVerifierForDriver.c)
 *     VfAddVerifierEntry @ 0x140C46698 (VfAddVerifierEntry.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     MmIsVerifierApplicableToImage @ 0x1406F3918 (MmIsVerifierApplicableToImage.c)
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
 *     VfSuspectDriversLookupName @ 0x140C20420 (VfSuspectDriversLookupName.c)
 *     VfUtilIsProtectedDriver @ 0x140C219D8 (VfUtilIsProtectedDriver.c)
 *     VfSuspectApplyDifVolatileVerification @ 0x140C3878C (VfSuspectApplyDifVolatileVerification.c)
 *     VfDriverLock @ 0x140C46804 (VfDriverLock.c)
 */

__int64 __fastcall VfDriverEnableVerifier(__int64 a1, PVOID *a2, _DWORD *a3)
{
  int v6; // r15d
  unsigned int v7; // ebp
  int IsVerifierApplicableToImage; // edi
  int v9; // r14d
  __int64 *v10; // rax

  *a3 = 0;
  v6 = 0;
  v7 = 0;
  IsVerifierApplicableToImage = 0;
  v9 = 0;
  VfDriverLock();
  if ( !VfSuspectDriversLookupName((const UNICODE_STRING *)(a1 + 40)) )
  {
    if ( a2 )
      goto LABEL_9;
    a2 = (PVOID *)PsLoadedModuleList;
    v9 = 1;
    while ( 1 )
    {
      if ( a2 == &PsLoadedModuleList )
      {
        a2 = 0LL;
        goto LABEL_17;
      }
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 40), (PCUNICODE_STRING)(a2 + 11), 1u) )
        break;
      a2 = (PVOID *)*a2;
      ++v7;
    }
    if ( a2 )
    {
LABEL_9:
      if ( (~VerifierModifyableOptions & MmVerifierData) != 0 )
      {
        IsVerifierApplicableToImage = -1073738740;
        goto LABEL_22;
      }
      if ( v9 && (v7 <= 1 || (unsigned int)VfUtilIsProtectedDriver()) )
      {
        IsVerifierApplicableToImage = -1073738739;
        goto LABEL_22;
      }
      IsVerifierApplicableToImage = MmIsVerifierApplicableToImage((__int64)a2);
      if ( IsVerifierApplicableToImage < 0 )
        goto LABEL_22;
      v6 = 1;
    }
LABEL_17:
    v10 = (__int64 *)qword_140F08DD8;
    if ( *(__int64 **)qword_140F08DD8 != &VfSuspectDriversList )
      __fastfail(3u);
    *(_QWORD *)a1 = &VfSuspectDriversList;
    *(_QWORD *)(a1 + 8) = v10;
    *v10 = a1;
    qword_140F08DD8 = a1;
    *a3 = 1;
    if ( v6 )
      VfSuspectApplyDifVolatileVerification((ULONG_PTR)a2, a1);
    ++dword_140F08700;
  }
LABEL_22:
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return (unsigned int)IsVerifierApplicableToImage;
}
