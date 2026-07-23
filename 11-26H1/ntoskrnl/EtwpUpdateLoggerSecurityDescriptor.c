/*
 * XREFs of EtwpUpdateLoggerSecurityDescriptor @ 0x140AB2A5C
 * Callers:
 *     EtwpUpdateTrace @ 0x140AB081C (EtwpUpdateTrace.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140441C9C (ExfAcquireReleasePushLockExclusive.c)
 *     ObLogSecurityDescriptor @ 0x1408FCCF0 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x14090D9C0 (ObDereferenceSecurityDescriptor.c)
 *     EtwpEventWriteTemplateSession @ 0x140AB32A0 (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpUpdateLoggerSecurityDescriptor(__int64 a1, void *a2)
{
  int v3; // edi
  struct _KLOCK_ENTRIES *v4; // r9
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  __int64 v12; // rcx
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v14 = 0LL;
  v3 = ObLogSecurityDescriptor(a2, &v14, 0x10u);
  if ( v3 >= 0 )
  {
    v6 = v14 | 0xF;
    v7 = -v14;
    v8 = _InterlockedExchange64((volatile __int64 *)(a1 + 784), (v14 | 0xF) & -(__int64)(v14 != 0));
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v13, 0);
    if ( (stru_140F03830.UserWaitTime & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((struct _KTHREAD *)&stru_140F03830.UserWaitTime, v7, v6, v4);
    KeLeaveCriticalRegion();
    ObDereferenceSecurityDescriptor(v8 & 0xFFFFFFFFFFFFFFF0uLL, (v8 & 0xF) + 1, v10, v11);
    if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_CHANGE_SESSION_SD) )
      EtwpEventWriteTemplateSession(v12, &ETW_EVENT_CHANGE_SESSION_SD, a1);
  }
  return (unsigned int)v3;
}
