/*
 * XREFs of PopDirectedDripsDiagBroadcastTreeEnd @ 0x1407E1F40
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreePartial @ 0x1407E2870 (PopDirectedDripsBuildBroadcastTreePartial.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall PopDirectedDripsDiagBroadcastTreeEnd(__int64 a1, int a2, char a3, struct _KLOCK_ENTRIES *a4)
{
  char v7; // r14
  AutoBoost *v8; // rax
  void *v9; // rdx
  signed __int8 v10; // cf
  AutoBoost *v11; // rsi
  int v12; // ebx

  if ( a1 )
  {
    v7 = (char)a4;
    v8 = (AutoBoost *)KeAbPreAcquire((__int64)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink, 0LL, 0LL, a4);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&PopDirectedDripsUmLock.ApcStateFill[8], 0LL);
    v11 = v8;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink,
        v8,
        (__int64)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink);
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v11, v9);
      else
        *((_BYTE *)v11 + 10) = 1;
    }
    if ( a2 < 0
      || (v12 = *(_DWORD *)(a1 + 40) ^ ((unsigned __int8)*(_DWORD *)(a1 + 40) ^ (unsigned __int8)(16 * a3)) & 0xF0,
          *(_DWORD *)(a1 + 40) = v12,
          v7) )
    {
      *(_DWORD *)(a1 + 40) |= 0x100u;
    }
    else
    {
      *(_DWORD *)(a1 + 40) = v12 & 0xFFFFFEFF;
    }
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink);
    KeAbPostRelease((unsigned __int64)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink);
  }
}
