/*
 * XREFs of PopBatteryRemove @ 0x1407DB440
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x140495490 (IoCancelIrp.c)
 *     PopBatteryQueueWork @ 0x1404DA29C (PopBatteryQueueWork.c)
 *     PopChangeCapability @ 0x1409BEA8C (PopChangeCapability.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
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
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCB, v2, v3, v4);
  v5 = (__int64 *)(a1 + 64);
  v6 = *v5;
  if ( *v5 )
  {
    if ( *(__int64 **)(v6 + 8) != v5 || (v7 = (__int64 **)v5[1], *v7 != v5) )
      __fastfail(3u);
    *v7 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v7;
    *v5 = 0LL;
    --dword_140F10634;
    ++dword_140F106AC;
    byte_140F10638 = 1;
    PopBatteryQueueWork(3u);
  }
  PopBatteryQueueWork(8u);
  result = PopReleaseRwLock((struct _KTHREAD *)&PopCB);
  if ( !--dword_140F10630 )
  {
    PopAcquirePolicyLock(v10, v9);
    PopChangeCapability((char *)&PpmIdlePolicyLock.Padding[4] + 6, 0LL);
    return PopReleasePolicyLock(v12, v11, v13, v14, Timeout);
  }
  return result;
}
