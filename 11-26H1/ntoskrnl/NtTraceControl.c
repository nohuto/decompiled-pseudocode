/*
 * XREFs of NtTraceControl @ 0x14093CB40
 * Callers:
 *     DifNtTraceControlWrapper @ 0x14068F7D0 (DifNtTraceControlWrapper.c)
 *     PerfDiagpProxyWorker @ 0x14081EE70 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14081F17C (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14093C97C (PerfDiagpSaveActiveDCLLogFileName.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentThreadProcessId @ 0x1404575B0 (PsGetCurrentThreadProcessId.c)
 *     EtwpCreateActivityId @ 0x140466D9C (EtwpCreateActivityId.c)
 *     EtwpQueryUsedProcessorCount @ 0x140488A24 (EtwpQueryUsedProcessorCount.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x140520D7C (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     EtwpTransitionToRealtime @ 0x14052ECDC (EtwpTransitionToRealtime.c)
 *     WdiUpdateSem @ 0x140532B84 (WdiUpdateSem.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     EtwpGetPmcOwnership @ 0x1406C3A54 (EtwpGetPmcOwnership.c)
 *     EtwpGetPmcSessions @ 0x1406C3C00 (EtwpGetPmcSessions.c)
 *     EtwpGetCompressionSettings @ 0x1406C8204 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1406C8414 (EtwpSetCompressionSettings.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     EtwpIncrementTraceFile @ 0x14077B460 (EtwpIncrementTraceFile.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     EtwpTrackProviderBinary @ 0x140828908 (EtwpTrackProviderBinary.c)
 *     EtwpUseDescriptorTypeUm @ 0x140828F64 (EtwpUseDescriptorTypeUm.c)
 *     EtwpQueryReferenceTime @ 0x140828FF0 (EtwpQueryReferenceTime.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14082CB64 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpQuerySessionDemuxObject @ 0x14082CE64 (EtwpQuerySessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x14082CEE0 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14082D210 (EtwpUpdatePeriodicCaptureState.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14091EFC0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpQueryTrace @ 0x14091F240 (EtwpQueryTrace.c)
 *     EtwpValidateLoggerInfo @ 0x14091F33C (EtwpValidateLoggerInfo.c)
 *     EtwpRegisterUMProvider @ 0x140934B00 (EtwpRegisterUMProvider.c)
 *     EtwpGetTraceGuidInfo @ 0x140935E90 (EtwpGetTraceGuidInfo.c)
 *     EtwpGetGuidList @ 0x1409368A0 (EtwpGetGuidList.c)
 *     EtwpEnumerateTraceGuids @ 0x140937BFC (EtwpEnumerateTraceGuids.c)
 *     EtwpNotifyGuid @ 0x140938434 (EtwpNotifyGuid.c)
 *     EtwpGetTraceGroupInfo @ 0x140939330 (EtwpGetTraceGroupInfo.c)
 *     EtwpAddNotificationEvent @ 0x1409398E0 (EtwpAddNotificationEvent.c)
 *     EtwpSetProviderBinaryTracking @ 0x14093BF48 (EtwpSetProviderBinaryTracking.c)
 *     EtwpSetProviderTraitsUm @ 0x14093D410 (EtwpSetProviderTraitsUm.c)
 *     EtwpReleaseLoggerContext @ 0x14093D918 (EtwpReleaseLoggerContext.c)
 *     EtwpReceiveNotification @ 0x140A670B0 (EtwpReceiveNotification.c)
 *     EtwpUpdateTrace @ 0x140A6C6F0 (EtwpUpdateTrace.c)
 *     EtwpStartTrace @ 0x140A6E138 (EtwpStartTrace.c)
 *     EtwpStopTrace @ 0x140A6F2F8 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x140A6F6CC (EtwpFlushTrace.c)
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x140A71908 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpSendReplyDataBlock @ 0x140A86AC0 (EtwpSendReplyDataBlock.c)
 *     WdiDispatchControl @ 0x140AD91E8 (WdiDispatchControl.c)
 *     EtwpEnableGuid @ 0x140ADA008 (EtwpEnableGuid.c)
 *     EtwpGetTraceGuidList @ 0x140AE0888 (EtwpGetTraceGuidList.c)
 *     EtwpUpdateDisallowList @ 0x140AE392C (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x140AFDB14 (EtwpGetDisallowList.c)
 *     EtwpReceiveReplyDataBlock @ 0x140B0DBC8 (EtwpReceiveReplyDataBlock.c)
 *     EtwpRealtimeConnect @ 0x140B294B0 (EtwpRealtimeConnect.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtTraceControl(
        unsigned int a1,
        unsigned int *a2,
        unsigned int a3,
        signed __int64 *a4,
        unsigned int Length,
        unsigned int *a6)
{
  unsigned __int64 v7; // r13
  unsigned __int16 *v8; // rdi
  __int64 v9; // r8
  signed __int64 *v10; // r9
  volatile void *v11; // r10
  struct _LIST_ENTRY *Flink; // r12
  signed int PrivateSessionTraceHandle; // ebx
  char v14; // dl
  unsigned int v15; // eax
  unsigned int v16; // r15d
  int ULongFromUser; // eax
  int v18; // eax
  unsigned __int16 *Pool2; // rax
  unsigned int *v20; // rcx
  signed int PmcOwnership; // eax
  char v22; // r14
  signed __int64 *v23; // r12
  __int64 v24; // rcx
  signed int started; // eax
  signed int GuidList; // eax
  __int64 v28; // r8
  unsigned __int16 *v29; // r9
  __int64 v30; // r8
  unsigned int v31; // edx
  unsigned int v32; // eax
  signed int v33; // eax
  signed int v34; // eax
  unsigned int v35; // eax
  char *v36; // r9
  unsigned int Blink_low; // edx
  unsigned int *v38; // rcx
  __int64 v39; // rcx
  char PreviousMode; // [rsp+30h] [rbp-78h]
  struct _KLOCK_ENTRIES Size; // [rsp+34h] [rbp-74h] BYREF

  v7 = a1;
  v8 = 0LL;
  *(_QWORD *)&Size.Entries[0].Reserved[3] = 0LL;
  LODWORD(Size.Thread) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  BYTE4(Size.Thread) = PreviousMode;
  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  *(_QWORD *)&Size.Entries[0].SpareFlags = Flink;
  PrivateSessionTraceHandle = 0;
  LOBYTE(Size.AvailableEntryBitmap) = 0;
  if ( v14 )
  {
    *(_DWORD *)&Size.AvailableEntryBitmap = (unsigned int)v7 >> 31;
    v15 = v7 & 0x7FFFFFFF;
    if ( (v7 & 0x80000000) == 0LL )
      v15 = v7;
    v7 = v15;
    if ( v11 )
    {
      ProbeForRead(v11, a3, 1u);
      v10 = a4;
    }
    else
    {
      a3 = 0;
    }
    if ( v10 )
    {
      v16 = Length;
      ProbeForWrite(v10, Length, 1u);
    }
    else
    {
      v16 = 0;
    }
    if ( !a6 )
    {
      PrivateSessionTraceHandle = -1073741811;
      *(_DWORD *)&Size.EntryCount = -1073741811;
      goto LABEL_52;
    }
    ULongFromUser = RtlReadULongFromUser(a6);
    RtlWriteULongToUser(a6, ULongFromUser);
  }
  else
  {
    v16 = Length;
  }
  if ( ((unsigned int)v7 > 0x1B || (v18 = 134238208, !_bittest(&v18, v7))) && (a3 || v16) )
  {
    Pool2 = (unsigned __int16 *)ExAllocatePool2(0x101uLL);
    v8 = Pool2;
    *(_QWORD *)&Size.Entries[0].Reserved[3] = Pool2;
    if ( !Pool2 )
    {
      PrivateSessionTraceHandle = -1073741801;
      goto LABEL_52;
    }
    v20 = a2;
    if ( a2 )
    {
      if ( PreviousMode )
        RtlCopyFromUser(Pool2, a2, a3);
      else
        RtlCopyVolatileMemory(Pool2, a2, a3);
      v20 = a2;
    }
  }
  else
  {
    v20 = a2;
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
            v23 = a4;
            if ( v16 < 4 )
            {
              PrivateSessionTraceHandle = -1073741811;
            }
            else
            {
              *(_DWORD *)v8 = EtwpMaxPmcCounter;
              LODWORD(Size.Thread) = 4;
              PrivateSessionTraceHandle = 0;
            }
            goto LABEL_33;
          case '&':
            if ( a3 >= 8 && (a3 & 7) == 0 && v16 >= 2 )
            {
              WORD2(Size.Thread) = 0;
              PrivateSessionTraceHandle = EtwpGetPrivateSessionTraceHandle(
                                            v8,
                                            a3 >> 3,
                                            (unsigned __int16 *)&Size.Thread + 2);
              if ( !PrivateSessionTraceHandle )
              {
                LODWORD(Size.Thread) = 2;
                *v8 = WORD2(Size.Thread);
              }
              goto LABEL_31;
            }
            goto LABEL_149;
          case '\'':
            if ( a3 >= 2 && v16 >= 8 )
            {
              PrivateSessionTraceHandle = EtwpRegisterPrivateSession((__int64)Flink, *v8, v8 + 2, v8);
              if ( !PrivateSessionTraceHandle )
                LODWORD(Size.Thread) = 8;
              goto LABEL_31;
            }
            goto LABEL_149;
          case '(':
            if ( a3 >= 8 && v16 >= 2 )
            {
              PrivateSessionTraceHandle = EtwpQuerySessionDemuxObject(*(void **)v8, v8);
              if ( !PrivateSessionTraceHandle )
                LODWORD(Size.Thread) = 2;
              goto LABEL_31;
            }
            goto LABEL_149;
          case ')':
            if ( a3 >= 8 )
            {
              PmcOwnership = EtwpSetProviderBinaryTracking((__int64)Flink, *(_DWORD *)v8, *((_BYTE *)v8 + 4));
              goto LABEL_30;
            }
            goto LABEL_149;
        }
        v22 = PreviousMode;
        if ( v16 >= 4 )
        {
          *(_DWORD *)v8 = Flink[1].Flink;
          LODWORD(Size.Thread) = 4;
          PrivateSessionTraceHandle = 0;
          goto LABEL_32;
        }
        goto LABEL_183;
      }
      switch ( (_DWORD)v7 )
      {
        case ',':
          if ( a3 == 8 && v16 >= 4 )
          {
            Blink_low = *v8;
            if ( Blink_low == 0xFFFF )
              Blink_low = LOBYTE(Flink[281].Blink);
            v38 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, Blink_low, 0);
            if ( v38 )
            {
              LODWORD(Size.Thread) = 4;
              *(_DWORD *)v8 = EtwpQueryUsedProcessorCount((__int64)v38);
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
        if ( a3 < 0xC )
          goto LABEL_149;
        v30 = v8[4];
        if ( (unsigned __int16)v30 > 0x10u )
          goto LABEL_149;
        v31 = *((_DWORD *)v8 + 1);
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
        if ( 16 * v30 + 12 == a3 )
        {
          v36 = 0LL;
          if ( (_WORD)v30 )
            v36 = (char *)(v8 + 6);
          PmcOwnership = EtwpUpdatePeriodicCaptureState(*(unsigned int *)v8, v31, v30, v36);
          goto LABEL_30;
        }
        goto LABEL_149;
      }
      if ( (unsigned int)v7 > 0x20 )
      {
        switch ( (_DWORD)v7 )
        {
          case '!':
            if ( a3 == 16 )
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
            if ( a3 == 8 )
            {
              LODWORD(Size.Thread) = v16;
              PmcOwnership = EtwpGetDisallowList(Flink, v8, v8, &Size);
              goto LABEL_30;
            }
            break;
          case '#':
            if ( a3 == 16 && !v16 )
            {
              PmcOwnership = EtwpSetCompressionSettings((unsigned int *)v8);
              goto LABEL_30;
            }
            break;
          default:
            if ( a3 == 8 && v16 == 16 )
            {
              LODWORD(Size.Thread) = 16;
              PmcOwnership = EtwpGetCompressionSettings(v8, (unsigned int *)v8);
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
              if ( a3 >= 8 )
              {
                v28 = *((unsigned int *)v8 + 1);
                if ( 16 * v28 + 8 == a3 )
                {
                  v29 = 0LL;
                  if ( (_DWORD)v28 )
                    v29 = v8 + 4;
                  PmcOwnership = EtwpUpdateDisallowList(Flink, *(unsigned int *)v8, v28, v29);
                  goto LABEL_30;
                }
              }
              goto LABEL_149;
            case 0x1E:
              if ( a3 == 24 && v16 - 120 <= 0xFF88 )
              {
                PmcOwnership = EtwpSetProviderTraitsUm((_DWORD)v8, v16, (unsigned int)&Size);
                goto LABEL_30;
              }
              goto LABEL_149;
            case 0x1F:
              if ( a3 == 16 && !v16 )
              {
                PmcOwnership = EtwpUseDescriptorTypeUm((__int64)v8);
                goto LABEL_30;
              }
              goto LABEL_149;
          }
          goto LABEL_236;
        }
        if ( a3 == 4 )
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
    if ( a3 == 8 )
    {
      PmcOwnership = EtwpTrackProviderBinary((__int64)Flink, (void **)v8, (_DWORD)v7 == 47);
      goto LABEL_30;
    }
    goto LABEL_149;
  }
  if ( (_DWORD)v7 == 25 )
  {
    if ( a3 == 4 && v16 == 16 )
    {
      PrivateSessionTraceHandle = EtwpQueryReferenceTime(
                                    *(__int64 *)&Size.Entries[0].SpareFlags,
                                    *(unsigned int *)v8,
                                    v8);
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
          if ( a3 < 0xB0 || v16 < 0xB0 )
          {
            PrivateSessionTraceHandle = -1073741306;
          }
          else
          {
            PrivateSessionTraceHandle = EtwpValidateLoggerInfo(v8);
            if ( PrivateSessionTraceHandle >= 0 )
              PrivateSessionTraceHandle = a3 < *(_DWORD *)v8 ? 0xC0000206 : 0;
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
              started = EtwpQueryTrace((__int64)Flink, (__int64)v8, v9);
              break;
            case 4:
              started = EtwpUpdateTrace(Flink, v8);
              break;
            case 5:
              started = EtwpFlushTrace(Flink, v8);
              break;
            case 6:
              started = EtwpIncrementTraceFile((__int64)Flink, (__int64)v8, v9);
              break;
            case 7:
              started = EtwpTransitionToRealtime((__int64)Flink, (__int64)v8, v9);
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
            if ( a3 == 96 && v16 == 96 )
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
              v23 = a4;
              EtwpCreateActivityId(a4, PreviousMode);
              goto LABEL_33;
            }
            goto LABEL_149;
          case 0xD:
            if ( a3 == 48 && !v16 )
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
    if ( a3 != 8 || v16 )
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
        if ( !a3 && !v16 )
        {
          PmcOwnership = WdiUpdateSem();
          goto LABEL_30;
        }
        break;
      case 0xF:
        if ( a3 == 160 && v16 - 160 <= 0xFF60 )
        {
          PmcOwnership = EtwpRegisterUMProvider((__int64)Flink, (__int64)v8, v16, Size.AvailableEntryBitmap, &Size);
          goto LABEL_30;
        }
        break;
      case 0x10:
        if ( !a3 && v16 - 72 <= 0xFFB8 )
        {
          PmcOwnership = EtwpReceiveNotification(v8);
          goto LABEL_30;
        }
        break;
      case 0x11:
        if ( a3 < 0x48 || v16 != 72 || *((_DWORD *)v8 + 1) != a3 )
          break;
        if ( *(_DWORD *)v8 == 3 )
        {
          if ( a3 < 0x78 )
            break;
          LOBYTE(v9) = 1;
          v34 = EtwpEnableGuid(Flink, v8, v9);
        }
        else
        {
          v34 = EtwpNotifyGuid((__int64)Flink, (__int64)v8, 1);
        }
        PrivateSessionTraceHandle = v34;
        LODWORD(Size.Thread) = 72;
        goto LABEL_31;
      case 0x12:
        if ( a3 >= 0x48 && *((_DWORD *)v8 + 1) == a3 )
        {
          *((_DWORD *)v8 + 9) = PsGetCurrentThreadProcessId();
          PmcOwnership = EtwpSendReplyDataBlock(v8);
          goto LABEL_30;
        }
        break;
      default:
        if ( a3 == 8 )
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
    if ( !a3 && !v16 )
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
  if ( a3 != 16 )
    goto LABEL_149;
  LODWORD(Size.Thread) = v16;
  PmcOwnership = EtwpGetTraceGuidInfo(*(__int64 *)&Size.Entries[0].SpareFlags, (__int64)v8, v8, (unsigned int *)&Size);
LABEL_30:
  PrivateSessionTraceHandle = PmcOwnership;
LABEL_31:
  v22 = PreviousMode;
LABEL_32:
  v23 = a4;
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
      RtlWriteULongToUser(a6, (int)Size.Thread);
    else
      *a6 = (unsigned int)Size.Thread;
  }
  if ( PrivateSessionTraceHandle == -1073741789 && ((unsigned int)(v7 - 15) <= 1 || (unsigned int)(v7 - 21) <= 1)
    || (unsigned int)v7 <= 0x2E && (v24 = 0x41D700880000LL, _bittest64(&v24, v7)) )
  {
    if ( v22 )
      RtlWriteULongToUser(a6, (int)Size.Thread);
    else
      *a6 = (unsigned int)Size.Thread;
  }
LABEL_52:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)PrivateSessionTraceHandle;
}
