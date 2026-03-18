/*
 * XREFs of BgpFwDisplayBugCheckScreenModernized @ 0x14071840C
 * Callers:
 *     KiDisplayBlueScreen @ 0x1405E7FF4 (KiDisplayBlueScreen.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KeStallExecutionProcessor @ 0x14037BEF0 (KeStallExecutionProcessor.c)
 *     RtlAppendUnicodeToString @ 0x140432EB0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140432F70 (RtlAppendUnicodeStringToString.c)
 *     IoSaveBugCheckProgress @ 0x1405C7540 (IoSaveBugCheckProgress.c)
 *     BgpClearScreen @ 0x140715B44 (BgpClearScreen.c)
 *     BgpFoGetStringAdvanceWidth @ 0x14071642C (BgpFoGetStringAdvanceWidth.c)
 *     BcpDisplayCriticalStringCentered @ 0x140716B84 (BcpDisplayCriticalStringCentered.c)
 *     BcpDisplayErrorInformationModernized @ 0x1407171A0 (BcpDisplayErrorInformationModernized.c)
 *     BcpDisplayProgressModernized @ 0x14071774C (BcpDisplayProgressModernized.c)
 *     BcpGetDisplayType @ 0x140717B10 (BcpGetDisplayType.c)
 *     BcpSetCursorPosition @ 0x140717E1C (BcpSetCursorPosition.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140D144DC (BcpDisplayEarlyBugCheckScreen.c)
 */

