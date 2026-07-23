/*
 * XREFs of MiObtainRelocationBits @ 0x14099C068
 * Callers:
 *     MiSelectImageBase @ 0x14099BC88 (MiSelectImageBase.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 *     RtlFindClearBitsAndSetEx @ 0x1404932B0 (RtlFindClearBitsAndSetEx.c)
 *     MiSelectRelocationStartHint @ 0x140AEFE00 (MiSelectRelocationStartHint.c)
 */

unsigned __int64 __fastcall MiObtainRelocationBits(
        unsigned __int64 **a1,
        unsigned __int16 a2,
        unsigned __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v6; // r13
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rdi
  unsigned __int64 ClearBitsAndSet; // rax
  unsigned __int64 v12; // rdi
  unsigned __int64 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // zf
  unsigned __int64 v18; // r15
  unsigned __int64 started; // rax

  CurrentThread = KeGetCurrentThread();
  v6 = a2;
  --CurrentThread->SpecialApcDisable;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E2D2D0.116 + 4, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((_DWORD *)&stru_140E2D2D0.0 + 1, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)((char *)&stru_140E2D2D0.116 + 4),
      v8,
      (__int64)&stru_140E2D2D0.116 + 4);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(*a1, v6, a3);
  v12 = ClearBitsAndSet;
  if ( ClearBitsAndSet != -1LL )
  {
    v13 = a1[1];
    if ( v13 )
    {
      v18 = RtlFindClearBitsAndSetEx(v13, v6, ClearBitsAndSet);
      if ( v18 != v12 )
      {
        RtlClearBitsEx((__int64)*a1, v12, v6);
        if ( v18 != -1LL )
          RtlClearBitsEx((__int64)a1[1], v18, v6);
        started = MiSelectRelocationStartHint(a1, (unsigned __int16)v6, a3, 1LL);
        v12 = started;
        if ( started != -1LL )
        {
          RtlSetBitsEx((__int64)*a1, started, v6);
          RtlSetBitsEx((__int64)a1[1], v12, v6);
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)((char *)&stru_140E2D2D0.116 + 4), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)((char *)&stru_140E2D2D0.116 + 4));
  KeAbPostRelease((unsigned __int64)&stru_140E2D2D0.116 + 4);
  v16 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v16 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v15, v14);
  return v12;
}
