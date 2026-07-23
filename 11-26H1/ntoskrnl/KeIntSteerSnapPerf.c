/*
 * XREFs of KeIntSteerSnapPerf @ 0x140256EE0
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140255B30 (PpmParkSteerInterrupts.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x140202CC0 (KeGetProcessorNumberFromIndex.c)
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiIntSteerAddLoadToProcessorAndCheckThreshold @ 0x140480CE4 (KiIntSteerAddLoadToProcessorAndCheckThreshold.c)
 *     Feature_Servicing_KeIntSteerProcessorIndex__private_IsEnabledDeviceUsageNoInline @ 0x1405F9EE8 (Feature_Servicing_KeIntSteerProcessorIndex__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KeIntSteerSnapPerf(__int64 a1, int **a2, _DWORD *a3, LARGE_INTEGER *a4)
{
  int v4; // edi
  ULONG v6; // r12d
  _BYTE *v7; // r14
  ULONG ActiveProcessorCount; // eax
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  void *v11; // rsp
  LARGE_INTEGER InterruptTimePrecise; // rax
  LARGE_INTEGER v13; // rsi
  LARGE_INTEGER v14; // r13
  int *v15; // rbx
  KIRQL v16; // al
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 *v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // rcx
  unsigned int v23; // esi
  __int64 v24; // r12
  __int64 v25; // rdi
  ULONG *v26; // r13
  __int64 Number; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  bool v30; // zf
  __int64 v31; // rax
  ULONG v32; // ebx
  __int64 v33; // r11
  int **v34; // rdi
  _BYTE *v35; // r14
  __int64 v36; // rcx
  _BYTE v38[4]; // [rsp+20h] [rbp+0h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+24h] [rbp+4h] BYREF
  __int64 v40; // [rsp+28h] [rbp+8h]
  ULONG v41; // [rsp+30h] [rbp+10h]
  __int64 v42; // [rsp+38h] [rbp+18h]
  __int64 v43; // [rsp+40h] [rbp+20h]
  __int64 v44; // [rsp+48h] [rbp+28h]
  LARGE_INTEGER v45; // [rsp+50h] [rbp+30h]
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp+38h] BYREF
  int **v47; // [rsp+60h] [rbp+40h]
  _DWORD *v48; // [rsp+68h] [rbp+48h]
  LARGE_INTEGER *v49; // [rsp+70h] [rbp+50h]

  v4 = PpmIntSteerLoadMax;
  v49 = a4;
  v6 = 0;
  v48 = a3;
  v7 = 0LL;
  v47 = a2;
  ProcNumber = 0;
  v41 = 0;
  if ( KiIntSteerEnabled )
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0);
    v9 = 8LL * ActiveProcessorCount;
    v6 = ActiveProcessorCount;
    v41 = ActiveProcessorCount;
    v10 = v9 + 15;
    if ( v9 + 15 < v9 )
      v10 = 0xFFFFFFFFFFFFFF0LL;
    v11 = alloca(v10 & 0xFFFFFFFFFFFFFFF0uLL);
    v7 = v38;
    if ( v6 )
      memset_0(v38, 0, v9 & 0xFFFFFFFFFFFFFFF8uLL);
  }
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v45 = InterruptTimePrecise;
  v13.QuadPart = InterruptTimePrecise.QuadPart - KiIntSteerPreviousPerfSnap;
  v14 = InterruptTimePrecise;
  PerformanceCounter.QuadPart = InterruptTimePrecise.QuadPart - KiIntSteerPreviousPerfSnap;
  if ( (unsigned __int64)(InterruptTimePrecise.QuadPart - KiIntSteerPreviousPerfSnap) < 0x16E360 )
  {
    *a2 = 0LL;
    goto LABEL_44;
  }
  v15 = (int *)KiIntSteerDistributionContext;
  KiIntSteerPreviousPerfSnap = InterruptTimePrecise.QuadPart;
  *(LARGE_INTEGER *)&KsepShimDbLock.SchedulerAssistPriorityFloor = v13;
  memset_0(KiIntSteerDistributionContext, 0, 0x204uLL);
  *v15 = v4;
  *a2 = v15;
  v43 = 0LL;
  v16 = KeAcquireSpinLockRaiseToDpc(&KsepShimDbLock.InGlobalUpdateVpThreadPriorityList);
  v17 = KiIntTrackRootList;
  v38[0] = v16;
  if ( (__int64 *)KiIntTrackRootList != &KiIntTrackRootList )
  {
    while ( 1 )
    {
      v18 = v17 + 16;
      v44 = 0LL;
      v19 = *(__int64 **)(v17 + 16);
      v20 = 0LL;
      if ( v19 != (__int64 *)(v17 + 16) )
        break;
LABEL_34:
      v43 += v20;
      *(_QWORD *)(v17 + 192) = v20;
      v17 = *(_QWORD *)v17;
      if ( (__int64 *)v17 == &KiIntTrackRootList )
      {
        v14 = v45;
        v16 = v38[0];
        goto LABEL_36;
      }
    }
    while ( 1 )
    {
      if ( *(__int64 **)(*v19 + 8) != v19 || *(__int64 **)v19[1] != v19 )
        __fastfail(3u);
      v21 = 0LL;
      v22 = 0LL;
      if ( *((_DWORD *)v19 + 6) )
        break;
LABEL_29:
      v28 = v22 - v19[5];
      v19[5] = v22;
      if ( v28 > 0 )
        v20 += v28;
      v29 = v21 - v19[6];
      v30 = v21 == v19[6];
      v19[6] = v21;
      v19 = (__int64 *)*v19;
      v31 = v29 + v20;
      if ( v29 < 0 || v30 )
        v31 = v20;
      v44 = v31;
      v20 = v31;
      if ( v19 == (__int64 *)v18 )
        goto LABEL_34;
    }
    v23 = 0;
    v24 = 0LL;
    v25 = 0LL;
    while ( 1 )
    {
      v40 = *(_QWORD *)(v19[4] + 8LL * v23);
      v24 += *(_QWORD *)(v40 + 176);
      v25 += *(_QWORD *)(v40 + 200);
      v26 = (ULONG *)(v40 + 96);
      if ( (unsigned int)Feature_Servicing_KeIntSteerProcessorIndex__private_IsEnabledDeviceUsageNoInline(v23, v18, v21) )
      {
        if ( KeGetProcessorNumberFromIndex(*v26, &ProcNumber) < 0
          || ProcNumber.Group
          || !KiIntSteerEnabled
          || *(_BYTE *)(v17 + 132) )
        {
          goto LABEL_27;
        }
        Number = ProcNumber.Number;
      }
      else
      {
        if ( (unsigned __int16)KiActiveGroups > 1u
          && (KeGetProcessorNumberFromIndex(*v26, &ProcNumber) < 0 || ProcNumber.Group)
          || !KiIntSteerEnabled
          || *(_BYTE *)(v17 + 132) )
        {
          goto LABEL_27;
        }
        Number = *v26;
      }
      v18 = v40;
      *(_QWORD *)&v7[8 * Number] += *(_QWORD *)(v40 + 200) + *(_QWORD *)(v40 + 176);
LABEL_27:
      if ( ++v23 >= *((_DWORD *)v19 + 6) )
      {
        v13 = PerformanceCounter;
        v18 = v17 + 16;
        v40 = v25;
        v21 = v25;
        v20 = v44;
        v42 = v24;
        v22 = v24;
        v6 = v41;
        goto LABEL_29;
      }
    }
  }
LABEL_36:
  KeReleaseSpinLock(&KsepShimDbLock.InGlobalUpdateVpThreadPriorityList, v16);
  if ( KiIntSteerEnabled )
  {
    v32 = 0;
    if ( v6 )
    {
      v33 = KiIntSteerPerProcIsrDpcTimeAffinitized;
      v34 = v47;
      v35 = &v7[-KiIntSteerPerProcIsrDpcTimeAffinitized];
      do
      {
        v36 = *(_QWORD *)&v35[v33] - *(_QWORD *)v33;
        *(_QWORD *)v33 = *(_QWORD *)&v35[v33];
        if ( v36 > 0 )
          KiIntSteerAddLoadToProcessorAndCheckThreshold(v36, 0LL, v32, *v34);
        ++v32;
        v33 += 8LL;
      }
      while ( v32 < v6 );
      v14 = v45;
    }
  }
  KiIntSteerLoadPercent = 10000 * v43 / (unsigned __int64)(KiIntSteerSlowestCyclesPerSec * v13.QuadPart);
LABEL_44:
  *v48 = KiIntSteerLoadPercent;
  *v49 = v14;
  return 0LL;
}
