/*
 * XREFs of PopTransitionTelemetryOsState @ 0x140B20D08
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140A39120 (PopSleepstudyStartNextSession.c)
 *     PopDiagTraceControlCallback @ 0x140AC0910 (PopDiagTraceControlCallback.c)
 *     PopNotifyTelemetryOsState @ 0x140B50FFC (PopNotifyTelemetryOsState.c)
 *     PopDiagInitialize @ 0x140CD1950 (PopDiagInitialize.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     EtwTelemetryCoverageReport @ 0x14048CFE0 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x14050814C (TelemetryCoverageStringHashInternal.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopMeasureEnergyChange @ 0x140B21570 (PopMeasureEnergyChange.c)
 */

__int64 __fastcall PopTransitionTelemetryOsState(int a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int KernelShadowStack; // esi
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  unsigned int v14; // r15d
  unsigned int v15; // r14d
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  char **v21; // rcx
  unsigned __int64 v22; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v23; // [rsp+40h] [rbp-C8h] BYREF
  int v24; // [rsp+44h] [rbp-C4h] BYREF
  int v25; // [rsp+48h] [rbp-C0h] BYREF
  void *volatile AbWaitObject; // [rsp+4Ch] [rbp-BCh] BYREF
  int v27; // [rsp+54h] [rbp-B4h] BYREF
  int RealtimePriorityFloor; // [rsp+58h] [rbp-B0h] BYREF
  int v29; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v30; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v31; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v32; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v33; // [rsp+70h] [rbp-98h] BYREF
  __int64 v34; // [rsp+78h] [rbp-90h] BYREF
  __int64 v35; // [rsp+80h] [rbp-88h]
  __int64 v36; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v37; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v38; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v39; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v40; // [rsp+A8h] [rbp-60h] BYREF
  __m128i v41; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v42; // [rsp+C0h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+E8h] [rbp-20h] BYREF
  __int16 *v44; // [rsp+108h] [rbp+0h]
  __int64 v45; // [rsp+110h] [rbp+8h]
  int *v46; // [rsp+118h] [rbp+10h]
  __int64 v47; // [rsp+120h] [rbp+18h]
  unsigned __int64 *v48; // [rsp+128h] [rbp+20h]
  __int64 v49; // [rsp+130h] [rbp+28h]
  int *v50; // [rsp+138h] [rbp+30h]
  __int64 v51; // [rsp+140h] [rbp+38h]
  __int64 *v52; // [rsp+148h] [rbp+40h]
  __int64 v53; // [rsp+150h] [rbp+48h]
  unsigned __int64 *v54; // [rsp+158h] [rbp+50h]
  __int64 v55; // [rsp+160h] [rbp+58h]
  unsigned __int64 *v56; // [rsp+168h] [rbp+60h]
  __int64 v57; // [rsp+170h] [rbp+68h]
  unsigned __int64 *v58; // [rsp+178h] [rbp+70h]
  __int64 v59; // [rsp+180h] [rbp+78h]
  int *v60; // [rsp+188h] [rbp+80h]
  __int64 v61; // [rsp+190h] [rbp+88h]
  void *volatile *p_AbWaitObject; // [rsp+198h] [rbp+90h]
  __int64 v63; // [rsp+1A0h] [rbp+98h]
  int *v64; // [rsp+1A8h] [rbp+A0h]
  __int64 v65; // [rsp+1B0h] [rbp+A8h]
  int *p_RealtimePriorityFloor; // [rsp+1B8h] [rbp+B0h]
  __int64 v67; // [rsp+1C0h] [rbp+B8h]
  char *v68; // [rsp+1C8h] [rbp+C0h]
  __int64 v69; // [rsp+1D0h] [rbp+C8h]
  unsigned int *v70; // [rsp+1D8h] [rbp+D0h]
  __int64 v71; // [rsp+1E0h] [rbp+D8h]
  unsigned int *v72; // [rsp+1E8h] [rbp+E0h]
  __int64 v73; // [rsp+1F0h] [rbp+E8h]
  __m128i *v74; // [rsp+1F8h] [rbp+F0h]
  __int64 v75; // [rsp+200h] [rbp+F8h]
  __int64 *v76; // [rsp+208h] [rbp+100h]
  __int64 v77; // [rsp+210h] [rbp+108h]
  unsigned __int64 *v78; // [rsp+218h] [rbp+110h]
  __int64 v79; // [rsp+220h] [rbp+118h]
  unsigned __int64 *v80; // [rsp+228h] [rbp+120h]
  __int64 v81; // [rsp+230h] [rbp+128h]
  __int64 *v82; // [rsp+238h] [rbp+130h]
  __int64 v83; // [rsp+240h] [rbp+138h]

  LODWORD(v35) = 0;
  v34 = 0LL;
  KernelShadowStack = 0;
  if ( !dword_140E07598 )
    return KernelShadowStack;
  v8 = 0x800000000000LL;
  if ( (qword_140E075A8 & 0x800000000000LL) == 0
    || !BYTE4(PopSleepstudySessionLock.KernelShadowStack)
    || (qword_140E075B0 & 0x800000000000LL) != qword_140E075B0 )
  {
    return KernelShadowStack;
  }
  v9 = a1 - 2;
  if ( !v9 )
  {
    if ( a2 == 2 )
    {
      if ( (unsigned int)dword_140E0747C >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_9;
      if ( !dword_140E07478 )
        dword_140E07478 = TelemetryCoverageStringHashInternal(off_140E07470, &v22);
      v21 = &off_140E07470;
    }
    else
    {
      if ( (unsigned int)dword_140E0744C >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_9;
      if ( !dword_140E07448 )
        dword_140E07448 = TelemetryCoverageStringHashInternal(off_140E07440, &v22);
      v21 = &off_140E07440;
    }
    goto LABEL_86;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    switch ( a2 )
    {
      case 3:
        if ( (unsigned int)dword_140E07464 >= MEMORY[0xFFFFF7800000037C] )
          goto LABEL_9;
        if ( !dword_140E07460 )
          dword_140E07460 = TelemetryCoverageStringHashInternal(off_140E07458, &v22);
        v21 = &off_140E07458;
        break;
      case 4:
        if ( (unsigned int)dword_140E074C4 >= MEMORY[0xFFFFF7800000037C] )
          goto LABEL_9;
        if ( !dword_140E074C0 )
          dword_140E074C0 = TelemetryCoverageStringHashInternal(off_140E074B8, &v22);
        v21 = &off_140E074B8;
        break;
      case 5:
        if ( (unsigned int)dword_140E074DC >= MEMORY[0xFFFFF7800000037C] )
          goto LABEL_9;
        if ( !dword_140E074D8 )
          dword_140E074D8 = TelemetryCoverageStringHashInternal(off_140E074D0, &v22);
        v21 = &off_140E074D0;
        break;
      case 6:
        if ( (unsigned int)dword_140E07494 >= MEMORY[0xFFFFF7800000037C] )
          goto LABEL_9;
        if ( !dword_140E07490 )
          dword_140E07490 = TelemetryCoverageStringHashInternal(off_140E07488, &v22);
        v21 = &off_140E07488;
        break;
      default:
        if ( a2 == 8 && (unsigned int)dword_140E074AC < MEMORY[0xFFFFF7800000037C] )
        {
          if ( !dword_140E074A8 )
            dword_140E074A8 = TelemetryCoverageStringHashInternal(off_140E074A0, &v22);
          v21 = &off_140E074A0;
          break;
        }
        goto LABEL_9;
    }
LABEL_86:
    EtwTelemetryCoverageReport(v21);
    goto LABEL_9;
  }
  if ( v10 != 1 )
    goto LABEL_9;
  switch ( a2 )
  {
    case 3:
      if ( (unsigned int)dword_140E07524 >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_9;
      if ( !dword_140E07520 )
        dword_140E07520 = TelemetryCoverageStringHashInternal(off_140E07518, &v22);
      v21 = &off_140E07518;
      goto LABEL_86;
    case 4:
      if ( (unsigned int)dword_140E0753C >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_9;
      if ( !dword_140E07538 )
        dword_140E07538 = TelemetryCoverageStringHashInternal(off_140E07530, &v22);
      v21 = &off_140E07530;
      goto LABEL_86;
    case 5:
      if ( (unsigned int)dword_140E074F4 >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_9;
      if ( !dword_140E074F0 )
        dword_140E074F0 = TelemetryCoverageStringHashInternal(off_140E074E8, &v22);
      v21 = &off_140E074E8;
      goto LABEL_86;
    case 6:
      if ( (unsigned int)dword_140E0750C >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_9;
      if ( !dword_140E07508 )
        dword_140E07508 = TelemetryCoverageStringHashInternal(off_140E07500, &v22);
      v21 = &off_140E07500;
      goto LABEL_86;
  }
  if ( a2 == 8 && (unsigned int)dword_140E07554 < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_140E07550 )
      dword_140E07550 = TelemetryCoverageStringHashInternal(off_140E07548, &v22);
    v21 = &off_140E07548;
    goto LABEL_86;
  }
LABEL_9:
  PopAcquireRwLockExclusive(PopSleepstudySessionLock.TracingPrivate, v8, a3, a4);
  KernelShadowStack = (unsigned int)PopSleepstudySessionLock.KernelShadowStack;
  if ( a1 != 5
    || LODWORD(PopSleepstudySessionLock.AbWaitObject) == 1
    || (unsigned int)(LODWORD(PopSleepstudySessionLock.AbWaitObject) - 4) <= 1 )
  {
    v16 = (MEMORY[0xFFFFF78000000008] - PopSleepstudySessionLock.UserWaitTime - MEMORY[0xFFFFF780000003B0]) / 0x2710;
    v17 = v16 - PopSleepstudySessionLock.InGlobalUpdateVpThreadPriorityList;
    v18 = (MEMORY[0xFFFFF78000000008] - PopSleepstudySessionLock.KernelWaitTime) / 0x2710;
    PopSleepstudySessionLock.InGlobalUpdateVpThreadPriorityList = v16;
    v19 = v18 - (unsigned __int64)PopSleepstudySessionLock.GlobalUpdateVpThreadPriorityListEntry.Flink;
    v22 = v18 - (unsigned __int64)PopSleepstudySessionLock.GlobalUpdateVpThreadPriorityListEntry.Flink;
    v20 = v18 - (unsigned __int64)PopSleepstudySessionLock.GlobalUpdateVpThreadPriorityListEntry.Flink;
    PopSleepstudySessionLock.GlobalUpdateVpThreadPriorityListEntry.Flink = (struct _LIST_ENTRY *)v18;
    if ( v17 <= v19 )
      v20 = v17;
    v33 = v20;
    v27 = ++PopSleepstudySessionLock.SchedulerAssistPriorityFloor;
    AbWaitObject = PopSleepstudySessionLock.AbWaitObject;
    if ( a1 != 5 )
    {
      ++PopSleepstudySessionLock.RealtimePriorityFloor;
      LODWORD(PopSleepstudySessionLock.AbWaitObject) = a1;
      HIDWORD(PopSleepstudySessionLock.AbWaitObject) = a2;
      if ( a1 == 1 || a1 == 4 )
        ++LODWORD(PopSleepstudySessionLock.KernelShadowStack);
    }
    KernelShadowStack = (unsigned int)PopSleepstudySessionLock.KernelShadowStack;
    RealtimePriorityFloor = PopSleepstudySessionLock.RealtimePriorityFloor;
    PopReleaseRwLock((struct _KTHREAD *)PopSleepstudySessionLock.TracingPrivate);
    PopAcquireRwLockShared((volatile signed __int64 *)&stru_140F10070.Header.Lock, v11, v12, v13);
    v41 = *(__m128i *)&stru_140F10070.Header.WaitListHead.Blink;
    v42 = *(_OWORD *)&stru_140F10070.Header.WaitListHead.Blink;
    PopReleaseRwLock(&stru_140F10070);
    v14 = 0;
    v15 = _mm_cvtsi128_si32(_mm_srli_si128(v41, 8));
    if ( v15 )
      v14 = 100 * HIDWORD(v42) / v15;
    PopMeasureEnergyChange(&v34, &PopSleepstudySessionLock.KernelShadowStackInitial);
    v36 = *(_QWORD *)&PopSleepstudySessionLock.ReservedPreviousReadyTimeValue;
    if ( (unsigned int)dword_140E07598 > 5
      && (qword_140E075A8 & 0x800000000000LL) != 0
      && (qword_140E075B0 & 0x800000000000LL) == qword_140E075B0 )
    {
      v23 = a1;
      v44 = &v23;
      v46 = &v24;
      v37 = v22;
      v48 = &v37;
      v45 = 2LL;
      LOWORD(v24) = a2;
      v47 = 2LL;
      v49 = 8LL;
      v29 = MEMORY[0xFFFFF780000002C4];
      v50 = &v29;
      v52 = &v36;
      v38 = v33;
      v54 = &v38;
      v56 = &v39;
      v58 = &v40;
      LOWORD(v25) = (_WORD)AbWaitObject;
      v60 = &v25;
      LOWORD(AbWaitObject) = WORD2(AbWaitObject);
      p_AbWaitObject = &AbWaitObject;
      v64 = &v27;
      p_RealtimePriorityFloor = &RealtimePriorityFloor;
      v68 = (char *)&AbWaitObject + 4;
      v70 = &v30;
      v72 = &v31;
      v41.m128i_i64[0] = v35;
      v74 = &v41;
      LODWORD(v32) = v34;
      v76 = &v32;
      LODWORD(v33) = (unsigned __int8)v42;
      v78 = &v33;
      v51 = 4LL;
      v53 = 8LL;
      v55 = 8LL;
      v39 = v18;
      v57 = 8LL;
      v40 = v16;
      v59 = 8LL;
      v61 = 2LL;
      v63 = 2LL;
      v65 = 4LL;
      v67 = 4LL;
      HIDWORD(AbWaitObject) = KernelShadowStack;
      v69 = 4LL;
      v30 = v15;
      v71 = 4LL;
      v31 = v14;
      v73 = 4LL;
      v75 = 8LL;
      v77 = 4LL;
      v79 = 4LL;
      v82 = &v34;
      LODWORD(v22) = BYTE3(v42);
      v80 = &v22;
      v81 = 4LL;
      v34 = 0x1000000LL;
      v83 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07598,
        (unsigned __int8 *)&byte_14004AA47,
        0LL,
        0LL,
        0x16u,
        &v43);
    }
  }
  else
  {
    PopReleaseRwLock((struct _KTHREAD *)PopSleepstudySessionLock.TracingPrivate);
  }
  return KernelShadowStack;
}
