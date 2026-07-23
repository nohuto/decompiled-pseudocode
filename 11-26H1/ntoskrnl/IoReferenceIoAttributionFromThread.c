/*
 * XREFs of IoReferenceIoAttributionFromThread @ 0x14026C040
 * Callers:
 *     CcCopyReadEx @ 0x14021E590 (CcCopyReadEx.c)
 *     CcScheduleReadAheadNuma @ 0x14021EA88 (CcScheduleReadAheadNuma.c)
 *     CcMapAndCopyInToCache @ 0x14026C7E0 (CcMapAndCopyInToCache.c)
 *     MiCheckAndUpdateIoAttribution @ 0x14026D4A0 (MiCheckAndUpdateIoAttribution.c)
 *     CcAsyncCopyRead @ 0x140389580 (CcAsyncCopyRead.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall IoReferenceIoAttributionFromThread(struct _KTHREAD *a1, _QWORD *a2)
{
  ULONG_PTR Object; // rsi
  int v3; // edi
  ULONG_PTR v5; // rbx
  __int64 v6; // rbx
  unsigned int v7; // ebp
  signed __int64 v8; // rbx
  bool v9; // cc
  signed __int64 BugCheckParameter4; // rbx
  KIRQL v12; // al
  __int64 v13; // rbx
  unsigned __int64 v14; // r15
  KIRQL v15; // al
  KIRQL v16; // r15
  void *retaddr; // [rsp+48h] [rbp+0h]

  Object = (ULONG_PTR)a1[1].WaitBlock[1].Object;
  v3 = 0;
  v5 = (ULONG_PTR)a1;
  if ( Object )
  {
    if ( a1 == KeGetCurrentThread() )
      goto LABEL_10;
    v15 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&PsAltSystemCallRegistrationLock.FirstArgument);
    Object = *(_QWORD *)(v5 + 1616);
    v16 = v15;
    if ( Object )
    {
      ObfReferenceObjectWithTag(*(PVOID *)(v5 + 1616), 0x746C6644u);
      v3 = 1;
    }
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)&PsAltSystemCallRegistrationLock.FirstArgument, v16);
    if ( Object )
LABEL_10:
      v5 = Object;
  }
  v6 = *(_QWORD *)(v5 + 544);
  if ( *(_QWORD *)(v6 + 1752) )
  {
    v12 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
    v13 = *(_QWORD *)(v6 + 1752);
    v14 = v12;
    if ( v13 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v13 + 32)) <= 1 )
        __fastfail(0xEu);
      *a2 = v13;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(&IopDiskIoAttributionLock, 0xBFFFFFFF);
      _InterlockedDecrement(&IopDiskIoAttributionLock);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&IopDiskIoAttributionLock, retaddr);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
    __writecr8(v14);
    v7 = 0;
    if ( !v13 )
      v7 = -1073741275;
  }
  else
  {
    v7 = -1073741275;
  }
  if ( v3 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo(Object - 48, -1, 0x746C6644u);
    v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(Object - 48), 0xFFFFFFFFFFFFFFFFuLL);
    v9 = v8 <= 1;
    BugCheckParameter4 = v8 - 1;
    if ( v9 )
    {
      if ( *(_QWORD *)(Object - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(Object - 48) >> 8)],
          Object,
          3uLL,
          *(_QWORD *)(Object - 40));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, Object, 4uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(Object - 48);
    }
  }
  return v7;
}
