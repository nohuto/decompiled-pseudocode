/*
 * XREFs of PerfLogSpinLockRelease @ 0x1404F8178
 * Callers:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x14029AC70 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FA03C (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall PerfLogSpinLockRelease(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  char v8; // si
  unsigned __int8 v9; // di
  __int64 v10; // r8
  struct _KPRCB *CurrentPrcb; // r9
  unsigned int v12; // ecx
  unsigned __int8 NestingLevel; // dl
  unsigned __int8 CurrentIrql; // al
  char v15; // cl
  char v16; // cl
  unsigned __int8 v17; // si
  _OWORD *v18; // rcx
  __int64 v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // [rsp+30h] [rbp-50h] BYREF
  __int128 v22; // [rsp+40h] [rbp-40h]
  __int128 v23; // [rsp+50h] [rbp-30h]
  __int64 v24; // [rsp+60h] [rbp-20h]
  _QWORD v25[2]; // [rsp+68h] [rbp-18h] BYREF

  v21 = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  result = (__int64)KeGetCurrentPrcb();
  v7 = *(_QWORD *)(result + 35816) + 16LL;
  v8 = *(_BYTE *)(*(_QWORD *)(result + 35816) + 272LL);
  if ( !v8 )
    return result;
  v9 = *(_BYTE *)(*(_QWORD *)(result + 35816) + 272LL);
  while ( 1 )
  {
    v10 = 32LL * --v9;
    if ( *(_QWORD *)(v10 + v7 + 8) == a1 )
      break;
    if ( !v9 )
    {
      ++*(_DWORD *)(*(_QWORD *)(result + 35816) + 280LL);
      return result;
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !*(_BYTE *)(*(_QWORD *)(result + 35816) + 273LL) )
  {
    if ( EtwpSpinLockHoldThreshold
      && (result = (unsigned int)(a3 - *(_DWORD *)(v10 + v7)), (unsigned int)result > EtwpSpinLockHoldThreshold)
      || (v12 = *(_DWORD *)(v10 + v7 + 20), v12 >= EtwpSpinLockSpinThreshold)
      && (result = CurrentPrcb->SynchCounters.SpinLockContentionCount / EtwpSpinLockContentionSampleRate,
          !(CurrentPrcb->SynchCounters.SpinLockContentionCount % EtwpSpinLockContentionSampleRate))
      || !v12
      && (result = (CurrentPrcb->SynchCounters.SpinLockAcquireCount - CurrentPrcb->SynchCounters.SpinLockContentionCount)
                 / EtwpSpinLockAcquireSampleRate,
          !((CurrentPrcb->SynchCounters.SpinLockAcquireCount - CurrentPrcb->SynchCounters.SpinLockContentionCount)
          % EtwpSpinLockAcquireSampleRate)) )
    {
      NestingLevel = CurrentPrcb->NestingLevel;
      *(_BYTE *)(v7 + 257) = 1;
      *(_QWORD *)&v21 = a1;
      *((_QWORD *)&v21 + 1) = a2;
      *((_QWORD *)&v22 + 1) = a3;
      DWORD2(v23) = KeGetCurrentThread()[1].CurrentRunTime;
      BYTE1(v24) = v8;
      CurrentIrql = KeGetCurrentIrql();
      LOBYTE(v24) = CurrentIrql;
      *(_QWORD *)&v22 = *(_QWORD *)(v10 + v7);
      *(_QWORD *)&v23 = *(_QWORD *)(v10 + v7 + 16);
      HIDWORD(v23) = CurrentPrcb->InterruptCount - *(_DWORD *)(v10 + v7 + 24);
      v15 = *(_BYTE *)(v10 + v7 + 28);
      BYTE2(v24) = v15;
      if ( NestingLevel == 1 )
      {
        if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
        {
          v16 = v15 | 0x40;
LABEL_18:
          BYTE2(v24) = v16;
          goto LABEL_19;
        }
      }
      else if ( !NestingLevel )
      {
LABEL_19:
        v25[1] = 56LL;
        v25[0] = &v21;
        result = EtwTraceKernelEvent((int)v25, 1, 0x20010000u, 1321, 1538);
        *(_BYTE *)(v7 + 257) = 0;
        goto LABEL_20;
      }
      v16 = v15 | 0x80;
      goto LABEL_18;
    }
  }
LABEL_20:
  v17 = v8 - 1;
  if ( v9 < v17 )
  {
    v18 = (_OWORD *)(v7 + 32LL * v9);
    do
    {
      v19 = v9++;
      result = 32 * (v19 + 1);
      v20 = *(_OWORD *)(result + v7 + 16);
      *v18 = *(_OWORD *)(result + v7);
      v18[1] = v20;
      v18 += 2;
    }
    while ( v9 < v17 );
  }
  --*(_BYTE *)(v7 + 256);
  return result;
}
