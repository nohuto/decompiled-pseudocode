/*
 * XREFs of PsReferenceProcessFilePointer @ 0x140AA7550
 * Callers:
 *     SepMandatorySubProcessToken @ 0x14050EF38 (SepMandatorySubProcessToken.c)
 *     SepVerifyDesktopAppxImage @ 0x14051E754 (SepVerifyDesktopAppxImage.c)
 *     PsCheckProcessFileSigningLevel @ 0x1407F7F30 (PsCheckProcessFileSigningLevel.c)
 *     DbgkCreateThread @ 0x1409E74F4 (DbgkCreateThread.c)
 *     PspCallProcessNotifyRoutines @ 0x1409FE474 (PspCallProcessNotifyRoutines.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     CmpCheckExeOwnerForPca @ 0x140AA7384 (CmpCheckExeOwnerForPca.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     MmGetFileObjectForSection @ 0x140AA75C0 (MmGetFileObjectForSection.c)
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
