/*
 * XREFs of KeRundownQueueEx @ 0x1403DF4A8
 * Callers:
 *     KeRundownQueue @ 0x1403DDCC0 (KeRundownQueue.c)
 *     IopDeleteIoCompletionInternal @ 0x1403DF3CC (IopDeleteIoCompletionInternal.c)
 *     EtwpDeleteRegistrationObject @ 0x140911650 (EtwpDeleteRegistrationObject.c)
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1403E078C (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KeRundownQueueCommon @ 0x1403E0A74 (KeRundownQueueCommon.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeRundownQueueEx(__int64 a1, char a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 *v10; // rdx
  __int64 **v11; // rcx
  char v12; // [rsp+20h] [rbp-18h]

  v4 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v6 = 2LL;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v4, v6, a3);
  v7 = (__int64 *)(v4 + 24);
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 == v4 + 24 )
  {
    v8 = 0LL;
  }
  else
  {
    *(_DWORD *)(v4 + 4) = 0;
    v10 = (__int64 *)*v7;
    v11 = *(__int64 ***)(v4 + 32);
    if ( *(__int64 **)(*v7 + 8) != v7 || *v11 != v7 )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = (__int64)v11;
    *(_QWORD *)(v4 + 32) = v4 + 24;
    *v7 = (__int64)v7;
  }
  v12 = a2;
  KeRundownQueueCommon(v4, v4 + 48, v4 + 40, 1, v12);
  _InterlockedAnd((volatile signed __int32 *)v4, 0xFFFFFF7F);
  if ( a2 )
    KiAcquireReleaseObjectRundownLockExclusive(v4);
  KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0LL, 1u, 0, CurrentIrql);
  return v8;
}
