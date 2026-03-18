/*
 * XREFs of KiCreateCpuSetForProcessor @ 0x140BF5578
 * Callers:
 *     KiCompleteKernelInit @ 0x140BF36A8 (KiCompleteKernelInit.c)
 *     KeStartAllProcessors @ 0x140CC8ACC (KeStartAllProcessors.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     RtlWriteAcquireTickLock @ 0x14046AC24 (RtlWriteAcquireTickLock.c)
 *     RtlWriteReleaseTickLock @ 0x140485188 (RtlWriteReleaseTickLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiCreateCpuSetForProcessor(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // rbx
  int v4; // r8d
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rbx
  _KPROCESS_SECURE_STATE *p_SecureState; // rdx
  __int64 result; // rax

  if ( KiCpuSetAffinities )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    v3 = *(unsigned __int8 *)(a1 + 208);
    KxAcquireSpinLock(&KiCpuSetLock);
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    v4 = *(unsigned __int8 *)(a1 + 209);
    ++KiCpuSetCount[v3];
    v5 = (unsigned int)v3;
    v6 = *(_QWORD *)(a1 + 200);
    ++KiTotalCpuSetCount;
    v7 = (unsigned int)(v4 + ((_DWORD)v3 << 6));
    *((_QWORD *)KiCpuSetAffinities + v7) = v6;
    *((_QWORD *)KiCpuSetAffinitiesShadow + v7) = *(_QWORD *)(a1 + 200);
    KiSystemAllowedCpuSets[2 * (unsigned int)v5] |= 1LL << v4;
    KiNonParkedCpuSets[v5] |= 1LL << v4;
    p_SecureState = &PsInitialSystemProcess[3].SecureState;
    if ( (HIDWORD(PsInitialSystemProcess[3].ActiveGroupsMask.Masks[1]) & 0x80u) != 0 )
      p_SecureState = (_KPROCESS_SECURE_STATE *)p_SecureState->EntireField;
    p_SecureState[v5].EntireField |= 1LL << v4;
    RtlWriteReleaseTickLock(&KiCpuSetSequence);
    KxReleaseSpinLock(&KiCpuSetLock);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
