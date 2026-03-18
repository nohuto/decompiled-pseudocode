/*
 * XREFs of PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1404FD0B0
 * Callers:
 *     PopFxProcessWork @ 0x1403AEEC0 (PopFxProcessWork.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x1402DF200 (IoReleaseRemoveLockEx.c)
 *     PopFxBugCheck @ 0x1403B0E54 (PopFxBugCheck.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x1404FD140 (PopFxFindAndReferenceAcpiDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PopFxAcpiForwardPepAcpiNotifyRequest(ULONG_PTR BugCheckParameter2, int *a2)
{
  __int64 v4; // rdx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  HIDWORD(v5[0]) = 0;
  if ( (int)PopFxFindAndReferenceAcpiDevice() >= 0 )
  {
    if ( !*(_QWORD *)(BugCheckParameter2 + 80) )
      PopFxBugCheck(0x668uLL, BugCheckParameter2, *a2, 0LL);
    v5[1] = *((_QWORD *)&PopFxPlatformInterface + 1);
    v5[0] = 0LL;
    v5[2] = 0LL;
    v5[3] = a2;
    guard_dispatch_icall_no_overrides(v5, v4);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 312), (PVOID)0x66466F50, 0x20u);
  }
}
