/*
 * XREFs of AlpcConnectionDestroyProcedure @ 0x1408EF6E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     AlpcpLockBlobExclusive @ 0x1408F10DC (AlpcpLockBlobExclusive.c)
 *     AlpcpUnlockBlobUncachedExclusive @ 0x1408F1140 (AlpcpUnlockBlobUncachedExclusive.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcConnectionDestroyProcedure(__int64 a1)
{
  _QWORD *v1; // rbp
  struct _KLOCK_ENTRIES *v3; // r9
  AutoBoost *v4; // rax
  void *v5; // rdx
  AutoBoost *v6; // rsi
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  void *v9; // rcx
  ULONG_PTR v10; // rcx

  v1 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    AlpcpLockBlobExclusive(v1[2]);
    v4 = (AutoBoost *)KeAbPreAcquire((__int64)(v1 + 44), 0LL, 0LL, v3);
    v6 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v1 + 88, 0LL) )
      ExfAcquirePushLockExclusiveEx(v1 + 44, v4, (__int64)(v1 + 44));
    if ( v6 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v6, v5);
      else
        *((_BYTE *)v6 + 10) = 1;
    }
    v7 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(v7 + 8) != a1 + 24 || (v8 = *(_QWORD **)(a1 + 32), *v8 != a1 + 24) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    if ( (_InterlockedExchangeAdd64(v1 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1 + 44);
    KeAbPostRelease((unsigned __int64)(v1 + 44));
    AlpcpUnlockBlobUncachedExclusive(v1[2]);
    ObfDereferenceObject(*(PVOID *)a1);
  }
  v9 = *(void **)(a1 + 40);
  if ( v9 )
  {
    if ( *(_QWORD *)(a1 + 56) == 16LL )
      ExFreeToNPagedLookasideList(&stru_140E26600, *(PVOID *)(a1 + 40));
    else
      ExFreePoolWithTag(v9, 0x61486C41u);
  }
  v10 = _InterlockedExchange64((volatile __int64 *)(a1 + 72), 0LL);
  if ( v10 )
    AlpcpDereferenceBlobEx(v10);
  return 0LL;
}
