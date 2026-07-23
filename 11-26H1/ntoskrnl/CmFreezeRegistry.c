/*
 * XREFs of CmFreezeRegistry @ 0x140AE0F10
 * Callers:
 *     NtFreezeRegistry @ 0x1408550B0 (NtFreezeRegistry.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     CmpDisableLazyFlush @ 0x14050BABC (CmpDisableLazyFlush.c)
 *     CmThawRegistry @ 0x14085D580 (CmThawRegistry.c)
 *     CmpGetNextActiveHive @ 0x1408B95EC (CmpGetNextActiveHive.c)
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     HvLockHiveWriter @ 0x1408E1470 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408E14D4 (HvUnlockHiveWriter.c)
 *     HvMarkBaseBlockDirty @ 0x140AE1304 (HvMarkBaseBlockDirty.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmFreezeRegistry(__int64 a1, __int64 a2)
{
  int v2; // esi
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct _EX_RUNDOWN_REF *i; // rcx
  unsigned __int8 *NextActiveHive; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *j; // rcx
  unsigned __int8 *v16; // rax
  struct _EX_RUNDOWN_REF *v17; // rbx

  v2 = a1;
  v3 = 0;
  if ( (unsigned __int8)CmpAcquireShutdownRundown(a1, a2) )
  {
    CmpLockRegistryExclusive();
    if ( HIDWORD(WheapPfaLock.SwapListEntry.Next) )
    {
      v3 = -1073741431;
      CmpUnlockRegistry(v4);
    }
    else
    {
      for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v11 )
      {
        NextActiveHive = CmpGetNextActiveHive(i);
        v11 = (__int64)NextActiveHive;
        if ( !NextActiveHive )
          break;
        if ( (*((_DWORD *)NextActiveHive + 40) & 3) == 0 )
        {
          *(_OWORD *)(*((_QWORD *)NextActiveHive + 8) + 4056LL) = *(_OWORD *)(*((_QWORD *)NextActiveHive + 8) + 112LL);
          *(_OWORD *)(*((_QWORD *)NextActiveHive + 8) + 4040LL) = *(_OWORD *)(*((_QWORD *)NextActiveHive + 8) + 148LL);
          *(_OWORD *)(*((_QWORD *)NextActiveHive + 8) + 4072LL) = *(_OWORD *)(*((_QWORD *)NextActiveHive + 8) + 128LL);
          *(_OWORD *)(*((_QWORD *)NextActiveHive + 8) + 112LL) = 0LL;
          *(_OWORD *)(*((_QWORD *)NextActiveHive + 8) + 148LL) = 0LL;
          *(_OWORD *)(*((_QWORD *)NextActiveHive + 8) + 128LL) = 0LL;
          *(_DWORD *)(*((_QWORD *)NextActiveHive + 8) + 164LL) = 0;
          if ( (*((_DWORD *)NextActiveHive + 1030) & 0x300) != 0x100 && !*((_DWORD *)NextActiveHive + 26) )
          {
            HvLockHiveWriter((__int64)NextActiveHive, v8, v9, v10);
            HvMarkBaseBlockDirty(v11);
            HvUnlockHiveWriter(v11);
          }
        }
      }
      v12 = CmFreezeThawTimeoutInSeconds;
      HIDWORD(WheapPfaLock.SwapListEntry.Next) = 1;
      if ( v2 )
        v12 = v2;
      KiSetTimerEx((__int64)&CmpFreezeThawTimer, -10000000LL * v12, 0, 0, (__int64)&CmpFreezeThawDpc);
      CmpDisableLazyFlush(2u);
      CmpUnlockRegistry(v13);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      for ( j = 0LL; ; j = v17 )
      {
        v16 = CmpGetNextActiveHive(j);
        v17 = (struct _EX_RUNDOWN_REF *)v16;
        if ( !v16 )
          break;
        if ( (*((_DWORD *)v16 + 40) & 3) == 0 )
        {
          v3 = CmpFlushHive((ULONG_PTR)v16, 0xDu);
          if ( v3 < 0 )
          {
            ExReleaseRundownProtection_0(v17 + 205);
            CmThawRegistry();
            v3 = -1073741491;
            break;
          }
        }
      }
      KeLeaveCriticalRegion();
    }
    CmpReleaseShutdownRundown(v5);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return (unsigned int)v3;
}
