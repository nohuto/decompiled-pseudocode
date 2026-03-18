/*
 * XREFs of VidSchiSubmitQueueCommandDirect @ 0x14005555C
 * Callers:
 *     VidSchiSubmitCommandPacketToQueueDirectSubmitAware @ 0x140055344 (VidSchiSubmitCommandPacketToQueueDirectSubmitAware.c)
 * Callees:
 *     VidSchiSwitchContext @ 0x14001FD00 (VidSchiSwitchContext.c)
 *     VidSchiBlockContextOnPendingFlips @ 0x14002013C (VidSchiBlockContextOnPendingFlips.c)
 *     VidSchiInsertCommandToSoftwareQueue @ 0x140020A30 (VidSchiInsertCommandToSoftwareQueue.c)
 *     VidSchiProfilePerformanceTick @ 0x140023500 (VidSchiProfilePerformanceTick.c)
 *     VidSchiReadCommandFromContextQueue @ 0x140024CE0 (VidSchiReadCommandFromContextQueue.c)
 *     VidSchiCheckTimeoutForced @ 0x140035DA0 (VidSchiCheckTimeoutForced.c)
 *     VidSchiReportHwHang @ 0x140048588 (VidSchiReportHwHang.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     VidSchiSubmitQueueCommand @ 0x1400E8F40 (VidSchiSubmitQueueCommand.c)
 */

__int64 __fastcall VidSchiSubmitQueueCommandDirect(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rsi
  int v5; // ebx
  __int64 v6; // r14
  unsigned int v7; // r12d
  __int64 v8; // rdi
  void (__fastcall *v9)(_QWORD); // rax
  __int64 v10; // rax
  struct _VIDSCH_QUEUE_PACKET *v11; // r15
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  int v15; // [rsp+90h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 88);
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 96);
  v7 = 0;
  v8 = *(_QWORD *)(v6 + 24);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 2016), &LockHandle);
  if ( *(_DWORD *)(v8 + 376) == 1
    && !*(_DWORD *)(v8 + 3260)
    && !*(_DWORD *)(v8 + 784)
    && !*(_DWORD *)(v8 + 796)
    && *(int *)(v6 + 3000) > 0
    && (!*(_DWORD *)(v2 + 192) || (*(_DWORD *)(v2 + 192) & 2) != 0)
    && ((*(_DWORD *)(v2 + 192) & 2) != 0
     || !*(_DWORD *)(v6 + 3020)
     || (unsigned int)RtlFindMostSignificantBit(*(unsigned int *)(v6 + 1892)) > *(_DWORD *)(v2 + 412))
    && !VidSchiBlockContextOnPendingFlips(a1) )
  {
    _InterlockedExchange64((volatile __int64 *)(v8 + 184), (__int64)KeGetCurrentThread());
    v15 = 0;
    v7 = 1;
    VidSchiInsertCommandToSoftwareQueue(a1, &v15);
    *(_DWORD *)(a1 + 64) |= 0x100u;
    VidSchiSwitchContext(v2);
    *(_BYTE *)(v2 + 648) = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v7 )
  {
    VidSchiProfilePerformanceTick(5LL, v8, 0LL, 0LL, 0LL, a1, 0LL, 0LL);
    LOBYTE(v15) = 0;
    while ( 1 )
    {
      v10 = VidSchiReadCommandFromContextQueue(v2, 0, &v15);
      v11 = (struct _VIDSCH_QUEUE_PACKET *)v10;
      if ( !v10 )
        break;
      if ( !*(_DWORD *)(v10 + 48) && *(_DWORD *)(v6 + 16520) != -1 )
      {
        *(_BYTE *)(v8 + 62) = 1;
        if ( *(_DWORD *)(v6 + 16520) != -1 )
        {
          v9 = *(void (__fastcall **)(_QWORD))(v8 + 3304);
          if ( v9 )
            v9(*(_QWORD *)(v8 + 3368));
        }
        *(_BYTE *)(v8 + 62) = 0;
        *(_DWORD *)(a1 + 80) |= 0x10u;
      }
      VidSchiSubmitQueueCommand(v11);
    }
    ExReleaseResourceLite((PERESOURCE)(v8 + 1256));
    v12 = *(_DWORD *)(v8 + 3260) == 0;
    if ( !*(_DWORD *)(v8 + 3260) )
    {
      if ( VidSchiCheckTimeoutForced(v8) )
        VidSchiReportHwHang(v8, MEMORY[0xFFFFF78000000320], 1, 0LL);
      v12 = *(_DWORD *)(v8 + 3260) == 0;
    }
    LOBYTE(v5) = !v12;
    *a2 = v5;
    _InterlockedExchange64((volatile __int64 *)(v8 + 184), *(_QWORD *)(v8 + 176));
  }
  return v7;
}
