/*
 * XREFs of SeMarkLogonSessionForTerminationNotificationEx @ 0x140B3ACC0
 * Callers:
 *     SeMarkLogonSessionForTerminationNotification @ 0x140815120 (SeMarkLogonSessionForTerminationNotification.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall SeMarkLogonSessionForTerminationNotificationEx(_DWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // r8
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v7; // rbp

  v4 = (unsigned __int64)(unsigned int)(1529154084 * *a1) >> 28;
  v5 = SepLogonSessions + 8 * v4;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (struct _ERESOURCE *)(&RtlpBootStatHandleLock.InGlobalUpdateVpThreadPriorityList + 13 * (v4 & 3));
  ExAcquireResourceExclusiveLite(v7, 1u);
  while ( 1 )
  {
    v5 = *(_QWORD *)v5;
    if ( !v5 )
      break;
    if ( (*(_QWORD *)(v5 + 168) == a2 || !a2) && *a1 == *(_DWORD *)(v5 + 8) && a1[1] == *(_DWORD *)(v5 + 12) )
    {
      *(_DWORD *)(v5 + 40) |= 1u;
      break;
    }
  }
  ExReleaseResourceLite(v7);
  KeLeaveCriticalRegion();
  return v5 == 0 ? 0xC0000225 : 0;
}
