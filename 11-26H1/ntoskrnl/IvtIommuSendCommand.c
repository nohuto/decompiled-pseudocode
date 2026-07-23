/*
 * XREFs of IvtIommuSendCommand @ 0x140434A6C
 * Callers:
 *     IvtFlushTbInternal @ 0x14043417C (IvtFlushTbInternal.c)
 *     IvtInvalidateRemappingTableEntries @ 0x1404348A0 (IvtInvalidateRemappingTableEntries.c)
 *     IvtIommuWaitCommand @ 0x140434918 (IvtIommuWaitCommand.c)
 *     IvtDismissPageFault @ 0x1405A8860 (IvtDismissPageFault.c)
 *     IvtDrainSvmPageRequests @ 0x1405A8940 (IvtDrainSvmPageRequests.c)
 *     IvtFlushDeviceTbOnly @ 0x1405A8C80 (IvtFlushDeviceTbOnly.c)
 *     IvtInvalidateAllContextEntries @ 0x1405A9A28 (IvtInvalidateAllContextEntries.c)
 *     IvtInvalidateContextEntry @ 0x1405A9A88 (IvtInvalidateContextEntry.c)
 *     IvtInvalidateScalableModePasidCache @ 0x1405A9B78 (IvtInvalidateScalableModePasidCache.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall IvtIommuSendCommand(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // r9
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // r15
  __int64 v7; // rcx
  unsigned __int64 v8; // r15
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v10; // rbx
  unsigned int v11; // esi
  unsigned int v12; // r12d
  unsigned int v13; // r15d
  unsigned __int64 v14; // rax
  char v15; // r8
  int v16; // eax
  __int64 v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 result; // rax
  __int64 i; // rcx
  signed __int32 v25[8]; // [rsp+0h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v27; // [rsp+70h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 8);
  v27 = v3;
  v5 = (unsigned __int64)a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = *(_QWORD *)(a1 + 128);
  v7 = (*(_BYTE *)(a1 + 320) != 0) + 4LL;
  v8 = v6 >> v7;
  if ( a3 == 1 )
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
      LOBYTE(a2) = 15;
      LOBYTE(v7) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v7, a2);
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
    v3 = v27;
  }
  v10 = *(_QWORD *)(v3 + 136);
  if ( *(_BYTE *)(a1 + 320) )
    v11 = (v10 >> 5) & 0x3FFF;
  else
    v11 = (v10 >> 4) & 0x7FFF;
  v12 = 0;
  if ( v11 + 1 != (_DWORD)v8 )
    v12 = v11 + 1;
  v13 = 0;
  while ( 1 )
  {
    v14 = *(_QWORD *)(v3 + 128);
    v15 = *(_BYTE *)(a1 + 320);
    v16 = v15 ? (v14 >> 5) & 0x3FFF : (v14 >> 4) & 0x7FFF;
    if ( v12 != v16 )
      break;
    if ( (++v13 & dword_140FBB3DC) != 0 || !qword_140FBB3E0 )
    {
      _mm_pause();
    }
    else
    {
      guard_dispatch_icall_no_overrides(v13, a2);
      v3 = v27;
    }
  }
  v17 = *(_QWORD *)(a1 + 112);
  if ( v15 )
  {
    v19 = 32LL * v11 + v17;
    v18 = (_QWORD *)v19;
  }
  else
  {
    v18 = (_QWORD *)(v17 + 16LL * v11);
    v19 = 0LL;
  }
  *v18 = *(_QWORD *)v5;
  v20 = v5 & -(__int64)(v15 != 0);
  v18[1] = *(_QWORD *)(v5 + 8);
  if ( *(_BYTE *)(a1 + 320) )
  {
    if ( (*(_BYTE *)v5 & 0xF) == 9 )
    {
      for ( i = 16LL; i < 32; i += 8LL )
        *(_QWORD *)(i + v19) = *(_QWORD *)(i + v20);
    }
    else
    {
      *(_OWORD *)(v19 + 16) = 0LL;
    }
  }
  if ( *(_BYTE *)(a1 + 320) )
  {
    v21 = 32LL * v12;
    v22 = (v10 ^ v21) & 0xFFFFFFFFFFF8001FuLL;
  }
  else
  {
    v21 = 16LL * v12;
    v22 = (v10 ^ v21) & 0xFFFFFFFFFFF8000FuLL;
  }
  result = v21 ^ v22;
  *(_QWORD *)(v3 + 136) = result;
  _InterlockedOr(v25, 0);
  if ( !a3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
