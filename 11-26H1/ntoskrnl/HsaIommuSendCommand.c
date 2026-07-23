/*
 * XREFs of HsaIommuSendCommand @ 0x140478008
 * Callers:
 *     HsaInvalidateRemappingTableEntries @ 0x140477CB8 (HsaInvalidateRemappingTableEntries.c)
 *     HsaFlushTbInternal @ 0x140477D50 (HsaFlushTbInternal.c)
 *     HsaIommuWaitCommand @ 0x140477FD0 (HsaIommuWaitCommand.c)
 *     HsaDismissPageFault @ 0x1405ABCF0 (HsaDismissPageFault.c)
 *     HsaFlushDeviceTbOnly @ 0x1405ABFA0 (HsaFlushDeviceTbOnly.c)
 *     HsaUpdateDeviceTableEntry @ 0x1405AD260 (HsaUpdateDeviceTableEntry.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall HsaIommuSendCommand(unsigned __int64 *a1, unsigned __int64 *a2, __int64 a3)
{
  int v3; // r12d
  unsigned __int64 *v5; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v7; // rdx
  unsigned __int64 v8; // r13
  unsigned int v9; // eax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r8
  unsigned int v13; // ebp
  __int64 v14; // rcx
  __int64 v15; // r15
  unsigned __int64 result; // rax
  unsigned __int64 v17; // rax
  unsigned int v18; // ebx
  signed __int32 v19[8]; // [rsp+0h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+80h] [rbp+8h]
  unsigned __int64 v22; // [rsp+88h] [rbp+10h]

  v3 = a3;
  v5 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (_DWORD)a3 )
  {
    CurrentIrql = 0;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 15LL);
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = v5 + 19;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v7 = _InterlockedExchange64((volatile __int64 *)v5 + 19, (__int64)&LockHandle);
      if ( v7 )
        KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v7, a3);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)v5 + 19);
    }
  }
  if ( *a2 >> 60 == 1 )
  {
    v17 = v5[17];
    v5[15] = 1LL;
    *a2 = v17;
    a2[1] = v5[18];
  }
  v8 = *v5;
  v9 = 0;
  v10 = v5[8] >> 4;
  v11 = *(_QWORD *)(*v5 + 8200);
  v12 = v5[6];
  v22 = v12;
  if ( ((v11 >> 4) & 0x7FFF) + 1 != (_DWORD)v10 )
    v9 = ((*(_QWORD *)(*v5 + 8200) >> 4) & 0x7FFF) + 1;
  v13 = 0;
  v14 = v9;
  v21 = v9;
  if ( v9 == ((*(_QWORD *)(v8 + 0x2000) >> 4) & 0x7FFFLL) )
  {
    do
    {
      if ( (++v13 & dword_140FBB3DC) != 0 || !qword_140FBB3E0 )
      {
        _mm_pause();
      }
      else
      {
        guard_dispatch_icall_no_overrides(v13, v10);
        v14 = v21;
      }
    }
    while ( v14 == ((*(_QWORD *)(v8 + 0x2000) >> 4) & 0x7FFFLL) );
    v12 = v22;
  }
  v15 = 2 * ((v11 >> 4) & 0x7FFF);
  *(_QWORD *)(v12 + 8 * v15) = *a2;
  *(_QWORD *)(v12 + 8 * v15 + 8) = a2[1];
  *(_QWORD *)(v8 + 8200) = (16LL * (unsigned int)v14) ^ (v11 ^ (16LL * (unsigned int)v14)) & 0xFFFFFFFFFFF8000FuLL;
  _InterlockedOr(v19, 0);
  result = *a2 >> 60;
  if ( (_BYTE)result == 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      result = v5[15];
      if ( !result )
        break;
      if ( (++v18 & dword_140FBB3DC) != 0 || !qword_140FBB3E0 )
        _mm_pause();
      else
        guard_dispatch_icall_no_overrides(v18, v10);
    }
  }
  if ( !v3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
