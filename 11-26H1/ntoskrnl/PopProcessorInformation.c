/*
 * XREFs of PopProcessorInformation @ 0x140A89700
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     PpmPerfGetCurrentState @ 0x1404764D4 (PpmPerfGetCurrentState.c)
 *     KeQueryGroupAffinity @ 0x140494AA0 (KeQueryGroupAffinity.c)
 */

__int64 __fastcall PopProcessorInformation(__int64 a1, __int64 a2, USHORT a3, int *a4)
{
  int *v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rdx
  KAFFINITY GroupAffinity; // rsi
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  unsigned int v11; // ebx
  unsigned int v12; // eax
  int v13; // r12d
  unsigned int v14; // r13d
  unsigned int v15; // r15d
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v23; // [rsp+30h] [rbp-48h]
  __int64 Prcb; // [rsp+30h] [rbp-48h]

  v5 = a4;
  LOWORD(v6) = a3;
  GroupAffinity = KeQueryGroupAffinity(a3);
  v11 = 0;
  v12 = __popcnt(GroupAffinity);
  v23 = v12;
  v13 = 24 * v12;
  if ( 24 * v12 > 0x600 )
  {
    if ( v5 )
      *v5 = 0;
    return (unsigned int)-1073741789;
  }
  else
  {
    if ( v12 )
    {
      v14 = 0;
      PopAcquireRwLockShared((volatile signed __int64 *)&PpmIdlePolicyLock.Header.Lock, v7, v9, v10);
      v15 = v23;
      while ( 1 )
      {
        v16 = (unsigned __int16)v6 + 1;
        while ( !GroupAffinity )
        {
          v6 = (unsigned __int16)(v6 + 1);
          if ( (unsigned int)v6 >= v16 )
            goto LABEL_15;
          GroupAffinity = *(_QWORD *)(8 * v6 + 8);
        }
        _BitScanForward64((unsigned __int64 *)&v17, GroupAffinity);
        GroupAffinity &= ~(1LL << v17);
        if ( v14 >= v15 )
          break;
        Prcb = KeGetPrcb(*((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int16)v6].Flink
                         + (unsigned __int8)v17));
        *(_DWORD *)(a1 + 24LL * v14) = *(unsigned __int8 *)(Prcb + 209);
        PpmPerfGetCurrentState(
          Prcb,
          (_DWORD *)(a1 + 8 + 24LL * v14),
          (unsigned int *)(a1 + 12 + 24LL * v14),
          0LL,
          0LL,
          0LL);
        v18 = *(_QWORD *)(Prcb + 35264);
        if ( v18 )
          v19 = *(_DWORD *)(v18 + 456);
        else
          v19 = *(_DWORD *)(Prcb + 68);
        *(_DWORD *)(a1 + 24LL * v14 + 4) = v19;
        v20 = *(_QWORD *)(Prcb + 34880);
        if ( v20 )
        {
          *(_DWORD *)(a1 + 24LL * v14 + 16) = *(_DWORD *)(v20 + 40);
          v21 = *(_DWORD *)(v20 + 24) + 1;
        }
        else
        {
          *(_DWORD *)(a1 + 24LL * v14 + 16) = 0;
          v21 = 0;
        }
        *(_DWORD *)(a1 + 24LL * v14++ + 20) = v21;
      }
LABEL_15:
      PopReleaseRwLock(&PpmIdlePolicyLock);
      v5 = a4;
    }
    *v5 = v13;
  }
  return v11;
}
