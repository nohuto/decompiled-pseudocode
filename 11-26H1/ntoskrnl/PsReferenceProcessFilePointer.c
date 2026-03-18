/*
 * XREFs of PsReferenceProcessFilePointer @ 0x140AAE560
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x140460C84 (SepVerifyDesktopAppxImage.c)
 *     SepMandatorySubProcessToken @ 0x1405154C8 (SepMandatorySubProcessToken.c)
 *     PsCheckProcessFileSigningLevel @ 0x1407F23D0 (PsCheckProcessFileSigningLevel.c)
 *     DbgkCreateThread @ 0x1409EAD24 (DbgkCreateThread.c)
 *     PspCallProcessNotifyRoutines @ 0x140A43714 (PspCallProcessNotifyRoutines.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 *     CmpCheckExeOwnerForPca @ 0x140AAE3A0 (CmpCheckExeOwnerForPca.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     MmGetFileObjectForSection @ 0x140AAE5D0 (MmGetFileObjectForSection.c)
 */

__int64 __fastcall PsReferenceProcessFilePointer(struct _EX_RUNDOWN_REF *a1, __int64 *a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  unsigned __int64 Count; // rcx
  __int64 FileObjectForSection; // rbx
  __int64 result; // rax

  v2 = a1 + 61;
  if ( ExAcquireRundownProtection_0(a1 + 61) )
  {
    Count = a1[85].Count;
    if ( Count )
    {
      FileObjectForSection = MmGetFileObjectForSection(Count);
      ExReleaseRundownProtection_0(v2);
      result = 0LL;
      *a2 = FileObjectForSection;
      return result;
    }
    ExReleaseRundownProtection_0(v2);
  }
  return 3221225473LL;
}
