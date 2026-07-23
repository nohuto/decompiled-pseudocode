/*
 * XREFs of SepVariableInitialization @ 0x140CE1170
 * Callers:
 *     SepInitializationPhase0 @ 0x140CE3538 (SepInitializationPhase0.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x140491FF0 (RtlDeriveCapabilitySidsFromName.c)
 *     Feature_AgenticAppContainerBfsSupport__private_IsEnabledDeviceUsageNoInline @ 0x14063DA80 (Feature_AgenticAppContainerBfsSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SepInitializeSharedSidMap @ 0x14081CD6C (SepInitializeSharedSidMap.c)
 *     RtlLengthRequiredSid @ 0x1408F0000 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x140A77920 (RtlInitializeSid.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     SepInitSystemDacls @ 0x140CE0608 (SepInitSystemDacls.c)
 */

bool SepVariableInitialization()
{
  int v0; // eax
  bool v1; // cl
  ULONG v2; // ebx
  _DWORD *Pool2; // rdi
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // r12
  _XSAVE_FORMAT *StateSaveArea; // r13
  _DWORD *v6; // r15
  struct _LIST_ENTRY *v7; // r14
  struct _LIST_ENTRY *Flink; // rsi
  ULONG v9; // eax
  ULONG v10; // esi
  ULONG v11; // edi
  ULONG v12; // ebx
  ULONG v13; // ebx
  struct _LIST_ENTRY *v14; // r12
  struct _LIST_ENTRY *v15; // r13
  _DWORD *v16; // r15
  _DWORD *v17; // rsi
  struct _LIST_ENTRY *v18; // rdi
  void *v19; // r14
  _DWORD *v20; // rbx
  _DWORD *v21; // r8
  _DWORD *v22; // r9
  _DWORD *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  _DWORD *v27; // rbx
  _DWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  struct _LIST_ENTRY *v35; // rax
  PSID v36; // r8
  PSID v37; // rdx
  struct _LIST_ENTRY **p_Blink; // rcx
  __int64 v39; // rax
  _DWORD *Sid; // [rsp+20h] [rbp-E0h]
  _DWORD *Sida; // [rsp+20h] [rbp-E0h]
  __int64 v43; // [rsp+28h] [rbp-D8h] BYREF
  __int64 IdentifierAuthority; // [rsp+30h] [rbp-D0h] BYREF
  __int64 Thread; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+40h] [rbp-C0h] BYREF
  PSID v47; // [rsp+48h] [rbp-B8h]
  PSID v48; // [rsp+50h] [rbp-B0h]
  PSID v49; // [rsp+58h] [rbp-A8h]
  PSID v50; // [rsp+60h] [rbp-A0h]
  PSID ThreadLock; // [rsp+68h] [rbp-98h]
  PSID v52; // [rsp+70h] [rbp-90h]
  PSID v53; // [rsp+78h] [rbp-88h]
  PSID v54; // [rsp+80h] [rbp-80h]
  PSID SparePtr; // [rsp+88h] [rbp-78h]
  PSID v56; // [rsp+90h] [rbp-70h]
  PSID RelativeTimerBias; // [rsp+98h] [rbp-68h]
  PSID v58; // [rsp+A0h] [rbp-60h]
  PSID AffinityVersion; // [rsp+A8h] [rbp-58h]
  PSID v60; // [rsp+B0h] [rbp-50h]
  PSID Blink; // [rsp+B8h] [rbp-48h]
  PSID v62; // [rsp+C0h] [rbp-40h]
  PSID v63; // [rsp+C8h] [rbp-38h]
  PSID v64; // [rsp+D0h] [rbp-30h]
  PSID v65; // [rsp+D8h] [rbp-28h]
  PSID v66; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING v67; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v68; // [rsp+F8h] [rbp-8h] BYREF
  UNICODE_STRING v69; // [rsp+108h] [rbp+8h] BYREF
  UNICODE_STRING v70; // [rsp+118h] [rbp+18h] BYREF
  UNICODE_STRING v71; // [rsp+128h] [rbp+28h] BYREF
  UNICODE_STRING v72; // [rsp+138h] [rbp+38h] BYREF
  UNICODE_STRING v73; // [rsp+148h] [rbp+48h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+158h] [rbp+58h] BYREF
  UNICODE_STRING v75; // [rsp+168h] [rbp+68h] BYREF
  UNICODE_STRING v76; // [rsp+178h] [rbp+78h] BYREF
  UNICODE_STRING v77; // [rsp+188h] [rbp+88h] BYREF
  UNICODE_STRING v78; // [rsp+198h] [rbp+98h] BYREF
  UNICODE_STRING v79; // [rsp+1A8h] [rbp+A8h] BYREF
  UNICODE_STRING v80; // [rsp+1B8h] [rbp+B8h] BYREF
  UNICODE_STRING v81; // [rsp+1C8h] [rbp+C8h] BYREF
  UNICODE_STRING v82; // [rsp+1D8h] [rbp+D8h] BYREF
  UNICODE_STRING v83; // [rsp+1E8h] [rbp+E8h] BYREF
  UNICODE_STRING v84; // [rsp+1F8h] [rbp+F8h] BYREF
  UNICODE_STRING v85; // [rsp+208h] [rbp+108h] BYREF
  UNICODE_STRING v86; // [rsp+218h] [rbp+118h] BYREF
  UNICODE_STRING v87; // [rsp+228h] [rbp+128h] BYREF
  UNICODE_STRING v88; // [rsp+238h] [rbp+138h] BYREF
  UNICODE_STRING v89; // [rsp+248h] [rbp+148h] BYREF
  UNICODE_STRING v90; // [rsp+258h] [rbp+158h] BYREF
  UNICODE_STRING v91; // [rsp+268h] [rbp+168h] BYREF
  UNICODE_STRING v92; // [rsp+278h] [rbp+178h] BYREF
  PSID v93; // [rsp+288h] [rbp+188h]
  size_t Size; // [rsp+290h] [rbp+190h]
  PSID v95; // [rsp+298h] [rbp+198h]
  PSID v96; // [rsp+2A0h] [rbp+1A0h]
  PSID v97; // [rsp+2A8h] [rbp+1A8h]
  PSID v98; // [rsp+2B0h] [rbp+1B0h]
  PSID v99; // [rsp+2B8h] [rbp+1B8h]
  PSID v100; // [rsp+2C0h] [rbp+1C0h]
  PSID v101; // [rsp+2C8h] [rbp+1C8h]
  PSID CapabilityGroupSid; // [rsp+2D0h] [rbp+1D0h]
  PSID v103; // [rsp+2D8h] [rbp+1D8h]
  __int64 v104; // [rsp+330h] [rbp+230h] BYREF
  __int64 v105; // [rsp+338h] [rbp+238h] BYREF
  __int64 Object; // [rsp+340h] [rbp+240h] BYREF
  __int64 v107; // [rsp+348h] [rbp+248h] BYREF

  *(_QWORD *)&UnicodeString.Length = 2359330LL;
  UnicodeString.Buffer = L"lpacAppExperience";
  *(_QWORD *)&v75.Length = 1048590LL;
  v75.Buffer = L"lpacCom";
  v73.Buffer = L"lpacCryptoServices";
  v76.Buffer = L"lpacIdentityServices";
  v77.Buffer = L"lpacInstrumentation";
  v78.Buffer = L"lpacEnterprisePolicyChangeNotifications";
  v79.Buffer = L"lpacMedia";
  v80.Buffer = L"lpacPnpNotifications";
  v81.Buffer = L"registryRead";
  v82.Buffer = L"lpacServicesManagement";
  v83.Buffer = L"lpacSessionManagement";
  v84.Buffer = L"lpacPrinting";
  v85.Buffer = L"lpacWebPlatform";
  v86.Buffer = L"lpacPayments";
  v87.Buffer = L"lpacClipboard";
  v88.Buffer = L"lpacIME";
  v89.Buffer = L"lpacPackageManagerOperation";
  v90.Buffer = L"lpacDeviceAccess";
  v69.Buffer = L"learningModeLogging";
  v70.Buffer = L"permissiveLearningMode";
  v72.Buffer = L"sessionImpersonation";
  v71.Buffer = L"constrainedImpersonation";
  v91.Buffer = L"isolatedWin32-volumeRootMinimal";
  v92.Buffer = L"isolatedWin32-profilesRootMinimal";
  v67.Buffer = L"isolatedWin32-promptForAccess";
  v68.Buffer = L"isolatedWin32-accessToPublisherDirectory";
  LODWORD(IdentifierAuthority) = 0;
  *(_QWORD *)&v73.Length = 2490404LL;
  *(_QWORD *)&v76.Length = 2752552LL;
  *(_QWORD *)&v77.Length = 2621478LL;
  *(_QWORD *)&v78.Length = 5242958LL;
  *(_QWORD *)&v79.Length = 1310738LL;
  *(_QWORD *)&v80.Length = 2752552LL;
  *(_QWORD *)&v81.Length = 1703960LL;
  *(_QWORD *)&v82.Length = 3014700LL;
  *(_QWORD *)&v83.Length = 2883626LL;
  *(_QWORD *)&v84.Length = 1703960LL;
  *(_QWORD *)&v85.Length = 2097182LL;
  *(_QWORD *)&v86.Length = 1703960LL;
  *(_QWORD *)&v87.Length = 1835034LL;
  *(_QWORD *)&v88.Length = 1048590LL;
  *(_QWORD *)&v89.Length = 3670070LL;
  *(_QWORD *)&v90.Length = 2228256LL;
  *(_QWORD *)&v69.Length = 2621478LL;
  *(_QWORD *)&v70.Length = 3014700LL;
  *(_QWORD *)&v72.Length = 2752552LL;
  *(_QWORD *)&v71.Length = 3276848LL;
  *(_QWORD *)&v91.Length = 4194366LL;
  *(_QWORD *)&v92.Length = 4456514LL;
  *(_QWORD *)&v67.Length = 3932218LL;
  *(_QWORD *)&v68.Length = 5374032LL;
  WORD2(IdentifierAuthority) = 0;
  LODWORD(Thread) = 0;
  WORD2(Thread) = 256;
  LODWORD(v46) = 0;
  WORD2(v46) = 512;
  LODWORD(Object) = 0;
  WORD2(Object) = 768;
  LODWORD(v104) = 0;
  WORD2(v104) = 1280;
  LODWORD(v107) = 0;
  WORD2(v107) = 4096;
  LODWORD(v43) = 0;
  WORD2(v43) = 3840;
  LODWORD(v105) = 0;
  WORD2(v105) = 4864;
  v0 = *(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 132LL);
  v1 = (v0 & 0x40) == 0 && MEMORY[0xFFFFF78000000264] == 1 && MEMORY[0xFFFFF78000000310] <= 0x83400uLL;
  LOBYTE(RtlpBootStatHandleLock.Queue) = v1;
  BYTE1(RtlpBootStatHandleLock.Queue) = v1;
  BYTE2(RtlpBootStatHandleLock.Queue) = (v0 & 0x80) != 0;
  v2 = RtlLengthRequiredSid(1u);
  PspSiloMonitorLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)ExAllocatePool2(288LL, v2, 0x69536553u);
  RtlpBootStatHandleLock.StateSaveArea = (_XSAVE_FORMAT *)ExAllocatePool2(96LL, v2, 0x69536553u);
  *(_QWORD *)&RtlpBootStatHandleLock.Timer.Header.Lock = ExAllocatePool2(96LL, v2, 0x69536553u);
  RtlpBootStatHandleLock.Timer.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)ExAllocatePool2(96LL, v2, 0x69536553u);
  RtlpBootStatHandleLock.Timer.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)ExAllocatePool2(96LL, v2, 0x69536553u);
  *(_QWORD *)&RtlpBootStatHandleLock.WaitRegister.Flags = ExAllocatePool2(96LL, v2, 0x69536553u);
  RtlpBootStatHandleLock.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)ExAllocatePool2(96LL, v2, 0x69536553u);
  Pool2 = (_DWORD *)ExAllocatePool2(96LL, v2, 0x69536553u);
  RtlpBootStatHandleLock.Teb = Pool2;
  Blink = PspSiloMonitorLock.Header.WaitListHead.Blink;
  if ( !PspSiloMonitorLock.Header.WaitListHead.Blink )
    return 0;
  Sid = *(_DWORD **)&RtlpBootStatHandleLock.WaitRegister.Flags;
  if ( !*(_QWORD *)&RtlpBootStatHandleLock.WaitRegister.Flags )
    return 0;
  SchedulingGroup = RtlpBootStatHandleLock.SchedulingGroup;
  if ( !RtlpBootStatHandleLock.SchedulingGroup )
    return 0;
  StateSaveArea = RtlpBootStatHandleLock.StateSaveArea;
  if ( !RtlpBootStatHandleLock.StateSaveArea )
    return 0;
  v6 = *(_DWORD **)&RtlpBootStatHandleLock.Timer.Header.Lock;
  if ( !*(_QWORD *)&RtlpBootStatHandleLock.Timer.Header.Lock )
    return 0;
  v7 = RtlpBootStatHandleLock.Timer.Header.WaitListHead.Blink;
  if ( !RtlpBootStatHandleLock.Timer.Header.WaitListHead.Blink )
    return 0;
  if ( !Pool2 )
    return 0;
  Flink = RtlpBootStatHandleLock.Timer.Header.WaitListHead.Flink;
  if ( !RtlpBootStatHandleLock.Timer.Header.WaitListHead.Flink )
    return 0;
  RtlInitializeSid(PspSiloMonitorLock.Header.WaitListHead.Blink, (PSID_IDENTIFIER_AUTHORITY)&IdentifierAuthority, 1u);
  RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&Thread, 1u);
  RtlInitializeSid(SchedulingGroup, (PSID_IDENTIFIER_AUTHORITY)&v46, 1u);
  RtlInitializeSid(StateSaveArea, (PSID_IDENTIFIER_AUTHORITY)&Object, 1u);
  RtlInitializeSid(v6, (PSID_IDENTIFIER_AUTHORITY)&Object, 1u);
  RtlInitializeSid(v7, (PSID_IDENTIFIER_AUTHORITY)&Object, 1u);
  RtlInitializeSid(Flink, (PSID_IDENTIFIER_AUTHORITY)&Object, 1u);
  RtlInitializeSid(Pool2, (PSID_IDENTIFIER_AUTHORITY)&Object, 1u);
  *((_DWORD *)Blink + 2) = 0;
  Sid[2] = 0;
  SchedulingGroup->RelativeWeight = 0;
  StateSaveArea->ErrorOffset = 0;
  v6[2] = 1;
  LODWORD(v7->Blink) = 2;
  LODWORD(Flink->Blink) = 3;
  Pool2[2] = 4;
  v9 = RtlLengthRequiredSid(0);
  PspSiloMonitorLock.ThreadListEntry.Blink = (struct _LIST_ENTRY *)ExAllocatePool2(288LL, v9, 0x69536553u);
  PspSiloMonitorLock.Spare18 = ExAllocatePool2(288LL, v2, 0x69536553u);
  RtlpBootStatHandleLock.Timer.DueTime.QuadPart = ExAllocatePool2(96LL, v2, 0x69536553u);
  RtlpBootStatHandleLock.Timer.TimerListEntry.Flink = (struct _LIST_ENTRY *)ExAllocatePool2(96LL, v2, 0x69536553u);
  RtlpBootStatHandleLock.AffinityVersion = ExAllocatePool2(96LL, v2, 0x69536553u);
  RtlpBootStatHandleLock.RelativeTimerBias = ExAllocatePool2(96LL, v2, 0x69536553u);
  PspSiloMonitorLock.WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)ExAllocatePool2(288LL, v2, 0x69536553u);
  *($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&RtlpBootStatHandleLock.116 + 4) = ($C9C4F79064DE35237E3F199A7D1BD3E1)ExAllocatePool2(96LL, v2, 0x69536553u);
  PspSiloMonitorLock.WaitBlock[0].SparePtr = (PVOID)ExAllocatePool2(288LL, v2, 0x69536553u);
  SeRestrictedSid = (PSID)ExAllocatePool2(288LL, v2, 0x69536553u);
  SeAnonymousLogonSid = (PSID)ExAllocatePool2(288LL, v2, 0x69536553u);
  SeLocalServiceSid = (PSID)ExAllocatePool2(288LL, v2, 0x69536553u);
  PspSiloMonitorLock.ThreadLock = ExAllocatePool2(288LL, v2, 0x69536553u);
  *(_QWORD *)&PspSiloMonitorLock.ApcStateFill[40] = ExAllocatePool2(288LL, v2, 0x69536553u);
  v10 = RtlLengthRequiredSid(2u);
  SeAliasAdminsSid = (PSID)ExAllocatePool2(288LL, v10, 0x69536553u);
  *(_QWORD *)&PspSiloMonitorLock.WaitRegister.Flags = ExAllocatePool2(288LL, v10, 0x69536553u);
  PspSiloMonitorLock.WaitBlock[0].Object = (PVOID)ExAllocatePool2(288LL, v10, 0x69536553u);
  *(_QWORD *)&PspSiloMonitorLock.WaitBlockFill11[16] = ExAllocatePool2(288LL, v10, 0x69536553u);
  PspSiloMonitorLock.WaitBlock[0].Thread = (struct _KTHREAD *)ExAllocatePool2(288LL, v10, 0x69536553u);
  PspSiloMonitorLock.WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)ExAllocatePool2(288LL, v10, 0x69536553u);
  PspSiloMonitorLock.WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)ExAllocatePool2(288LL, v10, 0x69536553u);
  *(_QWORD *)&PspSiloMonitorLock.Timer.Processor = ExAllocatePool2(288LL, v10, 0x69536553u);
  SeUntrustedMandatorySid = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  *(_QWORD *)&SepRmCapTableLock.SchedulerAssistYieldCounter = ExAllocatePool2(96LL, v2, 0x69536553u);
  SeMediumMandatorySid = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  SeHighMandatorySid = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  SeSystemMandatorySid = ExAllocatePool2(96LL, v2, 0x69536553u);
  RtlpBootStatHandleLock.Timer.TimerListEntry.Blink = (struct _LIST_ENTRY *)ExAllocatePool2(96LL, v2, 0x69536553u);
  RtlpBootStatHandleLock.Timer.Dpc = (_KDPC *)ExAllocatePool2(96LL, v2, 0x69536553u);
  *(_QWORD *)&RtlpBootStatHandleLock.SystemCallNumber = ExAllocatePool2(96LL, v10, 0x69536553u);
  RtlpBootStatHandleLock.WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)ExAllocatePool2(
                                                                                    96LL,
                                                                                    v10,
                                                                                    0x69536553u);
  v11 = RtlLengthRequiredSid(0xAu);
  SeLpacAppExperienceCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacComCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SepRmCapTableLock.Padding[3] = ExAllocatePool2(288LL, v11, 0x69536553u);
  SepRmCapTableLock.Padding[4] = ExAllocatePool2(288LL, v11, 0x69536553u);
  SepRmCapTableLock.Padding[1] = ExAllocatePool2(288LL, v11, 0x69536553u);
  SepRmCapTableLock.Padding[2] = ExAllocatePool2(288LL, v11, 0x69536553u);
  SepRmCapTableLock.SchedulerAssistLastYieldBoostTime = ExAllocatePool2(288LL, v11, 0x69536553u);
  SepRmCapTableLock.Padding[0] = ExAllocatePool2(288LL, v11, 0x69536553u);
  SeRegistryReadCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacServicesManagementCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacSessionManagementCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacPrintingCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacWebPlatformCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacPaymentsCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacClipboardCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacImeCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacPackageManagerOperationCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacDeviceAccessCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  v12 = RtlLengthRequiredSid(6u);
  Size = v12;
  *(_QWORD *)&RtlpBootStatHandleLock.Timer.Processor = ExAllocatePool2(96LL, v12, 0x69536553u);
  RtlpBootStatHandleLock.WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)ExAllocatePool2(
                                                                                    96LL,
                                                                                    v12,
                                                                                    0x69536553u);
  SeProcTrustWinTcbSid = (PSID)ExAllocatePool2(96LL, v10, 0x69536553u);
  SeProcTrustWinSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeProcTrustAuthenticodeSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeProcTrustLiteAntimalwareSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeProcTrustLiteWinTcbSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeProcTrustLiteWinSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeProcTrustLiteAppSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeProcTrustNoneSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeDefaultAccountAliasSid = (PSID)ExAllocatePool2(288LL, v10, 0x69536553u);
  SeLearningModeLoggingCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SePermissiveLearningModeCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  v13 = RtlLengthRequiredSid(9u);
  SeConstrainedImpersonationCapabilityGroupSid = (PSID)ExAllocatePool2(288LL, v13, 0x69536553u);
  SeConstrainedImpersonationCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeSessionImpersonationCapabilityGroupSid = (PSID)ExAllocatePool2(288LL, v13, 0x69536553u);
  SeSessionImpersonationCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  *(_QWORD *)&RtlpBootStatHandleLock.ApcStateFill[40] = ExAllocatePool2(96LL, v10, 0x69536553u);
  RtlpBootStatHandleLock.WaitStatus = ExAllocatePool2(288LL, v11, 0x69536553u);
  RtlpBootStatHandleLock.WaitBlockList = (_KWAIT_BLOCK *)ExAllocatePool2(288LL, v11, 0x69536553u);
  RtlpBootStatHandleLock.WaitListEntry.Flink = (struct _LIST_ENTRY *)ExAllocatePool2(288LL, v11, 0x69536553u);
  RtlpBootStatHandleLock.WaitListEntry.Blink = (struct _LIST_ENTRY *)ExAllocatePool2(288LL, v11, 0x69536553u);
  if ( !PspSiloMonitorLock.ThreadListEntry.Blink )
    return 0;
  Object = (__int64)PspSiloMonitorLock.WaitBlock[3].Object;
  if ( !PspSiloMonitorLock.Spare18 )
    return 0;
  Sida = (_DWORD *)RtlpBootStatHandleLock.Timer.DueTime.QuadPart;
  if ( !RtlpBootStatHandleLock.Timer.DueTime.QuadPart )
    return 0;
  v60 = RtlpBootStatHandleLock.Timer.TimerListEntry.Flink;
  if ( !RtlpBootStatHandleLock.Timer.TimerListEntry.Flink )
    return 0;
  AffinityVersion = (PSID)RtlpBootStatHandleLock.AffinityVersion;
  if ( !RtlpBootStatHandleLock.AffinityVersion )
    return 0;
  v58 = PspSiloMonitorLock.WaitBlock[1].WaitListEntry.Flink;
  if ( !PspSiloMonitorLock.WaitBlock[1].WaitListEntry.Flink )
    return 0;
  RelativeTimerBias = (PSID)RtlpBootStatHandleLock.RelativeTimerBias;
  if ( !RtlpBootStatHandleLock.RelativeTimerBias )
    return 0;
  v56 = *(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4);
  if ( !*(_QWORD *)((char *)&RtlpBootStatHandleLock.116 + 4) )
    return 0;
  SparePtr = PspSiloMonitorLock.WaitBlock[0].SparePtr;
  if ( !PspSiloMonitorLock.WaitBlock[0].SparePtr )
    return 0;
  v54 = SeRestrictedSid;
  if ( !SeRestrictedSid )
    return 0;
  v53 = SeAnonymousLogonSid;
  if ( !SeAnonymousLogonSid )
    return 0;
  v52 = SeLocalServiceSid;
  if ( !SeLocalServiceSid )
    return 0;
  ThreadLock = (PSID)PspSiloMonitorLock.ThreadLock;
  if ( !PspSiloMonitorLock.ThreadLock )
    return 0;
  v50 = *(PSID *)&PspSiloMonitorLock.ApcStateFill[40];
  if ( !*(_QWORD *)&PspSiloMonitorLock.ApcStateFill[40] )
    return 0;
  v49 = SeAliasAdminsSid;
  if ( !SeAliasAdminsSid )
    return 0;
  v48 = *(PSID *)&PspSiloMonitorLock.WaitRegister.Flags;
  if ( !*(_QWORD *)&PspSiloMonitorLock.WaitRegister.Flags )
    return 0;
  v47 = PspSiloMonitorLock.WaitBlock[0].Object;
  if ( !PspSiloMonitorLock.WaitBlock[0].Object )
    return 0;
  v46 = *(_QWORD *)&PspSiloMonitorLock.WaitBlockFill11[16];
  if ( !*(_QWORD *)&PspSiloMonitorLock.WaitBlockFill11[16] )
    return 0;
  Thread = (__int64)PspSiloMonitorLock.WaitBlock[0].Thread;
  if ( !PspSiloMonitorLock.WaitBlock[0].Thread )
    return 0;
  v14 = PspSiloMonitorLock.WaitBlock[0].WaitListEntry.Flink;
  if ( !PspSiloMonitorLock.WaitBlock[0].WaitListEntry.Flink )
    return 0;
  v15 = PspSiloMonitorLock.WaitBlock[0].WaitListEntry.Blink;
  if ( !PspSiloMonitorLock.WaitBlock[0].WaitListEntry.Blink )
    return 0;
  v16 = *(_DWORD **)&PspSiloMonitorLock.Timer.Processor;
  if ( !*(_QWORD *)&PspSiloMonitorLock.Timer.Processor )
    return 0;
  IdentifierAuthority = (__int64)SeUntrustedMandatorySid;
  if ( !SeUntrustedMandatorySid )
    return 0;
  v62 = *(PSID *)&SepRmCapTableLock.SchedulerAssistYieldCounter;
  if ( !*(_QWORD *)&SepRmCapTableLock.SchedulerAssistYieldCounter )
    return 0;
  v63 = SeMediumMandatorySid;
  if ( !SeMediumMandatorySid )
    return 0;
  v64 = SeHighMandatorySid;
  if ( !SeHighMandatorySid )
    return 0;
  v65 = (PSID)SeSystemMandatorySid;
  if ( !SeSystemMandatorySid )
    return 0;
  v66 = RtlpBootStatHandleLock.Timer.TimerListEntry.Blink;
  if ( !RtlpBootStatHandleLock.Timer.TimerListEntry.Blink )
    return 0;
  Blink = RtlpBootStatHandleLock.Timer.Dpc;
  if ( !RtlpBootStatHandleLock.Timer.Dpc )
    return 0;
  v17 = *(_DWORD **)&RtlpBootStatHandleLock.SystemCallNumber;
  if ( !*(_QWORD *)&RtlpBootStatHandleLock.SystemCallNumber )
    return 0;
  v18 = RtlpBootStatHandleLock.WaitBlock[0].WaitListEntry.Flink;
  if ( !RtlpBootStatHandleLock.WaitBlock[0].WaitListEntry.Flink )
    return 0;
  if ( !SeLpacAppExperienceCapabilitySid )
    return 0;
  if ( !SeLpacComCapabilitySid )
    return 0;
  if ( !SepRmCapTableLock.Padding[3] )
    return 0;
  if ( !SepRmCapTableLock.Padding[4] )
    return 0;
  if ( !SepRmCapTableLock.Padding[1] )
    return 0;
  if ( !SepRmCapTableLock.Padding[2] )
    return 0;
  if ( !SepRmCapTableLock.SchedulerAssistLastYieldBoostTime )
    return 0;
  if ( !SepRmCapTableLock.Padding[0] )
    return 0;
  if ( !SeRegistryReadCapabilitySid )
    return 0;
  if ( !SeLpacServicesManagementCapabilitySid )
    return 0;
  if ( !SeLpacSessionManagementCapabilitySid )
    return 0;
  if ( !SeLpacPrintingCapabilitySid )
    return 0;
  if ( !SeLpacWebPlatformCapabilitySid )
    return 0;
  if ( !SeLpacPaymentsCapabilitySid )
    return 0;
  if ( !SeLpacClipboardCapabilitySid )
    return 0;
  if ( !SeLpacImeCapabilitySid )
    return 0;
  if ( !SeLpacPackageManagerOperationCapabilitySid )
    return 0;
  if ( !SeLpacDeviceAccessCapabilitySid )
    return 0;
  v19 = *(void **)&RtlpBootStatHandleLock.Timer.Processor;
  if ( !*(_QWORD *)&RtlpBootStatHandleLock.Timer.Processor )
    return 0;
  v96 = SeProcTrustWinTcbSid;
  if ( !SeProcTrustWinTcbSid )
    return 0;
  v97 = (PSID)SeProcTrustWinSid;
  if ( !SeProcTrustWinSid )
    return 0;
  v98 = (PSID)SeProcTrustAuthenticodeSid;
  if ( !SeProcTrustAuthenticodeSid )
    return 0;
  v100 = (PSID)SeProcTrustLiteAntimalwareSid;
  if ( !SeProcTrustLiteAntimalwareSid )
    return 0;
  v103 = (PSID)SeProcTrustLiteWinTcbSid;
  if ( !SeProcTrustLiteWinTcbSid )
    return 0;
  v99 = (PSID)SeProcTrustLiteWinSid;
  if ( !SeProcTrustLiteWinSid )
    return 0;
  v101 = (PSID)SeProcTrustLiteAppSid;
  if ( !SeProcTrustLiteAppSid )
    return 0;
  v95 = (PSID)SeProcTrustNoneSid;
  if ( !SeProcTrustNoneSid )
    return 0;
  v93 = RtlpBootStatHandleLock.WaitBlock[0].WaitListEntry.Blink;
  if ( !RtlpBootStatHandleLock.WaitBlock[0].WaitListEntry.Blink )
    return 0;
  if ( !SeDefaultAccountAliasSid )
    return 0;
  if ( !SeLearningModeLoggingCapabilitySid )
    return 0;
  if ( !SePermissiveLearningModeCapabilitySid )
    return 0;
  if ( !SeConstrainedImpersonationCapabilitySid )
    return 0;
  CapabilityGroupSid = SeConstrainedImpersonationCapabilityGroupSid;
  if ( !SeConstrainedImpersonationCapabilityGroupSid )
    return 0;
  if ( !SeSessionImpersonationCapabilitySid )
    return 0;
  if ( !SeSessionImpersonationCapabilityGroupSid )
    return 0;
  v20 = *(_DWORD **)&RtlpBootStatHandleLock.ApcStateFill[40];
  if ( !*(_QWORD *)&RtlpBootStatHandleLock.ApcStateFill[40] )
    return 0;
  if ( !RtlpBootStatHandleLock.WaitBlockList )
    return 0;
  if ( !RtlpBootStatHandleLock.WaitStatus )
    return 0;
  if ( !RtlpBootStatHandleLock.WaitListEntry.Flink )
    return 0;
  if ( !RtlpBootStatHandleLock.WaitListEntry.Blink )
    return 0;
  RtlInitializeSid(PspSiloMonitorLock.ThreadListEntry.Blink, (PSID_IDENTIFIER_AUTHORITY)&v104, 0);
  RtlInitializeSid((PSID)Object, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(Sida, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v60, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(AffinityVersion, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v58, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(RelativeTimerBias, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v56, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(SparePtr, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v54, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v53, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v52, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(ThreadLock, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v50, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v49, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(v48, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(v47, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid((PSID)v46, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid((PSID)Thread, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(v14, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(v15, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(v16, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(v93, (PSID_IDENTIFIER_AUTHORITY)&v104, 6u);
  RtlInitializeSid((PSID)IdentifierAuthority, (PSID_IDENTIFIER_AUTHORITY)&v107, 1u);
  RtlInitializeSid(v62, (PSID_IDENTIFIER_AUTHORITY)&v107, 1u);
  RtlInitializeSid(v63, (PSID_IDENTIFIER_AUTHORITY)&v107, 1u);
  RtlInitializeSid(v64, (PSID_IDENTIFIER_AUTHORITY)&v107, 1u);
  RtlInitializeSid(v65, (PSID_IDENTIFIER_AUTHORITY)&v107, 1u);
  RtlInitializeSid(v66, (PSID_IDENTIFIER_AUTHORITY)&v43, 1u);
  RtlInitializeSid(Blink, (PSID_IDENTIFIER_AUTHORITY)&v43, 1u);
  RtlInitializeSid(v17, (PSID_IDENTIFIER_AUTHORITY)&v43, 2u);
  RtlInitializeSid(v18, (PSID_IDENTIFIER_AUTHORITY)&v43, 2u);
  memset_0(v19, 0, Size);
  RtlInitializeSid(v19, (PSID_IDENTIFIER_AUTHORITY)&v104, 6u);
  RtlInitializeSid(v95, (PSID_IDENTIFIER_AUTHORITY)&v105, 2u);
  RtlInitializeSid(v96, (PSID_IDENTIFIER_AUTHORITY)&v105, 2u);
  RtlInitializeSid(v97, (PSID_IDENTIFIER_AUTHORITY)&v105, 2u);
  RtlInitializeSid(v98, (PSID_IDENTIFIER_AUTHORITY)&v105, 2u);
  RtlInitializeSid(v100, (PSID_IDENTIFIER_AUTHORITY)&v105, 2u);
  RtlInitializeSid(v103, (PSID_IDENTIFIER_AUTHORITY)&v105, 2u);
  RtlInitializeSid(v99, (PSID_IDENTIFIER_AUTHORITY)&v105, 2u);
  RtlInitializeSid(v101, (PSID_IDENTIFIER_AUTHORITY)&v105, 2u);
  RtlInitializeSid(v20, (PSID_IDENTIFIER_AUTHORITY)&v43, 2u);
  v21 = v48;
  v22 = v49;
  v23 = v47;
  *(_DWORD *)(Object + 8) = 1;
  v24 = v46;
  Sida[2] = 2;
  *((_DWORD *)v60 + 2) = 3;
  *((_DWORD *)AffinityVersion + 2) = 4;
  *((_DWORD *)v58 + 2) = 6;
  *((_DWORD *)RelativeTimerBias + 2) = 10;
  *((_DWORD *)v56 + 2) = 18;
  *((_DWORD *)SparePtr + 2) = 11;
  *((_DWORD *)v54 + 2) = 12;
  *((_DWORD *)v53 + 2) = 7;
  *((_DWORD *)v52 + 2) = 19;
  *((_DWORD *)ThreadLock + 2) = 20;
  *((_DWORD *)v50 + 2) = 17;
  v25 = Thread;
  v22[2] = 32;
  v21[2] = 32;
  v23[2] = 32;
  *(_DWORD *)(v24 + 8) = 32;
  *(_DWORD *)(v25 + 8) = 32;
  LODWORD(v14->Blink) = 32;
  LODWORD(v15->Blink) = 32;
  v16[2] = 32;
  v22[3] = 544;
  v21[3] = 545;
  v23[3] = 546;
  *(_DWORD *)(v24 + 12) = 547;
  *(_DWORD *)(v25 + 12) = 548;
  v26 = IdentifierAuthority;
  HIDWORD(v14->Blink) = 549;
  HIDWORD(v15->Blink) = 550;
  v16[3] = 551;
  *(_DWORD *)(v26 + 8) = 0;
  *((_DWORD *)v62 + 2) = 4096;
  *((_DWORD *)v63 + 2) = 0x2000;
  *((_DWORD *)v64 + 2) = 12288;
  *((_DWORD *)v65 + 2) = 0x4000;
  *((_DWORD *)v66 + 2) = 2;
  *((_DWORD *)Blink + 2) = 3;
  v17[2] = 2;
  v17[3] = 1;
  LODWORD(v18->Blink) = 2;
  HIDWORD(v18->Blink) = 2;
  v20[2] = 3;
  v20[3] = 0x10000;
  if ( RtlDeriveCapabilitySidsFromName(&UnicodeString, CapabilityGroupSid, SeLpacAppExperienceCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v75, SeConstrainedImpersonationCapabilityGroupSid, SeLpacComCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v73,
         SeConstrainedImpersonationCapabilityGroupSid,
         (PSID)SepRmCapTableLock.Padding[3]) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v76,
         SeConstrainedImpersonationCapabilityGroupSid,
         (PSID)SepRmCapTableLock.Padding[4]) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v77,
         SeConstrainedImpersonationCapabilityGroupSid,
         (PSID)SepRmCapTableLock.Padding[1]) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v78,
         SeConstrainedImpersonationCapabilityGroupSid,
         (PSID)SepRmCapTableLock.Padding[2]) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v79,
         SeConstrainedImpersonationCapabilityGroupSid,
         (PSID)SepRmCapTableLock.SchedulerAssistLastYieldBoostTime) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v80,
         SeConstrainedImpersonationCapabilityGroupSid,
         (PSID)SepRmCapTableLock.Padding[0]) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v81, SeConstrainedImpersonationCapabilityGroupSid, SeRegistryReadCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v82,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacServicesManagementCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v83,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacSessionManagementCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v84, SeConstrainedImpersonationCapabilityGroupSid, SeLpacPrintingCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v85,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacWebPlatformCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v86, SeConstrainedImpersonationCapabilityGroupSid, SeLpacPaymentsCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v87, SeConstrainedImpersonationCapabilityGroupSid, SeLpacClipboardCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v88, SeConstrainedImpersonationCapabilityGroupSid, SeLpacImeCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v89,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacPackageManagerOperationCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v90,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacDeviceAccessCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v91,
         SeConstrainedImpersonationCapabilityGroupSid,
         (PSID)RtlpBootStatHandleLock.WaitStatus) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v92,
         SeConstrainedImpersonationCapabilityGroupSid,
         RtlpBootStatHandleLock.WaitBlockList) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v67,
         SeConstrainedImpersonationCapabilityGroupSid,
         RtlpBootStatHandleLock.WaitListEntry.Flink) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v68,
         SeConstrainedImpersonationCapabilityGroupSid,
         RtlpBootStatHandleLock.WaitListEntry.Blink) < 0 )
    return 0;
  v27 = SeDefaultAccountAliasSid;
  *(_DWORD *)(*(_QWORD *)&RtlpBootStatHandleLock.Timer.Processor + 8LL) = 84;
  *(_QWORD *)(SeProcTrustNoneSid + 8) = 0LL;
  v28 = SeProcTrustWinTcbSid;
  *((_DWORD *)SeProcTrustWinTcbSid + 2) = 1024;
  v28[3] = 0x2000;
  v29 = SeProcTrustWinSid;
  *(_DWORD *)(SeProcTrustWinSid + 8) = 1024;
  *(_DWORD *)(v29 + 12) = 4096;
  v30 = SeProcTrustAuthenticodeSid;
  *(_DWORD *)(SeProcTrustAuthenticodeSid + 8) = 1024;
  *(_DWORD *)(v30 + 12) = 1024;
  v31 = SeProcTrustLiteAntimalwareSid;
  *(_DWORD *)(SeProcTrustLiteAntimalwareSid + 8) = 512;
  *(_DWORD *)(v31 + 12) = 1536;
  v32 = SeProcTrustLiteWinTcbSid;
  *(_DWORD *)(SeProcTrustLiteWinTcbSid + 8) = 512;
  *(_DWORD *)(v32 + 12) = 0x2000;
  v33 = SeProcTrustLiteWinSid;
  *(_DWORD *)(SeProcTrustLiteWinSid + 8) = 512;
  *(_DWORD *)(v33 + 12) = 4096;
  v34 = SeProcTrustLiteAppSid;
  *(_DWORD *)(SeProcTrustLiteAppSid + 8) = 512;
  *(_DWORD *)(v34 + 12) = 2048;
  v35 = RtlpBootStatHandleLock.WaitBlock[0].WaitListEntry.Blink;
  LODWORD(RtlpBootStatHandleLock.WaitBlock[0].WaitListEntry.Blink->Blink) = 80;
  HIDWORD(v35->Blink) = 956008885;
  LODWORD(v35[1].Flink) = -876444647;
  HIDWORD(v35[1].Flink) = 1831038044;
  LODWORD(v35[1].Blink) = 1853292631;
  HIDWORD(v35[1].Blink) = -2023488832;
  RtlInitializeSid(v27, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  v36 = SeLearningModeLoggingCapabilitySid;
  v37 = SeConstrainedImpersonationCapabilityGroupSid;
  v27[2] = 32;
  v27[3] = 581;
  if ( RtlDeriveCapabilitySidsFromName(&v69, v37, v36) < 0
    || RtlDeriveCapabilitySidsFromName(
         &v70,
         SeConstrainedImpersonationCapabilityGroupSid,
         SePermissiveLearningModeCapabilitySid) < 0
    || RtlDeriveCapabilitySidsFromName(
         &v71,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeConstrainedImpersonationCapabilitySid) < 0
    || RtlDeriveCapabilitySidsFromName(
         &v72,
         SeSessionImpersonationCapabilityGroupSid,
         SeSessionImpersonationCapabilitySid) < 0 )
  {
    return 0;
  }
  SepInitSystemDacls();
  v105 = 3LL;
  PspSiloMonitorLock.SListFaultAddress = (void *)2;
  PspSiloMonitorLock.StateSaveArea = (_XSAVE_FORMAT *)3;
  Object = 4LL;
  SeLockMemoryPrivilege = (LUID)4LL;
  v107 = 5LL;
  PspSiloMonitorLock.QuantumTarget = 5LL;
  v46 = 6LL;
  PspSiloMonitorLock.Padding[2] = 6LL;
  Thread = 7LL;
  SeTcbPrivilege = (LUID)7LL;
  IdentifierAuthority = 8LL;
  SeSecurityPrivilege = (LUID)8LL;
  v43 = 9LL;
  SeTakeOwnershipPrivilege = 9LL;
  v47 = (PSID)10;
  SeLoadDriverPrivilege = (LUID)10LL;
  v48 = (PSID)15;
  PspSiloMonitorLock.WaitBlock[3].WaitListEntry.Blink = (struct _LIST_ENTRY *)15;
  v49 = (PSID)14;
  SeIncreaseBasePriorityPrivilege = (LUID)14LL;
  v50 = (PSID)11;
  SeSystemProfilePrivilege = (LUID)11LL;
  ThreadLock = (PSID)12;
  *($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&PspSiloMonitorLock.116 + 4) = ($C9C4F79064DE35237E3F199A7D1BD3E1)12LL;
  v52 = (PSID)13;
  SeProfileSingleProcessPrivilege = (LUID)13LL;
  v53 = (PSID)16;
  *(_QWORD *)&PspSiloMonitorLock.SystemCallNumber = 16LL;
  v54 = (PSID)17;
  SeBackupPrivilege = (LUID)17LL;
  SparePtr = (PSID)18;
  SeRestorePrivilege = (LUID)18LL;
  v56 = (PSID)19;
  SeShutdownPrivilege = (LUID)19LL;
  RelativeTimerBias = (PSID)20;
  SeDebugPrivilege = (LUID)20LL;
  v104 = 2LL;
  v58 = (PSID)21;
  AffinityVersion = (PSID)22;
  v60 = (PSID)23;
  PspSiloMonitorLock.WaitStatus = 21LL;
  SeSystemEnvironmentPrivilege = (LUID)22LL;
  *(_QWORD *)&PspSiloMonitorLock.NextProcessor = 23LL;
  *(_QWORD *)&PspSiloMonitorLock.AbWaitEntryCount = 24LL;
  PspSiloMonitorLock.KernelShadowStackBase = (void *)25;
  PspSiloMonitorLock.Padding[1] = 26LL;
  PspSiloMonitorLock.QueueListEntry.Blink = (struct _LIST_ENTRY *)27;
  KiSystemServiceTraceCallbackLock.WaitBlock[1].Thread = (struct _KTHREAD *)PspSiloMonitorLock.Header.WaitListHead.Blink;
  KiSystemServiceTraceCallbackLock.WaitBlock[1].Object = *(PVOID *)&RtlpBootStatHandleLock.WaitRegister.Flags;
  KiSystemServiceTraceCallbackLock.WaitBlock[1].SparePtr = RtlpBootStatHandleLock.SchedulingGroup;
  KiSystemServiceTraceCallbackLock.WaitBlock[2].WaitListEntry.Flink = (struct _LIST_ENTRY *)RtlpBootStatHandleLock.StateSaveArea;
  KiSystemServiceTraceCallbackLock.WaitBlock[2].WaitListEntry.Blink = *(struct _LIST_ENTRY **)&RtlpBootStatHandleLock.Timer.Header.Lock;
  KiSystemServiceTraceCallbackLock.SchedulerApc.SystemArgument2 = RtlpBootStatHandleLock.Teb;
  *(_QWORD *)&KiSystemServiceTraceCallbackLock.WaitBlockFill11[112] = PspSiloMonitorLock.ThreadListEntry.Blink;
  KiSystemServiceTraceCallbackLock.WaitBlock[2].Thread = (struct _KTHREAD *)PspSiloMonitorLock.WaitBlock[3].Object;
  *(_OWORD *)&KiSystemServiceTraceCallbackLock.WaitBlockFill11[128] = *(_OWORD *)&RtlpBootStatHandleLock.Timer.DueTime.LowPart;
  KiSystemServiceTraceCallbackLock.WaitBlock[3].WaitListEntry.Flink = (struct _LIST_ENTRY *)RtlpBootStatHandleLock.AffinityVersion;
  KiSystemServiceTraceCallbackLock.WaitBlock[3].WaitListEntry.Blink = *(struct _LIST_ENTRY **)((char *)&RtlpBootStatHandleLock.116
                                                                                             + 4);
  KiSystemServiceTraceCallbackLock.Process = (_KPROCESS *)PspSiloMonitorLock.WaitBlock[0].SparePtr;
  KiSystemServiceTraceCallbackLock.UserAffinity = (_KAFFINITY_EX *)SeRestrictedSid;
  *(_QWORD *)&KiSystemServiceTraceCallbackLock.UserAffinityPrimaryGroup = SeAnonymousLogonSid;
  KiSystemServiceTraceCallbackLock.NpxState = (unsigned __int64)SeLocalServiceSid;
  KiSystemServiceTraceCallbackLock.SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)PspSiloMonitorLock.ThreadLock;
  KiSystemServiceTraceCallbackLock.SchedulerApc.ApcListEntry.Blink = *(struct _LIST_ENTRY **)&PspSiloMonitorLock.ApcStateFill[40];
  *(_QWORD *)&KiSystemServiceTraceCallbackLock.WaitBlockFill11[160] = SeAliasAdminsSid;
  KiSystemServiceTraceCallbackLock.WaitBlock[3].Thread = *(struct _KTHREAD **)&PspSiloMonitorLock.WaitRegister.Flags;
  KiSystemServiceTraceCallbackLock.Spare18 = (unsigned __int64)PspSiloMonitorLock.WaitBlock[0].Object;
  *(_OWORD *)&KiSystemServiceTraceCallbackLock.LastXStateSaveDebugInfo = *(_OWORD *)&PspSiloMonitorLock.WaitBlockFill11[16];
  KiSystemServiceTraceCallbackLock.QueueListEntry = PspSiloMonitorLock.WaitBlock[0].WaitListEntry;
  *(_QWORD *)&KiSystemServiceTraceCallbackLock.NextProcessor = *(_QWORD *)&PspSiloMonitorLock.Timer.Processor;
  KiSystemServiceTraceCallbackLock.SchedulerApc.Reserved[0] = SeUntrustedMandatorySid;
  KiSystemServiceTraceCallbackLock.SchedulerApc.Reserved[1] = *(PVOID *)&SepRmCapTableLock.SchedulerAssistYieldCounter;
  PspSiloMonitorLock.QueueListEntry.Flink = (struct _LIST_ENTRY *)28;
  PspSiloMonitorLock.MutantListHead.Blink = (struct _LIST_ENTRY *)29;
  PspSiloMonitorLock.WaitBlock[1].Object = (PVOID)30;
  PspSiloMonitorLock.LastXStateSaveDebugInfo = 31LL;
  SeRelabelPrivilege = 32LL;
  PspSiloMonitorLock.SuspendEvent.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)33;
  *(_QWORD *)&PspSiloMonitorLock.ThreadFlags2 = 34LL;
  PspSiloMonitorLock.KernelShadowStackInitial = (void *)35;
  PspSiloMonitorLock.MutantListHead.Flink = (struct _LIST_ENTRY *)36;
  *(_OWORD *)&KiSystemServiceTraceCallbackLock.SchedulerApcFill5[48] = __PAIR128__(
                                                                         (unsigned __int64)SeHighMandatorySid,
                                                                         (unsigned __int64)SeMediumMandatorySid);
  KiSystemServiceTraceCallbackLock.SchedulerApc.SystemArgument1 = (PVOID)SeSystemMandatorySid;
  *(_QWORD *)&KiSystemServiceTraceCallbackLock.SchedulerApcFill5[80] = *(_QWORD *)&RtlpBootStatHandleLock.SystemCallNumber;
  *(_QWORD *)&KiSystemServiceTraceCallbackLock.SuspendEvent.Header.Lock = *(_QWORD *)&RtlpBootStatHandleLock.Timer.Processor;
  KiSystemServiceTraceCallbackLock.SuspendEvent.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)SeProcTrustWinTcbSid;
  KiSystemServiceTraceCallbackLock.SuspendEvent.Header.WaitListHead.Blink = RtlpBootStatHandleLock.WaitBlock[0].WaitListEntry.Blink;
  KiSystemServiceTraceCallbackLock.ThreadListEntry.Blink = *(struct _LIST_ENTRY **)&RtlpBootStatHandleLock.ApcStateFill[40];
  KiSystemServiceTraceCallbackLock.Timer.Header.SignalState = 0;
  KiSystemServiceTraceCallbackLock.Timer.Period = 0;
  KiSystemServiceTraceCallbackLock.WaitBlockList = (_KWAIT_BLOCK *)2;
  KiSystemServiceTraceCallbackLock.WaitListEntry.Flink = (struct _LIST_ENTRY *)3;
  KiSystemServiceTraceCallbackLock.WaitListEntry.Blink = (struct _LIST_ENTRY *)4;
  KiSystemServiceTraceCallbackLock.Queue = (_DISPATCHER_HEADER *volatile)5;
  KiSystemServiceTraceCallbackLock.Teb = (void *)6;
  KiSystemServiceTraceCallbackLock.RelativeTimerBias = 7LL;
  KiSystemServiceTraceCallbackLock.Timer.Header.LockNV = 8;
  KiSystemServiceTraceCallbackLock.Timer.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)9;
  KiSystemServiceTraceCallbackLock.Timer.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)10;
  KiSystemServiceTraceCallbackLock.Timer.DueTime.QuadPart = 15LL;
  KiSystemServiceTraceCallbackLock.Timer.TimerListEntry.Flink = (struct _LIST_ENTRY *)14;
  KiSystemServiceTraceCallbackLock.Timer.TimerListEntry.Blink = (struct _LIST_ENTRY *)11;
  KiSystemServiceTraceCallbackLock.Timer.Dpc = (_KDPC *)12;
  *(_DWORD *)&KiSystemServiceTraceCallbackLock.Timer.Processor = 13;
  KiSystemServiceTraceCallbackLock.WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)16;
  KiSystemServiceTraceCallbackLock.WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)17;
  *(_QWORD *)&KiSystemServiceTraceCallbackLock.WaitBlockFill11[16] = 18LL;
  KiSystemServiceTraceCallbackLock.MutantListHead = *(_LIST_ENTRY *)&RtlpBootStatHandleLock.WaitStatus;
  *($9F5D72EF54BCA79AE5AD03946D2C2FEF *)&KiSystemServiceTraceCallbackLock.AbWaitEntryCount = RtlpBootStatHandleLock.216;
  KiSystemServiceTraceCallbackLock.WaitBlock[0].Thread = (struct _KTHREAD *)19;
  KiSystemServiceTraceCallbackLock.WaitBlock[0].Object = (PVOID)20;
  KiSystemServiceTraceCallbackLock.WaitBlock[0].SparePtr = (PVOID)21;
  KiSystemServiceTraceCallbackLock.WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)22;
  KiSystemServiceTraceCallbackLock.WaitBlock[1].WaitListEntry.Blink = (struct _LIST_ENTRY *)23;
  *(_QWORD *)&KiSystemServiceTraceCallbackLock.WaitBlockFill11[64] = 24LL;
  KiSystemServiceTraceCallbackLock.AffinityVersion = 25LL;
  KiSystemServiceTraceCallbackLock.Affinity = (_KAFFINITY_EX *)26;
  *(_DWORD *)&KiSystemServiceTraceCallbackLock.AffinityPrimaryGroup = 27;
  KiSystemServiceTraceCallbackLock.IdealProcessor = 0;
  KiSystemServiceTraceCallbackLock.SavedApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)28;
  KiSystemServiceTraceCallbackLock.SavedApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)29;
  KiSystemServiceTraceCallbackLock.SavedApcState.ApcListHead[1].Blink = (struct _LIST_ENTRY *)30;
  KiSystemServiceTraceCallbackLock.SavedApcState.Process = (_KPROCESS *)31;
  *(_QWORD *)&KiSystemServiceTraceCallbackLock.SavedApcStateFill[40] = 32LL;
  *(_QWORD *)&KiSystemServiceTraceCallbackLock.SchedulerApc.Type = 33LL;
  KiSystemServiceTraceCallbackLock.SchedulerApc.Thread = (struct _KTHREAD *)34;
  KiSystemServiceTraceCallbackLock.SchedulerApc.ApcListEntry.Flink = (struct _LIST_ENTRY *)35;
  KiSystemServiceTraceCallbackLock.ThreadListEntry.Flink = (struct _LIST_ENTRY *)36;
  if ( (unsigned int)Feature_AgenticAppContainerBfsSupport__private_IsEnabledDeviceUsageNoInline() )
    KiSystemServiceTraceCallbackLock.PropagateBoostsEntry.Next = (struct _SINGLE_LIST_ENTRY *)RtlpBootStatHandleLock.WaitBlock[0].WaitListEntry.Flink;
  SeExports = (PSE_EXPORTS)&KiSystemServiceTraceCallbackLock.WaitBlockList;
  p_Blink = &SepRmCapTableLock.SavedApcState.ApcListHead[1].Blink;
  v39 = 5LL;
  do
  {
    *((_BYTE *)p_Blink + 8) = 0;
    *p_Blink = 0LL;
    *(p_Blink - 3) = 0LL;
    p_Blink += 5;
    --v39;
  }
  while ( v39 );
  SepRmCapTableLock.Affinity = 0LL;
  SepRmCapTableLock.AffinityVersion = 0LL;
  return (int)SepInitializeSharedSidMap() >= 0;
}
