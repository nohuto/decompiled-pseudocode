/*
 * XREFs of KeUpdateSoftParkRankList @ 0x14025B508
 * Callers:
 *     PpmParkApplyPolicy @ 0x1402592F0 (PpmParkApplyPolicy.c)
 *     PpmParkReportParkedCores @ 0x14025A2F0 (PpmParkReportParkedCores.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiCompressSoftParkRankList @ 0x14025B6E8 (KiCompressSoftParkRankList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

unsigned __int64 KeUpdateSoftParkRankList()
{
  struct _LIST_ENTRY *Blink; // r15
  unsigned __int64 result; // rax
  unsigned int i; // ebp
  __int64 v3; // rsi
  int v4; // ebx
  unsigned __int64 v5; // r10
  unsigned __int16 v6; // r9
  unsigned int v7; // ecx
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // di
  _BYTE Buf1[64]; // [rsp+30h] [rbp-178h] BYREF
  _DWORD v14[64]; // [rsp+70h] [rbp-138h] BYREF

  Blink = PopModernStandbyStateNotify.ApcState.ApcListHead[0].Blink;
  result = (unsigned __int64)memset_0(Buf1, 0, sizeof(Buf1));
  for ( i = 0; i < (unsigned __int16)KiSubNodeCount; ++i )
  {
    v3 = *(_QWORD *)(KiSubNodes + 8LL * i);
    if ( v3 )
    {
      v4 = *(unsigned __int16 *)(v3 + 136);
      memset_0(v14, 255, sizeof(v14));
      v5 = *(_QWORD *)(v3 + 128);
      v6 = v4;
LABEL_4:
      v7 = v4 + 1;
      while ( 1 )
      {
        if ( v5 )
        {
          _BitScanForward64(&v8, v5);
          v9 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
               + 64 * v6
               + (unsigned __int8)v8);
          v14[*(unsigned __int8 *)(KiProcessorBlock[v9] + 209)] = *((_DWORD *)&Blink->Flink + v9);
          v5 &= ~(1LL << v8);
          goto LABEL_4;
        }
        v4 = ++v6;
        if ( v6 >= v7 )
          break;
        v5 = *(_QWORD *)(8LL * v6 + 8);
      }
      KiCompressSoftParkRankList(v14, Buf1);
      if ( memcmp(Buf1, (const void *)(v3 + 448), 0x40uLL) )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v10) = 2;
          LOBYTE(v11) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v11, v10);
        }
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 120));
        RtlCopyVolatileMemory((void *)(v3 + 448), Buf1, 0x40uLL);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 120));
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
    }
    result = (unsigned __int16)KiSubNodeCount;
  }
  return result;
}
