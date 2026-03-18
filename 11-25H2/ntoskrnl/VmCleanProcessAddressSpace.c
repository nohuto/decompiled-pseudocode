/*
 * XREFs of VmCleanProcessAddressSpace @ 0x14078F1A8
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A04D48 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     FsRtlAcquirePushLockExclusive @ 0x1402A2908 (FsRtlAcquirePushLockExclusive.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     VmpReleasePushLockExclusive @ 0x1404857AC (VmpReleasePushLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall VmCleanProcessAddressSpace(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 1648);
  if ( v1 )
  {
    FsRtlAcquirePushLockExclusive((unsigned __int64 *)(v1 + 120));
    *(_WORD *)(v1 + 138) |= 1u;
    VmpReleasePushLockExclusive((volatile signed __int64 *)(v1 + 120));
    if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)VmpExtensionHost) )
    {
      guard_dispatch_icall_no_overrides(a1);
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)VmpExtensionHost);
    }
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v1 + 128));
  }
}
