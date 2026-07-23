/*
 * XREFs of AlpcpInitializePort @ 0x1408F08D0
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1408ECFF0 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x1408F0020 (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x140AE55B0 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeInitializeSemaphore @ 0x1404AF2D0 (KeInitializeSemaphore.c)
 */

__int64 __fastcall AlpcpInitializePort(__int64 a1, char a2, unsigned __int8 a3, struct _KLOCK_ENTRIES *a4)
{
  int v5; // eax
  struct _KSEMAPHORE *v6; // rax
  AutoBoost *v8; // rax
  void *v9; // rdx
  signed __int8 v10; // cf
  AutoBoost *v11; // rdi
  _QWORD *v12; // rax

  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 344) = a1 + 336;
  *(_QWORD *)(a1 + 336) = a1 + 336;
  *(_QWORD *)(a1 + 152) = a1 + 144;
  *(_QWORD *)(a1 + 144) = a1 + 144;
  *(_QWORD *)(a1 + 192) = a1 + 184;
  *(_QWORD *)(a1 + 184) = a1 + 184;
  *(_QWORD *)(a1 + 168) = a1 + 160;
  *(_QWORD *)(a1 + 160) = a1 + 160;
  *(_QWORD *)(a1 + 392) = a1 + 384;
  *(_QWORD *)(a1 + 384) = a1 + 384;
  *(_QWORD *)(a1 + 216) = a1 + 208;
  *(_QWORD *)(a1 + 208) = a1 + 208;
  *(_QWORD *)(a1 + 240) = a1 + 232;
  *(_QWORD *)(a1 + 232) = a1 + 232;
  v5 = *(_DWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_DWORD *)(a1 + 416) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(2 * a2)) & 6 ^ ((unsigned __int16)(v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(2 * a2)) & 6) ^ (unsigned __int16)(a3 << 9)) & 0x200;
  if ( a3 )
  {
    *(_DWORD *)(a1 + 256) |= 0x40000u;
    v6 = (struct _KSEMAPHORE *)ExAllocateFromNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&AlpcpNPLookasides);
    *(_QWORD *)(a1 + 248) = v6;
    if ( !v6 )
      return 3221225626LL;
    KeInitializeSemaphore(v6, 0, 0x7FFFFFFF);
  }
  else
  {
    *(_QWORD *)(a1 + 248) = AlpcpDummyEvent;
  }
  *(_DWORD *)(a1 + 416) |= 1u;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)&AlpcpMessageLogLock.FirstArgument, 0LL, 0LL, a4);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock.FirstArgument, 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&AlpcpMessageLogLock.FirstArgument,
      v8,
      (__int64)&AlpcpMessageLogLock.FirstArgument);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v9);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  v12 = *(_QWORD **)&AlpcpMessageLogLock.SystemCallNumber;
  if ( **(struct _KTHREAD ***)&AlpcpMessageLogLock.SystemCallNumber != (struct _KTHREAD *)(&AlpcpMessageLogLock.MiscFlags
                                                                                         + 1) )
    __fastfail(3u);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)&AlpcpMessageLogLock.SystemCallNumber;
  *(_QWORD *)a1 = (char *)&AlpcpMessageLogLock.116 + 4;
  *v12 = a1;
  *(_QWORD *)&AlpcpMessageLogLock.SystemCallNumber = a1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock.FirstArgument, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock.FirstArgument);
  KeAbPostRelease((unsigned __int64)&AlpcpMessageLogLock.FirstArgument);
  return 0LL;
}
