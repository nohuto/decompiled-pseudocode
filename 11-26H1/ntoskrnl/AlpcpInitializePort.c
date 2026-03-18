/*
 * XREFs of AlpcpInitializePort @ 0x1408EA310
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1408E6A30 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x1408E9A60 (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x140AE7730 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402C1770 (ExAllocateFromNPagedLookasideList.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KeInitializeSemaphore @ 0x1404B5E80 (KeInitializeSemaphore.c)
 */

__int64 __fastcall AlpcpInitializePort(
        _KSCHEDULING_GROUP_POLICY a1,
        char a2,
        unsigned __int8 a3,
        struct _KLOCK_ENTRIES *a4)
{
  int v5; // eax
  struct _KSEMAPHORE *v6; // rax
  AutoBoost *v8; // rax
  void *v9; // rdx
  signed __int8 v10; // cf
  AutoBoost *v11; // rdi
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rax

  *(_QWORD *)(*(_QWORD *)&a1 + 352LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)&a1 + 344LL) = *(_QWORD *)&a1 + 336LL;
  *(_QWORD *)(*(_QWORD *)&a1 + 336LL) = *(_QWORD *)&a1 + 336LL;
  *(_QWORD *)(*(_QWORD *)&a1 + 152LL) = *(_QWORD *)&a1 + 144LL;
  *(_QWORD *)(*(_QWORD *)&a1 + 144LL) = *(_QWORD *)&a1 + 144LL;
  *(_QWORD *)(*(_QWORD *)&a1 + 192LL) = *(_QWORD *)&a1 + 184LL;
  *(_QWORD *)(*(_QWORD *)&a1 + 184LL) = *(_QWORD *)&a1 + 184LL;
  *(_QWORD *)(*(_QWORD *)&a1 + 168LL) = *(_QWORD *)&a1 + 160LL;
  *(_QWORD *)(*(_QWORD *)&a1 + 160LL) = *(_QWORD *)&a1 + 160LL;
  *(_QWORD *)(*(_QWORD *)&a1 + 392LL) = *(_QWORD *)&a1 + 384LL;
  *(_QWORD *)(*(_QWORD *)&a1 + 384LL) = *(_QWORD *)&a1 + 384LL;
  *(_QWORD *)(*(_QWORD *)&a1 + 216LL) = *(_QWORD *)&a1 + 208LL;
  *(_QWORD *)(*(_QWORD *)&a1 + 208LL) = *(_QWORD *)&a1 + 208LL;
  *(_QWORD *)(*(_QWORD *)&a1 + 240LL) = *(_QWORD *)&a1 + 232LL;
  *(_QWORD *)(*(_QWORD *)&a1 + 232LL) = *(_QWORD *)&a1 + 232LL;
  v5 = *(_DWORD *)(*(_QWORD *)&a1 + 416LL);
  *(_QWORD *)(*(_QWORD *)&a1 + 328LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)&a1 + 136LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)&a1 + 176LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)&a1 + 200LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)&a1 + 224LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)&a1 + 416LL) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(2 * a2)) & 6 ^ ((unsigned __int16)(v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(2 * a2)) & 6) ^ (unsigned __int16)(a3 << 9)) & 0x200;
  if ( a3 )
  {
    *(_DWORD *)(*(_QWORD *)&a1 + 256LL) |= 0x40000u;
    v6 = (struct _KSEMAPHORE *)ExAllocateFromNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&AlpcpNPLookasides);
    *(_QWORD *)(*(_QWORD *)&a1 + 248LL) = v6;
    if ( !v6 )
      return 3221225626LL;
    KeInitializeSemaphore(v6, 0, 0x7FFFFFFF);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)&a1 + 248LL) = AlpcpDummyEvent;
  }
  *(_DWORD *)(*(_QWORD *)&a1 + 416LL) |= 1u;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)&AlpcpMessageLogLock.WaitRegister, 0LL, 0LL, a4);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock.WaitRegister, 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&AlpcpMessageLogLock.WaitRegister.Flags,
      v8,
      (__int64)&AlpcpMessageLogLock.WaitRegister);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v9);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  SchedulingGroup = AlpcpMessageLogLock.SchedulingGroup;
  if ( (_XSAVE_FORMAT **)AlpcpMessageLogLock.SchedulingGroup->Policy != &AlpcpMessageLogLock.StateSaveArea )
    __fastfail(3u);
  *(_QWORD *)(*(_QWORD *)&a1 + 8LL) = AlpcpMessageLogLock.SchedulingGroup;
  **(_QWORD **)&a1 = &AlpcpMessageLogLock.StateSaveArea;
  SchedulingGroup->Policy = a1;
  AlpcpMessageLogLock.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)a1;
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&AlpcpMessageLogLock.WaitRegister.Flags,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock.WaitRegister);
  KeAbPostRelease((unsigned __int64)&AlpcpMessageLogLock.WaitRegister);
  return 0LL;
}
