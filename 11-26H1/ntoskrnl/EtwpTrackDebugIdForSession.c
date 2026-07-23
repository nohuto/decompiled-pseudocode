/*
 * XREFs of EtwpTrackDebugIdForSession @ 0x140A899DC
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x140917EA4 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void __fastcall EtwpTrackDebugIdForSession(__int64 a1, const void *a2, unsigned int a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rsi
  SIZE_T v5; // r14
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rbx
  __int64 *i; // rsi
  __int64 Pool2; // rax
  __int64 v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // rcx

  v4 = (unsigned __int64 *)(a1 + 688);
  v5 = a3;
  v8 = (AutoBoost *)KeAbPreAcquire(a1 + 688, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v8, (__int64)v4);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  if ( (unsigned int)v5 <= 0x8000 && (unsigned int)(v5 + *(_DWORD *)(a1 + 324)) <= *(_DWORD *)(a1 + 4) )
  {
    for ( i = *(__int64 **)(a1 + 96); i != (__int64 *)(a1 + 96); i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 5) == (_DWORD)v5 && RtlCompareMemory(i + 3, a2, v5) == v5 )
        goto LABEL_15;
    }
    Pool2 = ExAllocatePool2(0x40uLL);
    v13 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(a1 + 324) += v5;
      *(_DWORD *)(Pool2 + 20) = v5;
      memmove((void *)(Pool2 + 24), a2, v5);
      v14 = (__int64 *)(a1 + 96);
      v15 = *(_QWORD *)(a1 + 96);
      if ( *(_QWORD *)(v15 + 8) != a1 + 96 )
        __fastfail(3u);
      *(_QWORD *)v13 = v15;
      *(_QWORD *)(v13 + 8) = v14;
      *(_QWORD *)(v15 + 8) = v13;
      *v14 = v13;
      *(_BYTE *)(v13 + 16) = 0;
      _InterlockedOr((volatile signed __int32 *)(a1 + 824), 0x8C0u);
    }
  }
LABEL_15:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
  KeAbPostRelease(a1 + 688);
}
