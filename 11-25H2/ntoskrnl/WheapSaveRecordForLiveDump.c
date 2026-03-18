/*
 * XREFs of WheapSaveRecordForLiveDump @ 0x140B51E3C
 * Callers:
 *     WheapCreateLiveDumpFromPreviousSession @ 0x140B51DA8 (WheapCreateLiveDumpFromPreviousSession.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall WheapSaveRecordForLiveDump(__int64 a1)
{
  size_t v1; // rsi
  unsigned int v3; // edi
  _DWORD *Pool2; // rbx
  _QWORD *DeviceContext; // rax

  v1 = *(unsigned int *)(a1 + 60);
  if ( (int)v1 + 32 < (unsigned int)v1 )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v3 = 0;
    Pool2 = (_DWORD *)ExAllocatePool2(0x42uLL);
    if ( Pool2 )
    {
      Pool2[4] = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 40LL);
      *((_QWORD *)Pool2 + 3) = Pool2 + 8;
      memmove(Pool2 + 8, (const void *)(a1 + 40), v1);
      ExAcquireFastMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters);
      DeviceContext = WheapDispatchPtr.Queue.Wcb.DeviceContext;
      if ( *(struct _DEVICE_OBJECT **)WheapDispatchPtr.Queue.Wcb.DeviceContext != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.Queue.Wcb.DeviceRoutine )
        __fastfail(3u);
      *(_QWORD *)Pool2 = &WheapDispatchPtr.Queue.Wcb.DeviceRoutine;
      *((_QWORD *)Pool2 + 1) = DeviceContext;
      *DeviceContext = Pool2;
      WheapDispatchPtr.Queue.Wcb.DeviceContext = Pool2;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v3;
}
