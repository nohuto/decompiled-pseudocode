/*
 * XREFs of AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1408EEAA0
 * Callers:
 *     AlpcpDispatchCloseMessage @ 0x1408EF2B0 (AlpcpDispatchCloseMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ObReferenceObjectSafe @ 0x140441D40 (ObReferenceObjectSafe.c)
 */

__int64 __fastcall AlpcpReferenceAndLockTargetPortsAndCommunicationInfo(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int64 *v5; // r15
  int v7; // edi
  void *v8; // rdx
  LegacyAutoBoost *v9; // rbx
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 *v11; // rdi
  __int64 *v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rdi
  void *v15; // rdx
  LegacyAutoBoost *v16; // rsi
  struct _KLOCK_ENTRIES *v17; // r9
  void *v18; // rdx
  LegacyAutoBoost *v19; // r14
  __int64 result; // rax
  signed __int64 *v21; // rsi

  v5 = *(__int64 **)(a1 + 16);
  v7 = (*(_DWORD *)(a1 + 416) >> 1) & 3;
  v9 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v5 - 2), 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v5 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5 - 2, 0, v9, (struct _KTHREAD *)(v5 - 2));
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  if ( v7 == 2 )
  {
    v11 = v5 + 1;
  }
  else
  {
    if ( v7 != 1 )
    {
      v12 = v5 + 2;
      v11 = v5 + 2;
      goto LABEL_9;
    }
    v11 = v5;
  }
  v12 = v5;
LABEL_9:
  v13 = *v12;
  v14 = *v11;
  if ( v13 && !ObReferenceObjectSafe(v13) )
    v13 = 0LL;
  if ( v14 && !ObReferenceObjectSafe(v14) )
    v14 = 0LL;
  if ( v13 && v14 )
  {
    v16 = (LegacyAutoBoost *)KeAbPreAcquire(v13 + 352, 0LL, 0LL, v10);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 352), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(v13 + 352), 0, v16, (struct _KTHREAD *)(v13 + 352));
    if ( v16 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v16, v15);
      else
        *((_BYTE *)v16 + 10) = 1;
    }
    if ( v14 != v13 )
    {
      v19 = (LegacyAutoBoost *)KeAbPreAcquire(v14 + 352, 0LL, 0LL, v17);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 352), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v14 + 352), 0, v19, (struct _KTHREAD *)(v14 + 352));
      if ( v19 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v19, v18);
        else
          *((_BYTE *)v19 + 10) = 1;
      }
    }
    if ( (*(_DWORD *)(v13 + 416) & 0x20) != 0 || (*(_DWORD *)(v14 + 416) & 0x20) != 0 )
    {
      v21 = v5 - 2;
      if ( _InterlockedCompareExchange64(v5 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v21);
      KeAbPostRelease((unsigned __int64)v21);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 352), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v13 + 352));
      KeAbPostRelease(v13 + 352);
      if ( v14 != v13 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v14 + 352));
        KeAbPostRelease(v14 + 352);
      }
      ObfDereferenceObject((PVOID)v13);
      ObfDereferenceObject((PVOID)v14);
      return 3221225527LL;
    }
    else
    {
      *a2 = v13;
      result = 0LL;
      *a3 = v14;
    }
  }
  else
  {
    if ( _InterlockedCompareExchange64(v5 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5 - 2);
    KeAbPostRelease((unsigned __int64)(v5 - 2));
    if ( v13 )
      ObfDereferenceObject((PVOID)v13);
    if ( v14 )
      ObfDereferenceObject((PVOID)v14);
    return 3221225527LL;
  }
  return result;
}
