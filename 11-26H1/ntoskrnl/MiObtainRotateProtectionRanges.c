/*
 * XREFs of MiObtainRotateProtectionRanges @ 0x1404D0AD0
 * Callers:
 *     MiRotateToFrameBufferNoCopy @ 0x140AEF51C (MiRotateToFrameBufferNoCopy.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x1402E7200 (MiQueryAddressState.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiObtainRotateProtectionRanges(ULONG_PTR a1, __int64 a2, unsigned __int64 a3, __int64 **a4)
{
  int v5; // edi
  unsigned __int64 v8; // rsi
  _KPROCESS *Process; // r12
  __int64 v10; // rdx
  unsigned __int8 v11; // r15
  int v12; // ebp
  int v13; // eax
  __int64 PoolMm; // rax
  __int64 *v15; // rcx
  __int64 *v17; // rcx
  __int64 v18; // rax
  __int128 v19; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-38h]

  v19 = 0LL;
  v20 = 0LL;
  v5 = 0;
  v8 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  v11 = MiLockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, a2, a3);
  while ( v8 <= a3 )
  {
    MiQueryAddressState(v8, a3, v11, a1, 0LL, (__int64)&v19);
    v12 = DWORD2(v19);
    v13 = BYTE8(v19) & 7;
    if ( v13 != 4 && v13 != 1 )
    {
      v5 = -1073741755;
      break;
    }
    PoolMm = ExAllocatePoolMm(
               64LL,
               0x28uLL,
               1649568077,
               KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    if ( !PoolMm )
    {
      v5 = -1073741670;
      break;
    }
    *(_QWORD *)(PoolMm + 16) = v8;
    v8 = v20;
    *(_QWORD *)(PoolMm + 24) = v20;
    *(_DWORD *)(PoolMm + 32) = v12;
    v15 = a4[1];
    if ( (__int64 **)*v15 != a4 )
LABEL_6:
      __fastfail(3u);
    *(_QWORD *)PoolMm = a4;
    *(_QWORD *)(PoolMm + 8) = v15;
    *v15 = PoolMm;
    a4[1] = (__int64 *)PoolMm;
  }
  LOBYTE(v10) = v11;
  MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v10);
  if ( v5 < 0 )
  {
    while ( 1 )
    {
      v17 = *a4;
      if ( *a4 == (__int64 *)a4 )
        break;
      v18 = *v17;
      if ( (__int64 **)v17[1] != a4 || *(__int64 **)(v18 + 8) != v17 )
        goto LABEL_6;
      *a4 = (__int64 *)v18;
      *(_QWORD *)(v18 + 8) = a4;
      ExFreePoolWithTag(v17, 0);
    }
  }
  return (unsigned int)v5;
}
