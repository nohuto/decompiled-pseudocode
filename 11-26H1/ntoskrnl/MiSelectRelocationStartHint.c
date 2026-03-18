/*
 * XREFs of MiSelectRelocationStartHint @ 0x140AECDF0
 * Callers:
 *     MiObtainRelocationBits @ 0x1409CB088 (MiObtainRelocationBits.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     RtlFindClearBitsEx @ 0x14035F9A0 (RtlFindClearBitsEx.c)
 *     RtlCopyBitMapEx @ 0x14044B020 (RtlCopyBitMapEx.c)
 *     RtlMergeBitMapsEx @ 0x140618AE0 (RtlMergeBitMapsEx.c)
 */

unsigned __int64 __fastcall MiSelectRelocationStartHint(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  int v4; // r12d
  unsigned __int64 v6; // r15
  struct _KTHREAD *CurrentThread; // rdi
  AutoBoost *v10; // rax
  void *v11; // rdx
  signed __int8 v12; // cf
  AutoBoost *v13; // rsi
  unsigned __int64 ClearBits; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx

  v4 = (int)a4;
  v6 = a2;
  if ( !*(_QWORD *)(a1 + 8) )
    return RtlFindClearBitsEx(*(unsigned __int64 **)a1, a2, a3);
  CurrentThread = KeGetCurrentThread();
  if ( !(_DWORD)a4 )
  {
    --CurrentThread->SpecialApcDisable;
    v10 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E2D150.116 + 4, 0LL, 0LL, a4);
    v12 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140E2D150.116 + 1, 0LL);
    v13 = v10;
    if ( v12 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)((char *)&stru_140E2D150.116 + 4),
        v10,
        (__int64)&stru_140E2D150.116 + 4);
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v13, v11);
      else
        *((_BYTE *)v13 + 10) = 1;
    }
  }
  RtlCopyBitMapEx(*(unsigned __int64 **)a1, &stru_140E2D150.Timer.Header.Lock, 0LL);
  RtlMergeBitMapsEx((unsigned __int64 *)&stru_140E2D150.Timer, *(__int64 **)(a1 + 8));
  ClearBits = RtlFindClearBitsEx((unsigned __int64 *)&stru_140E2D150.Timer, v6, a3);
  if ( !v4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)((char *)&stru_140E2D150.116 + 4), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)((char *)&stru_140E2D150.116 + 4));
    KeAbPostRelease((unsigned __int64)&stru_140E2D150.116 + 4);
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery(v16, v15);
    }
  }
  return ClearBits;
}
