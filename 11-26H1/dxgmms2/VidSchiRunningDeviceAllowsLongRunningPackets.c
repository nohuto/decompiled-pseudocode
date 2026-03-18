/*
 * XREFs of VidSchiRunningDeviceAllowsLongRunningPackets @ 0x140043240
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1400C5470 (VidSchiCheckNodeTimeout.c)
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x14002BF80 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 */

char __fastcall VidSchiRunningDeviceAllowsLongRunningPackets(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // di
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *i; // rcx
  bool v9; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v11[48]; // [rsp+38h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  if ( (*(_DWORD *)(a1 + 12) & 2) != 0 )
  {
    AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v11, (unsigned __int64 *)(v2 + 2016), 1, 0);
    for ( i = *(_QWORD **)(a1 + 1712); ; i = (_QWORD *)*i )
    {
      v9 = 0;
      if ( i == (_QWORD *)(a1 + 1712) )
        break;
      if ( *(i - 5) != *(i - 6) )
        goto LABEL_16;
    }
    v9 = *(_DWORD *)(a1 + 1732) == 0;
LABEL_16:
    AcquireSpinLock::Release((AcquireSpinLock *)v11);
    return v9;
  }
  else if ( *(_DWORD *)(a1 + 3024) )
  {
    return 0;
  }
  else
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    v3 = 1;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 2016), &LockHandle);
    v4 = *(unsigned int *)(a1 + 1576);
    if ( (_DWORD)v4 != *(_DWORD *)(a1 + 1568) )
    {
      v5 = *(_QWORD *)(a1 + 8 * v4 + 1584);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 104);
        if ( *(_BYTE *)(v6 + 212)
          || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 208), 0, 0)
          || (*(_DWORD *)(v6 + 56) & 4) == 0 && (*(_DWORD *)(v5 + 112) & 0x20) == 0 )
        {
          v3 = 0;
        }
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return v3;
  }
}
