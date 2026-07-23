/*
 * XREFs of PspInheritSyscallProvider @ 0x140946994
 * Callers:
 *     PspInsertProcess @ 0x140945AAC (PspInsertProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     PspLockProcessShared @ 0x140275C70 (PspLockProcessShared.c)
 *     PspUnlockProcessShared @ 0x14027C520 (PspUnlockProcessShared.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     PspAttachProcessToSyscallProvider @ 0x1407F314C (PspAttachProcessToSyscallProvider.c)
 */

__int64 __fastcall PspInheritSyscallProvider(_QWORD *a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rsi
  unsigned int v3; // edi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v8; // r15d
  struct _KLOCK_ENTRIES *v9; // r9

  v2 = *(struct _EX_RUNDOWN_REF **)(a2 + 1976);
  v3 = 0;
  if ( v2 )
  {
    CurrentThread = KeGetCurrentThread();
    PspLockProcessShared(a2, (__int64)CurrentThread);
    v8 = *(_DWORD *)(a2 + 2000);
    PspUnlockProcessShared(a2, (__int64)CurrentThread);
    if ( ExAcquireRundownProtection_0(v2 + 7) )
    {
      PspAttachProcessToSyscallProvider(a1, (__int64)v2, v8, v9);
      ExReleaseRundownProtection_0(v2 + 7);
    }
    else
    {
      return (unsigned int)-1073741738;
    }
  }
  return v3;
}
