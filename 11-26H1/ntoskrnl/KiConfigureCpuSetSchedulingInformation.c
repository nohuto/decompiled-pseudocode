/*
 * XREFs of KiConfigureCpuSetSchedulingInformation @ 0x140452744
 * Callers:
 *     KeConfigureHeteroProcessors @ 0x140452524 (KeConfigureHeteroProcessors.c)
 *     KiConfigureSchedulingInformation @ 0x140BF9AF0 (KiConfigureSchedulingInformation.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiConfigureCpuSetSchedulingInformation(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // bl
  signed __int64 v3; // rax
  signed __int64 v4; // rtt
  unsigned __int64 v5; // rdx
  __int64 v6; // rsi
  struct _LIST_ENTRY *Flink; // r10
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int16 *v10; // rcx
  unsigned __int16 v11; // r11
  unsigned __int16 i; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 result; // rax

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  KxAcquireSpinLock(&KiCpuSetLock);
  _m_prefetchw(&KiCpuSetSequence);
  v3 = KiCpuSetSequence;
  while ( (v3 & 1) != 0 )
  {
    v3 = KiCpuSetSequence;
LABEL_22:
    _mm_pause();
  }
  v4 = v3;
  v3 = _InterlockedCompareExchange64(&KiCpuSetSequence, v3 + 1, v3);
  if ( v4 != v3 )
    goto LABEL_22;
  v5 = 0LL;
  v6 = 5LL;
  Flink = stru_140FC11F0.SavedApcState.ApcListHead[0].Flink;
  v8 = *(unsigned __int8 *)(v1 + 209) + ((unsigned __int64)*(unsigned __int8 *)(v1 + 208) << 6);
  LOBYTE(stru_140FC11F0.SavedApcState.ApcListHead[0].Flink[v8].Flink) = *(_BYTE *)(v1 + 208);
  BYTE1(Flink[v8].Flink) = *(_BYTE *)(v1 + 209);
  _BitScanForward64(&v9, *(_QWORD *)(v1 + 36512));
  BYTE2(Flink[v8].Flink) = v9;
  v10 = (unsigned __int16 *)(v1 + 44800);
  do
  {
    v11 = *v10;
    for ( i = 0; i < v11; ++i )
    {
      if ( *(_QWORD *)&v10[4 * i + 4] )
      {
        v13 = *(unsigned __int8 *)(v1 + 208);
        if ( (unsigned __int16)v13 >= v11 )
          v5 = 0LL;
        else
          v5 = *(_QWORD *)&v10[4 * v13 + 4];
        break;
      }
    }
    v10 += 132;
    --v6;
  }
  while ( v6 );
  if ( v5 )
  {
    _BitScanForward64(&v14, v5);
    BYTE3(Flink[v8].Flink) = v14;
  }
  _BitScanForward64(&v15, *(_QWORD *)(*(_QWORD *)(v1 + 192) + 128LL));
  BYTE4(Flink[v8].Flink) = v15;
  BYTE5(Flink[v8].Flink) = *(_BYTE *)(v1 + 35352) != 0;
  BYTE6(Flink[v8].Flink) = *(_BYTE *)(v1 + 35353);
  ++KiCpuSetSequence;
  KxReleaseSpinLock(&KiCpuSetLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
