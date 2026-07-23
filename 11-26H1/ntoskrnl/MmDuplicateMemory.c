/*
 * XREFs of MmDuplicateMemory @ 0x140C130F0
 * Callers:
 *     IopLiveDumpCapture @ 0x1405D0DCC (IopLiveDumpCapture.c)
 *     MmCreateMirror @ 0x14086EB30 (MmCreateMirror.c)
 *     PnprInitiateReplaceOperation @ 0x140BF7744 (PnprInitiateReplaceOperation.c)
 *     PopTransitionToSleep @ 0x140C0A210 (PopTransitionToSleep.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiIterateOverPartitions @ 0x1404A2784 (MiIterateOverPartitions.c)
 *     MiLockDynamicMemoryShared @ 0x1404C5110 (MiLockDynamicMemoryShared.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiLockAllMemoryLists @ 0x1407085D4 (MiLockAllMemoryLists.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiInitializeMirrorPacket @ 0x14077A9F0 (MiInitializeMirrorPacket.c)
 *     MmLockPagableSectionByHandle @ 0x140A9F220 (MmLockPagableSectionByHandle.c)
 *     MiUpdateMirrorBitmaps @ 0x140B68B5C (MiUpdateMirrorBitmaps.c)
 *     MiMirrorBlackPhase @ 0x140C07048 (MiMirrorBlackPhase.c)
 *     MiMirrorComplete @ 0x140C070E4 (MiMirrorComplete.c)
 *     MiMirrorVerify @ 0x140C0722C (MiMirrorVerify.c)
 *     MiRecordPostHibernateZeroPages @ 0x140C07280 (MiRecordPostHibernateZeroPages.c)
 *     MiActOnMirrorBitmap @ 0x140C12CF8 (MiActOnMirrorBitmap.c)
 *     MiMirrorBrownPhase @ 0x140C13640 (MiMirrorBrownPhase.c)
 */

int __fastcall MmDuplicateMemory(__int64 a1)
{
  int result; // eax
  struct _KLOCK_ENTRIES *v3; // r9
  LegacyAutoBoost *v4; // rbx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  __int64 v7; // rdx
  signed int v8; // ebx
  int v9; // ebx
  int i; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int8 CurrentIrql; // al
  int v15; // edx
  unsigned __int8 v16; // al
  bool v17; // zf
  int j; // ebx
  unsigned __int8 v19; // bl
  __int64 v20; // rdx
  __int64 v21; // [rsp+30h] [rbp-50h] BYREF
  int v22; // [rsp+38h] [rbp-48h]
  unsigned __int8 v23; // [rsp+44h] [rbp-3Ch]
  unsigned __int8 v24; // [rsp+45h] [rbp-3Bh]
  _WORD *v25; // [rsp+48h] [rbp-38h]
  PLARGE_INTEGER Timeout; // [rsp+58h] [rbp-28h]
  int v27; // [rsp+70h] [rbp-10h]

  memset_0(&v21, 0, 0x48uLL);
  result = MiInitializeMirrorPacket(&v21, a1);
  if ( result >= 0 )
  {
    result = KeWaitForSingleObject(&stru_140E2ED08.Timer.TimerListEntry.Blink, WrVirtualMemory, 0, 0, Timeout);
    if ( result >= 0 )
    {
      if ( result == 258 )
      {
        return 258;
      }
      else
      {
        if ( (MiFlags & 4) == 0 )
          MmLockPagableSectionByHandle(ExPageLockHandle);
        --v25[243];
        v4 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140E2ED08, 0LL, 0LL, v3);
        v7 = 17LL;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E2ED08, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140E2ED08.Header.Lock, 0, v4, &stru_140E2ED08);
        if ( v4 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v4, (void *)v7);
          else
            *((_BYTE *)v4 + 10) = 1;
        }
        MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)v25, v5, v6);
        _InterlockedAdd((volatile signed __int32 *)&stru_140E366D8.SystemCallNumber, 1u);
        v8 = 0;
        stru_140E2ED08.WaitBlock[0].SparePtr = v25;
        while ( v8 < 2 )
        {
          if ( !(unsigned int)MiUpdateMirrorBitmaps(v8, 0LL, 0LL) )
          {
            v9 = -1073741670;
            goto LABEL_48;
          }
          ++v8;
        }
        for ( i = 0; i < 2; ++i )
          MiActOnMirrorBitmap(i, 1, 1);
        v9 = guard_dispatch_icall_no_overrides(v12, v11);
        if ( v9 >= 0 )
        {
          LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) = 1;
          v9 = MiMirrorBrownPhase(&v21);
          if ( v9 >= 0 )
          {
            if ( (v22 & 0x802) == 0 && (v27 & 1) != 0 )
            {
              _InterlockedAdd(&dword_140E36158, 0xFFFFFFFF);
              v27 &= ~1u;
            }
            CurrentIrql = KeGetCurrentIrql();
            v23 = CurrentIrql;
            v9 = guard_dispatch_icall_no_overrides(0LL, v13);
            if ( v9 >= 0 )
            {
              v16 = KeGetCurrentIrql();
              v17 = *(_QWORD *)(a1 + 24) == 0LL;
              v24 = v16;
              if ( !v17 )
              {
                for ( j = 0; j < 2; ++j )
                  MiActOnMirrorBitmap(j, 0, 1);
                v16 = v24;
              }
              if ( v16 < 2u )
              {
                v19 = KeGetCurrentIrql();
                if ( v19 != 2 )
                  __writecr8(2uLL);
                if ( KiIrqlFlags )
                {
                  LOBYTE(v15) = 2;
                  KiRaiseIrqlProcessIrqlFlags(v19, v15);
                }
                v24 = v19;
              }
              MiLockAllMemoryLists();
              if ( (v27 & 1) != 0 )
              {
                _InterlockedAdd(&dword_140E36158, 0xFFFFFFFF);
                v27 &= ~1u;
              }
              LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) = 2;
              v9 = MiMirrorBlackPhase((__int64)&v21);
              if ( v9 >= 0 )
              {
                v9 = MiMirrorVerify(a1);
                if ( v9 >= 0 )
                {
                  if ( (v27 & 4) == 0 && (stru_140E366D8.WaitRegister.Flags & 8) != 0 )
                  {
                    _InterlockedAdd((volatile signed __int32 *)&stru_140E2ED08.WaitBlockFill11[32], 1u);
                    v27 |= 0x10u;
                  }
                  v9 = guard_dispatch_icall_no_overrides(1LL, v20);
                  if ( v9 == 1073742484 && (v27 & 4) == 0 )
                  {
                    MiIterateOverPartitions((__int64)MiResumeMarkPageLists, (__int64)&v21);
                    v27 |= 2u;
                    if ( (stru_140E366D8.WaitRegister.Flags & 8) != 0 )
                      MiRecordPostHibernateZeroPages((__int64)&v21);
                    v9 = 0;
                  }
                }
              }
            }
          }
        }
LABEL_48:
        MiMirrorComplete((__int64)&v21);
        return v9;
      }
    }
  }
  return result;
}
