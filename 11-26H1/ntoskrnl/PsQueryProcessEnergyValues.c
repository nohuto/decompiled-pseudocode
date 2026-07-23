/*
 * XREFs of PsQueryProcessEnergyValues @ 0x1409CE2C0
 * Callers:
 *     PopEtProcessEnumSnapshotCallback @ 0x1407E0A20 (PopEtProcessEnumSnapshotCallback.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x1409CDAE4 (PopEtEnergyContextProcessStateUpdate.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1409CDB8C (PspFoldProcessAccountingIntoJob.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x1409CDD60 (PspQueryProcessAccountingInformationCallback.c)
 *     ExpGetProcessInformation @ 0x1409DC1B8 (ExpGetProcessInformation.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 * Callees:
 *     PspUnlockProcessThreadListShared @ 0x140271060 (PspUnlockProcessThreadListShared.c)
 *     RtlTimelineBitmapMerge @ 0x140414B40 (RtlTimelineBitmapMerge.c)
 *     RtlStateDurationCapture @ 0x14042E9B0 (RtlStateDurationCapture.c)
 *     PspLockProcessThreadListShared @ 0x140444020 (PspLockProcessThreadListShared.c)
 *     RtlTimelineBitmapUpdateRange @ 0x140458110 (RtlTimelineBitmapUpdateRange.c)
 *     PoEnergyEstimationEnabled @ 0x140475F40 (PoEnergyEstimationEnabled.c)
 *     KeQueryTimelineBitmapTime @ 0x14047EAE8 (KeQueryTimelineBitmapTime.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PsQueryProcessEnergyValues(_QWORD *a1, _OWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // r12
  unsigned int TimelineBitmapTime; // eax
  _QWORD *v8; // rdx
  __int64 v9; // r15
  unsigned int v10; // r13d
  __int64 v11; // r8
  __int64 v12; // r11
  __int64 v13; // rsi
  unsigned int v14; // r8d
  _OWORD *v15; // r11
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // r11
  __int64 v19; // r8
  struct _KLOCK_ENTRIES *v20; // r9
  _OWORD *v21; // r11
  __int64 v22; // rcx
  __int64 *v23; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *i; // r11
  _QWORD *v26; // r11
  __int64 v27; // r10
  __int64 v28; // r10
  _QWORD *v29; // rcx
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // [rsp+60h] [rbp+18h] BYREF

  memset_0(a2, 0, 0x1B8uLL);
  result = PoEnergyEstimationEnabled();
  if ( !(_BYTE)result || a1 == PsIdleProcess )
    return result;
  v5 = a1[205];
  *((_QWORD *)a2 + 8) = *(_QWORD *)(v5 + 64);
  *((_QWORD *)a2 + 9) = *(_QWORD *)(v5 + 72);
  *((_QWORD *)a2 + 10) = *(_QWORD *)(v5 + 80);
  *((_QWORD *)a2 + 11) = *(_QWORD *)(v5 + 88);
  *((_QWORD *)a2 + 12) = *(_QWORD *)(v5 + 96);
  *((_QWORD *)a2 + 54) = *(_QWORD *)(v5 + 432);
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  TimelineBitmapTime = KeQueryTimelineBitmapTime();
  v8 = a2 + 17;
  v9 = v5 - (_QWORD)a2;
  v10 = TimelineBitmapTime;
  v11 = 14LL;
  do
  {
    *v8 = *(_QWORD *)((char *)v8 + v9);
    ++v8;
    --v11;
  }
  while ( v11 );
  v12 = (__int64)a2 + 104;
  v13 = 3LL;
  do
  {
    v14 = RtlStateDurationCapture(v12, (unsigned __int64 *)(v12 + v9), v6);
    if ( v15 == (_OWORD *)((char *)a2 + 104) )
    {
      v16 = 304LL;
    }
    else
    {
      if ( v15 != a2 + 7 )
        goto LABEL_13;
      v16 = 312LL;
    }
    if ( (_OWORD *)((char *)a2 + v16) && v14 )
      RtlTimelineBitmapUpdateRange((__int64 *)((char *)a2 + v16), v10 - (v14 >> 12), v10);
LABEL_13:
    v12 = (__int64)v15 + 8;
    --v13;
  }
  while ( v13 );
  v17 = 5LL;
  v18 = (__int64)(a2 + 24);
  do
  {
    v19 = (unsigned int)RtlStateDurationCapture(v18, (unsigned __int64 *)(v18 + v9), v6);
    if ( v21 == (_OWORD *)((char *)a2 + 392) )
    {
      v22 = 352LL;
    }
    else if ( v21 == a2 + 25 )
    {
      v22 = 360LL;
    }
    else
    {
      if ( v21 != (_OWORD *)((char *)a2 + 408) )
        goto LABEL_24;
      v22 = 368LL;
    }
    v23 = (__int64 *)((char *)a2 + v22);
    if ( v23 && (_DWORD)v19 )
      RtlTimelineBitmapUpdateRange(v23, v10 - ((unsigned int)v19 >> 12), v10);
LABEL_24:
    v18 = (__int64)v21 + 8;
    --v17;
  }
  while ( v17 );
  *((_DWORD *)a2 + 32) = *(_DWORD *)(v5 + 128);
  *((_DWORD *)a2 + 33) = *(_DWORD *)(v5 + 132);
  *((_DWORD *)a2 + 34) = *(_DWORD *)(v5 + 136);
  *((_DWORD *)a2 + 106) = *(_DWORD *)(v5 + 424);
  *((_DWORD *)a2 + 107) = *(_DWORD *)(v5 + 428);
  CurrentThread = KeGetCurrentThread();
  PspLockProcessThreadListShared((__int64)a1, (__int64)CurrentThread, v19, v20);
  *a2 = *(_OWORD *)v5;
  a2[1] = *(_OWORD *)(v5 + 16);
  a2[2] = *(_OWORD *)(v5 + 32);
  a2[3] = *(_OWORD *)(v5 + 48);
  a2[9] = *(_OWORD *)(v5 + 144);
  a2[10] = *(_OWORD *)(v5 + 160);
  a2[11] = *(_OWORD *)(v5 + 176);
  a2[12] = *(_OWORD *)(v5 + 192);
  a2[13] = *(_OWORD *)(v5 + 208);
  a2[14] = *(_OWORD *)(v5 + 224);
  a2[15] = *(_OWORD *)(v5 + 240);
  a2[16] = *(_OWORD *)(v5 + 256);
  for ( i = (_QWORD *)a1[110]; i != a1 + 110; i = (_QWORD *)*v26 )
  {
    v32 = *(_QWORD *)(i[34] + 192LL);
    RtlTimelineBitmapMerge((unsigned int *)a2 + 68, (unsigned int *)&v32);
    v28 = v27 - (_QWORD)a2;
    v29 = a2;
    v30 = 4LL;
    do
    {
      v31 = 2LL;
      do
      {
        *v29 += *(_QWORD *)((char *)v29 + v28);
        v29[18] += *(_QWORD *)((char *)v29 + v28 + 64);
        v29[26] += *(_QWORD *)((char *)v29 + v28 + 128);
        ++v29;
        --v31;
      }
      while ( v31 );
      --v30;
    }
    while ( v30 );
  }
  return PspUnlockProcessThreadListShared((__int64)a1, CurrentThread);
}
