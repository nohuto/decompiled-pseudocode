/*
 * XREFs of PspApplyCoreIsolationPolicy @ 0x140776AFC
 * Callers:
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     PspLockProcessShared @ 0x140276700 (PspLockProcessShared.c)
 *     PspUnlockProcessShared @ 0x14027CFB0 (PspUnlockProcessShared.c)
 *     KeEnableCoreIsolationMitigationPolicyThread @ 0x1404D3380 (KeEnableCoreIsolationMitigationPolicyThread.c)
 */

__int64 __fastcall PspApplyCoreIsolationPolicy(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *i; // rbx

  CurrentThread = KeGetCurrentThread();
  PspLockProcessShared(a1, (__int64)CurrentThread);
  _m_prefetchw((const void *)(a1 + 2008));
  if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 2008), 1u) & 1) == 0 )
  {
    for ( i = *(_QWORD **)(a1 + 880); i != (_QWORD *)(a1 + 880); i = (_QWORD *)*i )
      KeEnableCoreIsolationMitigationPolicyThread((struct _KTHREAD *)(i - 175));
  }
  return PspUnlockProcessShared(a1, (__int64)CurrentThread);
}
