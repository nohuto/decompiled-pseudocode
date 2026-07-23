/*
 * XREFs of SmEtwEnableCallback @ 0x140820670
 * Callers:
 *     <none>
 * Callees:
 *     SmKmStoreDereference @ 0x140265080 (SmKmStoreDereference.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     SmKmStoreReferenceEx @ 0x1402D2430 (SmKmStoreReferenceEx.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140642980 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmKmEtwLogStoreChange @ 0x140820888 (SmKmEtwLogStoreChange.c)
 */

void __fastcall SmEtwEnableCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v5; // rdx
  LegacyAutoBoost *v6; // rbx
  __int64 *i; // rbx
  unsigned int j; // edi
  __int64 v9; // rax
  unsigned int k; // edi
  __int64 v11; // rax

  if ( ControlCode <= 1
    && (MatchAnyKeyword = (unsigned int)MatchAnyKeyword | 0x40,
        HIDWORD(stru_140E27C48.InitialStack) = MatchAnyKeyword,
        ControlCode == 1)
    || ControlCode == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140E27C48, 0LL, 0LL, (struct _KLOCK_ENTRIES *)MatchAnyKeyword);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E27C48, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140E27C48.Header.Lock, 0, v6, &stru_140E27C48);
    if ( v6 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v6, v5);
      else
        *((_BYTE *)v6 + 10) = 1;
    }
    for ( i = (__int64 *)qword_140E27C38; i != &qword_140E27C38; i = (__int64 *)*i )
    {
      for ( j = 0; j < 0x400; ++j )
      {
        v9 = SmKmStoreReferenceEx((__int64)(i - 279), j);
        if ( v9 )
        {
          SmKmEtwLogStoreChange(&stru_140E27C48.QuantumTarget, v9, SmEventStoreRundown);
          SmKmStoreDereference((__int64)(i - 279), j);
        }
      }
      if ( (-(__int64)(SBYTE4(stru_140E27C48.InitialStack) < 0) & (unsigned __int64)&stru_140E27C48.QuantumTarget) != 0 )
      {
        for ( k = 0; k < 0x400; ++k )
        {
          v11 = SmKmStoreReferenceEx((__int64)(i - 279), k);
          if ( v11 )
            SMKM_STORE_MGR<SM_TRAITS>::SmStoreContentsRundown((__int64)(i - 279), v11);
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E27C48, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&stru_140E27C48.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140E27C48);
    KeLeaveCriticalRegion();
  }
}