NTSTATUS __fastcall BgpFwDisplayBugCheckScreenModernized(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        UNICODE_STRING *a4,
        char a5)
{
  const UNICODE_STRING *p_SchedulingGroup; // rsi
  int StringAdvanceWidth; // ebx
  NTSTATUS result; // eax
  int Blink; // r14d
  int Flink_high; // r15d
  int DisplayType; // r12d
  __int64 v12; // rdi
  int v13; // ecx
  int v14; // edx
  unsigned int v15; // r14d
  unsigned int v16; // r15d
  __int64 v17; // rax
  int v18; // r15d
  int v19; // r14d
  __int64 v20; // rcx
  int v21; // r11d
  unsigned int v22; // r8d
  unsigned int v23; // r8d
  int v24; // edx
  UNICODE_STRING *p_Destination; // rcx
  unsigned int v26; // r14d
  int v27; // ebx
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r10
  int v31; // eax
  __int64 v32; // r9
  int v33; // eax
  unsigned int v34; // r8d
  int v35; // edx
  _DWORD v36[4]; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING Destination; // [rsp+40h] [rbp-40h] BYREF
  int v38; // [rsp+50h] [rbp-30h]
  int v39; // [rsp+54h] [rbp-2Ch]
  int v40; // [rsp+58h] [rbp-28h]
  int v41; // [rsp+5Ch] [rbp-24h]
  unsigned __int64 v42; // [rsp+60h] [rbp-20h] BYREF
  int v43; // [rsp+68h] [rbp-18h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v45; // [rsp+C0h] [rbp+40h]

  v45 = a1;
  v42 = 0LL;
  p_SchedulingGroup = 0LL;
  v36[0] = 0;
  StringAdvanceWidth = 0;
  PerformanceFrequency.QuadPart = 0LL;
  LOBYTE(v38) = 0;
  LOBYTE(v39) = 0;
  if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 4) != 0
    && (*(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x400000) == 0 )
  {
    StringAdvanceWidth = BcpDisplayEarlyBugCheckScreen(a1, a2, a4);
    IoSaveBugCheckProgress(131);
    return StringAdvanceWidth;
  }
  if ( (*(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x400000) != 0
    || (gLoadedDiffHivesLock.WaitBlockFill6[80] & 0x10) == 0 )
  {
    BgpClearScreen(0xFF000000);
    IoSaveBugCheckProgress(132);
    return 0;
  }
  Blink = (int)gLoadedDiffHivesLock.Timer.TimerListEntry.Blink;
  Flink_high = HIDWORD(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink);
  *(_DWORD *)&Destination.Length = gLoadedDiffHivesLock.Timer.TimerListEntry.Blink;
  *(_DWORD *)(&Destination.MaximumLength + 1) = HIDWORD(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink);
  LODWORD(Destination.Buffer) = HIDWORD(gLoadedDiffHivesLock.Timer.TimerListEntry.Blink);
  DisplayType = BcpGetDisplayType(&Destination);
  v12 = 21LL * DisplayType;
  v13 = dword_140E0F020[v12 + 20];
  v14 = dword_140E0F020[v12 + 8];
  *(_QWORD *)&dword_140E0F020[v12 + 4] = 0LL;
  v15 = Blink - 2 * v13;
  v16 = Flink_high - 2 * v14;
  dword_140E0F020[v12 + 6] = v15;
  v17 = *(_QWORD *)&stru_140E3E928.Timer.Processor;
  dword_140E0F020[v12 + 7] = v16;
  v18 = v14 + (v16 >> 1) - dword_140E0F020[v12 + 18];
  v19 = v13 + (v15 >> 1);
  v20 = *(_QWORD *)(v17 + 24);
  v41 = v19;
  v42 = __PAIR64__(v18, v19);
  if ( v21 == 456 )
    *(_DWORD *)(v20 + 40) = -16777216;
  BgpClearScreen(*(_DWORD *)(v20 + 40));
  IoSaveBugCheckProgress(133);
  BcpSetCursorPosition(v19, v18, (_DWORD *)&v42 + 1);
  if ( v45 != 456 )
  {
    if ( (a5 & 1) != 0 )
      goto LABEL_38;
    if ( (a5 & 2) != 0 )
    {
      p_SchedulingGroup = (const UNICODE_STRING *)&stru_140E3E928.SchedulingGroup;
      if ( (a5 & 4) == 0 )
        p_SchedulingGroup = (const UNICODE_STRING *)&stru_140E3E928.CycleTime;
    }
    else
    {
      if ( (a5 & 4) == 0 )
        goto LABEL_38;
      p_SchedulingGroup = (const UNICODE_STRING *)&stru_140E3E928.KernelStack;
    }
    v40 = *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[20];
    LODWORD(v42) = *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[16];
    if ( WheapPfaLock.SchedulerApc.Reserved[2] )
      v26 = *(_DWORD *)WheapPfaLock.SchedulerApc.Reserved[2];
    else
      v26 = dword_140E0F020[v12 + 20] + dword_140E0F020[v12 + 4] + dword_140E0F020[v12 + 6];
    v43 = dword_140E0F020[v12 + 20] + dword_140E0F020[v12 + 4];
    v27 = v43;
    BcpSetCursorPosition(v43, *(int *)&WheapPfaLock.SchedulerApcFill5[20], 0LL);
    v29 = *(_QWORD *)(*(_QWORD *)&stru_140E3E928.Timer.Processor + 24LL);
    *(_DWORD *)(v29 + 56) = *(_DWORD *)(v12 * 4 + v28 + 8);
    *(_DWORD *)(*(_QWORD *)&stru_140E3E928.Timer.Processor + 8LL) = *(_DWORD *)(v12 * 4 + v28 + 8);
    *(_QWORD *)&Destination.Length = v29 + 40;
    if ( (int)BgpFoGetStringAdvanceWidth((int)v29 + 40, v30, v36, v28) >= 0 )
    {
      v31 = (unsigned __int8)v38;
      if ( v27 + v36[0] > v26 )
        v31 = 1;
      v38 = v31;
    }
    BcpSetCursorPosition(v27, v40, 0LL);
    StringAdvanceWidth = BgpFoGetStringAdvanceWidth(*(int *)&Destination.Length, (__int64)p_SchedulingGroup, v36, v32);
    if ( StringAdvanceWidth >= 0 )
    {
      v33 = (unsigned __int8)v39;
      if ( v36[0] + v43 > v26 )
        v33 = 1;
      v39 = v33;
    }
    BcpSetCursorPosition(v42, v40, 0LL);
    if ( (_BYTE)v38 != (_BYTE)v39 )
    {
      *(_QWORD *)&Destination.Length = 0LL;
      Destination.MaximumLength = *(_WORD *)&stru_140E3E928.WaitBlockFill11[64];
      Destination.Buffer = (wchar_t *)stru_140E3E928.WaitBlock[1].WaitListEntry.Blink;
      result = RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)&stru_140E3E928.SListFaultAddress);
      if ( result < 0 )
        return result;
      result = RtlAppendUnicodeToString(&Destination, L" ");
      if ( result < 0 )
        return result;
      result = RtlAppendUnicodeStringToString(&Destination, p_SchedulingGroup);
      StringAdvanceWidth = result;
      if ( result < 0 )
        return result;
      BcpDisplayCriticalStringCentered(&Destination.Length, dword_140E0F020[v12 + 2], v34, DisplayType);
LABEL_41:
      v35 = *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[24] + dword_140E0F020[v12 + 19] + dword_140E0F020[v12 + 8];
      *(_DWORD *)&gLoadedDiffHivesLock.ApcStateFill[28] = *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[24]
                                                        + dword_140E0F020[v12 + 19];
      HIDWORD(gLoadedDiffHivesLock.Teb) = v35;
      LODWORD(gLoadedDiffHivesLock.RelativeTimerBias) = v35;
      *(_DWORD *)&gLoadedDiffHivesLock.ApcStateFill[24] = v41;
      LODWORD(gLoadedDiffHivesLock.Teb) = v41;
      BcpSetCursorPosition(v41, v35, &gLoadedDiffHivesLock.RelativeTimerBias);
      if ( v45 != 456 )
        BcpDisplayErrorInformationModernized(DisplayType, v45, a2, a3, a4, a5);
      if ( (a5 & 4) != 0 )
      {
        if ( (a5 & 2) == 0 )
        {
          KeQueryPerformanceCounter(&PerformanceFrequency);
          KeStallExecutionProcessor(10000000 * PerformanceFrequency.QuadPart / PerformanceFrequency.QuadPart);
        }
      }
      else
      {
        BcpSetCursorPosition(
          *(int *)&gLoadedDiffHivesLock.ApcStateFill[24],
          *(int *)&gLoadedDiffHivesLock.ApcStateFill[28],
          &gLoadedDiffHivesLock.ApcStateFill[32]);
        BcpDisplayProgressModernized(0, DisplayType);
        gLoadedDiffHivesLock.ApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)KeQueryPerformanceCounter(0LL).QuadPart;
        gLoadedDiffHivesLock.ApcState.ApcListHead[0].Blink = gLoadedDiffHivesLock.ApcState.ApcListHead[1].Flink;
        HIDWORD(gLoadedDiffHivesLock.RelativeTimerBias) = 0;
      }
      *(_QWORD *)&a4->Length = &stru_140E3E928.SListFaultAddress;
      a4->Buffer = (wchar_t *)&stru_140E3E928.InitialStack;
      return StringAdvanceWidth;
    }
    v19 = v41;
