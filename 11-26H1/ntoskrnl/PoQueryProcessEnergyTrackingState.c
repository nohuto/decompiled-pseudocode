/*
 * XREFs of PoQueryProcessEnergyTrackingState @ 0x140B2A010
 * Callers:
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     RtlStringCchCopyNW @ 0x14048B010 (RtlStringCchCopyNW.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void *__fastcall PoQueryProcessEnergyTrackingState(__int64 a1, __int64 a2)
{
  void *result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  __int64 v8; // rbx
  __int64 v9; // r8

  result = memset_0((void *)a2, 0, 0x90uLL);
  v8 = *(_QWORD *)(a1 + 1640);
  if ( v8 )
  {
    PopAcquireRwLockShared((volatile signed __int64 *)(v8 + 440), v5, v6, v7);
    *(_DWORD *)(a2 + 4) = (unsigned __int16)*(_DWORD *)(v8 + 472);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(v8 + 476);
    v9 = *(_QWORD *)(v8 + 464);
    if ( v9 )
      RtlStringCchCopyNW(
        (NTSTRSAFE_PWSTR)(a2 + 16),
        0x40uLL,
        (STRSAFE_PCNZWCH)(v9 + 32),
        (*(_QWORD *)(v9 + 24) >> 17) & 0x1FFFFFFFLL);
    return (void *)PopReleaseRwLock((struct _KTHREAD *)(v8 + 440));
  }
  return result;
}
