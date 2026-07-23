/*
 * XREFs of WheaReportHwError @ 0x1403E0F70
 * Callers:
 *     HalpMcaReportError @ 0x14044C030 (HalpMcaReportError.c)
 *     HalpCheckAndReportGhes @ 0x1404D5CCC (HalpCheckAndReportGhes.c)
 *     HalHandleNMI @ 0x140580F40 (HalHandleNMI.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1406D9310 (WheaHwErrorReportSubmitDeviceDriver.c)
 * Callees:
 *     WheapGetErrorSource @ 0x1403E13D0 (WheapGetErrorSource.c)
 *     WheapAllocErrorRecord @ 0x1403E1420 (WheapAllocErrorRecord.c)
 *     WheapCallErrorSourceCreateRecord @ 0x1403E14C8 (WheapCallErrorSourceCreateRecord.c)
 *     WheapWorkQueueAddItem @ 0x1403E1560 (WheapWorkQueueAddItem.c)
 *     WheapApplyThresholdChecks @ 0x1403E2B48 (WheapApplyThresholdChecks.c)
 *     WheapFreeErrorRecord @ 0x1403E2E20 (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x1403E2E58 (WheapGenerateETWEvents.c)
 *     WheaIsCriticalState @ 0x1403E2EB0 (WheaIsCriticalState.c)
 *     WheapCompressErrorRecord @ 0x1403E2ED8 (WheapCompressErrorRecord.c)
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     WheaRecoveryBugCheck @ 0x1406D8C30 (WheaRecoveryBugCheck.c)
 *     WheapAddToDumpFile @ 0x1406D8D20 (WheapAddToDumpFile.c)
 *     WheapAttemptErrorRecovery @ 0x1406D8E04 (WheapAttemptErrorRecovery.c)
 *     WheapPersistPageForMemoryError @ 0x1406D8EB0 (WheapPersistPageForMemoryError.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall WheaReportHwError(__int64 a1)
{
  int v1; // r10d
  unsigned int v2; // ebx
  char v4; // r15
  _QWORD *WheaInfo; // r12
  __int64 v6; // rcx
  __int64 ErrorSource; // rax
  ULONG_PTR v8; // rdx
  unsigned int v9; // r10d
  __int64 v10; // r13
  __int64 v11; // rax
  char *v12; // r14
  __int64 v13; // r8
  int v14; // ecx
  int v15; // edx
  _DWORD *v17; // rcx
  char v18; // [rsp+38h] [rbp-29h]
  int v19; // [rsp+3Ch] [rbp-25h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-21h]
  _DWORD v21[6]; // [rsp+48h] [rbp-19h] BYREF
  __int64 v22; // [rsp+60h] [rbp-1h]
  _DWORD Src[10]; // [rsp+68h] [rbp+7h] BYREF

  v1 = *(_DWORD *)(a1 + 20);
  v2 = 0;
  v19 = 0;
  v18 = 0;
  v4 = 0;
  v20 = 0LL;
  if ( (v1 & 0x40000000) != 0 )
  {
    if ( v1 < 0 )
      return 3221225485LL;
    v1 &= ~0x40000000u;
    v18 = 1;
    v20 = (a1 + *(unsigned int *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_61;
  }
  if ( v1 < 0 )
  {
    v1 &= ~0x80000000;
    v4 = 1;
LABEL_61:
    *(_DWORD *)(a1 + 20) = v1;
  }
  if ( v1 == 3 && !v4 )
    return 0LL;
  WheaInfo = KeGetPcr()->Prcb.WheaInfo;
  if ( !WheaInfo || (v6 = WheaInfo[1]) == 0 || !*(_DWORD *)(v6 + 4) )
  {
    if ( (unsigned int)v1 <= 1 && (*(_BYTE *)(a1 + 12) & 1) == 0 && !v4 )
      KeBugCheckEx(0x124u, *(int *)(a1 + 28), 0LL, 0LL, 0LL);
    v21[0] = 1733060695;
    v17 = v21;
    v21[1] = 1;
    v21[2] = 32;
    v21[3] = 1;
    v21[5] = -2147483594;
    v21[4] = 1280201291;
    v22 = 2LL;
    goto LABEL_24;
  }
  ErrorSource = WheapGetErrorSource(v6, *(unsigned int *)(a1 + 24));
  v10 = ErrorSource;
  if ( ErrorSource )
  {
    _InterlockedAdd((volatile signed __int32 *)(ErrorSource + 24), 1u);
    if ( *(_DWORD *)(a1 + 20) == 2 && (unsigned __int8)WheapApplyThresholdChecks(ErrorSource) )
    {
      v17 = Src;
      Src[8] = *(_DWORD *)(a1 + 28);
      Src[9] = *(_DWORD *)(a1 + 24);
      Src[0] = 1733060695;
      Src[1] = 1;
      Src[2] = 40;
      Src[3] = 1;
      Src[5] = -2147483644;
      Src[4] = 1280201291;
      Src[6] = 2;
      Src[7] = 8;
LABEL_24:
      WheaLogInternalEvent(v17);
      return 0LL;
    }
    v11 = WheapAllocErrorRecord(v10, &v19);
    v12 = (char *)v11;
    if ( v11 )
    {
      v13 = (unsigned int)(v19 - 40);
      v14 = *(_DWORD *)(v11 + 24) ^ ((unsigned __int8)*(_DWORD *)(v11 + 24) ^ (unsigned __int8)(*(_DWORD *)(a1 + 12) >> 2)) & 4;
      *(_DWORD *)(v11 + 24) = v14;
      *(_DWORD *)(v11 + 24) = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(*(_DWORD *)(a1 + 12) >> 2)) & 8;
      v19 = WheapCallErrorSourceCreateRecord(v10, a1, v13, v11 + 40);
      if ( v19 >= 0 )
      {
        if ( v4 || v18 )
          *((_DWORD *)v12 + 36) |= 8u;
        if ( (v12[144] & 2) != 0 )
        {
          if ( (*((_DWORD *)v12 + 6) & 1) == 0 || (unsigned __int8)WheaIsCriticalState() )
            goto LABEL_18;
          if ( *(_DWORD *)&CmpContextListLock.SchedulerApcFill5[48] != 1 )
          {
LABEL_64:
            WheapFreeErrorRecord(v12);
            return v2;
          }
        }
        else
        {
          if ( !*(_BYTE *)off_140E09458 && !v4 )
          {
            WheapCompressErrorRecord(0LL, v12 + 40);
            if ( (int)PshedWriteErrorRecord(1LL, *((unsigned int *)v12 + 15), v12 + 40) < 0 )
              *(_BYTE *)off_140E09458 = 1;
          }
          v15 = *(_DWORD *)(a1 + 20);
          if ( v15 == 1 )
          {
            if ( !v4 )
            {
              PshedFinalizeErrorRecord(v12 + 40, v10 + 96);
              WheapPersistPageForMemoryError(v12 + 40);
              WheapCompressErrorRecord(3LL, v12 + 40);
              PshedWriteErrorRecord(0LL, *((unsigned int *)v12 + 15), v12 + 40);
              WheapAddToDumpFile(v12 + 40, *((unsigned int *)v12 + 15));
              if ( v18 )
                KeBugCheckEx(
                  0x124u,
                  *(int *)(v10 + 104),
                  (ULONG_PTR)(v12 + 40),
                  *(_QWORD *)(v20 + 72),
                  *(_QWORD *)(v20 + 80));
              PshedBugCheckSystem(v10 + 96, v12 + 40);
              return v2;
            }
            goto LABEL_17;
          }
          if ( (unsigned int)(v15 - 2) <= 1 )
          {
LABEL_17:
            PshedFinalizeErrorRecord(v12 + 40, v10 + 96);
            goto LABEL_18;
          }
          if ( v15 )
          {
            WheapFreeErrorRecord(v12);
            return (unsigned int)-1073741811;
          }
          PshedFinalizeErrorRecord(v12 + 40, v10 + 96);
          WheapAttemptErrorRecovery(v12 + 40);
          if ( *((_DWORD *)v12 + 13) == 2 )
          {
            *((_DWORD *)v12 + 36) |= 1u;
          }
          else if ( !v4 )
          {
            WheaRecoveryBugCheck(v12 + 40, v10 + 96, a1);
            return v2;
          }
          if ( (*((_DWORD *)v12 + 6) & 1) == 0
            || *(_DWORD *)&CmpContextListLock.SchedulerApcFill5[48] != 1
            || (unsigned __int8)WheaIsCriticalState()
            || v12[144] < 0 )
          {
LABEL_18:
            WheapWorkQueueAddItem(WheaInfo[2], v12);
            return v2;
          }
        }
        WheapGenerateETWEvents(v12 + 40);
        goto LABEL_64;
      }
      if ( *(_DWORD *)(a1 + 20) < 2u && (*(_BYTE *)(a1 + 12) & 1) == 0 && !v4 )
        KeBugCheckEx(0x122u, 0xBuLL, *(int *)(a1 + 28), *(unsigned int *)(a1 + 24), 0LL);
      WheapFreeErrorRecord(v12);
      return (unsigned int)v19;
    }
    else
    {
      ++*(_DWORD *)(v10 + 16);
      if ( *(_DWORD *)(a1 + 20) < 2u && (*(_BYTE *)(a1 + 12) & 1) == 0 && !v4 )
        KeBugCheckEx(0x122u, 0xAuLL, *(int *)(a1 + 28), *(unsigned int *)(a1 + 24), 0LL);
      return 3221225626LL;
    }
  }
  else
  {
    if ( v9 <= 1 && (*(_BYTE *)(a1 + 12) & 1) == 0 && !v4 )
      KeBugCheckEx(0x122u, 9uLL, *(int *)(a1 + 28), v8, 0LL);
    return 3221225664LL;
  }
}
