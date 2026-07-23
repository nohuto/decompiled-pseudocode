/*
 * XREFs of HsaUpdateRemappingTableInDeviceTableEntry @ 0x1405AD79C
 * Callers:
 *     HsaAllocateRemappingTableEntry @ 0x1405AB470 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x1405AC180 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HsaInvalidateRemappingTableEntries @ 0x140477CB8 (HsaInvalidateRemappingTableEntries.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HsaBuildInterruptRemappingEntry @ 0x1405ABB30 (HsaBuildInterruptRemappingEntry.c)
 */

__int64 __fastcall HsaUpdateRemappingTableInDeviceTableEntry(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // r11
  __int64 v8; // r10
  __int128 v9; // xmm1
  __int64 v10; // r10
  __int64 v11; // r11
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // rbp
  _QWORD *v16; // rsi
  __int64 v17; // rdi
  __int64 result; // rax
  signed __int32 v19[8]; // [rsp+0h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int128 v21; // [rsp+38h] [rbp-40h] BYREF
  __int128 v22; // [rsp+48h] [rbp-30h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 152), &LockHandle);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = 32LL * *a2;
  v9 = *(_OWORD *)(v8 + v7 + 16);
  v21 = *(_OWORD *)(v8 + v7);
  v22 = v9;
  HsaBuildInterruptRemappingEntry(a1, a3, (__int64)&v21);
  v12 = 1 << a2[1];
  v13 = (unsigned int)(1 << (3 - a2[1]));
  if ( v12 )
  {
    v14 = v22;
    v15 = 32LL * (unsigned int)v13;
    v16 = (_QWORD *)(v10 + v11 + 16);
    v17 = v12;
    do
    {
      *v16 = v14;
      _InterlockedOr(v19, 0);
      HsaInvalidateRemappingTableEntries(a1, v13, 1u);
      v16 = (_QWORD *)((char *)v16 + v15);
      --v17;
    }
    while ( v17 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
