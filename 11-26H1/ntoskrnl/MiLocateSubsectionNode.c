/*
 * XREFs of MiLocateSubsectionNode @ 0x1402E48B0
 * Callers:
 *     MiGetProtoPteAddress @ 0x1402D2540 (MiGetProtoPteAddress.c)
 *     MmMapViewInSystemCache @ 0x1402E29A0 (MmMapViewInSystemCache.c)
 *     MiAdvanceVadView @ 0x1403158A0 (MiAdvanceVadView.c)
 *     MiReferenceDataSubsections @ 0x14033F1DC (MiReferenceDataSubsections.c)
 *     MiRemoveMappedPtes @ 0x14033FBF8 (MiRemoveMappedPtes.c)
 *     MiOffsetToProtos @ 0x140340254 (MiOffsetToProtos.c)
 *     MiPfConvertFileOffsetToProto @ 0x14036CC30 (MiPfConvertFileOffsetToProto.c)
 *     MiComputeDataFlushRange @ 0x1404866EC (MiComputeDataFlushRange.c)
 *     MiDereferenceDataSubsections @ 0x14070A1D8 (MiDereferenceDataSubsections.c)
 *     MiPrepareDataViewSubsections @ 0x1409C4B70 (MiPrepareDataViewSubsections.c)
 *     MiDataVadErrorCleanup @ 0x1409C670C (MiDataVadErrorCleanup.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BC90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402EE000 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036A848 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

_DWORD *__fastcall MiLocateSubsectionNode(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int8 CurrentIrql; // di
  int v10; // r15d
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  signed __int32 v13; // edx
  _DWORD *v14; // rsi
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  _QWORD *v18; // r8
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r9
  _BYTE v22[32]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned int v23; // [rsp+40h] [rbp-98h]
  void *retaddr; // [rsp+D8h] [rbp+0h]

  memset_0(v22, 0, 0xA0uLL);
  if ( a2 >= 0x40000000000000LL )
    return 0LL;
  CurrentIrql = 17;
  v10 = a3 & 1;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 8) != 0 )
    {
      ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v6) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v6);
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      {
        _m_prefetchw((const void *)(a1 + 72));
        v12 = *(_DWORD *)(a1 + 72) & 0x7FFFFFFF;
        v11 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 72), v12 + 1, v12);
        if ( v12 != v11 )
        {
          while ( v11 >= 0 )
          {
            v13 = v11;
            v11 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 72), v11 + 1, v11);
            if ( v11 == v13 )
              goto LABEL_18;
          }
          ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)(a1 + 72), CurrentIrql, v7);
        }
      }
      else
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 72, CurrentIrql);
      }
    }
  }
LABEL_18:
  v14 = *(_DWORD **)(a1 + 304);
  v15 = a2 >> 12;
  v16 = (unsigned int)v14[9] | ((unsigned __int64)(v14[8] & 0xFFC0) << 26);
  v17 = v16 + (unsigned int)v14[10];
  if ( v15 < v16 )
    goto LABEL_22;
  if ( v14[8] < 0x100000u )
    --v17;
  if ( v15 > v17 )
  {
LABEL_22:
    v18 = *(_QWORD **)(a1 + 288);
    v23 = (WORD2(v15) << 6) ^ (v23 ^ (WORD2(v15) << 6)) & 0xFFFF003F;
    if ( !v18 )
    {
LABEL_30:
      v14 = 0LL;
      goto LABEL_31;
    }
    while ( 1 )
    {
      v19 = *((unsigned int *)v18 - 5) | ((unsigned __int64)(*(_DWORD *)(v18 - 3) & 0xFFC0) << 26);
      v20 = v19 + *((unsigned int *)v18 - 4);
      v21 = (unsigned int)v15 | ((unsigned __int64)((unsigned __int16)v23 & 0xFFC0) << 26);
      if ( *((_DWORD *)v18 - 6) < 0x100000u )
        --v20;
      if ( v21 <= v20 )
      {
        if ( v21 >= v19 )
        {
          v14 = v18 - 7;
          *(_QWORD *)(a1 + 304) = v18 - 7;
          break;
        }
        v18 = (_QWORD *)*v18;
      }
      else
      {
        v18 = (_QWORD *)v18[1];
      }
      if ( !v18 )
        goto LABEL_30;
    }
  }
LABEL_31:
  if ( !v10 )
  {
    if ( CurrentIrql == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      {
        _InterlockedAnd((volatile signed __int32 *)(a1 + 72), 0xBFFFFFFF);
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 72));
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(a1 + 72, retaddr);
      }
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      {
        _InterlockedAnd((volatile signed __int32 *)(a1 + 72), 0xBFFFFFFF);
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 72));
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(a1 + 72, retaddr);
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
  }
  return v14;
}
