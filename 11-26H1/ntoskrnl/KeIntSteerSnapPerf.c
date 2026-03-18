/*
 * XREFs of KeIntSteerSnapPerf @ 0x140255580
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1402541D0 (PpmParkSteerInterrupts.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     KeQueryActiveProcessorCountEx @ 0x140211EA0 (KeQueryActiveProcessorCountEx.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140731080 (_alloca_probe.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall KeIntSteerSnapPerf(__int64 a1, int **a2, unsigned int *a3, __int64 *a4)
{
  int v4; // r15d
  int **v5; // r13
  ULONG v6; // r14d
  KIRQL *v7; // rsi
  ULONG ActiveProcessorCount; // eax
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  void *v11; // rsp
  __int64 InterruptTimePrecise; // rax
  __int64 v13; // rdi
  __int64 v14; // r12
  int *v16; // rbx
  __int64 v17; // r15
  KIRQL v18; // al
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rax
  __int64 v21; // r11
  __int64 *v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rcx
  unsigned int v25; // r10d
  __int64 v26; // r12
  __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rax
  bool v32; // zf
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // eax
  unsigned int v36; // r9d
  __int64 v37; // r9
  KIRQL *v38; // rsi
  __int64 v39; // r10
  char *v40; // r11
  __int64 v41; // rbx
  __int64 v42; // rdx
  KIRQL NewIrql[8]; // [rsp+20h] [rbp+0h] BYREF
  __int64 v44; // [rsp+28h] [rbp+8h]
  ULONG v45; // [rsp+30h] [rbp+10h]
  __int64 v46; // [rsp+38h] [rbp+18h]
  __int64 v47; // [rsp+40h] [rbp+20h]
  __int64 v48; // [rsp+48h] [rbp+28h] BYREF
  int **v49; // [rsp+50h] [rbp+30h]
  unsigned int *v50; // [rsp+58h] [rbp+38h]
  __int64 *v51; // [rsp+60h] [rbp+40h]

  v4 = PpmIntSteerLoadMax;
  v5 = a2;
  v51 = a4;
  v6 = 0;
  v50 = a3;
  v7 = 0LL;
  v49 = a2;
  v45 = 0;
  if ( KiIntSteerEnabled )
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0);
    v9 = 8LL * ActiveProcessorCount;
    v6 = ActiveProcessorCount;
    v45 = ActiveProcessorCount;
    v10 = v9 + 15;
    if ( v9 + 15 < v9 )
      v10 = 0xFFFFFFFFFFFFFF0LL;
    v11 = alloca(v10 & 0xFFFFFFFFFFFFFFF0uLL);
    v7 = NewIrql;
    if ( v6 )
      memset_0(NewIrql, 0, v9 & 0xFFFFFFFFFFFFFFF8uLL);
  }
  InterruptTimePrecise = RtlGetInterruptTimePrecise((unsigned __int64 *)&v48);
  v47 = InterruptTimePrecise;
  v13 = InterruptTimePrecise - KiIntSteerPreviousPerfSnap;
  v14 = InterruptTimePrecise;
  v48 = InterruptTimePrecise - KiIntSteerPreviousPerfSnap;
  if ( (unsigned __int64)(InterruptTimePrecise - KiIntSteerPreviousPerfSnap) < 0x16E360 )
  {
    *v5 = 0LL;
    goto LABEL_8;
  }
  v16 = (int *)KiIntSteerDistributionContext;
  KiIntSteerPreviousPerfSnap = InterruptTimePrecise;
  KiIntSteerPreviousPerfSnapDelta = v13;
  memset_0(KiIntSteerDistributionContext, 0, 0x204uLL);
  *v16 = v4;
  *v5 = v16;
  v17 = 0LL;
  v18 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
  v19 = KsepShimDbLock.Spare35[0];
  NewIrql[0] = v18;
  while ( (unsigned __int64 *)v19 != KsepShimDbLock.Spare35 )
  {
    v20 = v19 + 16;
    v21 = 0LL;
    v22 = *(__int64 **)(v19 + 16);
    while ( v22 != (__int64 *)v20 )
    {
      if ( *(__int64 **)(*v22 + 8) != v22 || *(__int64 **)v22[1] != v22 )
        __fastfail(3u);
      v23 = 0LL;
      v24 = 0LL;
      v25 = 0;
      if ( *((_DWORD *)v22 + 6) )
      {
        v26 = 0LL;
        v27 = 0LL;
        while ( 1 )
        {
          v28 = *(_QWORD *)(v22[4] + 8LL * v25);
          v29 = *(_QWORD *)(v28 + 176);
          v30 = *(_QWORD *)(v28 + 200);
          v27 += v29;
          v26 += v30;
          v44 = v29;
          v46 = v30;
          if ( (unsigned __int16)KiActiveGroups <= 1u )
            goto LABEL_18;
          v35 = *(_DWORD *)(v28 + 96);
          if ( !v35 )
            goto LABEL_34;
          if ( v35 < KeMaximumProcessors )
          {
            v36 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * v35);
            if ( v36 )
            {
              if ( !(unsigned __int16)(v36 >> 6) )
                break;
            }
          }
LABEL_21:
          if ( ++v25 >= *((_DWORD *)v22 + 6) )
          {
            v6 = v45;
            v5 = v49;
            v44 = v27;
            v24 = v27;
            v13 = v48;
            v46 = v26;
            v23 = v26;
            v14 = v47;
            goto LABEL_23;
          }
        }
        v30 = v46;
LABEL_34:
        v29 = v44;
LABEL_18:
        if ( KiIntSteerEnabled && !*(_BYTE *)(v19 + 132) )
          *(_QWORD *)&v7[8 * *(unsigned int *)(v28 + 96)] += v30 + v29;
        goto LABEL_21;
      }
LABEL_23:
      v31 = v24 - v22[5];
      v32 = v24 == v22[5];
      v22[5] = v24;
      v33 = v21 + v31;
      if ( v31 < 0 || v32 )
        v33 = v21;
      v34 = v23 - v22[6];
      v22[6] = v23;
      v22 = (__int64 *)*v22;
      v21 = v33 + v34;
      if ( v34 <= 0 )
        v21 = v33;
      v20 = v19 + 16;
    }
    *(_QWORD *)(v19 + 192) = v21;
    v17 += v21;
    v19 = *(_QWORD *)v19;
  }
  KeReleaseSpinLock(&KiIntTrackSpinlock, NewIrql[0]);
  if ( KiIntSteerEnabled && v6 )
  {
    v37 = KiIntSteerPerProcIsrDpcTimeAffinitized;
    v38 = &v7[-KiIntSteerPerProcIsrDpcTimeAffinitized];
    v39 = 0LL;
    v40 = (char *)KiProcessorBlock - KiIntSteerPerProcIsrDpcTimeAffinitized;
    v41 = v6;
    do
    {
      v42 = *(_QWORD *)&v38[v37] - *(_QWORD *)v37;
      *(_QWORD *)v37 = *(_QWORD *)&v38[v37];
      if ( v42 > 0 )
        (*v5)[v39 + 1] += 10000
                        * v42
                        / (KiIntSteerPreviousPerfSnapDelta
                         * (unsigned __int64)*(unsigned int *)(*(_QWORD *)&v40[v37] + 68LL));
      v37 += 8LL;
      ++v39;
      --v41;
    }
    while ( v41 );
    v14 = v47;
  }
  KsepShimDbLock.Spare36 = 10000 * v17 / (unsigned __int64)(KiIntSteerSlowestCyclesPerSec * v13);
LABEL_8:
  *v50 = KsepShimDbLock.Spare36;
  *v51 = v14;
  return 0LL;
}
