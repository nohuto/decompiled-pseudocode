/*
 * XREFs of NtTraceControl @ 0x1409186E0
 * Callers:
 *     DifNtTraceControlWrapper @ 0x1406933B0 (DifNtTraceControlWrapper.c)
 *     PerfDiagpProxyWorker @ 0x140825080 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14082538C (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14091851C (PerfDiagpSaveActiveDCLLogFileName.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentThreadProcessId @ 0x14044EE20 (PsGetCurrentThreadProcessId.c)
 *     EtwpCreateActivityId @ 0x1404604EC (EtwpCreateActivityId.c)
 *     EtwpQueryUsedProcessorCount @ 0x140482564 (EtwpQueryUsedProcessorCount.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x140523420 (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     EtwpTransitionToRealtime @ 0x1405311FC (EtwpTransitionToRealtime.c)
 *     WdiUpdateSem @ 0x140535024 (WdiUpdateSem.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     EtwpGetPmcOwnership @ 0x1406C7694 (EtwpGetPmcOwnership.c)
 *     EtwpGetPmcSessions @ 0x1406C7840 (EtwpGetPmcSessions.c)
 *     EtwpGetCompressionSettings @ 0x1406CC1E4 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1406CC3F4 (EtwpSetCompressionSettings.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     EtwpIncrementTraceFile @ 0x14077E0A0 (EtwpIncrementTraceFile.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     EtwpTrackProviderBinary @ 0x14082EB48 (EtwpTrackProviderBinary.c)
 *     EtwpUseDescriptorTypeUm @ 0x14082F1A4 (EtwpUseDescriptorTypeUm.c)
 *     EtwpQueryReferenceTime @ 0x14082F230 (EtwpQueryReferenceTime.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x140832DA4 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpQuerySessionDemuxObject @ 0x1408330A4 (EtwpQuerySessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x140833120 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x140833450 (EtwpUpdatePeriodicCaptureState.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     EtwpGetTraceGuidInfo @ 0x140911A40 (EtwpGetTraceGuidInfo.c)
 *     EtwpGetGuidList @ 0x140912440 (EtwpGetGuidList.c)
 *     EtwpEnumerateTraceGuids @ 0x14091379C (EtwpEnumerateTraceGuids.c)
 *     EtwpNotifyGuid @ 0x140913FD4 (EtwpNotifyGuid.c)
 *     EtwpGetTraceGroupInfo @ 0x140914ED0 (EtwpGetTraceGroupInfo.c)
 *     EtwpAddNotificationEvent @ 0x140915480 (EtwpAddNotificationEvent.c)
 *     EtwpSetProviderBinaryTracking @ 0x140917AE8 (EtwpSetProviderBinaryTracking.c)
 *     EtwpSetProviderTraitsUm @ 0x140918FB0 (EtwpSetProviderTraitsUm.c)
 *     EtwpReleaseLoggerContext @ 0x1409194B8 (EtwpReleaseLoggerContext.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpQueryTrace @ 0x140979CA0 (EtwpQueryTrace.c)
 *     EtwpValidateLoggerInfo @ 0x140979D9C (EtwpValidateLoggerInfo.c)
 *     EtwpReceiveNotification @ 0x140A74080 (EtwpReceiveNotification.c)
 *     EtwpSendReplyDataBlock @ 0x140A8BA40 (EtwpSendReplyDataBlock.c)
 *     EtwpUpdateTrace @ 0x140AB081C (EtwpUpdateTrace.c)
 *     EtwpStartTrace @ 0x140AB0EB0 (EtwpStartTrace.c)
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x140AB2B48 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpStopTrace @ 0x140AB2D10 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x140AB2FD0 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x140AB34A8 (EtwpRealtimeConnect.c)
 *     WdiDispatchControl @ 0x140AD5C98 (WdiDispatchControl.c)
 *     EtwpEnableGuid @ 0x140AD6AB8 (EtwpEnableGuid.c)
 *     EtwpGetTraceGuidList @ 0x140ADDEB4 (EtwpGetTraceGuidList.c)
 *     EtwpUpdateDisallowList @ 0x140AE1434 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x140AFFB84 (EtwpGetDisallowList.c)
 *     EtwpReceiveReplyDataBlock @ 0x140B0F318 (EtwpReceiveReplyDataBlock.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtTraceControl(
        ETWTRACECONTROLCODE FunctionCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  unsigned __int64 v7; // r13
  ULONG *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  PVOID v11; // r9
  volatile void *v12; // r10
  struct _LIST_ENTRY *Flink; // r12
  NTSTATUS PrivateSessionTraceHandle; // ebx
  unsigned int v15; // eax
  ULONG v16; // r15d
  int ULongFromUser; // eax
  int v18; // eax
  ULONG *Pool2; // rax
  unsigned int *v20; // rcx
  NTSTATUS PmcOwnership; // eax
  char v22; // r14
  PVOID v23; // r12
  __int64 v24; // rcx
  NTSTATUS started; // eax
  NTSTATUS GuidList; // eax
  __int64 v28; // r8
  unsigned int *v29; // r9
  __int64 v30; // r8
  unsigned int v31; // edx
  unsigned int v32; // eax
  NTSTATUS v33; // eax
  NTSTATUS v34; // eax
  unsigned int v35; // eax
  char *v36; // r9
  __int64 Blink_low; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  char PreviousMode; // [rsp+30h] [rbp-78h]
  struct _KLOCK_ENTRIES Size; // [rsp+34h] [rbp-74h] BYREF

  v7 = (unsigned int)FunctionCode;
  v8 = 0LL;
  *(_QWORD *)&Size.Entries[0].Reserved[3] = 0LL;
  LODWORD(Size.Thread) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  BYTE4(Size.Thread) = PreviousMode;
  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  *(_QWORD *)&Size.Entries[0].SpareFlags = Flink;
  PrivateSessionTraceHandle = 0;
  LOBYTE(Size.AvailableEntryBitmap) = 0;
  if ( (_BYTE)v9 )
  {
    *(_DWORD *)&Size.AvailableEntryBitmap = (unsigned int)v7 >> 31;
    v15 = v7 & 0x7FFFFFFF;
    if ( (v7 & 0x80000000) == 0LL )
      v15 = v7;
    v7 = v15;
    if ( v12 )
    {
      ProbeForRead(v12, InputBufferLength, 1u);
      v11 = OutputBuffer;
    }
    else
    {
      InputBufferLength = 0;
    }
    if ( v11 )
    {
      v16 = OutputBufferLength;
      ProbeForWrite(v11, OutputBufferLength, 1u);
    }
    else
    {
      v16 = 0;
    }
    if ( !ReturnLength )
    {
      PrivateSessionTraceHandle = -1073741811;
      *(_DWORD *)&Size.EntryCount = -1073741811;
      goto LABEL_52;
    }
    ULongFromUser = RtlReadULongFromUser(ReturnLength);
    RtlWriteULongToUser(ReturnLength, ULongFromUser);
  }
  else
  {
    v16 = OutputBufferLength;
  }
  if ( ((unsigned int)v7 > 0x1B || (v18 = 134238208, !_bittest(&v18, v7))) && (InputBufferLength || v16) )
  {
    Pool2 = (ULONG *)ExAllocatePool2(0x101uLL);
    v8 = Pool2;
    *(_QWORD *)&Size.Entries[0].Reserved[3] = Pool2;
    if ( !Pool2 )
    {
      PrivateSessionTraceHandle = -1073741801;
      goto LABEL_52;
    }
    v20 = (unsigned int *)InputBuffer;
    if ( InputBuffer )
    {
      if ( PreviousMode )
        RtlCopyFromUser(Pool2, InputBuffer, InputBufferLength);
      else
        RtlCopyVolatileMemory(Pool2, InputBuffer, InputBufferLength);
      v20 = (unsigned int *)InputBuffer;
    }
  }
  else
  {
    v20 = (unsigned int *)InputBuffer;
  }
  if ( (unsigned int)v7 > 0x19 )
  {
    if ( (unsigned int)v7 > 0x25 )
    {
      if ( (unsigned int)v7 <= 0x2B )
      {
        switch ( (_DWORD)v7 )
        {
          case '+':
            v22 = PreviousMode;
            v23 = OutputBuffer;
            if ( v16 < 4 )
            {
              PrivateSessionTraceHandle = -1073741811;
            }
            else
            {
              *v8 = EtwpMaxPmcCounter;
              LODWORD(Size.Thread) = 4;
              PrivateSessionTraceHandle = 0;
            }
            goto LABEL_33;
          case '&':
            if ( InputBufferLength >= 8 && (InputBufferLength & 7) == 0 && v16 >= 2 )
            {
              WORD2(Size.Thread) = 0;
              PrivateSessionTraceHandle = EtwpGetPrivateSessionTraceHandle(
                                            v8,
                                            InputBufferLength >> 3,
                                            (unsigned __int16 *)&Size.Thread + 2);
              if ( !PrivateSessionTraceHandle )
              {
                LODWORD(Size.Thread) = 2;
                *(_WORD *)v8 = WORD2(Size.Thread);
              }
              goto LABEL_31;
            }
            goto LABEL_149;
          case '\'':
            if ( InputBufferLength >= 2 && v16 >= 8 )
            {
              PrivateSessionTraceHandle = EtwpRegisterPrivateSession((__int64)Flink, *(_WORD *)v8, (_WORD *)v8 + 2, v8);
              if ( !PrivateSessionTraceHandle )
                LODWORD(Size.Thread) = 8;
              goto LABEL_31;
            }
            goto LABEL_149;
          case '(':
            if ( InputBufferLength >= 8 && v16 >= 2 )
            {
              PrivateSessionTraceHandle = EtwpQuerySessionDemuxObject(*(void **)v8, v8);
              if ( !PrivateSessionTraceHandle )
                LODWORD(Size.Thread) = 2;
              goto LABEL_31;
            }
            goto LABEL_149;
          case ')':
            if ( InputBufferLength >= 8 )
            {
              PmcOwnership = EtwpSetProviderBinaryTracking((__int64)Flink, *v8, *((_BYTE *)v8 + 4));
              goto LABEL_30;
            }
            goto LABEL_149;
        }
        v22 = PreviousMode;
        if ( v16 >= 4 )
        {
          *v8 = (ULONG)Flink[1].Flink;
          LODWORD(Size.Thread) = 4;
          PrivateSessionTraceHandle = 0;
          goto LABEL_32;
        }
        goto LABEL_183;
      }
      switch ( (_DWORD)v7 )
      {
        case ',':
          if ( InputBufferLength == 8 && v16 >= 4 )
          {
            Blink_low = *(unsigned __int16 *)v8;
            if ( (_DWORD)Blink_low == 0xFFFF )
              Blink_low = LOBYTE(Flink[281].Blink);
            v38 = EtwpAcquireLoggerContextByLoggerId(Flink, Blink_low, 0LL);
            if ( v38 )
            {
              LODWORD(Size.Thread) = 4;
              *v8 = EtwpQueryUsedProcessorCount(v38);
              EtwpReleaseLoggerContext(v39, 0LL);
              goto LABEL_31;
            }
          }
          goto LABEL_149;
        case '-':
          LODWORD(Size.Thread) = v16;
          PmcOwnership = EtwpGetPmcOwnership(v8, (unsigned int *)&Size);
          goto LABEL_30;
        case '.':
          LODWORD(Size.Thread) = v16;
          PmcOwnership = EtwpGetPmcSessions((__int64)v8, (unsigned int *)&Size);
          goto LABEL_30;
      }
      if ( (_DWORD)v7 != 47 || !(unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline() )
        goto LABEL_236;
    }
    else
    {
      if ( (_DWORD)v7 == 37 )
      {
        if ( InputBufferLength < 0xC )
          goto LABEL_149;
        v30 = *((unsigned __int16 *)v8 + 4);
        if ( (unsigned __int16)v30 > 0x10u )
          goto LABEL_149;
        v31 = v8[1];
        if ( v31 )
        {
          if ( v31 < 5 )
            goto LABEL_149;
        }
        if ( (_WORD)v30 )
        {
          if ( !v31 )
            goto LABEL_149;
        }
        else if ( v31 )
        {
          goto LABEL_149;
        }
        if ( 16 * v30 + 12 == InputBufferLength )
        {
          v36 = 0LL;
          if ( (_WORD)v30 )
            v36 = (char *)(v8 + 3);
          PmcOwnership = EtwpUpdatePeriodicCaptureState(*v8, v31, v30, v36);
          goto LABEL_30;
        }
        goto LABEL_149;
      }
      if ( (unsigned int)v7 > 0x20 )
      {
        switch ( (_DWORD)v7 )
        {
          case '!':
            if ( InputBufferLength == 16 )
            {
              LODWORD(Size.Thread) = v16;
              PmcOwnership = EtwpGetTraceGroupInfo(
                               *(__int64 *)&Size.Entries[0].SpareFlags,
                               v8,
                               v8,
                               (unsigned int *)&Size);
              goto LABEL_30;
            }
            break;
          case '"':
            if ( InputBufferLength == 8 )
            {
              LODWORD(Size.Thread) = v16;
              PmcOwnership = EtwpGetDisallowList(Flink, v8, v8, &Size);
              goto LABEL_30;
            }
            break;
          case '#':
            if ( InputBufferLength == 16 && !v16 )
            {
              PmcOwnership = EtwpSetCompressionSettings(v8);
              goto LABEL_30;
            }
            break;
          default:
            if ( InputBufferLength == 8 && v16 == 16 )
            {
              LODWORD(Size.Thread) = 16;
              PmcOwnership = EtwpGetCompressionSettings((unsigned __int16 *)v8, v8);
              goto LABEL_30;
            }
            break;
        }
        goto LABEL_149;
      }
      if ( (_DWORD)v7 == 32 )
      {
        GuidList = EtwpGetGuidList(
                     (__int64)Flink,
                     2u,
                     (__int64)v8,
                     (struct _KLOCK_ENTRIES *)(v16 >> 4),
                     (unsigned int *)&Size);
        goto LABEL_133;
      }
      if ( (_DWORD)v7 != 26 )
      {
        if ( (_DWORD)v7 != 27 )
        {
          switch ( (_DWORD)v7 )
          {
            case 0x1C:
              if ( InputBufferLength >= 8 )
              {
                v28 = v8[1];
                if ( 16 * v28 + 8 == InputBufferLength )
                {
                  v29 = 0LL;
                  if ( (_DWORD)v28 )
                    v29 = v8 + 2;
                  PmcOwnership = EtwpUpdateDisallowList(Flink, *v8, v28, v29);
                  goto LABEL_30;
                }
              }
              goto LABEL_149;
            case 0x1E:
              if ( InputBufferLength == 24 && v16 - 120 <= 0xFF88 )
              {
                PmcOwnership = EtwpSetProviderTraitsUm((_DWORD)v8, v16, (unsigned int)&Size);
                goto LABEL_30;
              }
              goto LABEL_149;
            case 0x1F:
              if ( InputBufferLength == 16 && !v16 )
              {
                PmcOwnership = EtwpUseDescriptorTypeUm((__int64)v8);
                goto LABEL_30;
              }
              goto LABEL_149;
          }
          goto LABEL_236;
        }
        if ( InputBufferLength == 4 )
        {
          v22 = PreviousMode;
          if ( PreviousMode )
            v35 = RtlReadULongFromUser(v20);
          else
            v35 = *v20;
          *(_RTL_BALANCED_NODE **)((char *)&Size.Entries[0].TreeNode.Children[1] + 4) = (_RTL_BALANCED_NODE *)v35;
          if ( v35 )
          {
            v33 = EtwpAddNotificationEvent((void *)v35, Size.AvailableEntryBitmap);
            goto LABEL_158;
          }
        }
        else
        {
          v22 = PreviousMode;
        }
LABEL_183:
        PrivateSessionTraceHandle = -1073741811;
        goto LABEL_32;
      }
    }
    if ( InputBufferLength == 8 )
    {
      PmcOwnership = EtwpTrackProviderBinary((__int64)Flink, (void **)v8, (_DWORD)v7 == 47);
      goto LABEL_30;
    }
    goto LABEL_149;
  }
  if ( (_DWORD)v7 == 25 )
  {
    if ( InputBufferLength == 4 && v16 == 16 )
    {
      PrivateSessionTraceHandle = EtwpQueryReferenceTime(*(__int64 *)&Size.Entries[0].SpareFlags, *v8, v8);
      LODWORD(Size.Thread) = 16;
      goto LABEL_31;
    }
    goto LABEL_149;
  }
  if ( (unsigned int)v7 <= 0xE )
  {
    if ( (_DWORD)v7 != 14 )
    {
      if ( (unsigned int)v7 <= 6 )
      {
        if ( (_DWORD)v7 == 6 || (_DWORD)v7 == 1 || (_DWORD)v7 == 2 || (_DWORD)v7 == 3 || (unsigned int)(v7 - 4) < 2 )
        {
LABEL_59:
          if ( InputBufferLength < 0xB0 || v16 < 0xB0 )
          {
            PrivateSessionTraceHandle = -1073741306;
          }
          else
          {
            PrivateSessionTraceHandle = EtwpValidateLoggerInfo(v8, v9, v10, v11);
            if ( PrivateSessionTraceHandle >= 0 )
              PrivateSessionTraceHandle = InputBufferLength < *v8 ? 0xC0000206 : 0;
          }
          if ( PrivateSessionTraceHandle < 0 )
            goto LABEL_31;
          switch ( (_DWORD)v7 )
          {
            case 1:
              *((_QWORD *)v8 + 10) = LOBYTE(Size.AvailableEntryBitmap) | *((_QWORD *)v8 + 10) & 0xFFFFFFFFFFFFFFFEuLL;
              started = EtwpStartTrace(Flink, v8);
              break;
            case 2:
              started = EtwpStopTrace(Flink, v8, 0LL);
              break;
            case 3:
              started = EtwpQueryTrace(Flink, v8);
              break;
            case 4:
              started = EtwpUpdateTrace(Flink, v8);
              break;
            case 5:
              started = EtwpFlushTrace(Flink, v8);
              break;
            case 6:
              started = EtwpIncrementTraceFile((__int64)Flink, (__int64)v8, v10);
              break;
            case 7:
              started = EtwpTransitionToRealtime((__int64)Flink, (__int64)v8, v10);
              break;
            default:
              goto LABEL_69;
          }
          PrivateSessionTraceHandle = started;
LABEL_69:
          LODWORD(Size.Thread) = 176;
          goto LABEL_31;
        }
      }
      else
      {
        switch ( (_DWORD)v7 )
        {
          case 7:
            goto LABEL_59;
          case 0xB:
            if ( InputBufferLength == 96 && v16 == 96 )
            {
              PrivateSessionTraceHandle = EtwpRealtimeConnect(v8);
              LODWORD(Size.Thread) = 96;
              goto LABEL_31;
            }
            goto LABEL_149;
          case 0xC:
            if ( v16 == 16 )
            {
              PrivateSessionTraceHandle = 0;
              v22 = PreviousMode;
              v23 = OutputBuffer;
              EtwpCreateActivityId((signed __int64 *)OutputBuffer, PreviousMode);
              goto LABEL_33;
            }
            goto LABEL_149;
          case 0xD:
            if ( InputBufferLength == 48 && !v16 )
            {
              PmcOwnership = WdiDispatchControl(v8);
              goto LABEL_30;
            }
            goto LABEL_149;
        }
      }
LABEL_236:
      PrivateSessionTraceHandle = -1073741808;
      goto LABEL_31;
    }
    if ( InputBufferLength != 8 || v16 )
      goto LABEL_149;
    v22 = PreviousMode;
    if ( PreviousMode )
      v32 = RtlReadULongFromUser(v20);
    else
      v32 = *v20;
    *(_RTL_BALANCED_NODE **)((char *)Size.Entries[0].TreeNode.Children + 4) = (_RTL_BALANCED_NODE *)v32;
    v33 = EtwpRealtimeDisconnectConsumerByHandle();
LABEL_158:
    PrivateSessionTraceHandle = v33;
    goto LABEL_32;
  }
  if ( (unsigned int)v7 <= 0x14 )
  {
    switch ( (_DWORD)v7 )
    {
      case 0x14:
        if ( !InputBufferLength && !v16 )
        {
          PmcOwnership = WdiUpdateSem();
          goto LABEL_30;
        }
        break;
      case 0xF:
        if ( InputBufferLength == 160 && v16 - 160 <= 0xFF60 )
        {
          PmcOwnership = EtwpRegisterUMProvider((__int64)Flink, (__int64)v8, v16, Size.AvailableEntryBitmap, &Size);
          goto LABEL_30;
        }
        break;
      case 0x10:
        if ( !InputBufferLength && v16 - 72 <= 0xFFB8 )
        {
          PmcOwnership = EtwpReceiveNotification(v8);
          goto LABEL_30;
        }
        break;
      case 0x11:
        if ( InputBufferLength < 0x48 || v16 != 72 || v8[1] != InputBufferLength )
          break;
        if ( *v8 == 3 )
        {
          if ( InputBufferLength < 0x78 )
            break;
          LOBYTE(v10) = 1;
          v34 = EtwpEnableGuid(Flink, v8, v10);
        }
        else
        {
          v34 = EtwpNotifyGuid((__int64)Flink, (__int64)v8, 1);
        }
        PrivateSessionTraceHandle = v34;
        LODWORD(Size.Thread) = 72;
        goto LABEL_31;
      case 0x12:
        if ( InputBufferLength >= 0x48 && v8[1] == InputBufferLength )
        {
          v8[9] = PsGetCurrentThreadProcessId();
          PmcOwnership = EtwpSendReplyDataBlock(v8);
          goto LABEL_30;
        }
        break;
      default:
        if ( InputBufferLength == 8 )
        {
          *(_DWORD *)&Size.AvailableEntryBitmap = 0;
          PrivateSessionTraceHandle = EtwpReceiveReplyDataBlock(v8);
          LODWORD(Size.Thread) = 0;
          goto LABEL_31;
        }
        break;
    }
LABEL_149:
    PrivateSessionTraceHandle = -1073741811;
    goto LABEL_31;
  }
  if ( (_DWORD)v7 == 21 )
  {
    GuidList = EtwpGetTraceGuidList(Flink, v8, v16 >> 4, &Size);
LABEL_133:
    PrivateSessionTraceHandle = GuidList;
    LODWORD(Size.Thread) *= 16;
    goto LABEL_31;
  }
  if ( (_DWORD)v7 != 22 )
  {
    if ( (_DWORD)v7 == 23 )
    {
      PrivateSessionTraceHandle = EtwpEnumerateTraceGuids((__int64)Flink, (__int64)v8, v16 / 0x24, &Size);
      LODWORD(Size.Thread) *= 36;
      goto LABEL_31;
    }
    if ( !InputBufferLength && !v16 )
    {
      if ( LODWORD(Flink[271].Blink) )
      {
        PrivateSessionTraceHandle = -1073741790;
      }
      else
      {
        LODWORD(Flink[271].Blink) = PsGetCurrentThreadProcessId();
        PrivateSessionTraceHandle = 0;
      }
      goto LABEL_31;
    }
    goto LABEL_149;
  }
  if ( InputBufferLength != 16 )
    goto LABEL_149;
  LODWORD(Size.Thread) = v16;
  PmcOwnership = EtwpGetTraceGuidInfo(*(__int64 *)&Size.Entries[0].SpareFlags, (__int64)v8, v8, (unsigned int *)&Size);
LABEL_30:
  PrivateSessionTraceHandle = PmcOwnership;
LABEL_31:
  v22 = PreviousMode;
LABEL_32:
  v23 = OutputBuffer;
LABEL_33:
  if ( PrivateSessionTraceHandle >= 0 )
  {
    if ( LODWORD(Size.Thread) )
    {
      if ( LODWORD(Size.Thread) > v16 )
      {
        PrivateSessionTraceHandle = -1073741789;
        *(_DWORD *)&Size.EntryCount = -1073741789;
      }
      else if ( v22 )
      {
        RtlCopyToUser(v23, v8, LODWORD(Size.Thread));
      }
      else
      {
        RtlCopyVolatileMemory(v23, v8, LODWORD(Size.Thread));
      }
    }
    if ( v22 )
      RtlWriteULongToUser(ReturnLength, (int)Size.Thread);
    else
      *ReturnLength = (ULONG)Size.Thread;
  }
  if ( PrivateSessionTraceHandle == -1073741789 && ((unsigned int)(v7 - 15) <= 1 || (unsigned int)(v7 - 21) <= 1)
    || (unsigned int)v7 <= 0x2E && (v24 = 0x41D700880000LL, _bittest64(&v24, v7)) )
  {
    if ( v22 )
      RtlWriteULongToUser(ReturnLength, (int)Size.Thread);
    else
      *ReturnLength = (ULONG)Size.Thread;
  }
LABEL_52:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return PrivateSessionTraceHandle;
}
