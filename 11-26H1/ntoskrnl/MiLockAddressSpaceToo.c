/*
 * XREFs of MiLockAddressSpaceToo @ 0x140317094
 * Callers:
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 *     MiPrepareVadDelete @ 0x140A941FC (MiPrepareVadDelete.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403175E4 (LOCK_ADDRESS_SPACE.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     MiUnlockNestedVad @ 0x140A9F940 (MiUnlockNestedVad.c)
 */

__int64 __fastcall MiLockAddressSpaceToo(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD *v5; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  struct _KLOCK_ENTRIES *v14; // r9
  AutoBoost *v15; // rax
  volatile unsigned __int8 *v16; // rdx
  __int64 v17; // rcx
  struct _KLOCK_ENTRIES *v18; // r9
  AutoBoost *v19; // rdi
  bool v20; // zf
  unsigned __int64 *v21; // rsi
  AutoBoost *v22; // rax
  unsigned int v23; // r9d
  AutoBoost *v24; // rdi

  CurrentThread = KeGetCurrentThread();
  v5 = (struct _KTHREAD *)(a1 + 600);
  --CurrentThread->SpecialApcDisable;
  v9 = KeAbPreAcquire(a1 + 600, 0LL, 1LL, a4);
  v12 = v9;
  if ( _interlockedbittestandset64(&v5->Header.Lock, 0LL) )
  {
    if ( v9 )
      KeAbPostReleaseEx(v5, v9, v10, v11);
    if ( a3 )
      MiUnlockNestedVad(a3, v12);
    MiUnlockVad((__int64)CurrentThread, a2);
    LOCK_ADDRESS_SPACE(CurrentThread, a1);
    --CurrentThread->SpecialApcDisable;
    v15 = (AutoBoost *)KeAbPreAcquire(a2 + 40, 0LL, 0LL, v14);
    v19 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 40), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 40), v15, a2 + 40);
    if ( v19 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v19 + 33) |= 2u;
      else
        *((_BYTE *)v19 + 10) = 1;
    }
    LODWORD(CurrentThread[1].Queue) |= 0x80u;
    if ( a3 )
    {
      v21 = (unsigned __int64 *)(a3 + 40);
      v22 = (AutoBoost *)KeAbPreAcquire((__int64)v21, 0LL, 0LL, v18);
      v24 = v22;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v21, 0LL) )
        ExfAcquirePushLockExclusiveEx(v21, v22, (__int64)v21);
      if ( v24 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
        {
          LOBYTE(v16) = 2;
          AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v24 + 33), v16, 1u, v23);
        }
        else
        {
          *((_BYTE *)v24 + 10) = 1;
        }
      }
    }
    v20 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v20 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v17, (__int64)v16);
    return 0LL;
  }
  else
  {
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *(_BYTE *)(v9 + 33) |= 2u;
      else
        *(_BYTE *)(v9 + 10) = 1;
    }
    result = 1LL;
    LODWORD(CurrentThread[1].Queue) |= 1u;
  }
  return result;
}
