/*
 * XREFs of IvtIommuWaitCommand @ 0x140427808
 * Callers:
 *     IvtFlushTbInternal @ 0x14042706C (IvtFlushTbInternal.c)
 *     IvtInvalidateRemappingTableEntries @ 0x140427790 (IvtInvalidateRemappingTableEntries.c)
 *     IvtDrainSvmPageRequests @ 0x1405A6130 (IvtDrainSvmPageRequests.c)
 *     IvtFlushDeviceTbOnly @ 0x1405A6470 (IvtFlushDeviceTbOnly.c)
 *     IvtInvalidateAllContextEntries @ 0x1405A7218 (IvtInvalidateAllContextEntries.c)
 *     IvtInvalidateContextEntry @ 0x1405A7278 (IvtInvalidateContextEntry.c)
 *     IvtInvalidateScalableModePasidCache @ 0x1405A7368 (IvtInvalidateScalableModePasidCache.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxAcquireQueuedSpinLock @ 0x1402B47E0 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IvtIommuSendCommand @ 0x14042795C (IvtIommuSendCommand.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IvtIommuWaitCommand(__int64 a1, int a2, __int64 a3)
{
  int v3; // ebp
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // esi
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-20h] BYREF

  v3 = a3;
  v5 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (_DWORD)a3 )
  {
    CurrentIrql = 0;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 15LL);
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 208);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v5 + 208), a3);
  }
  v7 = *(_QWORD *)(v5 + 192);
  v8 = *(_QWORD *)(v5 + 200);
  v13[0] = v7;
  v13[1] = v8;
  *(_DWORD *)(v5 + 176) = 1;
  if ( a2 )
    v13[0] = v7 | 0x80;
  IvtIommuSendCommand(v5, v13, 1LL);
  v10 = 0;
  while ( 1 )
  {
    result = *(unsigned int *)(v5 + 176);
    if ( !(_DWORD)result )
      break;
    if ( (++v10 & dword_140FBB03C) != 0 || !qword_140FBB040 )
      _mm_pause();
    else
      guard_dispatch_icall_no_overrides(v10, v9);
  }
  if ( !v3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
