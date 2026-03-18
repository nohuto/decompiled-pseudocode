/*
 * XREFs of VfDriverApplyDifVerification @ 0x140C28168
 * Callers:
 *     MmEnableOrDisableVerifierForDriver @ 0x140C46610 (MmEnableOrDisableVerifierForDriver.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     ExSetPoolFlags @ 0x1406CC070 (ExSetPoolFlags.c)
 *     MmIsVerifierApplicableToImage @ 0x1406F3918 (MmIsVerifierApplicableToImage.c)
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
 *     VfSuspectDriversLookupName @ 0x140C20420 (VfSuspectDriversLookupName.c)
 *     VfUtilIsProtectedDriver @ 0x140C219D8 (VfUtilIsProtectedDriver.c)
 *     VfSuspectApplyDifVolatileVerification @ 0x140C3878C (VfSuspectApplyDifVolatileVerification.c)
 *     VfDriverLock @ 0x140C46804 (VfDriverLock.c)
 */

__int64 __fastcall VfDriverApplyDifVerification(__int64 a1, __int64 a2, _DWORD *a3)
{
  PVOID *v3; // rbx
  unsigned int v6; // esi
  int IsVerifierApplicableToImage; // edi
  __int64 *v8; // rax
  int v9; // eax

  v3 = 0LL;
  *a3 = 0;
  v6 = 0;
  IsVerifierApplicableToImage = 0;
  VfDriverLock(a1);
  if ( VfSuspectDriversLookupName((const UNICODE_STRING *)(a1 + 40)) )
    goto LABEL_25;
  if ( RtlEqualUnicodeString(&VfKernelImageName, (PCUNICODE_STRING)(a1 + 40), 1u) )
  {
    KernelVerifier = 1;
LABEL_4:
    v8 = (__int64 *)qword_140F08DD8;
    if ( *(__int64 **)qword_140F08DD8 != &VfSuspectDriversList )
      __fastfail(3u);
    *(_QWORD *)a1 = &VfSuspectDriversList;
    *(_QWORD *)(a1 + 8) = v8;
    *v8 = a1;
    qword_140F08DD8 = a1;
    if ( KernelVerifier
      || (IsVerifierApplicableToImage = VfSuspectApplyDifVolatileVerification(v3, a1), IsVerifierApplicableToImage >= 0) )
    {
      v9 = dword_140F08700 + 1;
      *a3 = 1;
      dword_140F08700 = v9;
      if ( KernelVerifier && ((VfRuleClasses & 8) != 0 || (VfRuleClasses & 1) != 0) )
        ExSetPoolFlags(8uLL);
    }
    goto LABEL_25;
  }
  v3 = (PVOID *)PsLoadedModuleList;
  while ( v3 != &PsLoadedModuleList )
  {
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 40), (PCUNICODE_STRING)(v3 + 11), 1u) )
      goto LABEL_11;
    v3 = (PVOID *)*v3;
    ++v6;
  }
  v3 = 0LL;
LABEL_11:
  if ( KernelVerifier )
    goto LABEL_4;
  if ( !v3 )
  {
    IsVerifierApplicableToImage = -1073738629;
    goto LABEL_25;
  }
  if ( v6 <= 1 || (unsigned int)VfUtilIsProtectedDriver() )
  {
    IsVerifierApplicableToImage = -1073738739;
    goto LABEL_25;
  }
  IsVerifierApplicableToImage = MmIsVerifierApplicableToImage((__int64)v3);
  if ( IsVerifierApplicableToImage >= 0 )
    goto LABEL_4;
LABEL_25:
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return (unsigned int)IsVerifierApplicableToImage;
}
