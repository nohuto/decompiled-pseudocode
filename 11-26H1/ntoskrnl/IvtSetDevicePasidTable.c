/*
 * XREFs of IvtSetDevicePasidTable @ 0x1405A9FD0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IvtUpdateScalableModeTranslationStructures @ 0x1404F9990 (IvtUpdateScalableModeTranslationStructures.c)
 *     IvtUpdateScalableModeContextEntry @ 0x1404F9C68 (IvtUpdateScalableModeContextEntry.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     IvtBuildDefaultDomain @ 0x1405A8490 (IvtBuildDefaultDomain.c)
 *     IvtFreeScalableModePasidTables @ 0x1405A8E04 (IvtFreeScalableModePasidTables.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall IvtSetDevicePasidTable(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  bool v7; // r15
  unsigned __int8 CurrentIrql; // bl
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // r14
  __int64 v14; // r8
  int v15; // [rsp+28h] [rbp-D0h]
  int v16; // [rsp+30h] [rbp-C8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v18[14]; // [rsp+70h] [rbp-88h] BYREF

  memset_0(v18, 0, sizeof(v18));
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
  v9 = *(_QWORD *)(a2 + 88);
  v10 = *(_QWORD *)(a2 + 80);
  if ( v9 )
  {
    if ( v10 )
    {
      v11 = *(_QWORD *)(a2 + 80);
      v7 = v9 != v10;
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 104);
    }
    v12 = *(_DWORD *)(v11 + 44);
    *(_QWORD *)(a2 + 80) = v9;
  }
  else
  {
    v12 = *(_DWORD *)(v10 + 44);
    v9 = *(_QWORD *)(a2 + 80);
  }
  v13 = v12;
  *(_QWORD *)(a2 + 88) = 0LL;
  if ( !a4 )
  {
    IvtUpdateScalableModeContextEntry(
      a1,
      *(unsigned int **)(a2 + 72),
      v9,
      *(_DWORD *)(a2 + 96),
      *(_DWORD *)(v9 + 48),
      v15,
      v16,
      0,
      v12);
LABEL_18:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( v7 )
      IvtFreeScalableModePasidTables(a1, v10);
    return;
  }
  *(_DWORD *)(v9 + 48) = 3;
  if ( (int)IvtBuildDefaultDomain(a1, (unsigned __int64 *)v18, *(_BYTE *)(a2 + 48)) >= 0 )
  {
    IvtUpdateScalableModeTranslationStructures(a1, a2, v14, 4, *(_DWORD *)(a2 + 96), (__int64)v18, 0, v13);
    goto LABEL_18;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
}