LABEL_38:
    BcpDisplayCriticalStringCentered(
      (unsigned __int16 *)&stru_140E3E928.SListFaultAddress,
      dword_140E0F020[v12 + 2],
      v22,
      DisplayType);
    if ( p_SchedulingGroup )
    {
      BcpSetCursorPosition(v19, *(int *)&WheapPfaLock.SchedulerApcFill5[24], 0LL);
      p_Destination = (UNICODE_STRING *)p_SchedulingGroup;
      v24 = dword_140E0F020[v12 + 2];
      goto LABEL_40;
    }
    goto LABEL_41;
  }
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.MaximumLength = *(_WORD *)&stru_140E3E928.WaitBlockFill11[48];
  Destination.Buffer = (wchar_t *)stru_140E3E928.WaitBlock[0].SparePtr;
  result = RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)&stru_140E3E928.Timer.Header.WaitListHead);
  if ( result >= 0 )
  {
    result = RtlAppendUnicodeToString(&Destination, L" ");
    if ( result >= 0 )
    {
      result = RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)&stru_140E3E928.Timer.DueTime);
      StringAdvanceWidth = result;
      if ( result >= 0 )
      {
        v24 = dword_140E0F020[v12 + 2];
        p_Destination = &Destination;
LABEL_40:
        BcpDisplayCriticalStringCentered(&p_Destination->Length, v24, v23, DisplayType);
        goto LABEL_41;
      }
    }
  }
  return result;
}
