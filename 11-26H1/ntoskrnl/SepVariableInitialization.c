/*
 * XREFs of SepVariableInitialization @ 0x140CDADF0
 * Callers:
 *     SepInitializationPhase0 @ 0x140CDD1A0 (SepInitializationPhase0.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x1404984A0 (RtlDeriveCapabilitySidsFromName.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SepInitializeSharedSidMap @ 0x140816B5C (SepInitializeSharedSidMap.c)
 *     RtlLengthRequiredSid @ 0x1408E9A40 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x140A6AF80 (RtlInitializeSid.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     SepInitSystemDacls @ 0x140CDA288 (SepInitSystemDacls.c)
 */

bool SepVariableInitialization()
{
  int v0; // eax
  bool v1; // cl
  ULONG v2; // ebx
  ULONG_PTR Pool2; // rdi
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // r12
  _DWORD *v5; // r13
  struct _KTHREAD *Thread; // r15
  struct _LIST_ENTRY *v7; // r14
  _DWORD *Object; // rsi
  ULONG v9; // eax
  ULONG v10; // esi
  ULONG v11; // edi
  ULONG v12; // ebx
  ULONG v13; // ebx
  _DWORD *v14; // r12
  _DWORD *v15; // r13
  struct _LIST_ENTRY *v16; // r15
  _DWORD *v17; // rsi
  _DWORD *v18; // rdi
  struct _LIST_ENTRY *v19; // r14
  struct _LIST_ENTRY *v20; // rbx
  _DWORD *v21; // r8
  _DWORD *v22; // r9
  _DWORD *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  _DWORD *Spare32; // rbx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  _KPROCESS *v35; // rax
  _OWORD *v36; // r8
  _KSWAPPABLE_PAGE *v37; // rdx
  unsigned __int64 *p_NpxState; // rcx
  __int64 v39; // rax
  _XSAVE_FORMAT *Sid; // [rsp+20h] [rbp-E0h]
  _DWORD *Sida; // [rsp+20h] [rbp-E0h]
  __int64 v43; // [rsp+28h] [rbp-D8h] BYREF
  __int64 IdentifierAuthority; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v45; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+40h] [rbp-C0h] BYREF
  PSID v47; // [rsp+48h] [rbp-B8h]
  PSID v48; // [rsp+50h] [rbp-B0h]
  PSID v49; // [rsp+58h] [rbp-A8h]
  PSID v50; // [rsp+60h] [rbp-A0h]
  PSID ThreadLock; // [rsp+68h] [rbp-98h]
  PSID v52; // [rsp+70h] [rbp-90h]
  PSID v53; // [rsp+78h] [rbp-88h]
  PSID v54; // [rsp+80h] [rbp-80h]
  PSID v55; // [rsp+88h] [rbp-78h]
  PSID v56; // [rsp+90h] [rbp-70h]
  PSID SparePtr; // [rsp+98h] [rbp-68h]
  PSID v58; // [rsp+A0h] [rbp-60h]
  PSID UserAffinity; // [rsp+A8h] [rbp-58h]
  PSID Flink; // [rsp+B0h] [rbp-50h]
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
  UNICODE_STRING String2; // [rsp+158h] [rbp+58h] BYREF
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
  PSID Process; // [rsp+288h] [rbp+188h]
  size_t Size; // [rsp+290h] [rbp+190h]
  PSID v95; // [rsp+298h] [rbp+198h]
  PSID v96; // [rsp+2A0h] [rbp+1A0h]
  PSID v97; // [rsp+2A8h] [rbp+1A8h]
  PSID v98; // [rsp+2B0h] [rbp+1B0h]
  PSID v99; // [rsp+2B8h] [rbp+1B8h]
  PSID v100; // [rsp+2C0h] [rbp+1C0h]
  PSID v101; // [rsp+2C8h] [rbp+1C8h]
  PSID SchedulerSharedSwappablePage; // [rsp+2D0h] [rbp+1D0h]
  PSID v103; // [rsp+2D8h] [rbp+1D8h]
  __int64 v104; // [rsp+330h] [rbp+230h] BYREF
  __int64 v105; // [rsp+338h] [rbp+238h] BYREF
  __int64 v106; // [rsp+340h] [rbp+240h] BYREF
  __int64 v107; // [rsp+348h] [rbp+248h] BYREF

  *(_QWORD *)&String2.Length = 2359330LL;
  String2.Buffer = L"lpacAppExperience";
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
  LODWORD(v45) = 0;
  WORD2(v45) = 256;
  LODWORD(v46) = 0;
  WORD2(v46) = 512;
  LODWORD(v106) = 0;
  WORD2(v106) = 768;
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
  RtlpBootStatHandleLock.WaitBlockFill7[128] = v1;
  RtlpBootStatHandleLock.WaitBlockFill7[130] = v1;
  RtlpBootStatHandleLock.WaitBlockFill7[131] = (v0 & 0x80) != 0;
  v2 = RtlLengthRequiredSid(1u);
  PspSiloMonitorLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)ExAllocatePool2(288LL, v2, 0x69536553u);
  *(_QWORD *)&RtlpBootStatHandleLock.UserAffinityPrimaryGroup = ExAllocatePool2(96LL, v2, 0x69536553u);
  RtlpBootStatHandleLock.WaitBlock[3].Thread = (struct _KTHREAD *)ExAllocatePool2(96LL, v2, 0x69536553u);
  RtlpBootStatHandleLock.WaitBlock[3].WaitListEntry.Blink = (struct _LIST_ENTRY *)ExAllocatePool2(96LL, v2, 0x69536553u);
  RtlpBootStatHandleLock.Spare18 = ExAllocatePool2(96LL, v2, 0x69536553u);
  RtlpBootStatHandleLock.StateSaveArea = (_XSAVE_FORMAT *)ExAllocatePool2(96LL, v2, 0x69536553u);
  RtlpBootStatHandleLock.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)ExAllocatePool2(96LL, v2, 0x69536553u);
  Pool2 = ExAllocatePool2(96LL, v2, 0x69536553u);
  RtlpBootStatHandleLock.WaitBlock[3].WaitListEntry.Flink = (struct _LIST_ENTRY *)Pool2;
  Blink = PspSiloMonitorLock.Header.WaitListHead.Blink;
  if ( !PspSiloMonitorLock.Header.WaitListHead.Blink )
    return 0;
  Sid = RtlpBootStatHandleLock.StateSaveArea;
  if ( !RtlpBootStatHandleLock.StateSaveArea )
    return 0;
  SchedulingGroup = RtlpBootStatHandleLock.SchedulingGroup;
  if ( !RtlpBootStatHandleLock.SchedulingGroup )
    return 0;
  v5 = *(_DWORD **)&RtlpBootStatHandleLock.UserAffinityPrimaryGroup;
  if ( !*(_QWORD *)&RtlpBootStatHandleLock.UserAffinityPrimaryGroup )
    return 0;
  Thread = RtlpBootStatHandleLock.WaitBlock[3].Thread;
  if ( !RtlpBootStatHandleLock.WaitBlock[3].Thread )
    return 0;
  v7 = RtlpBootStatHandleLock.WaitBlock[3].WaitListEntry.Blink;
  if ( !RtlpBootStatHandleLock.WaitBlock[3].WaitListEntry.Blink )
    return 0;
  if ( !Pool2 )
    return 0;
  Object = RtlpBootStatHandleLock.WaitBlock[3].Object;
  if ( !RtlpBootStatHandleLock.Spare18 )
    return 0;
  RtlInitializeSid(PspSiloMonitorLock.Header.WaitListHead.Blink, (PSID_IDENTIFIER_AUTHORITY)&IdentifierAuthority, 1u);
  RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&v45, 1u);
  RtlInitializeSid(SchedulingGroup, (PSID_IDENTIFIER_AUTHORITY)&v46, 1u);
  RtlInitializeSid(v5, (PSID_IDENTIFIER_AUTHORITY)&v106, 1u);
  RtlInitializeSid(Thread, (PSID_IDENTIFIER_AUTHORITY)&v106, 1u);
  RtlInitializeSid(v7, (PSID_IDENTIFIER_AUTHORITY)&v106, 1u);
  RtlInitializeSid(Object, (PSID_IDENTIFIER_AUTHORITY)&v106, 1u);
  RtlInitializeSid((PSID)Pool2, (PSID_IDENTIFIER_AUTHORITY)&v106, 1u);
  *((_DWORD *)Blink + 2) = 0;
  Sid->ErrorOffset = 0;
  SchedulingGroup->RelativeWeight = 0;
  v5[2] = 0;
  LODWORD(Thread->Header.WaitListHead.Flink) = 1;
  LODWORD(v7->Blink) = 2;
  Object[2] = 3;
  *(_DWORD *)(Pool2 + 8) = 4;
  v9 = RtlLengthRequiredSid(0);
  PspSiloMonitorLock.ThreadListEntry.Blink = (struct _LIST_ENTRY *)ExAllocatePool2(288LL, v9, 0x69536553u);
  PspSiloMonitorLock.Spare18 = ExAllocatePool2(288LL, v2, 0x69536553u);
  *(_QWORD *)&RtlpBootStatHandleLock.WaitBlockFill11[160] = ExAllocatePool2(96LL, v2, 0x69536553u);
  RtlpBootStatHandleLock.QueueListEntry.Flink = (struct _LIST_ENTRY *)ExAllocatePool2(96LL, v2, 0x69536553u);
  RtlpBootStatHandleLock.UserAffinity = (_KAFFINITY_EX *)ExAllocatePool2(96LL, v2, 0x69536553u);
  RtlpBootStatHandleLock.WaitBlock[2].SparePtr = (PVOID)ExAllocatePool2(96LL, v2, 0x69536553u);
  PspSiloMonitorLock.WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)ExAllocatePool2(288LL, v2, 0x69536553u);
  *(_QWORD *)&RtlpBootStatHandleLock.WaitRegister.Flags = ExAllocatePool2(96LL, v2, 0x69536553u);
  *(_QWORD *)&PspSiloMonitorLock.WaitBlockFill11[16] = ExAllocatePool2(288LL, v2, 0x69536553u);
  SeRestrictedSid = (PSID)ExAllocatePool2(288LL, v2, 0x69536553u);
  SeAnonymousLogonSid = (PSID)ExAllocatePool2(288LL, v2, 0x69536553u);
  SeLocalServiceSid = (PSID)ExAllocatePool2(288LL, v2, 0x69536553u);
  PspSiloMonitorLock.ThreadLock = ExAllocatePool2(288LL, v2, 0x69536553u);
  *(_QWORD *)&PspSiloMonitorLock.ApcStateFill[40] = ExAllocatePool2(288LL, v2, 0x69536553u);
  v10 = RtlLengthRequiredSid(2u);
  SeAliasAdminsSid = (PSID)ExAllocatePool2(288LL, v10, 0x69536553u);
  *($353D57E818BB6F967B4B818D974CF463 *)((char *)&PspSiloMonitorLock.116 + 4) = ($353D57E818BB6F967B4B818D974CF463)ExAllocatePool2(288LL, v10, 0x69536553u);
  PspSiloMonitorLock.WaitBlock[0].SparePtr = (PVOID)ExAllocatePool2(288LL, v10, 0x69536553u);
  PspSiloMonitorLock.WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)ExAllocatePool2(288LL, v10, 0x69536553u);
  PspSiloMonitorLock.WaitBlock[0].Thread = (struct _KTHREAD *)ExAllocatePool2(288LL, v10, 0x69536553u);
  PspSiloMonitorLock.WaitBlock[0].Object = (PVOID)ExAllocatePool2(288LL, v10, 0x69536553u);
  *(_QWORD *)&PspSiloMonitorLock.Timer.Processor = ExAllocatePool2(288LL, v10, 0x69536553u);
  PspSiloMonitorLock.WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)ExAllocatePool2(288LL, v10, 0x69536553u);
  SeUntrustedMandatorySid = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  *(_QWORD *)&SepRmCapTableLock.ResourceIndex = ExAllocatePool2(96LL, v2, 0x69536553u);
  SeMediumMandatorySid = (void *)ExAllocatePool2(96LL, v2, 0x69536553u);
  SeHighMandatorySid = (void *)ExAllocatePool2(96LL, v2, 0x69536553u);
  SeSystemMandatorySid = ExAllocatePool2(96LL, v2, 0x69536553u);
  RtlpBootStatHandleLock.LastXStateSaveDebugInfo = ExAllocatePool2(96LL, v2, 0x69536553u);
  *(_QWORD *)&RtlpBootStatHandleLock.ThreadFlags2 = ExAllocatePool2(96LL, v2, 0x69536553u);
  *($353D57E818BB6F967B4B818D974CF463 *)((char *)&RtlpBootStatHandleLock.116 + 4) = ($353D57E818BB6F967B4B818D974CF463)ExAllocatePool2(96LL, v10, 0x69536553u);
  *(_QWORD *)&RtlpBootStatHandleLock.NextProcessor = ExAllocatePool2(96LL, v10, 0x69536553u);
  v11 = RtlLengthRequiredSid(0xAu);
  SepRmCapTableLock.KcsanThread = ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacComCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacCryptoServicesCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacIdentityServicesCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacInstrumentationCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacEnterprisePolicyChangeNotificationsCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacMediaCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacPnpNotificationsCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
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
  RtlpBootStatHandleLock.QueueListEntry.Blink = (struct _LIST_ENTRY *)ExAllocatePool2(96LL, v12, 0x69536553u);
  RtlpBootStatHandleLock.Process = (_KPROCESS *)ExAllocatePool2(96LL, v12, 0x69536553u);
  SepRmCapTableLock.Padding[2] = ExAllocatePool2(96LL, v10, 0x69536553u);
  SepRmCapTableLock.Padding[3] = ExAllocatePool2(96LL, v10, 0x69536553u);
  SepRmCapTableLock.Padding[0] = ExAllocatePool2(96LL, v10, 0x69536553u);
  SepRmCapTableLock.Padding[1] = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeProcTrustLiteWinTcbSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeProcTrustLiteWinSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SepRmCapTableLock.Padding[4] = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeProcTrustNoneSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SepRmCapTableLock.Spare32 = (void *)ExAllocatePool2(288LL, v10, 0x69536553u);
  SeLearningModeLoggingCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SePermissiveLearningModeCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  v13 = RtlLengthRequiredSid(9u);
  SepRmCapTableLock.SchedulerSharedSwappablePage = (_KSWAPPABLE_PAGE *)ExAllocatePool2(288LL, v13, 0x69536553u);
  SepRmCapTableLock.AutoBoostThreadState = (void *)ExAllocatePool2(288LL, v11, 0x69536553u);
  *(_QWORD *)&SepRmCapTableLock.SchedulerAssistYieldCounter = ExAllocatePool2(288LL, v13, 0x69536553u);
  SepRmCapTableLock.SchedulerAssistLastYieldBoostTime = ExAllocatePool2(288LL, v11, 0x69536553u);
  RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)ExAllocatePool2(96LL, v10, 0x69536553u);
  RtlpBootStatHandleLock.ApcState.ApcListHead[1].Blink = (struct _LIST_ENTRY *)ExAllocatePool2(288LL, v11, 0x69536553u);
  *(_QWORD *)&RtlpBootStatHandleLock.ApcStateFill[40] = ExAllocatePool2(288LL, v11, 0x69536553u);
  RtlpBootStatHandleLock.WaitStatus = ExAllocatePool2(288LL, v11, 0x69536553u);
  RtlpBootStatHandleLock.ApcState.Process = (_KPROCESS *)ExAllocatePool2(288LL, v11, 0x69536553u);
  if ( !PspSiloMonitorLock.ThreadListEntry.Blink )
    return 0;
  v106 = (__int64)PspSiloMonitorLock.WaitBlock[3].Object;
  if ( !PspSiloMonitorLock.Spare18 )
    return 0;
  Sida = *(_DWORD **)&RtlpBootStatHandleLock.WaitBlockFill11[160];
  if ( !*(_QWORD *)&RtlpBootStatHandleLock.WaitBlockFill11[160] )
    return 0;
  Flink = RtlpBootStatHandleLock.QueueListEntry.Flink;
  if ( !RtlpBootStatHandleLock.QueueListEntry.Flink )
    return 0;
  UserAffinity = RtlpBootStatHandleLock.UserAffinity;
  if ( !RtlpBootStatHandleLock.UserAffinity )
    return 0;
  v58 = PspSiloMonitorLock.WaitBlock[0].WaitListEntry.Blink;
  if ( !PspSiloMonitorLock.WaitBlock[0].WaitListEntry.Blink )
    return 0;
  SparePtr = RtlpBootStatHandleLock.WaitBlock[2].SparePtr;
  if ( !RtlpBootStatHandleLock.WaitBlock[2].SparePtr )
    return 0;
  v56 = *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags;
  if ( !*(_QWORD *)&RtlpBootStatHandleLock.WaitRegister.Flags )
    return 0;
  v55 = *(PSID *)&PspSiloMonitorLock.WaitBlockFill11[16];
  if ( !*(_QWORD *)&PspSiloMonitorLock.WaitBlockFill11[16] )
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
  v48 = *(PSID *)((char *)&PspSiloMonitorLock.116 + 4);
  if ( !*(_QWORD *)((char *)&PspSiloMonitorLock.116 + 4) )
    return 0;
  v47 = PspSiloMonitorLock.WaitBlock[0].SparePtr;
  if ( !PspSiloMonitorLock.WaitBlock[0].SparePtr )
    return 0;
  v46 = (__int64)PspSiloMonitorLock.WaitBlock[1].WaitListEntry.Flink;
  if ( !PspSiloMonitorLock.WaitBlock[1].WaitListEntry.Flink )
    return 0;
  v45 = (__int64)PspSiloMonitorLock.WaitBlock[0].Thread;
  if ( !PspSiloMonitorLock.WaitBlock[0].Thread )
    return 0;
  v14 = PspSiloMonitorLock.WaitBlock[0].Object;
  if ( !PspSiloMonitorLock.WaitBlock[0].Object )
    return 0;
  v15 = *(_DWORD **)&PspSiloMonitorLock.Timer.Processor;
  if ( !*(_QWORD *)&PspSiloMonitorLock.Timer.Processor )
    return 0;
  v16 = PspSiloMonitorLock.WaitBlock[0].WaitListEntry.Flink;
  if ( !PspSiloMonitorLock.WaitBlock[0].WaitListEntry.Flink )
    return 0;
  IdentifierAuthority = (__int64)SeUntrustedMandatorySid;
  if ( !SeUntrustedMandatorySid )
    return 0;
  v62 = *(PSID *)&SepRmCapTableLock.ResourceIndex;
  if ( !*(_QWORD *)&SepRmCapTableLock.ResourceIndex )
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
  v66 = RtlpBootStatHandleLock.WaitBlock[3].SparePtr;
  if ( !RtlpBootStatHandleLock.LastXStateSaveDebugInfo )
    return 0;
  Blink = *(PSID *)&RtlpBootStatHandleLock.ThreadFlags2;
  if ( !*(_QWORD *)&RtlpBootStatHandleLock.ThreadFlags2 )
    return 0;
  v17 = *(_DWORD **)((char *)&RtlpBootStatHandleLock.116 + 4);
  if ( !*(_QWORD *)((char *)&RtlpBootStatHandleLock.116 + 4) )
    return 0;
  v18 = *(_DWORD **)&RtlpBootStatHandleLock.NextProcessor;
  if ( !*(_QWORD *)&RtlpBootStatHandleLock.NextProcessor )
    return 0;
  if ( !SepRmCapTableLock.KcsanThread )
    return 0;
  if ( !SeLpacComCapabilitySid )
    return 0;
  if ( !SeLpacCryptoServicesCapabilitySid )
    return 0;
  if ( !SeLpacIdentityServicesCapabilitySid )
    return 0;
  if ( !SeLpacInstrumentationCapabilitySid )
    return 0;
  if ( !SeLpacEnterprisePolicyChangeNotificationsCapabilitySid )
    return 0;
  if ( !SeLpacMediaCapabilitySid )
    return 0;
  if ( !SeLpacPnpNotificationsCapabilitySid )
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
  v19 = RtlpBootStatHandleLock.QueueListEntry.Blink;
  if ( !RtlpBootStatHandleLock.QueueListEntry.Blink )
    return 0;
  v96 = (PSID)SepRmCapTableLock.Padding[2];
  if ( !SepRmCapTableLock.Padding[2] )
    return 0;
  v97 = (PSID)SepRmCapTableLock.Padding[3];
  if ( !SepRmCapTableLock.Padding[3] )
    return 0;
  v98 = (PSID)SepRmCapTableLock.Padding[0];
  if ( !SepRmCapTableLock.Padding[0] )
    return 0;
  v100 = (PSID)SepRmCapTableLock.Padding[1];
  if ( !SepRmCapTableLock.Padding[1] )
    return 0;
  v103 = (PSID)SeProcTrustLiteWinTcbSid;
  if ( !SeProcTrustLiteWinTcbSid )
    return 0;
  v99 = (PSID)SeProcTrustLiteWinSid;
  if ( !SeProcTrustLiteWinSid )
    return 0;
  v101 = (PSID)SepRmCapTableLock.Padding[4];
  if ( !SepRmCapTableLock.Padding[4] )
    return 0;
  v95 = (PSID)SeProcTrustNoneSid;
  if ( !SeProcTrustNoneSid )
    return 0;
  Process = RtlpBootStatHandleLock.Process;
  if ( !RtlpBootStatHandleLock.Process )
    return 0;
  if ( !SepRmCapTableLock.Spare32 )
    return 0;
  if ( !SeLearningModeLoggingCapabilitySid )
    return 0;
  if ( !SePermissiveLearningModeCapabilitySid )
    return 0;
  if ( !SepRmCapTableLock.AutoBoostThreadState )
    return 0;
  SchedulerSharedSwappablePage = SepRmCapTableLock.SchedulerSharedSwappablePage;
  if ( !SepRmCapTableLock.SchedulerSharedSwappablePage )
    return 0;
  if ( !SepRmCapTableLock.SchedulerAssistLastYieldBoostTime )
    return 0;
  if ( !*(_QWORD *)&SepRmCapTableLock.SchedulerAssistYieldCounter )
    return 0;
  v20 = RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink;
  if ( !RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
    return 0;
  if ( !*(_QWORD *)&RtlpBootStatHandleLock.ApcStateFill[40] )
    return 0;
  if ( !RtlpBootStatHandleLock.ApcState.ApcListHead[1].Blink )
    return 0;
  if ( !RtlpBootStatHandleLock.WaitStatus )
    return 0;
  if ( !RtlpBootStatHandleLock.ApcState.Process )
    return 0;
  RtlInitializeSid(PspSiloMonitorLock.ThreadListEntry.Blink, (PSID_IDENTIFIER_AUTHORITY)&v104, 0);
  RtlInitializeSid((PSID)v106, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(Sida, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(Flink, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(UserAffinity, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v58, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(SparePtr, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v56, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v55, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v54, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v53, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v52, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(ThreadLock, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v50, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v49, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(v48, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(v47, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid((PSID)v46, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid((PSID)v45, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(v14, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(v15, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(v16, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(Process, (PSID_IDENTIFIER_AUTHORITY)&v104, 6u);
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
  *(_DWORD *)(v106 + 8) = 1;
  v24 = v46;
  Sida[2] = 2;
  *((_DWORD *)Flink + 2) = 3;
  *((_DWORD *)UserAffinity + 2) = 4;
  *((_DWORD *)v58 + 2) = 6;
  *((_DWORD *)SparePtr + 2) = 10;
  *((_DWORD *)v56 + 2) = 18;
  *((_DWORD *)v55 + 2) = 11;
  *((_DWORD *)v54 + 2) = 12;
  *((_DWORD *)v53 + 2) = 7;
  *((_DWORD *)v52 + 2) = 19;
  *((_DWORD *)ThreadLock + 2) = 20;
  *((_DWORD *)v50 + 2) = 17;
  v25 = v45;
  v22[2] = 32;
  v21[2] = 32;
  v23[2] = 32;
  *(_DWORD *)(v24 + 8) = 32;
  *(_DWORD *)(v25 + 8) = 32;
  v14[2] = 32;
  v15[2] = 32;
  LODWORD(v16->Blink) = 32;
  v22[3] = 544;
  v21[3] = 545;
  v23[3] = 546;
  *(_DWORD *)(v24 + 12) = 547;
  *(_DWORD *)(v25 + 12) = 548;
  v26 = IdentifierAuthority;
  v14[3] = 549;
  v15[3] = 550;
  HIDWORD(v16->Blink) = 551;
  *(_DWORD *)(v26 + 8) = 0;
  *((_DWORD *)v62 + 2) = 4096;
  *((_DWORD *)v63 + 2) = 0x2000;
  *((_DWORD *)v64 + 2) = 12288;
  *((_DWORD *)v65 + 2) = 0x4000;
  *((_DWORD *)v66 + 2) = 2;
  *((_DWORD *)Blink + 2) = 3;
  v17[2] = 2;
  v17[3] = 1;
  v18[2] = 2;
  v18[3] = 2;
  LODWORD(v20->Blink) = 3;
  HIDWORD(v20->Blink) = 0x10000;
  if ( RtlDeriveCapabilitySidsFromName(&String2, SchedulerSharedSwappablePage, (_OWORD *)SepRmCapTableLock.KcsanThread) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v75, SepRmCapTableLock.SchedulerSharedSwappablePage, SeLpacComCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v73,
         SepRmCapTableLock.SchedulerSharedSwappablePage,
         SeLpacCryptoServicesCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v76,
         SepRmCapTableLock.SchedulerSharedSwappablePage,
         SeLpacIdentityServicesCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v77,
         SepRmCapTableLock.SchedulerSharedSwappablePage,
         SeLpacInstrumentationCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v78,
         SepRmCapTableLock.SchedulerSharedSwappablePage,
         SeLpacEnterprisePolicyChangeNotificationsCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v79, SepRmCapTableLock.SchedulerSharedSwappablePage, SeLpacMediaCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v80,
         SepRmCapTableLock.SchedulerSharedSwappablePage,
         SeLpacPnpNotificationsCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v81,
         SepRmCapTableLock.SchedulerSharedSwappablePage,
         SeRegistryReadCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v82,
         SepRmCapTableLock.SchedulerSharedSwappablePage,
         SeLpacServicesManagementCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v83,
         SepRmCapTableLock.SchedulerSharedSwappablePage,
         SeLpacSessionManagementCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v84,
         SepRmCapTableLock.SchedulerSharedSwappablePage,
         SeLpacPrintingCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v85,
         SepRmCapTableLock.SchedulerSharedSwappablePage,
         SeLpacWebPlatformCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v86,
         SepRmCapTableLock.SchedulerSharedSwappablePage,
         SeLpacPaymentsCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v87,
         SepRmCapTableLock.SchedulerSharedSwappablePage,
         SeLpacClipboardCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v88, SepRmCapTableLock.SchedulerSharedSwappablePage, SeLpacImeCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v89,
         SepRmCapTableLock.SchedulerSharedSwappablePage,
         SeLpacPackageManagerOperationCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v90,
         SepRmCapTableLock.SchedulerSharedSwappablePage,
         SeLpacDeviceAccessCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v91,
         SepRmCapTableLock.SchedulerSharedSwappablePage,
         RtlpBootStatHandleLock.ApcState.ApcListHead[1].Blink) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v92,
         SepRmCapTableLock.SchedulerSharedSwappablePage,
         *(_OWORD **)&RtlpBootStatHandleLock.ApcStateFill[40]) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v67,
         SepRmCapTableLock.SchedulerSharedSwappablePage,
         (_OWORD *)RtlpBootStatHandleLock.WaitStatus) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v68,
         SepRmCapTableLock.SchedulerSharedSwappablePage,
         &RtlpBootStatHandleLock.ApcState.Process->Header.Lock) < 0 )
    return 0;
  Spare32 = SepRmCapTableLock.Spare32;
  LODWORD(RtlpBootStatHandleLock.QueueListEntry.Blink->Blink) = 84;
  *(_QWORD *)(SeProcTrustNoneSid + 8) = 0LL;
  v28 = SepRmCapTableLock.Padding[2];
  *(_DWORD *)(SepRmCapTableLock.Padding[2] + 8) = 1024;
  *(_DWORD *)(v28 + 12) = 0x2000;
  v29 = SepRmCapTableLock.Padding[3];
  *(_DWORD *)(SepRmCapTableLock.Padding[3] + 8) = 1024;
  *(_DWORD *)(v29 + 12) = 4096;
  v30 = SepRmCapTableLock.Padding[0];
  *(_DWORD *)(SepRmCapTableLock.Padding[0] + 8) = 1024;
  *(_DWORD *)(v30 + 12) = 1024;
  v31 = SepRmCapTableLock.Padding[1];
  *(_DWORD *)(SepRmCapTableLock.Padding[1] + 8) = 512;
  *(_DWORD *)(v31 + 12) = 1536;
  v32 = SeProcTrustLiteWinTcbSid;
  *(_DWORD *)(SeProcTrustLiteWinTcbSid + 8) = 512;
  *(_DWORD *)(v32 + 12) = 0x2000;
  v33 = SeProcTrustLiteWinSid;
  *(_DWORD *)(SeProcTrustLiteWinSid + 8) = 512;
  *(_DWORD *)(v33 + 12) = 4096;
  v34 = SepRmCapTableLock.Padding[4];
  *(_DWORD *)(SepRmCapTableLock.Padding[4] + 8) = 512;
  *(_DWORD *)(v34 + 12) = 2048;
  v35 = RtlpBootStatHandleLock.Process;
  LODWORD(RtlpBootStatHandleLock.Process->Header.WaitListHead.Flink) = 80;
  HIDWORD(v35->Header.WaitListHead.Flink) = 956008885;
  LODWORD(v35->Header.WaitListHead.Blink) = -876444647;
  HIDWORD(v35->Header.WaitListHead.Blink) = 1831038044;
  LODWORD(v35->ProfileListHead.Flink) = 1853292631;
  HIDWORD(v35->ProfileListHead.Flink) = -2023488832;
  RtlInitializeSid(Spare32, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  v36 = SeLearningModeLoggingCapabilitySid;
  v37 = SepRmCapTableLock.SchedulerSharedSwappablePage;
  Spare32[2] = 32;
  Spare32[3] = 581;
  if ( RtlDeriveCapabilitySidsFromName(&v69, v37, v36) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v70,
         SepRmCapTableLock.SchedulerSharedSwappablePage,
         SePermissiveLearningModeCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v71,
         SepRmCapTableLock.SchedulerSharedSwappablePage,
         (_OWORD *)SepRmCapTableLock.AutoBoostThreadState) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v72,
         *(_OWORD **)&SepRmCapTableLock.SchedulerAssistYieldCounter,
         (_OWORD *)SepRmCapTableLock.SchedulerAssistLastYieldBoostTime) < 0 )
    return 0;
  SepInitSystemDacls();
  v105 = 3LL;
  PspSiloMonitorLock.SListFaultAddress = (void *)2;
  PspSiloMonitorLock.StateSaveArea = (_XSAVE_FORMAT *)3;
  v106 = 4LL;
  SeLockMemoryPrivilege = (LUID)4LL;
  v107 = 5LL;
  PspSiloMonitorLock.QuantumTarget = 5LL;
  v46 = 6LL;
  PspSiloMonitorLock.Padding[2] = 6LL;
  v45 = 7LL;
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
  *(_QWORD *)&PspSiloMonitorLock.SystemCallNumber = 12LL;
  v52 = (PSID)13;
  SeProfileSingleProcessPrivilege = (LUID)13LL;
  v53 = (PSID)16;
  PspSiloMonitorLock.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)16;
  v54 = (PSID)17;
  SeBackupPrivilege = (LUID)17LL;
  v55 = (PSID)18;
  SeRestorePrivilege = (LUID)18LL;
  v56 = (PSID)19;
  SeShutdownPrivilege = (LUID)19LL;
  SparePtr = (PSID)20;
  SeDebugPrivilege = (LUID)20LL;
  v104 = 2LL;
  v58 = (PSID)21;
  UserAffinity = (PSID)22;
  Flink = (PSID)23;
  PspSiloMonitorLock.WaitStatus = 21LL;
  SeSystemEnvironmentPrivilege = (LUID)22LL;
  *(_QWORD *)&PspSiloMonitorLock.NextProcessor = 23LL;
  *(_QWORD *)&PspSiloMonitorLock.AbWaitEntryCount = 24LL;
  *(_QWORD *)&PspSiloMonitorLock.SchedulerAssistPriorityFloor = 25LL;
  PspSiloMonitorLock.Padding[1] = 26LL;
  PspSiloMonitorLock.LastXStateSaveDebugInfo = 27LL;
  KiSystemServiceTraceCallbackLock.WaitBlock[1].Thread = (struct _KTHREAD *)PspSiloMonitorLock.Header.WaitListHead.Blink;
  *(_OWORD *)&KiSystemServiceTraceCallbackLock.WaitBlockFill11[80] = *(_OWORD *)&RtlpBootStatHandleLock.StateSaveArea;
  KiSystemServiceTraceCallbackLock.WaitBlock[2].WaitListEntry.Flink = *(struct _LIST_ENTRY **)&RtlpBootStatHandleLock.UserAffinityPrimaryGroup;
  KiSystemServiceTraceCallbackLock.WaitBlock[2].WaitListEntry.Blink = (struct _LIST_ENTRY *)RtlpBootStatHandleLock.WaitBlock[3].Thread;
  KiSystemServiceTraceCallbackLock.SchedulerApc.SystemArgument2 = RtlpBootStatHandleLock.WaitBlock[3].WaitListEntry.Flink;
  *(_QWORD *)&KiSystemServiceTraceCallbackLock.WaitBlockFill11[112] = PspSiloMonitorLock.ThreadListEntry.Blink;
  KiSystemServiceTraceCallbackLock.WaitBlock[2].Thread = (struct _KTHREAD *)PspSiloMonitorLock.WaitBlock[3].Object;
  KiSystemServiceTraceCallbackLock.WaitBlock[2].Object = *(PVOID *)&RtlpBootStatHandleLock.WaitBlockFill11[160];
  KiSystemServiceTraceCallbackLock.WaitBlock[2].SparePtr = RtlpBootStatHandleLock.QueueListEntry.Flink;
  KiSystemServiceTraceCallbackLock.WaitBlock[3].WaitListEntry.Flink = (struct _LIST_ENTRY *)RtlpBootStatHandleLock.UserAffinity;
  KiSystemServiceTraceCallbackLock.WaitBlock[3].WaitListEntry.Blink = *(struct _LIST_ENTRY **)&RtlpBootStatHandleLock.WaitRegister.Flags;
  KiSystemServiceTraceCallbackLock.Process = *(_KPROCESS **)&PspSiloMonitorLock.WaitBlockFill11[16];
  KiSystemServiceTraceCallbackLock.UserAffinity = (_KAFFINITY_EX *)SeRestrictedSid;
  *(_QWORD *)&KiSystemServiceTraceCallbackLock.UserAffinityPrimaryGroup = SeAnonymousLogonSid;
  KiSystemServiceTraceCallbackLock.NpxState = (unsigned __int64)SeLocalServiceSid;
  KiSystemServiceTraceCallbackLock.SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)PspSiloMonitorLock.ThreadLock;
  KiSystemServiceTraceCallbackLock.SchedulerApc.ApcListEntry.Blink = *(struct _LIST_ENTRY **)&PspSiloMonitorLock.ApcStateFill[40];
  *(_QWORD *)&KiSystemServiceTraceCallbackLock.WaitBlockFill11[160] = SeAliasAdminsSid;
  KiSystemServiceTraceCallbackLock.WaitBlock[3].Thread = *(struct _KTHREAD **)((char *)&PspSiloMonitorLock.116 + 4);
  *(_OWORD *)&KiSystemServiceTraceCallbackLock.Spare18 = *(_OWORD *)&PspSiloMonitorLock.WaitBlockFill11[40];
  *(_OWORD *)&KiSystemServiceTraceCallbackLock.ThreadFlags2 = *(_OWORD *)&PspSiloMonitorLock.WaitBlockFill11[24];
  KiSystemServiceTraceCallbackLock.QueueListEntry.Blink = *(struct _LIST_ENTRY **)&PspSiloMonitorLock.Timer.Processor;
  *(_QWORD *)&KiSystemServiceTraceCallbackLock.NextProcessor = PspSiloMonitorLock.WaitBlock[0].WaitListEntry.Flink;
  KiSystemServiceTraceCallbackLock.SchedulerApc.Reserved[0] = SeUntrustedMandatorySid;
  KiSystemServiceTraceCallbackLock.SchedulerApc.Reserved[1] = *(PVOID *)&SepRmCapTableLock.ResourceIndex;
  *(_QWORD *)&PspSiloMonitorLock.ThreadFlags2 = 28LL;
  PspSiloMonitorLock.MutantListHead.Blink = (struct _LIST_ENTRY *)29;
  PspSiloMonitorLock.Timer.Dpc = (_KDPC *)30;
  PspSiloMonitorLock.QueueListEntry.Blink = (struct _LIST_ENTRY *)31;
  SeRelabelPrivilege = 32LL;
  PspSiloMonitorLock.SuspendEvent.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)33;
  PspSiloMonitorLock.QueueListEntry.Flink = (struct _LIST_ENTRY *)34;
  PspSiloMonitorLock.KernelShadowStack = (void *)35;
  PspSiloMonitorLock.MutantListHead.Flink = (struct _LIST_ENTRY *)36;
  KiSystemServiceTraceCallbackLock.SchedulerApc.Reserved[2] = SeMediumMandatorySid;
  *(_OWORD *)&KiSystemServiceTraceCallbackLock.SchedulerApcFill5[56] = __PAIR128__(
                                                                         SeSystemMandatorySid,
                                                                         (unsigned __int64)SeHighMandatorySid);
  *($353D57E818BB6F967B4B818D974CF463 *)&KiSystemServiceTraceCallbackLock.SchedulerApcFill5[80] = *($353D57E818BB6F967B4B818D974CF463 *)((char *)&RtlpBootStatHandleLock.116 + 4);
  *(_QWORD *)&KiSystemServiceTraceCallbackLock.SuspendEvent.Header.Lock = RtlpBootStatHandleLock.QueueListEntry.Blink;
  KiSystemServiceTraceCallbackLock.SuspendEvent.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)SepRmCapTableLock.Padding[2];
  KiSystemServiceTraceCallbackLock.SuspendEvent.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)RtlpBootStatHandleLock.Process;
  *(_OWORD *)&KiSystemServiceTraceCallbackLock.ThreadListEntry.Blink = *(_OWORD *)&RtlpBootStatHandleLock.ApcStateFill[16];
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
  KiSystemServiceTraceCallbackLock.MutantListHead.Blink = *(struct _LIST_ENTRY **)&RtlpBootStatHandleLock.ApcStateFill[40];
  *(_QWORD *)&KiSystemServiceTraceCallbackLock.AbWaitEntryCount = RtlpBootStatHandleLock.WaitStatus;
  KiSystemServiceTraceCallbackLock.SchedulerSharedSystemSlot = RtlpBootStatHandleLock.ApcState.Process;
  p_NpxState = &SepRmCapTableLock.NpxState;
  SeExports = (PSE_EXPORTS)&KiSystemServiceTraceCallbackLock.WaitBlockList;
  v39 = 5LL;
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
  do
  {
    *((_BYTE *)p_NpxState + 8) = 0;
    *p_NpxState = 0LL;
    *(p_NpxState - 3) = 0LL;
    p_NpxState += 5;
    --v39;
  }
  while ( v39 );
  SepRmCapTableLock.ThreadListEntry.Blink = 0LL;
  SepRmCapTableLock.MutantListHead.Flink = 0LL;
  return (int)SepInitializeSharedSidMap() >= 0;
}
