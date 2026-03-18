/*
 * XREFs of AlpcpReferenceConnectedPort @ 0x140929760
 * Callers:
 *     AlpcpImpersonateMessage @ 0x1409281A0 (AlpcpImpersonateMessage.c)
 *     AlpcpExposeAttributes @ 0x140972B20 (AlpcpExposeAttributes.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1409C1390 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x140A6BF08 (AlpcpPortQueryServerSessionInfo.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140A6C0A8 (AlpcpPortQueryConnectedSidInfo.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ObReferenceObjectSafe @ 0x140449C10 (ObReferenceObjectSafe.c)
 */

__int64 __fastcall AlpcpReferenceConnectedPort(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  void *v7; // rdx
  LegacyAutoBoost *v8; // rbp
  int v9; // eax

  v5 = 0LL;
  if ( (*(_DWORD *)(a1 + 416) & 6) != 2 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    if ( !v6 )
      return v5;
    v8 = (LegacyAutoBoost *)KeAbPreAcquire(v6 - 16, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 - 16), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(v6 - 16), 0, v8, (struct _KTHREAD *)(v6 - 16));
    if ( v8 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v8, v7);
      else
        *((_BYTE *)v8 + 10) = 1;
    }
    v9 = *(_DWORD *)(a1 + 416) & 6;
    if ( v9 == 4 )
    {
      v5 = *(_QWORD *)(v6 + 8);
    }
    else
    {
      if ( v9 != 6 )
      {
LABEL_14:
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 - 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v6 - 16));
        KeAbPostRelease(v6 - 16);
        return v5;
      }
      v5 = *(_QWORD *)(v6 + 16);
    }
    if ( v5 && !ObReferenceObjectSafe(v5) )
      v5 = 0LL;
    goto LABEL_14;
  }
  PsReferenceSiloContext((void *)a1);
  return a1;
}
