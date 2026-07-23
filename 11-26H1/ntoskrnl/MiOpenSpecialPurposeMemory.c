/*
 * XREFs of MiOpenSpecialPurposeMemory @ 0x140884B70
 * Callers:
 *     NtManagePartition @ 0x140802EF0 (NtManagePartition.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiSpecialPurposeMemoryTypeDereference @ 0x1408851A8 (MiSpecialPurposeMemoryTypeDereference.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall MiOpenSpecialPurposeMemory(__int64 a1, __int64 a2, KPROCESSOR_MODE a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v4; // edi
  _QWORD *v7; // r14
  struct _KLOCK_ENTRIES *v8; // r9
  void *v9; // rdx
  LegacyAutoBoost *v10; // rbp
  signed __int64 v11; // r8
  _QWORD *i; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  bool v15; // zf
  NTSTATUS v16; // ebx

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v7 = 0LL;
  if ( (*(_DWORD *)(a2 + 8) & (a3 != 0 ? 7666 : 73714)) == *(_DWORD *)(a2 + 8) )
  {
    if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a3) )
    {
      --CurrentThread->SpecialApcDisable;
      v10 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 21448, 0LL, 0LL, v8);
      v11 = 17LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 21448), 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 21448), 0, v10, (struct _KTHREAD *)(a1 + 21448));
        v11 = 17LL;
      }
      if ( v10 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v10, v9);
        else
          *((_BYTE *)v10 + 10) = 1;
      }
      for ( i = *(_QWORD **)(a1 + 21400); i != (_QWORD *)(a1 + 21400); i = (_QWORD *)*i )
      {
        if ( i[2] == *(_QWORD *)a2 )
        {
          ++i[11];
          v7 = i;
          break;
        }
      }
      if ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 21448), 0LL, v11) )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 21448));
      KeAbPostRelease(a1 + 21448);
      v15 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v15
        && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v14, v13);
      }
      if ( v7 )
      {
        v16 = ObOpenObjectByPointer(
                *(PVOID *)(v7[8] + 256LL),
                *(_DWORD *)(a2 + 8),
                0LL,
                *(_DWORD *)(a2 + 12),
                PsPartitionType,
                0,
                (PHANDLE)(a2 + 16));
        MiSpecialPurposeMemoryTypeDereference(a1, v7);
        if ( v16 < 0 )
          return (unsigned int)v16;
      }
      else
      {
        return (unsigned int)-1073741275;
      }
    }
    else
    {
      return (unsigned int)-1073741727;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
