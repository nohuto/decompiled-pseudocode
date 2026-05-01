/*
 * XREFs of ?QueueEventInvocationWorkItem@?$EventInvocationContext@$00@details@wil@@UEAAX$$QEAV?$unique_ptr@UAsyncEventWorkItemBase@details@wil@@U?$default_delete@UAsyncEventWorkItemBase@details@wil@@@wistd@@@wistd@@@Z @ 0x1803FA830
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??4?$unique_ptr@UAsyncEventWorkItemBase@details@wil@@U?$default_delete@UAsyncEventWorkItemBase@details@wil@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801BC6C0 (--4-$unique_ptr@UAsyncEventWorkItemBase@details@wil@@U-$default_delete@UAsyncEventWorkItemBase@d.c)
 */

void __fastcall wil::details::EventInvocationContext<1>::QueueEventInvocationWorkItem(__int64 a1, _QWORD *a2)
{
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  wil::AcquireSRWLockExclusive(&v4, (RTL_SRWLOCK *)(a1 + 88));
  wistd::unique_ptr<wil::details::AsyncEventWorkItemBase,wistd::default_delete<wil::details::AsyncEventWorkItemBase>>::operator=(
    *(void (__fastcall *****)(_QWORD, __int64))(a1 + 104),
    a2);
  *(_QWORD *)(a1 + 104) = **(_QWORD **)(a1 + 104) + 8LL;
  if ( !*(_BYTE *)(a1 + 64) )
  {
    SubmitThreadpoolWork(*(PTP_WORK *)(a1 + 80));
    *(_BYTE *)(a1 + 64) = 1;
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v4);
}
