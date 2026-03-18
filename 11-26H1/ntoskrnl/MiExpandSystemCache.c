/*
 * XREFs of MiExpandSystemCache @ 0x1402A36A0
 * Callers:
 *     MiObtainSystemCacheView @ 0x1402E4B60 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiSetSystemCacheReverseMap @ 0x1402A39F0 (MiSetSystemCacheReverseMap.c)
 *     MiReturnSystemVa @ 0x1402A4238 (MiReturnSystemVa.c)
 *     MiObtainSystemVa @ 0x1402A4D3C (MiObtainSystemVa.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402A515C (MiMakeZeroedPageTablesEx.c)
 *     MiLockPageTableInternal @ 0x1402B34E0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

unsigned __int64 *__fastcall MiExpandSystemCache(volatile signed __int32 *a1)
{
  __int64 v2; // r9
  unsigned __int64 *PoolMm; // rsi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r15
  __int16 v7; // bx
  unsigned __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rcx
  unsigned int v11; // r8d
  unsigned __int64 *v12; // rdx
  unsigned __int64 v13; // rcx
  __int16 **v14; // r9
  __int64 v16; // rdx
  char v17; // [rsp+68h] [rbp+10h]

  if ( stru_140E2D930.KernelStack <= (void *)0x4000000 )
    return 0LL;
  v2 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  LODWORD(v2) = v2 | 0x80000000;
  PoolMm = (unsigned __int64 *)ExAllocatePoolMm(64LL, 320LL, 1666410829LL, v2);
  if ( !PoolMm )
    return 0LL;
  v4 = MiObtainSystemVa(1LL, 7LL);
  v5 = v4;
  if ( !v4 )
  {
LABEL_12:
    ExFreePoolWithTag(PoolMm, 0);
    return 0LL;
  }
  v6 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !(unsigned int)MiMakeZeroedPageTablesEx(
                        (unsigned int)(v4 >> 9) & 0xFFFFFFF8,
                        ((unsigned int)(v4 >> 9) & 0xFFFFFFF8) + 4088,
                        0,
                        7,
                        0) )
  {
    MiReturnSystemVa(v5, v5 + 0x200000, 7LL);
    goto LABEL_12;
  }
  _InterlockedIncrement(a1 + 692);
  v7 = *(_WORD *)a1;
  v8 = v5;
  v9 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v17 = MiLockWorkingSetShared(a1 + 5648);
  MiLockPageTableInternal(a1 + 5648, v9, 0LL);
  MiSetSystemCacheReverseMap(v10, v5, 0LL);
  ExAcquireSpinLockExclusiveAtDpcLevel(a1 + 688);
  v11 = 0;
  v12 = PoolMm + 4;
  do
  {
    *(v12 - 2) = v8;
    v13 = (unsigned __int16)(v7 << 6) ^ *v12 & 0x3FFFFFFFFFFF003FLL | 0x8000000000000000uLL;
    if ( v11 )
      v13 = (unsigned __int16)(v7 << 6) ^ *v12 & 0x3FFFFFFFFFFF003FLL;
    *v12 = v13;
    if ( v11 )
    {
      v13 = (unsigned __int64)(a1 + 672);
      v14 = (__int16 **)*((_QWORD *)a1 + 337);
      if ( *v14 != (__int16 *)(a1 + 672) )
        __fastfail(3u);
      *(v12 - 3) = (unsigned __int64)v14;
      *(v12 - 4) = v13;
      *v14 = (__int16 *)(v12 - 4);
      *((_QWORD *)a1 + 337) = v12 - 4;
    }
    v12 += 5;
    v8 += 0x40000LL;
    ++v11;
  }
  while ( v11 < 8 );
  *((_QWORD *)a1 + 338) += 7LL;
  MiSetSystemCacheReverseMap(v13, v5, PoolMm);
  ExReleaseSpinLockExclusiveFromDpcLevel(a1 + 688);
  MiUnlockPageTableInternal(a1 + 5648, v9);
  LOBYTE(v16) = v17;
  MiUnlockWorkingSetShared(a1 + 5648, v16);
  return PoolMm;
}
