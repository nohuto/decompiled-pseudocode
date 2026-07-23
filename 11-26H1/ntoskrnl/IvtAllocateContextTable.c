/*
 * XREFs of IvtAllocateContextTable @ 0x140508E08
 * Callers:
 *     IvtAllocateTranslationStructures @ 0x140503418 (IvtAllocateTranslationStructures.c)
 *     IvtSetDeviceSvmCapabilities @ 0x1405AA190 (IvtSetDeviceSvmCapabilities.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14059A394 (ExtEnvAllocatePhysicalMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x14059A5B0 (ExtEnvFreePhysicalMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall IvtAllocateContextTable(__int64 a1, unsigned int a2)
{
  char v2; // r9
  char v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax
  _QWORD *v7; // r14
  __int64 v8; // rdx
  unsigned __int64 *v9; // rsi
  __int64 result; // rax
  void *v11; // rbp
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v14; // rcx
  __int128 v15; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+48h] [rbp-30h]
  void *v18; // [rsp+80h] [rbp+8h] BYREF
  __int64 v19; // [rsp+90h] [rbp+18h] BYREF

  v2 = *(_BYTE *)(a1 + 320);
  v19 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v18 = 0LL;
  v3 = a2;
  v4 = a1;
  v5 = 2 * (a2 >> 8);
  if ( v2 )
  {
    v6 = *(_QWORD *)(a1 + 32);
    a1 = v5 + ((v3 & 0xF8u) >= 0x80);
    v7 = (_QWORD *)(v6 + 8 * a1);
  }
  else
  {
    v7 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v5);
  }
  v8 = 8 * v5;
  if ( *v7 )
    return 0LL;
  v9 = (unsigned __int64 *)(v8 + *(_QWORD *)(v4 + 16));
  if ( v2 && (v3 & 0xF8u) >= 0x80 )
    ++v9;
  result = ExtEnvAllocatePhysicalMemory(
             a1,
             4096LL,
             4096LL,
             *(unsigned int *)(v4 + 272),
             &v19,
             &v18,
             LockHandle.LockQueue.Next,
             LockHandle.LockQueue.Lock,
             *(_QWORD *)&LockHandle.OldIrql,
             v17);
  if ( (int)result >= 0 )
  {
    v11 = v18;
    memmove(v18, *(const void **)(v4 + 40), 0x1000uLL);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v12) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v12, 15LL);
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 208), &LockHandle);
    if ( *v7 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      ExtEnvFreePhysicalMemory(v14, v11, 4096LL, *(unsigned int *)(v4 + 272));
    }
    else
    {
      v15 = v19;
      *v7 = v11;
      *v9 = ((unsigned __int64)(v15 / 4096) << 12) | 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  return result;
}
