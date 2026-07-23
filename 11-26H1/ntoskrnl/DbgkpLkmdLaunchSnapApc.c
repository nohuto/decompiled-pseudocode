/*
 * XREFs of DbgkpLkmdLaunchSnapApc @ 0x14078E2D4
 * Callers:
 *     DbgkpLkmdSnapThread @ 0x1405B6974 (DbgkpLkmdSnapThread.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeInitializeApc @ 0x14044ED90 (KeInitializeApc.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkpLkmdLaunchSnapApc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *PoolWithTag; // rax
  __int64 v9; // rbx
  volatile signed __int32 *v11; // r14
  NTSTATUS v12; // eax
  unsigned int v13; // esi
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-28h] BYREF

  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)1536, 0x90uLL, 0x704E534Bu);
  v9 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  v11 = (volatile signed __int32 *)(PoolWithTag + 88);
  *((_QWORD *)PoolWithTag + 12) = a1;
  *((_DWORD *)PoolWithTag + 22) = 0;
  *((_QWORD *)PoolWithTag + 13) = a2;
  *((_QWORD *)PoolWithTag + 14) = a4;
  KeInitializeEvent((PRKEVENT)PoolWithTag + 5, NotificationEvent, 0);
  KeInitializeApc(v9, a3, 0, (__int64)DbgkpLkmdSnapThreadApc, 0LL, 0LL, 0, 0LL);
  if ( (unsigned __int8)KeInsertQueueApc(v9, v9, (__int64)v11, 2) )
  {
    Timeout.QuadPart = -50000000LL;
    while ( 1 )
    {
      v12 = KeWaitForSingleObject((PVOID)(v9 + 120), Executive, 0, 0, &Timeout);
      v13 = v12;
      if ( !v12 )
        break;
      if ( v12 == 258 )
        *(_DWORD *)(a4 + 4) |= 0x8000u;
      if ( !_InterlockedCompareExchange(v11, 1, 0) )
        return v13;
    }
    ExFreePoolWithTag((PVOID)v9, 0x704E534Bu);
    return v13;
  }
  else
  {
    ExFreePoolWithTag((PVOID)v9, 0x704E534Bu);
    *(_DWORD *)(a4 + 4) |= 0x4000u;
    return 3221225473LL;
  }
}
