/*
 * XREFs of PopTransitionTelemetryOsState @ 0x140B23108
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x1409F4CE0 (PopSleepstudyStartNextSession.c)
 *     PopDiagTraceControlCallback @ 0x140AC29B0 (PopDiagTraceControlCallback.c)
 *     PopNotifyTelemetryOsState @ 0x140B53894 (PopNotifyTelemetryOsState.c)
 *     PopDiagInitialize @ 0x140CD7AF8 (PopDiagInitialize.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     EtwTelemetryCoverageReport @ 0x140486B20 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x140501C30 (TelemetryCoverageStringHashInternal.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopMeasureEnergyChange @ 0x140B23970 (PopMeasureEnergyChange.c)
 */

__int64 __fastcall PopTransitionTelemetryOsState(int a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v6; // esi
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
  int v26; // [rsp+4Ch] [rbp-BCh] BYREF
  int v27; // [rsp+50h] [rbp-B8h] BYREF
  int v28; // [rsp+54h] [rbp-B4h] BYREF
  int v29; // [rsp+58h] [rbp-B0h] BYREF
  int v30; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v31; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v32; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v33; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v34; // [rsp+70h] [rbp-98h] BYREF
  __int64 v35; // [rsp+78h] [rbp-90h] BYREF
  __int64 v36; // [rsp+80h] [rbp-88h]
  __int64 v37; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v38; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v39; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v40; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v41; // [rsp+A8h] [rbp-60h] BYREF
  __m128i v42; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v43; // [rsp+C0h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+E8h] [rbp-20h] BYREF
  __int16 *v45; // [rsp+108h] [rbp+0h]
  __int64 v46; // [rsp+110h] [rbp+8h]
  int *v47; // [rsp+118h] [rbp+10h]
  __int64 v48; // [rsp+120h] [rbp+18h]
  unsigned __int64 *v49; // [rsp+128h] [rbp+20h]
  __int64 v50; // [rsp+130h] [rbp+28h]
  int *v51; // [rsp+138h] [rbp+30h]
  __int64 v52; // [rsp+140h] [rbp+38h]
  __int64 *v53; // [rsp+148h] [rbp+40h]
  __int64 v54; // [rsp+150h] [rbp+48h]
  unsigned __int64 *v55; // [rsp+158h] [rbp+50h]
  __int64 v56; // [rsp+160h] [rbp+58h]
  unsigned __int64 *v57; // [rsp+168h] [rbp+60h]
  __int64 v58; // [rsp+170h] [rbp+68h]
  unsigned __int64 *v59; // [rsp+178h] [rbp+70h]
  __int64 v60; // [rsp+180h] [rbp+78h]
  int *v61; // [rsp+188h] [rbp+80h]
  __int64 v62; // [rsp+190h] [rbp+88h]
  int *v63; // [rsp+198h] [rbp+90h]
  __int64 v64; // [rsp+1A0h] [rbp+98h]
  int *v65; // [rsp+1A8h] [rbp+A0h]
  __int64 v66; // [rsp+1B0h] [rbp+A8h]
  int *v67; // [rsp+1B8h] [rbp+B0h]
  __int64 v68; // [rsp+1C0h] [rbp+B8h]
  int *v69; // [rsp+1C8h] [rbp+C0h]
  __int64 v70; // [rsp+1D0h] [rbp+C8h]
  unsigned int *v71; // [rsp+1D8h] [rbp+D0h]
  __int64 v72; // [rsp+1E0h] [rbp+D8h]
  unsigned int *v73; // [rsp+1E8h] [rbp+E0h]
  __int64 v74; // [rsp+1F0h] [rbp+E8h]
  __m128i *v75; // [rsp+1F8h] [rbp+F0h]
  __int64 v76; // [rsp+200h] [rbp+F8h]
  __int64 *v77; // [rsp+208h] [rbp+100h]
  __int64 v78; // [rsp+210h] [rbp+108h]
  unsigned __int64 *v79; // [rsp+218h] [rbp+110h]
  __int64 v80; // [rsp+220h] [rbp+118h]
  unsigned __int64 *v81; // [rsp+228h] [rbp+120h]
  __int64 v82; // [rsp+230h] [rbp+128h]
  __int64 *v83; // [rsp+238h] [rbp+130h]
  __int64 v84; // [rsp+240h] [rbp+138h]

  LODWORD(v36) = 0;
  v35 = 0LL;
  v6 = 0;
  if ( !dword_140E07560 )
    return v6;
  v8 = 0x800000000000LL;
  if ( (qword_140E07570 & 0x800000000000LL) == 0
    || !byte_140F0F7AC
    || (qword_140E07578 & 0x800000000000LL) != qword_140E07578 )
  {
    return v6;
  }
  v9 = a1 - 2;
  if ( !v9 )
  {
    if ( a2 == 2 )
    {
      if ( (unsigned int)dword_140E0744C >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_9;
      if ( !dword_140E07448 )
        dword_140E07448 = TelemetryCoverageStringHashInternal(off_140E07440, &v22);
      v21 = &off_140E07440;
    }
    else
    {
      if ( (unsigned int)dword_140E07464 >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_9;
      if ( !dword_140E07460 )
        dword_140E07460 = TelemetryCoverageStringHashInternal(off_140E07458, &v22);
      v21 = &off_140E07458;
    }
    goto LABEL_86;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    switch ( a2 )
    {
      case 3:
        if ( (unsigned int)dword_140E0747C >= MEMORY[0xFFFFF7800000037C] )
          goto LABEL_9;
        if ( !dword_140E07478 )
          dword_140E07478 = TelemetryCoverageStringHashInternal(off_140E07470, &v22);
        v21 = &off_140E07470;
        break;
      case 4:
        if ( (unsigned int)dword_140E07494 >= MEMORY[0xFFFFF7800000037C] )
          goto LABEL_9;
        if ( !dword_140E07490 )
          dword_140E07490 = TelemetryCoverageStringHashInternal(off_140E07488, &v22);
        v21 = &off_140E07488;
        break;
      case 5:
        if ( (unsigned int)dword_140E074AC >= MEMORY[0xFFFFF7800000037C] )
          goto LABEL_9;
        if ( !dword_140E074A8 )
          dword_140E074A8 = TelemetryCoverageStringHashInternal(off_140E074A0, &v22);
        v21 = &off_140E074A0;
        break;
      case 6:
        if ( (unsigned int)dword_140E074C4 >= MEMORY[0xFFFFF7800000037C] )
          goto LABEL_9;
        if ( !dword_140E074C0 )
          dword_140E074C0 = TelemetryCoverageStringHashInternal(off_140E074B8, &v22);
        v21 = &off_140E074B8;
        break;
      default:
        if ( a2 == 8 && (unsigned int)dword_140E074DC < MEMORY[0xFFFFF7800000037C] )
        {
          if ( !dword_140E074D8 )
            dword_140E074D8 = TelemetryCoverageStringHashInternal(off_140E074D0, &v22);
          v21 = &off_140E074D0;
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
      if ( (unsigned int)dword_140E074F4 >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_9;
      if ( !dword_140E074F0 )
        dword_140E074F0 = TelemetryCoverageStringHashInternal(off_140E074E8, &v22);
      v21 = &off_140E074E8;
      goto LABEL_86;
    case 4:
      if ( (unsigned int)dword_140E0750C >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_9;
      if ( !dword_140E07508 )
        dword_140E07508 = TelemetryCoverageStringHashInternal(off_140E07500, &v22);
      v21 = &off_140E07500;
      goto LABEL_86;
    case 5:
      if ( (unsigned int)dword_140E07524 >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_9;
      if ( !dword_140E07520 )
        dword_140E07520 = TelemetryCoverageStringHashInternal(off_140E07518, &v22);
      v21 = &off_140E07518;
      goto LABEL_86;
    case 6:
      if ( (unsigned int)dword_140E0753C >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_9;
      if ( !dword_140E07538 )
        dword_140E07538 = TelemetryCoverageStringHashInternal(off_140E07530, &v22);
      v21 = &off_140E07530;
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
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopTelemetryOsState, v8, a3, a4);
  v6 = dword_140F0F7A8;
  if ( a1 != 5 || dword_140F0F770 == 1 || (unsigned int)(dword_140F0F770 - 4) <= 1 )
  {
    v16 = (MEMORY[0xFFFFF78000000008] - qword_140F0F788 - MEMORY[0xFFFFF780000003B0]) / 0x2710uLL;
    v17 = v16 - qword_140F0F798;
    v18 = (MEMORY[0xFFFFF78000000008] - qword_140F0F780) / 0x2710uLL;
    qword_140F0F798 = v16;
    v19 = v18 - qword_140F0F790;
    v22 = v18 - qword_140F0F790;
    v20 = v18 - qword_140F0F790;
    qword_140F0F790 = v18;
    if ( v17 <= v19 )
      v20 = v17;
    v34 = v20;
    v28 = ++dword_140F0F7A0;
    v26 = dword_140F0F770;
    v27 = dword_140F0F774;
    if ( a1 != 5 )
    {
      ++dword_140F0F7A4;
      dword_140F0F770 = a1;
      dword_140F0F774 = a2;
      if ( a1 == 1 || a1 == 4 )
        ++dword_140F0F7A8;
    }
    v6 = dword_140F0F7A8;
    v29 = dword_140F0F7A4;
    PopReleaseRwLock((struct _KTHREAD *)&PopTelemetryOsState);
    PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F10830, v11, v12, v13);
    v42 = (__m128i)xmmword_140F10840;
    v43 = xmmword_140F10840;
    PopReleaseRwLock((struct _KTHREAD *)&xmmword_140F10830);
    v14 = 0;
    v15 = _mm_cvtsi128_si32(_mm_srli_si128(v42, 8));
    if ( v15 )
      v14 = 100 * HIDWORD(v43) / v15;
    PopMeasureEnergyChange(&v35, &OsStateChangeEnergyCounter);
    v37 = qword_140F0F778;
    if ( (unsigned int)dword_140E07560 > 5
      && (qword_140E07570 & 0x800000000000LL) != 0
      && (qword_140E07578 & 0x800000000000LL) == qword_140E07578 )
    {
      v23 = a1;
      v45 = &v23;
      v47 = &v24;
      v38 = v22;
      v49 = &v38;
      v46 = 2LL;
      LOWORD(v24) = a2;
      v48 = 2LL;
      v50 = 8LL;
      v30 = MEMORY[0xFFFFF780000002C4];
      v51 = &v30;
      v53 = &v37;
      v39 = v34;
      v55 = &v39;
      v57 = &v40;
      v59 = &v41;
      LOWORD(v25) = v26;
      v61 = &v25;
      LOWORD(v26) = v27;
      v63 = &v26;
      v65 = &v28;
      v67 = &v29;
      v69 = &v27;
      v71 = &v31;
      v73 = &v32;
      v42.m128i_i64[0] = v36;
      v75 = &v42;
      LODWORD(v33) = v35;
      v77 = &v33;
      LODWORD(v34) = (unsigned __int8)v43;
      v79 = &v34;
      v52 = 4LL;
      v54 = 8LL;
      v56 = 8LL;
      v40 = v18;
      v58 = 8LL;
      v41 = v16;
      v60 = 8LL;
      v62 = 2LL;
      v64 = 2LL;
      v66 = 4LL;
      v68 = 4LL;
      v27 = v6;
      v70 = 4LL;
      v31 = v15;
      v72 = 4LL;
      v32 = v14;
      v74 = 4LL;
      v76 = 8LL;
      v78 = 4LL;
      v80 = 4LL;
      v83 = &v35;
      LODWORD(v22) = BYTE3(v43);
      v81 = &v22;
      v82 = 4LL;
      v35 = 0x1000000LL;
      v84 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07560,
        (unsigned __int8 *)&dword_14004B29C,
        0LL,
        0LL,
        0x16u,
        &v44);
    }
  }
  else
  {
    PopReleaseRwLock((struct _KTHREAD *)&PopTelemetryOsState);
  }
  return v6;
}
