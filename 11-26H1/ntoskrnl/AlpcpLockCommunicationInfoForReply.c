/*
 * XREFs of AlpcpLockCommunicationInfoForReply @ 0x140A85B5C
 * Callers:
 *     AlpcpDispatchReplyToPort @ 0x140B73328 (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

_KTHREAD **__fastcall AlpcpLockCommunicationInfoForReply(
        __int64 a1,
        __int64 a2,
        _KTHREAD **a3,
        struct _KLOCK_ENTRIES *a4)
{
  int v8; // eax
  _KTHREAD **v9; // rbx
  volatile signed __int64 *v10; // rsi
  __int64 v11; // rcx
  void *v12; // rdx
  LegacyAutoBoost *v13; // rdi
  _KTHREAD *v14; // rax
  _KTHREAD *v15; // rcx
  _KTHREAD **result; // rax
  void *v17; // rdx
  LegacyAutoBoost *v18; // rdi
  void *v19; // rdx
  LegacyAutoBoost *v20; // rdi

  v8 = ((*(_DWORD *)(a1 + 416) >> 1) & 3) - 1;
  if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) != 1 )
  {
    v9 = *(_KTHREAD ***)(a1 + 16);
    v10 = (volatile signed __int64 *)(v9 - 2);
    v11 = (__int64)(v9 - 2);
    if ( v8 == 1 )
    {
      v13 = (LegacyAutoBoost *)KeAbPreAcquire(v11, 0LL, 0LL, a4);
      if ( _InterlockedCompareExchange64(v10, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)v9 - 2, 0, v13, (struct _KTHREAD *)(v9 - 2));
      if ( v13 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v13, v12);
        else
          *((_BYTE *)v13 + 10) = 1;
      }
      v14 = v9[2];
      v15 = v14;
      goto LABEL_9;
    }
    v18 = (LegacyAutoBoost *)KeAbPreAcquire(v11, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64(v10, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)v9 - 2, 0, v18, (struct _KTHREAD *)(v9 - 2));
    if ( v18 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v18, v17);
      else
        *((_BYTE *)v18 + 10) = 1;
    }
    v14 = *v9;
LABEL_16:
    v15 = v9[1];
    goto LABEL_9;
  }
  v9 = *(_KTHREAD ***)(a2 + 16);
  v20 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v9 - 2), 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)v9 - 2, 0, v20, (struct _KTHREAD *)(v9 - 2));
  if ( v20 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v20, v19);
    else
      *((_BYTE *)v20 + 10) = 1;
  }
  v14 = *v9;
  v15 = *v9;
  if ( a2 != a1 )
    goto LABEL_16;
LABEL_9:
  *a3 = v14;
  result = v9;
  a4->Thread = v15;
  return result;
}
