/*
 * XREFs of PopBatteryRemove @ 0x1407D7E20
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x14049B940 (IoCancelIrp.c)
 *     PopBatteryQueueWork @ 0x1404E0BBC (PopBatteryQueueWork.c)
 *     PopChangeCapability @ 0x140943114 (PopChangeCapability.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopBatteryRemove(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _KLOCK_ENTRIES *v4; // r9
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 **v7; // rax
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-18h]

  IoCancelIrp(*(PIRP *)(a1 + 56));
  KeWaitForSingleObject((PVOID)(a1 + 80), Executive, 0, 0, 0LL);
  PopAcquireRwLockExclusive((unsigned __int64 *)&qword_140F0FE60, v2, v3, v4);
  v5 = (__int64 *)(a1 + 64);
  v6 = *v5;
  if ( *v5 )
  {
    if ( *(__int64 **)(v6 + 8) != v5 || (v7 = (__int64 **)v5[1], *v7 != v5) )
      __fastfail(3u);
    *v7 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v7;
    *v5 = 0LL;
    --dword_140F0FE74;
    ++dword_140F0FEEC;
    byte_140F0FE78 = 1;
    PopBatteryQueueWork(3u);
  }
  PopBatteryQueueWork(8u);
  result = PopReleaseRwLock((struct _KTHREAD *)&qword_140F0FE60);
  if ( !--dword_140F0FE70 )
  {
    PopAcquirePolicyLock(v10, v9);
    PopChangeCapability(&stru_140F10828.WaitBlockFill11[54], 0LL);
    return PopReleasePolicyLock(v12, v11, v13, v14, Timeout);
  }
  return result;
}
