/*
 * XREFs of PopDirectedDripsDiagRundownDevices @ 0x140B08D6C
 * Callers:
 *     PopDirectedDripsDiagNotifySessionStop @ 0x140B08A3C (PopDirectedDripsDiagNotifySessionStop.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x1407E2024 (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x1407E2090 (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 *     PopDirectedDripsDiagExtractDeviceDescription @ 0x1407E2218 (PopDirectedDripsDiagExtractDeviceDescription.c)
 *     PopDirectedDripsDiagFreeDeviceDiagnostic @ 0x1407E229C (PopDirectedDripsDiagFreeDeviceDiagnostic.c)
 *     PopDirectedDripsDiagSanitizeHardwareId @ 0x140B50E04 (PopDirectedDripsDiagSanitizeHardwareId.c)
 */

void PopDirectedDripsDiagRundownDevices()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  unsigned int v2; // r9d
  unsigned int v3; // edx
  unsigned int v4; // r8d
  unsigned int v5; // r8d
  int *v6; // rdi
  struct _LIST_ENTRY **v7; // rsi
  struct _LIST_ENTRY **v8; // r14
  struct _LIST_ENTRY **v9; // r15
  unsigned __int16 *v10; // r8
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // edx
  struct _LIST_ENTRY *v15; // rcx
  int v16; // edx
  struct _LIST_ENTRY *v17; // rcx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // edi
  _QWORD *v23; // r11
  int v24; // r8d
  _DWORD *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  char *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  _BYTE v35[4]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v36; // [rsp+4Ch] [rbp-BCh] BYREF
  int v37; // [rsp+50h] [rbp-B8h] BYREF
  int v38; // [rsp+54h] [rbp-B4h] BYREF
  int v39; // [rsp+58h] [rbp-B0h] BYREF
  int v40; // [rsp+5Ch] [rbp-ACh] BYREF
  int v41; // [rsp+60h] [rbp-A8h] BYREF
  int v42; // [rsp+64h] [rbp-A4h] BYREF
  int v43; // [rsp+68h] [rbp-A0h] BYREF
  int v44; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v45; // [rsp+70h] [rbp-98h] BYREF
  int v46; // [rsp+74h] [rbp-94h] BYREF
  struct _LIST_ENTRY **v47; // [rsp+78h] [rbp-90h] BYREF
  struct _LIST_ENTRY **v48; // [rsp+80h] [rbp-88h] BYREF
  struct _LIST_ENTRY **v49; // [rsp+88h] [rbp-80h] BYREF
  struct _LIST_ENTRY **v50; // [rsp+90h] [rbp-78h] BYREF
  struct _LIST_ENTRY **v51; // [rsp+98h] [rbp-70h] BYREF
  struct _LIST_ENTRY **v52; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v54; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+C8h] [rbp-40h] BYREF
  int *v57; // [rsp+E8h] [rbp-20h]
  __int64 v58; // [rsp+F0h] [rbp-18h]
  _DWORD *v59; // [rsp+F8h] [rbp-10h]
  __int64 v60; // [rsp+100h] [rbp-8h]
  struct _LIST_ENTRY *v61; // [rsp+108h] [rbp+0h]
  _DWORD v62[2]; // [rsp+110h] [rbp+8h] BYREF
  _DWORD *v63; // [rsp+118h] [rbp+10h]
  __int64 v64; // [rsp+120h] [rbp+18h]
  __int64 v65; // [rsp+128h] [rbp+20h]
  _DWORD v66[2]; // [rsp+130h] [rbp+28h] BYREF
  _DWORD *v67; // [rsp+138h] [rbp+30h]
  __int64 v68; // [rsp+140h] [rbp+38h]
  struct _LIST_ENTRY *v69; // [rsp+148h] [rbp+40h]
  _DWORD v70[2]; // [rsp+150h] [rbp+48h] BYREF
  _DWORD *v71; // [rsp+158h] [rbp+50h]
  __int64 v72; // [rsp+160h] [rbp+58h]
  struct _LIST_ENTRY *v73; // [rsp+168h] [rbp+60h]
  _DWORD v74[2]; // [rsp+170h] [rbp+68h] BYREF
  int *v75; // [rsp+178h] [rbp+70h]
  __int64 v76; // [rsp+180h] [rbp+78h]
  int *v77; // [rsp+188h] [rbp+80h]
  __int64 v78; // [rsp+190h] [rbp+88h]
  int *v79; // [rsp+198h] [rbp+90h]
  __int64 v80; // [rsp+1A0h] [rbp+98h]
  int *v81; // [rsp+1A8h] [rbp+A0h]
  __int64 v82; // [rsp+1B0h] [rbp+A8h]
  _DWORD *v83; // [rsp+1B8h] [rbp+B0h]
  __int64 v84; // [rsp+1C0h] [rbp+B8h]
  struct _LIST_ENTRY *v85; // [rsp+1C8h] [rbp+C0h]
  _DWORD v86[2]; // [rsp+1D0h] [rbp+C8h] BYREF
  __int64 *v87; // [rsp+1D8h] [rbp+D0h]
  __int64 v88; // [rsp+1E0h] [rbp+D8h]
  int *v89; // [rsp+1E8h] [rbp+E0h]
  __int64 v90; // [rsp+1F0h] [rbp+E8h]
  _DWORD *v91; // [rsp+1F8h] [rbp+F0h]
  __int64 v92; // [rsp+200h] [rbp+F8h]
  struct _LIST_ENTRY *v93; // [rsp+208h] [rbp+100h]
  _DWORD v94[2]; // [rsp+210h] [rbp+108h] BYREF
  __int64 *v95; // [rsp+218h] [rbp+110h]
  __int64 v96; // [rsp+220h] [rbp+118h]
  _QWORD v97[28]; // [rsp+228h] [rbp+120h] BYREF

  v35[0] = qword_140F0F5D0;
  v36 = 0;
  v47 = 0LL;
  v40 = 0;
  v48 = 0LL;
  v41 = 0;
  v49 = 0LL;
  v38 = 0;
  v52 = 0LL;
  v39 = 0;
  v50 = 0LL;
  v51 = 0LL;
  v53 = qword_140F0F5D0;
  while ( 1 )
  {
    v0 = *(_QWORD *)&PopDirectedDripsUmLock.ApcStateFill[40];
    if ( *(struct _KTHREAD **)&PopDirectedDripsUmLock.ApcStateFill[40] == (struct _KTHREAD *)&PopDirectedDripsUmLock.ApcStateFill[40] )
      break;
    if ( *(struct _KTHREAD **)(*(_QWORD *)&PopDirectedDripsUmLock.ApcStateFill[40] + 8LL) != (struct _KTHREAD *)&PopDirectedDripsUmLock.ApcStateFill[40]
      || (v1 = **(_QWORD **)&PopDirectedDripsUmLock.ApcStateFill[40],
          *(_QWORD *)(**(_QWORD **)&PopDirectedDripsUmLock.ApcStateFill[40] + 8LL) != *(_QWORD *)&PopDirectedDripsUmLock.ApcStateFill[40]) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)&PopDirectedDripsUmLock.ApcStateFill[40] = **(_QWORD **)&PopDirectedDripsUmLock.ApcStateFill[40];
    *(_QWORD *)(v1 + 8) = &PopDirectedDripsUmLock.ApcStateFill[40];
    v2 = 0;
    v36 = 0;
    v3 = 0;
    v4 = *(_DWORD *)(v0 + 156);
    if ( v4 )
    {
      PopDirectedDripsDiagCreateBlockerEntryULong((__int64)v97, (__int64)L"DFX Transition Count", v4);
      v2 = v36 + 1;
      v36 = v2;
      v3 = v2;
    }
    v5 = *(_DWORD *)(v0 + 160);
    if ( v5 )
    {
      PopDirectedDripsDiagCreateBlockerEntryULong((__int64)&v97[7 * v3], (__int64)L"PS4 Transition Count", v5);
      v2 = v36 + 1;
      v36 = v2;
      v3 = v2;
    }
    v6 = (int *)(v0 + 152);
    if ( *(_WORD *)(v0 + 152) )
    {
      PopDirectedDripsDiagCreateBlockerEntryBoolean((__int64)&v97[7 * v3], (__int64)L"Problem Device");
      v2 = v36 + 1;
      v36 = v2;
      v3 = v2;
    }
    if ( (*v6 & 0x10000) != 0 )
    {
      PopDirectedDripsDiagCreateBlockerEntryBoolean((__int64)&v97[7 * v3], (__int64)L"Initiated PS4 Transition");
      v2 = ++v36;
    }
    if ( (*v6 & 0x40000) != 0 )
    {
      PopDirectedDripsDiagExtractDeviceDescription((struct _LIST_ENTRY **)v0, &v49, &v52, &v47, &v48, &v50, &v51);
      PopDirectedDripsDiagSanitizeHardwareId(v0 + 64);
      v7 = v47;
      v8 = v48;
      v9 = v49;
      if ( (unsigned int)dword_140FD58E0 > 5 && tlgKeywordOn((__int64)&dword_140FD58E0, 0x400000000000LL) )
      {
        LOBYTE(v37) = v35[0];
        v57 = &v37;
        v58 = 1LL;
        v11 = *(unsigned __int16 *)v9;
        v61 = v9[1];
        v63 = v66;
        v65 = *((_QWORD *)v10 + 1);
        v66[0] = *v10;
        v59 = v62;
        v60 = 2LL;
        v62[0] = v11;
        v62[1] = 0;
        v64 = 2LL;
        v66[1] = 0;
        v12 = *(unsigned __int16 *)v7;
        v69 = v7[1];
        v67 = v70;
        v70[0] = v12;
        v68 = 2LL;
        v70[1] = 0;
        v13 = *(unsigned __int16 *)v8;
        v73 = v8[1];
        v42 = *(_DWORD *)(v0 + 148);
        v75 = &v42;
        v43 = *(_DWORD *)(v0 + 156);
        v77 = &v43;
        v44 = *(_DWORD *)(v0 + 160);
        v79 = &v44;
        v45 = *v6;
        v81 = &v45;
        v71 = v74;
        v72 = 2LL;
        v74[0] = v13;
        v74[1] = 0;
        v76 = 4LL;
        v78 = 4LL;
        v80 = 4LL;
        v82 = 4LL;
        v14 = *(unsigned __int16 *)v50;
        v15 = v50[1];
        v83 = v86;
        v54 = v53;
        v87 = &v54;
        v46 = *(_DWORD *)(v0 + 24);
        v89 = &v46;
        v84 = 2LL;
        v85 = v15;
        v86[0] = v14;
        v86[1] = 0;
        v88 = 8LL;
        v90 = 4LL;
        v16 = *(unsigned __int16 *)v51;
        v17 = v51[1];
        v91 = v94;
        v93 = v17;
        v95 = &v55;
        v94[0] = v16;
        v92 = 2LL;
        v94[1] = 0;
        v55 = 0x1000000LL;
        v96 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140FD58E0,
          (unsigned __int8 *)&byte_14004FBFF,
          0LL,
          0LL,
          0x16u,
          &v56);
      }
      if ( byte_140E67628
        && EtwEventEnabled(
             *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
             &POP_ETW_EVENT_DIRECTED_DRIPS_DEVICE_STATS) )
      {
        PopDirectedDripsUmLock.IoSelfBoostsEntry.Next = (struct _SINGLE_LIST_ENTRY *)v35;
        *(_QWORD *)PopDirectedDripsUmLock.PriorityFloorCounts = 1LL;
        *(_QWORD *)&PopDirectedDripsUmLock.PriorityFloorCounts[8] = v0 + 16;
        *(_QWORD *)&PopDirectedDripsUmLock.PriorityFloorCounts[16] = 8LL;
        v38 = *(unsigned __int16 *)v9 >> 1;
        *(_QWORD *)&PopDirectedDripsUmLock.PriorityFloorCounts[24] = &v38;
        *(_QWORD *)&PopDirectedDripsUmLock.PriorityFloorSummary = 4LL;
        v18 = *(unsigned __int16 *)v9;
        *(_QWORD *)&PopDirectedDripsUmLock.AbCompletedIoQoSBoostCount = v9[1];
        PopDirectedDripsUmLock.ForegroundLossTime = v18;
        *(&PopDirectedDripsUmLock.ForegroundLossTime + 1) = 0;
        v39 = *(unsigned __int16 *)v52 >> 1;
        PopDirectedDripsUmLock.GlobalForegroundListEntry.Flink = (struct _LIST_ENTRY *)&v39;
        PopDirectedDripsUmLock.InGlobalForegroundList = 4LL;
        v19 = *(unsigned __int16 *)v52;
        PopDirectedDripsUmLock.ReadOperationCount = (__int64)v52[1];
        PopDirectedDripsUmLock.WriteOperationCount = v19;
        v40 = *(unsigned __int16 *)v7 >> 1;
        PopDirectedDripsUmLock.OtherOperationCount = (__int64)&v40;
        PopDirectedDripsUmLock.ReadTransferCount = 4LL;
        v20 = *(unsigned __int16 *)v7;
        PopDirectedDripsUmLock.WriteTransferCount = (__int64)v7[1];
        PopDirectedDripsUmLock.OtherTransferCount = v20;
        v41 = *(unsigned __int16 *)v8 >> 1;
        PopDirectedDripsUmLock.QueuedScb = (_KSCB *)&v41;
        *(_QWORD *)&PopDirectedDripsUmLock.ThreadTimerDelay = 4LL;
        v21 = *(unsigned __int16 *)v8;
        PopDirectedDripsUmLock.TracingPrivate[0] = (unsigned __int64)v8[1];
        PopDirectedDripsUmLock.AbWaitObject = (void *volatile)(v0 + 148);
        PopDirectedDripsUmLock.SchedulerAssist = (void *)v21;
        *(_QWORD *)&PopDirectedDripsUmLock.ReservedPreviousReadyTimeValue = 4LL;
        PopDirectedDripsUmLock.KernelWaitTime = v0 + 156;
        PopDirectedDripsUmLock.UserWaitTime = 4LL;
        PopDirectedDripsUmLock.GlobalUpdateVpThreadPriorityListEntry.Flink = (struct _LIST_ENTRY *)(v0 + 160);
        PopDirectedDripsUmLock.InGlobalUpdateVpThreadPriorityList = 4LL;
        *(_QWORD *)&PopDirectedDripsUmLock.SchedulerAssistPriorityFloor = v0 + 152;
        PopDirectedDripsUmLock.KernelShadowStack = (void *)4;
        EtwWrite(
          *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
          &POP_ETW_EVENT_DIRECTED_DRIPS_DEVICE_STATS,
          0LL,
          0xEu,
          (PEVENT_DATA_DESCRIPTOR)&PopDirectedDripsUmLock.IoSelfBoostsEntry);
      }
      v2 = v36;
    }
    if ( byte_140E6760C && v2 )
    {
      v22 = 0;
      v23 = v97;
      do
      {
        v24 = 5 * v22++;
        v25 = v23 + 2;
        v26 = 2LL * (unsigned int)(v24 + 2);
        v27 = 2LL * (unsigned int)(v24 + 3);
        *((_QWORD *)&PopDirectedDripsUmLock.IoSelfBoostsEntry.Next + v26) = v0 + 32;
        *(_QWORD *)&PopDirectedDripsUmLock.PriorityFloorCounts[8 * v26] = 16LL;
        v28 = v23[1];
        *((_QWORD *)&PopDirectedDripsUmLock.IoSelfBoostsEntry.Next + v27) = v23;
        *(_QWORD *)&PopDirectedDripsUmLock.PriorityFloorCounts[8 * v27] = 4LL;
        v29 = 2LL * (unsigned int)(v24 + 4);
        *((_QWORD *)&PopDirectedDripsUmLock.IoSelfBoostsEntry.Next + v29) = v28;
        LODWORD(v28) = *(_DWORD *)v23;
        *(_DWORD *)&PopDirectedDripsUmLock.PriorityFloorCounts[8 * v29 + 4] = 0;
        *(_DWORD *)&PopDirectedDripsUmLock.PriorityFloorCounts[8 * v29] = 2 * v28;
        v30 = (char *)v23 + 20;
        v23 += 7;
        v31 = 2LL * (unsigned int)(v24 + 5);
        *((_QWORD *)&PopDirectedDripsUmLock.IoSelfBoostsEntry.Next + v31) = v25;
        *(_QWORD *)&PopDirectedDripsUmLock.PriorityFloorCounts[8 * v31] = 4LL;
        v32 = 2LL * (unsigned int)(v24 + 6);
        *((_QWORD *)&PopDirectedDripsUmLock.IoSelfBoostsEntry.Next + v32) = v30;
        *(_QWORD *)&PopDirectedDripsUmLock.PriorityFloorCounts[8 * v32] = (unsigned int)(2 * *v25);
      }
      while ( v22 < v2 );
      *(_QWORD *)PopDirectedDripsUmLock.PriorityFloorCounts = 1LL;
      PopDirectedDripsUmLock.IoSelfBoostsEntry.Next = (struct _SINGLE_LIST_ENTRY *)v35;
      v33 = 2LL * (unsigned int)(v24 + 7);
      *(_QWORD *)&PopDirectedDripsUmLock.PriorityFloorCounts[16] = 4LL;
      *(_QWORD *)&PopDirectedDripsUmLock.PriorityFloorCounts[8] = &v36;
      *((_QWORD *)&PopDirectedDripsUmLock.IoSelfBoostsEntry.Next + v33) = &v53;
      *(_QWORD *)&PopDirectedDripsUmLock.PriorityFloorCounts[8 * v33] = 8LL;
      EtwWrite(
        qword_140F0F5D8,
        &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA,
        0LL,
        5 * v2 + 3,
        (PEVENT_DATA_DESCRIPTOR)&PopDirectedDripsUmLock.IoSelfBoostsEntry);
    }
    v34 = *(_QWORD *)(v0 + 16);
    if ( v34 )
    {
      *(_QWORD *)(v34 + 776) = 0LL;
      *(_QWORD *)(v0 + 16) = 0LL;
    }
    PopDirectedDripsDiagFreeDeviceDiagnostic((_QWORD *)v0);
  }
}
