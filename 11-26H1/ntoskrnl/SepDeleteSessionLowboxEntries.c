/*
 * XREFs of SepDeleteSessionLowboxEntries @ 0x1404B1F48
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x140B003D0 (SepDeleteLogonSessionTrack.c)
 *     SepDeReferenceLogonSession @ 0x140B8585C (SepDeReferenceLogonSession.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlDeleteHashTable @ 0x1404B2340 (RtlDeleteHashTable.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeleteSessionLowboxEntries(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  void *v6; // rdx
  struct _KLOCK_ENTRIES *v7; // r9
  signed __int8 v8; // cf
  AutoBoost *v9; // rdi
  volatile signed __int64 *i; // rsi
  struct _KTHREAD *v11; // rax
  volatile signed __int64 *v12; // rdi
  volatile signed __int64 *v13; // r14
  AutoBoost *v14; // rax
  void *v15; // rdx
  AutoBoost *v16; // rbp
  int v17; // r8d
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // r10d
  _QWORD *v21; // r9
  unsigned int v22; // ebp
  _QWORD *v23; // r8
  __int64 j; // rdx
  unsigned __int64 v25; // rcx
  unsigned int v26; // ecx
  volatile signed __int64 v27; // rcx
  volatile signed __int64 **v28; // rax

  if ( SepRmCapTableLock.AffinityVersion )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = (AutoBoost *)KeAbPreAcquire((__int64)&SepRmCapTableLock.Affinity, 0LL, 0LL, a4);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&SepRmCapTableLock.Affinity, 0LL);
    v9 = v5;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&SepRmCapTableLock.Affinity,
        v5,
        (__int64)&SepRmCapTableLock.Affinity);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v9, v6);
      else
        *((_BYTE *)v9 + 10) = 1;
    }
    for ( i = *(volatile signed __int64 **)SepRmCapTableLock.AffinityVersion;
          i != (volatile signed __int64 *)SepRmCapTableLock.AffinityVersion;
          i = v13 )
    {
      v11 = KeGetCurrentThread();
      v12 = i + 3;
      v13 = (volatile signed __int64 *)*i;
      --v11->KernelApcDisable;
      v14 = (AutoBoost *)KeAbPreAcquire((__int64)(i + 3), 0LL, 0LL, v7);
      v16 = v14;
      if ( _interlockedbittestandset64((volatile signed __int32 *)i + 6, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)i + 3, v14, (__int64)(i + 3));
      if ( v16 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v16, v15);
        else
          *((_BYTE *)v16 + 10) = 1;
      }
      v17 = *((_DWORD *)i + 8);
      v18 = i[5] & 4;
      v19 = (unsigned int)v18 != 0LL ? 0x20 : 0;
      v20 = v19;
      v21 = (_QWORD *)(*((_QWORD *)i + 5) - (v18 != 0 ? 4 : 0));
      v22 = v17 + v19 - 1;
      if ( !v17 )
        goto LABEL_29;
      v23 = (_QWORD *)(*((_QWORD *)i + 5) - (v18 != 0 ? 4 : 0));
      for ( j = ~*v21 | ((1LL << v19) - 1); j == -1; j = ~*v23 )
      {
        if ( ++v23 > &v21[(unsigned __int64)v22 >> 6] )
          goto LABEL_29;
      }
      _BitScanForward64(&v25, ~j);
      v26 = ((unsigned int)(v23 - v21) << 6) + v25;
      if ( v26 > v22 || v26 == -1 || v26 - v20 == -1 )
      {
LABEL_29:
        RtlDeleteHashTable(*((PRTL_DYNAMIC_HASH_TABLE *)i + 6));
        ExFreePoolWithTag(*((PVOID *)i + 5), 0);
        v27 = *i;
        if ( *(volatile signed __int64 **)(*i + 8) != i
          || (v28 = (volatile signed __int64 **)*((_QWORD *)i + 1), *v28 != i) )
        {
          __fastfail(3u);
        }
        *v28 = (volatile signed __int64 *)v27;
        *(_QWORD *)(v27 + 8) = v28;
        if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(i + 3);
        KeAbPostRelease((unsigned __int64)(i + 3));
        KeLeaveCriticalRegion();
        ExFreePoolWithTag((PVOID)i, 0);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(i + 3);
        KeAbPostRelease((unsigned __int64)(i + 3));
        KeLeaveCriticalRegion();
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SepRmCapTableLock.Affinity, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&SepRmCapTableLock.Affinity);
    KeAbPostRelease((unsigned __int64)&SepRmCapTableLock.Affinity);
    KeLeaveCriticalRegion();
  }
}
