/*
 * XREFs of PspQueryJobHierarchyAccountingInformation @ 0x140775FF8
 * Callers:
 *     NtQueryInformationJobObject @ 0x1407F8B10 (NtQueryInformationJobObject.c)
 * Callees:
 *     ExAcquireFastResourceShared @ 0x140276050 (ExAcquireFastResourceShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     PsAddProcessEnergyValues @ 0x140414930 (PsAddProcessEnergyValues.c)
 *     ExInitializeFastOwnerEntry @ 0x14042FF20 (ExInitializeFastOwnerEntry.c)
 *     ExReleaseFastResourceShared @ 0x14047F770 (ExReleaseFastResourceShared.c)
 *     KeQuerySchedulingGroupReadyTime @ 0x1404A40F0 (KeQuerySchedulingGroupReadyTime.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1409FFC10 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspLockJobShared @ 0x140A87E58 (PspLockJobShared.c)
 *     PspUnlockJobShared @ 0x140AAB240 (PspUnlockJobShared.c)
 */

void __fastcall PspQueryJobHierarchyAccountingInformation(_QWORD *Object, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx
  _OWORD *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v25; // [rsp+38h] [rbp-C8h]
  ULONG_PTR v26[10]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v27[80]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v28[13]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v29; // [rsp+148h] [rbp+48h]
  __int64 v30; // [rsp+150h] [rbp+50h]
  __int64 v31; // [rsp+158h] [rbp+58h]
  __int64 v32; // [rsp+160h] [rbp+60h]
  __int64 v33; // [rsp+168h] [rbp+68h]
  __int64 v34; // [rsp+170h] [rbp+70h]
  __int64 v35; // [rsp+178h] [rbp+78h]
  __int64 v36; // [rsp+180h] [rbp+80h]
  __int64 v37; // [rsp+188h] [rbp+88h]
  __int64 v38; // [rsp+190h] [rbp+90h]
  __int64 v39; // [rsp+198h] [rbp+98h]
  __int64 v40; // [rsp+1A0h] [rbp+A0h]
  __int64 v41; // [rsp+1A8h] [rbp+A8h]
  __int64 v42; // [rsp+1B0h] [rbp+B0h]
  __int64 v43; // [rsp+1B8h] [rbp+B8h]
  __int64 v44; // [rsp+1C0h] [rbp+C0h]
  __int64 v45; // [rsp+1C8h] [rbp+C8h]
  __int64 v46; // [rsp+1D0h] [rbp+D0h]
  int v47; // [rsp+1D8h] [rbp+D8h]
  _QWORD v48[58]; // [rsp+1E0h] [rbp+E0h] BYREF

  memset_0(v27, 0, 0x48uLL);
  memset_0(v26, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  memset_0(v28, 0, 0x2C8uLL);
  ExInitializeFastOwnerEntry((__int64)v27);
  ExInitializeFastOwnerEntry((__int64)v26);
  while ( 1 )
  {
    v25 = Object[164];
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireFastResourceShared((__int64 *)(v25 + 56), (ULONG_PTR)v26, 1);
    if ( v25 == Object[164] )
      break;
    PspUnlockJobShared(v25, CurrentThread, v26);
  }
  if ( Object != (_QWORD *)Object[164] )
    PspLockJobShared(Object, CurrentThread, v27);
  PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)v28, 1);
  v5 = v30;
  *(_QWORD *)a2 = v30 + Object[20];
  *(_QWORD *)(a2 + 16) = Object[23] + v5;
  v6 = v29;
  *(_QWORD *)(a2 + 8) = v29 + Object[21];
  *(_QWORD *)(a2 + 24) = Object[24] + v6;
  *(_DWORD *)(a2 + 32) = v47 + *((_DWORD *)Object + 52);
  *(_DWORD *)(a2 + 36) = *((_DWORD *)Object + 53);
  *(_DWORD *)(a2 + 40) = *((_DWORD *)Object + 54);
  *(_DWORD *)(a2 + 44) = *((_DWORD *)Object + 55);
  *(_QWORD *)(a2 + 48) = v34 + Object[73];
  *(_QWORD *)(a2 + 56) = v35 + Object[74];
  *(_QWORD *)(a2 + 64) = v36 + Object[75];
  *(_QWORD *)(a2 + 72) = v37 + Object[76];
  *(_QWORD *)(a2 + 80) = v38 + Object[77];
  *(_QWORD *)(a2 + 88) = v39 + Object[78];
  *(_QWORD *)(a2 + 96) = v42 + Object[79];
  *(_QWORD *)(a2 + 104) = v43 + Object[80];
  *(_QWORD *)(a2 + 112) = v44 + Object[81];
  *(_QWORD *)(a2 + 120) = v45 + Object[82];
  *(_QWORD *)(a2 + 128) = v46 + Object[83];
  *(_QWORD *)(a2 + 136) = v33 + Object[25];
  *(_QWORD *)(a2 + 144) = v32 + Object[22];
  v7 = v31 + Object[157];
  *(_QWORD *)(a2 + 152) = v7;
  *(_QWORD *)(a2 + 432) = v40 + Object[227];
  *(_QWORD *)(a2 + 440) = v41 + Object[228];
  *(_QWORD *)(a2 + 448) = v48[55] + Object[84];
  *(_QWORD *)(a2 + 456) = v48[56] + Object[85];
  v8 = Object[155];
  if ( v8 )
    *(_QWORD *)(a2 + 152) = v7 + KeQuerySchedulingGroupReadyTime(v8 + 128);
  v9 = Object[195];
  v10 = (_OWORD *)(a2 + 160);
  if ( v9 )
  {
    PsAddProcessEnergyValues(v48, v9);
    v13 = 2LL;
    v14 = v48;
    do
    {
      v15 = v14[1];
      *v10 = *v14;
      v16 = v14[2];
      v10[1] = v15;
      v17 = v14[3];
      v10[2] = v16;
      v18 = v14[4];
      v10[3] = v17;
      v19 = v14[5];
      v10[4] = v18;
      v20 = v14[6];
      v10[5] = v19;
      v21 = v14[7];
      v14 += 8;
      v10[6] = v20;
      v10 += 8;
      *(v10 - 1) = v21;
      --v13;
    }
    while ( v13 );
    *v10 = *v14;
  }
  else
  {
    memset_0(v10, 0, 0x110uLL);
  }
  if ( Object != (_QWORD *)Object[164] )
    PspUnlockJobShared(Object, CurrentThread, v27);
  ExReleaseFastResourceShared(Object[164] + 56LL, (ULONG_PTR)v26, v11, v12);
  if ( CurrentThread )
  {
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery(v23, v22);
    }
  }
}
