/*
 * XREFs of SmGetStoreOwnerProcessId @ 0x140642A78
 * Callers:
 *     ?SmStEtwFillStoreEvent@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z @ 0x14064256C (-SmStEtwFillStoreEvent@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z.c)
 * Callees:
 *     SmKmStoreRefFromStoreIndex @ 0x140204C10 (SmKmStoreRefFromStoreIndex.c)
 *     SmKmStoreDereference @ 0x140265080 (SmKmStoreDereference.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     SmKmStoreReference @ 0x1402D2520 (SmKmStoreReference.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     SmpKeyedStoreEntryGet @ 0x140402EE0 (SmpKeyedStoreEntryGet.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 */

__int64 __fastcall SmGetStoreOwnerProcessId(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v3; // edx
  volatile signed __int64 *v4; // rdi
  __int64 v5; // rax
  struct _KLOCK_ENTRIES *v6; // r9
  unsigned int v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  volatile unsigned __int8 *v9; // rdx
  _BYTE *v10; // rbx
  unsigned int v11; // r8d
  unsigned __int64 *v12; // rax
  unsigned __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 3200);
  v3 = *(_DWORD *)(a1 + 2464);
  v14 = 0LL;
  v4 = (volatile signed __int64 *)(v1 + 2344);
  v5 = SmKmStoreReference(v1, v3);
  if ( v5 && v5 == a1 )
  {
    v14 = *(_QWORD *)(SmKmStoreRefFromStoreIndex(v1, *(_DWORD *)(a1 + 2464) & 0x3FF) + 24);
    if ( v14 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v10 = (_BYTE *)KeAbPreAcquire(v1 + 2344, 0LL, 0LL, v6);
      if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(
          (signed __int64 *)(v1 + 2344),
          0,
          (LegacyAutoBoost *)v10,
          (struct _KTHREAD *)(v1 + 2344));
      v11 = 1;
      if ( v10 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
        {
          LOBYTE(v9) = 2;
          AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v10 + 33), v9, 1);
        }
        else
        {
          v10[10] = 1;
        }
      }
      v12 = SmpKeyedStoreEntryGet((struct _KTHREAD *)(v1 + 2344), &v14, 0, (struct _KLOCK_ENTRIES *)v11);
      if ( v12 && *((unsigned __int16 *)v12 + 8) == *(_DWORD *)(a1 + 2464) )
        v7 = *(_DWORD *)(v14 + 464);
      else
        v7 = -1;
      if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v1 + 2344));
      KeAbPostRelease(v1 + 2344);
      KeLeaveCriticalRegion();
    }
    else
    {
      v7 = 0;
    }
    goto LABEL_19;
  }
  v7 = -1;
  if ( v5 )
LABEL_19:
    SmKmStoreDereference(v1, *(_DWORD *)(a1 + 2464));
  return v7;
}
