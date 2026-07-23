/*
 * XREFs of ExCompareExchangeCallBack @ 0x14045C5C4
 * Callers:
 *     IoRegisterPriorityCallback @ 0x1405CDC30 (IoRegisterPriorityCallback.c)
 *     IoUnregisterPriorityCallback @ 0x1405CDDA0 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1405E7190 (KeDeregisterBoundCallback.c)
 *     KeRegisterBoundCallback @ 0x1405E7740 (KeRegisterBoundCallback.c)
 *     DbgkLkmdRegisterCallback @ 0x14078E000 (DbgkLkmdRegisterCallback.c)
 *     DbgkLkmdUnregisterCallback @ 0x14078E0F0 (DbgkLkmdUnregisterCallback.c)
 *     PoUnregisterCoalescingCallback @ 0x1407D2290 (PoUnregisterCoalescingCallback.c)
 *     PsEstablishWin32Callouts @ 0x1407F6750 (PsEstablishWin32Callouts.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140802610 (PsRemoveLoadImageNotifyRoutine.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x1408027F8 (PspSetCreateThreadNotifyRoutine.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140B2DB60 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140B2F01C (PspSetCreateProcessNotifyRoutine.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140B32DB0 (PsSetLoadImageNotifyRoutineEx.c)
 *     PoRegisterCoalescingCallback @ 0x140B608A0 (PoRegisterCoalescingCallback.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireRundownProtectionEx @ 0x140376EB0 (ExAcquireRundownProtectionEx.c)
 *     ExpReleaseRundownProtection @ 0x14045CF10 (ExpReleaseRundownProtection.c)
 */

char __fastcall ExCompareExchangeCallBack(signed __int64 *a1, struct _EX_RUNDOWN_REF *a2, __int64 a3)
{
  signed __int64 i; // rbx
  signed __int64 v8; // rcx
  signed __int64 v9; // rax
  struct _EX_RUNDOWN_REF *v10; // rsi
  KIRQL v11; // al

  if ( a2 && !ExAcquireRundownProtectionEx(a2, 0x10u) )
    return 0;
  _m_prefetchw(a1);
  for ( i = *a1; (a3 ^ (unsigned __int64)i) <= 0xF; i = v9 )
  {
    v8 = (unsigned __int64)a2 | 0xF;
    if ( !a2 )
      v8 = 0LL;
    v9 = _InterlockedCompareExchange64(a1, v8, i);
    if ( i == v9 )
      break;
  }
  v10 = (struct _EX_RUNDOWN_REF *)(i & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (i & 0xFFFFFFFFFFFFFFF0uLL) != a3 )
  {
    if ( a2 )
      ExpReleaseRundownProtection(a2, 0x10u);
    return 0;
  }
  if ( v10 )
  {
    v11 = ExAcquireSpinLockExclusive(dword_140EFF2B8);
    ExReleaseSpinLockExclusive(dword_140EFF2B8, v11);
    ExpReleaseRundownProtection(v10, (i & 0xF) + 1);
  }
  return 1;
}
