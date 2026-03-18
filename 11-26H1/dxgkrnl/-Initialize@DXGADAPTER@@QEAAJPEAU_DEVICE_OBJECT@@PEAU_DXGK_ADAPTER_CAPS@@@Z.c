/*
 * XREFs of ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x140199398
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042EA78 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     DpiGetSysMmAdapterFromDevice @ 0x1400407B4 (DpiGetSysMmAdapterFromDevice.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x14004611C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?IsGpuVaIoMmuSupported@DXGADAPTER@@QEBAEXZ @ 0x14004B0E4 (-IsGpuVaIoMmuSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ @ 0x14004B118 (-IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x140057920 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x14005ECAC (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?Initialize@MOCKDRIVERSTATE@@QEAAJPEAVDXGADAPTER@@@Z @ 0x14006EEAC (-Initialize@MOCKDRIVERSTATE@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     Feature_GpuVaIommuFixes__private_IsEnabledDeviceUsageNoInline @ 0x14006F7DC (Feature_GpuVaIommuFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CheckMcdmDdiOverall@DXGADAPTER@@AEAAJXZ @ 0x14007CAE4 (-CheckMcdmDdiOverall@DXGADAPTER@@AEAAJXZ.c)
 *     DpiFdoSetFeatureDatabaseDxgAdapter @ 0x1400868AC (DpiFdoSetFeatureDatabaseDxgAdapter.c)
 *     DxgkConvertWddmVersionToD3DKMTDriverVersion @ 0x140087734 (DxgkConvertWddmVersionToD3DKMTDriverVersion.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GpuVaIoMmuEnabled@DXGGLOBAL@@QEAAEXZ @ 0x1401929F8 (-GpuVaIoMmuEnabled@DXGGLOBAL@@QEAAEXZ.c)
 *     ?CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z @ 0x14019717C (-CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z.c)
 *     ?CreateFrameBufferSaveAreaSection@DXGADAPTER@@QEAAJI_K@Z @ 0x1401975D4 (-CreateFrameBufferSaveAreaSection@DXGADAPTER@@QEAAJI_K@Z.c)
 *     ?GetDriverCapsSizeFromDdiVersion@@YAII@Z @ 0x140198F5C (-GetDriverCapsSizeFromDdiVersion@@YAII@Z.c)
 *     ?GetPhysicalAdapterCapsSizeFromDdiVersion@@YAII@Z @ 0x140199068 (-GetPhysicalAdapterCapsSizeFromDdiVersion@@YAII@Z.c)
 *     ?InitializeCABCStateV2@DXGADAPTER@@AEAAJXZ @ 0x14019BC78 (-InitializeCABCStateV2@DXGADAPTER@@AEAAJXZ.c)
 *     ?InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ @ 0x14019BCD8 (-InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ.c)
 *     ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x14019BD70 (-InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ.c)
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x14019C2FC (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 *     ?InitializeVSyncPhaseState@DXGADAPTER@@AEAAJXZ @ 0x14019CA30 (-InitializeVSyncPhaseState@DXGADAPTER@@AEAAJXZ.c)
 *     ?QueryFeatureEnablement@DXGADAPTER@@AEAAXXZ @ 0x14019DE9C (-QueryFeatureEnablement@DXGADAPTER@@AEAAXXZ.c)
 *     ?ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14019E24C (-ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?SetModeBehavior@DXGADAPTER@@AEAAXEE@Z @ 0x14019FC68 (-SetModeBehavior@DXGADAPTER@@AEAAXEE@Z.c)
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1401A609C (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1401DC928 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401DF7E8 (-RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401E008C (-SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiGetAdapterInfo @ 0x140238980 (DpiGetAdapterInfo.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1402C00F8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x140330710 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14037AAC0 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     DpiReadPnpRegistryValue @ 0x1403914A0 (DpiReadPnpRegistryValue.c)
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1404121A4 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x14041D59C (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x14041EB18 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?AcquireSessionAdapterOrdinal@DXGSESSIONDATA@@QEAAKXZ @ 0x140422198 (-AcquireSessionAdapterOrdinal@DXGSESSIONDATA@@QEAAKXZ.c)
 *     ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKE@Z @ 0x140426CE4 (-AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKE@Z.c)
 */

__int64 __fastcall DXGADAPTER::Initialize(DXGADAPTER *this, PDEVICE_OBJECT DeviceObject, struct _DXGK_ADAPTER_CAPS *a3)
{
  struct _ERESOURCE *v6; // rax
  __int64 result; // rax
  NTSTATUS v8; // eax
  NTSTATUS LocallyUniqueId; // ebx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  const wchar_t *v11; // r9
  __int64 v12; // rax
  int v13; // edx
  struct _ERESOURCE *v14; // rax
  NTSTATUS v15; // eax
  int v16; // eax
  __int64 RenderCore; // rdi
  int AdapterInfo; // eax
  struct _LUID *v19; // rdx
  int (__fastcall *v20)(_QWORD, __int128 *); // rax
  unsigned __int8 v21; // bl
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned int v23; // eax
  __int64 v24; // rax
  const wchar_t *v25; // r9
  unsigned int v26; // eax
  const struct _GUID *v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  const wchar_t *v31; // r9
  NTSTATUS v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rax
  unsigned int v37; // r13d
  unsigned __int8 v38; // r8
  __int64 v39; // rax
  const wchar_t *v40; // r9
  int v41; // eax
  const wchar_t *v42; // r9
  int v43; // ecx
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  unsigned int v49; // ecx
  char v50; // al
  int v51; // eax
  unsigned int v52; // edi
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int16 *v55; // rbx
  char v56; // r12
  unsigned int v57; // eax
  UINT PhysicalAdapterCapsSizeFromDdiVersion; // r15d
  void (__fastcall *v59)(_QWORD, __int128 *); // rax
  void (__fastcall *v60)(__int64, _QWORD, __int128 *); // rax
  __int64 v61; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v63; // rbx
  __int64 v64; // rcx
  unsigned int v65; // r8d
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdi
  __int64 v69; // rbx
  __int64 v70; // rdi
  __int64 v71; // rbx
  __int64 v72; // r9
  unsigned int v73; // r8d
  int v74; // eax
  unsigned int v75; // edx
  __int64 v76; // r8
  __int64 v77; // r15
  __int64 v78; // r13
  __int64 v79; // r12
  int v80; // ecx
  int v81; // ebx
  int v82; // edi
  char IsGpuVaIoMmuGlobalSupported; // al
  __int64 v84; // rax
  int v85; // eax
  char v86; // al
  int v87; // eax
  __int64 v88; // rax
  int v89; // eax
  int v90; // eax
  int v91; // ecx
  int v92; // ecx
  struct _DXGK_ADAPTER_CAPS *v93; // r15
  char v94; // dl
  char v95; // cl
  char v96; // al
  char v97; // r8
  char v98; // cl
  char v99; // dl
  char v100; // cl
  __int64 v101; // rax
  char v102; // al
  char v103; // al
  __int64 v104; // rax
  char v105; // cl
  __int64 v106; // rax
  __int64 v107; // rax
  unsigned int v108; // eax
  int v109; // ecx
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  struct DXGGLOBAL *v113; // rax
  struct DXGGLOBAL *v114; // rax
  struct DXGGLOBAL *v115; // rax
  char v116; // r8
  unsigned int v117; // ecx
  unsigned int v118; // edx
  __int64 v119; // rax
  __int64 v120; // rax
  unsigned int v121; // ebx
  DXGGLOBAL *v122; // rax
  int v123; // eax
  int v124; // ecx
  __int64 v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rcx
  int v128; // eax
  char v129; // cl
  _DWORD *v130; // rbx
  int v131; // eax
  __int64 v132; // rax
  int v133; // ecx
  char *v134; // rbx
  int DisplayCore; // eax
  bool v136; // zf
  char v137; // cl
  char v138; // dl
  int v139; // eax
  char v140; // dl
  __int64 v141; // rdx
  DXGADAPTER *v142; // rcx
  int v143; // eax
  __int64 v144; // rcx
  bool IsBddFallbackDriver; // cf
  int v146; // eax
  DXGGLOBAL *v147; // rax
  int v148; // eax
  __int64 v149; // rax
  int v150; // eax
  DXGADAPTER *v151; // rcx
  __int64 v152; // r14
  __int64 v153; // rbx
  struct DXGGLOBAL *v154; // rax
  int v155; // eax
  struct DXGGLOBAL *v156; // rax
  __int64 v157; // rdx
  DXGGLOBAL *v158; // rax
  __int64 v159; // [rsp+20h] [rbp-E0h]
  __int64 v160; // [rsp+20h] [rbp-E0h]
  __int64 v161; // [rsp+28h] [rbp-D8h]
  __int64 v162; // [rsp+28h] [rbp-D8h]
  __int64 v163; // [rsp+28h] [rbp-D8h]
  __int64 v164; // [rsp+30h] [rbp-D0h]
  unsigned int v165; // [rsp+50h] [rbp-B0h] BYREF
  bool IsAdapterSessionized; // [rsp+54h] [rbp-ACh]
  unsigned int v167; // [rsp+58h] [rbp-A8h] BYREF
  int v168; // [rsp+5Ch] [rbp-A4h] BYREF
  int v169; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v170; // [rsp+68h] [rbp-98h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v171; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v172; // [rsp+A0h] [rbp-60h]
  _DXGKARG_QUERYADAPTERINFO v173; // [rsp+A8h] [rbp-58h] BYREF
  struct _DXGK_ADAPTER_CAPS *v174[2]; // [rsp+D8h] [rbp-28h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v175; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v176; // [rsp+118h] [rbp+18h] BYREF
  unsigned int v177[2]; // [rsp+128h] [rbp+28h] BYREF
  __int128 v178; // [rsp+130h] [rbp+30h] BYREF

  v174[0] = a3;
  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6958;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"KeGetCurrentIrql() == PASSIVE_LEVEL",
      6958LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 50) )
    return 3221225485LL;
  g_Feature_FenceStorageUsingVidMmAlloc = 0;
  v6 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, 64LL);
  *((_QWORD *)this + 21) = v6;
  if ( !v6 )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 6978;
    return 3221225495LL;
  }
  v8 = ExInitializeResourceLite(v6);
  LocallyUniqueId = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(3LL, this, v8);
    WdLogGlobalForLineNumber = 6989;
    return (unsigned int)LocallyUniqueId;
  }
  *((_QWORD *)this + 27) = DeviceObject;
  *((_QWORD *)this + 28) = DpiGetSysMmAdapterFromDevice();
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  *((_QWORD *)this + 29) = DeviceAttachmentBaseRef;
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)((char *)this + 4804));
  if ( LocallyUniqueId < 0 )
  {
    WdLogSingleEntry0(6LL);
    v11 = L"ZwAllocateLocallyUniqueId failed";
    v12 = 7010LL;
LABEL_12:
    v13 = 262145;
LABEL_13:
    WdLogGlobalForLineNumber = v12;
    DxgkLogInternalTriageEvent(0LL, v13, -1, (__int64)v11, v12, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)LocallyUniqueId;
  }
  v14 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, 64LL);
  *((_QWORD *)this + 35) = v14;
  if ( !v14 )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 7023;
    return 3221225495LL;
  }
  v15 = ExInitializeResourceLite(v14);
  LocallyUniqueId = v15;
  if ( v15 < 0 )
  {
    WdLogSingleEntry2(3LL, this, v15);
    WdLogGlobalForLineNumber = 7034;
    return (unsigned int)LocallyUniqueId;
  }
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  v170 = 0LL;
  *((_QWORD *)this + 5) = -1LL;
  if ( *((_BYTE *)DeviceObject->DeviceExtension + 481) )
  {
    v16 = DXGADAPTER::InitializeParavirtualizedAdapter(this, (struct DRIVER_WORKAROUNDS *)&v170);
    RenderCore = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 7057;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"InitializeParavirtualizedAdapter failed: 0x%I64x",
        RenderCore,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)RenderCore;
    }
  }
  else
  {
    *((_BYTE *)this + 1825) = 0;
    AdapterInfo = DpiGetAdapterInfo((int)DeviceObject, (char *)this + 1784, (char *)this + 288);
    LocallyUniqueId = AdapterInfo;
    if ( AdapterInfo < 0 )
    {
      WdLogSingleEntry2(3LL, this, AdapterInfo);
      WdLogGlobalForLineNumber = 7074;
      return (unsigned int)LocallyUniqueId;
    }
  }
  DpiFdoSetFeatureDatabaseDxgAdapter(*((_QWORD *)this + 27), this);
  *(_QWORD *)v177 = 0LL;
  v20 = (int (__fastcall *)(_QWORD, __int128 *))*((_QWORD *)this + 301);
  v176 = 0LL;
  if ( v20 && v20(*((_QWORD *)this + 292), &v176) >= 0 )
  {
    *(_QWORD *)((char *)this + 4876) = *((_QWORD *)&v176 + 1);
    *((_DWORD *)this + 1221) = v177[0];
  }
  IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized(this, v19, v177, 0LL);
  v21 = IsAdapterSessionized;
  if ( IsAdapterSessionized )
  {
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       *(DXGSESSIONMGR **)(*((_QWORD *)this + 2) + 984LL),
                                       v177[0]);
    if ( !SessionDataForSpecifiedSession
      || (v23 = DXGSESSIONDATA::AcquireSessionAdapterOrdinal(SessionDataForSpecifiedSession),
          *((_DWORD *)this + 61) = v23,
          v23 == -1) )
    {
      WdLogSingleEntry2(2LL, v177[0], -1073741801LL);
      v24 = v177[0];
      v25 = L"Exceeded the maximum number of sessionized adapter in session 0x%I64x, returning 0x%I64x.";
      WdLogGlobalForLineNumber = 7107;
      v161 = -1073741801LL;
LABEL_31:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v25, v24, v161, 0LL, 0LL, 0LL);
      return 3221225495LL;
    }
  }
  v26 = DXGGLOBAL::AcquireAdapterOrdinal(*((DXGGLOBAL **)this + 2), v21);
  *((_DWORD *)this + 60) = v26;
  if ( v26 == -1 )
    return 3221225495LL;
  if ( (*((_DWORD *)this + 111) & 0x200) != 0 )
    *((_BYTE *)DXGGLOBAL::GetGlobal() + 304896) = 1;
  v30 = *((_DWORD *)this + 111);
  if ( (v30 & 8) != 0 && (v30 & 0x10) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7131;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!(IsSoftGPU() && IsWarpAdapter())",
      7131LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_QWORD *)this + 57) )
  {
    WdLogSingleEntry0(2LL);
    v31 = L"Miniport did not provide required DDIs";
    v162 = 0LL;
    v159 = 7138LL;
    WdLogGlobalForLineNumber = 7138;
LABEL_40:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v31, v159, v162, 0LL, 0LL, 0LL);
    return 3221225561LL;
  }
  if ( !*((_QWORD *)this + 74) )
    *((_QWORD *)this + 74) = DXGADAPTER::DefaultDdiEscape;
  if ( !*((_QWORD *)this + 135) )
    *((_QWORD *)this + 135) = W32kStub_GreSfmOpenTokenEvent;
  v32 = DXGADAPTER::CallDriverQueryInterface((PDEVICE_OBJECT *)this, v27, v28, v29, (char *)this + 2136);
  v35 = v32;
  if ( v32 >= 0 )
  {
    if ( *((_WORD *)this + 1069) >= 4u )
      goto LABEL_49;
  }
  else
  {
    v36 = WdLogNewEntry5_WdTrace(v34, v33);
    *(_QWORD *)(v36 + 24) = this;
    *(_QWORD *)(v36 + 32) = v35;
    WdLogGlobalForLineNumber = 7169;
  }
  memset((char *)this + 2136, 0, 0xB8uLL);
LABEL_49:
  v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 40LL) + 28LL);
  v172 = v37;
  *((_DWORD *)this + 580) = v37;
  if ( v37 < 0x7000 )
  {
    if ( v37 < 0x6002 )
      goto LABEL_58;
  }
  else
  {
    if ( !*((_DWORD *)this + 474) )
      goto LABEL_58;
    if ( *((_DWORD *)this + 475) )
    {
      v38 = 0;
LABEL_57:
      DXGADAPTER::SetModeBehavior(this, v33, v38);
      goto LABEL_58;
    }
  }
  if ( *((_DWORD *)this + 474) && *((_DWORD *)this + 475) )
  {
    v38 = 1;
    goto LABEL_57;
  }
LABEL_58:
  if ( v37 - 20480 <= 5 )
  {
    WdLogSingleEntry0(2LL);
    v39 = 7213LL;
    v40 = L"Cannot load an M1 threshold driver on later builds.";
LABEL_60:
    WdLogGlobalForLineNumber = v39;
LABEL_61:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v40, v39, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  *(_QWORD *)&v173.Type = 1LL;
  v173.pOutputData = (char *)this + 2440;
  *(_QWORD *)&v173.InputDataSize = 0LL;
  *(_QWORD *)&v173.Flags.0 = 0LL;
  HIDWORD(v173.hKmdProcessHandle) = 0;
  v173.pInputData = 0LL;
  v173.OutputDataSize = GetDriverCapsSizeFromDdiVersion(v37);
  if ( !v173.OutputDataSize )
    return 3221225485LL;
  v41 = DXGADAPTER::DdiQueryAdapterInfo(this, &v173);
  RenderCore = v41;
  if ( v41 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7236;
    v42 = L"Miniport failed DdiQueryAdapterInfo(DXGKQAITYPE_DRIVERCAPS) with status 0x%I64x";
LABEL_66:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v42, RenderCore, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)RenderCore;
  }
  v43 = *((_DWORD *)this + 694);
  if ( v43 <= 9472 )
  {
    if ( v43 < 4864 )
    {
      if ( *((_QWORD *)this + 104) )
      {
        v44 = 1300;
      }
      else if ( v43 == 4608 )
      {
        v44 = 1200;
      }
      else if ( !*((_QWORD *)this + 100) || (v44 = 1105, (*((_DWORD *)this + 623) & 4) == 0) )
      {
        v44 = 1000;
      }
      goto LABEL_79;
    }
  }
  else if ( *((_DWORD *)DeviceObject->DeviceExtension + 687) <= 0xA00Bu )
  {
    WdLogSingleEntry1(2LL);
    v39 = *((int *)this + 694);
    v40 = L"Miniport returned incorrect WDDMVersion: 0x%I64x";
    WdLogGlobalForLineNumber = 7242;
    goto LABEL_61;
  }
  v44 = DxgkConvertWddmVersionToD3DKMTDriverVersion(v43);
LABEL_79:
  *((_DWORD *)this + 761) = v44;
  v45 = *((_DWORD *)this + 754);
  if ( v44 >= 2600 )
  {
    v46 = *((_DWORD *)this + 111);
    if ( (v45 & 8) != 0 )
    {
      *((_DWORD *)this + 111) = v46 | 0x80000;
    }
    else if ( (v46 & 0x80000) != 0 && v37 >= 0x11002 )
    {
      WdLogSingleEntry0(2LL);
      v39 = 7296LL;
      v40 = L"MiscCaps.ComputeOnly is not set, but the device belongs to the ComputeAccelerator class";
      goto LABEL_60;
    }
  }
  else
  {
    v45 &= ~8u;
    *((_DWORD *)this + 754) = v45;
  }
  if ( *((_BYTE *)this + 1824) && (v45 & 8) == 0 && (v45 & 4) == 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 7303;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"UMD name is missing and device is not compute only",
      7303LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225524LL;
  }
  v47 = *((_QWORD *)this + 27);
  v167 = 0;
  v48 = DpiReadPnpRegistryValue(v47, L"ACGSupported", &v167, 4LL, 2);
  v49 = v167;
  if ( v48 < 0 )
    v49 = 0;
  if ( v49 || (v50 = 0, *((int *)this + 761) >= 2200) )
    v50 = 1;
  *((_BYTE *)this + 212) = v50;
  if ( *((_BYTE *)this + 209) )
  {
    *((_BYTE *)a3 + 1) &= ~1u;
    *(_BYTE *)a3 &= 0x7Bu;
    *((_DWORD *)this + 754) &= 0xFFFFFFEB;
    *((_DWORD *)this + 627) &= 0xFFFFD2FF;
    *((_BYTE *)this + 2980) = 0;
    *((_BYTE *)this + 3008) = 1;
    *((_BYTE *)this + 2982) = 1;
    if ( *((_BYTE *)this + 210) )
      *((_DWORD *)this + 623) &= ~0x100000u;
  }
  else if ( v37 >= 0x5023 )
  {
    if ( g_bCreateParavirtualizedGpu )
    {
      v51 = *((_DWORD *)this + 111);
      if ( (v51 & 4) == 0 && (v51 & 0x10) == 0 && !*(_BYTE *)(*((_QWORD *)DeviceObject->DeviceExtension + 5) + 133LL) )
        *((_DWORD *)this + 627) |= 0x400u;
    }
  }
  v167 = *((_DWORD *)this + 74);
  v52 = v167;
  v53 = 352LL * v167;
  if ( !is_mul_ok(v167, 0x160uLL) )
    v53 = -1LL;
  v54 = operator new[](v53, 0x4B677844u, 64LL);
  *((_QWORD *)this + 379) = v54;
  v55 = (unsigned __int16 *)v54;
  if ( !v54 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 7362;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGK_PHYSICALADAPTERINFO",
      7362LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v56 = 0;
  if ( *((int *)this + 694) < 0x2000 || v37 < 0x5005 )
    goto LABEL_152;
  *((_DWORD *)this + 760) = 0;
  v57 = 0;
  v165 = 0;
  if ( v52 )
  {
    *(_QWORD *)&v171.Type = 15LL;
    v171.pInputData = &v165;
    *(_QWORD *)&v171.InputDataSize = 4LL;
    *(_QWORD *)&v171.Flags.0 = 0LL;
    HIDWORD(v171.hKmdProcessHandle) = 0;
    v171.pOutputData = v55;
    PhysicalAdapterCapsSizeFromDdiVersion = GetPhysicalAdapterCapsSizeFromDdiVersion(v37);
    while ( 1 )
    {
      v171.OutputDataSize = PhysicalAdapterCapsSizeFromDdiVersion;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(this, &v171) < 0 )
      {
        WdLogSingleEntry1(4LL);
        WdLogGlobalForLineNumber = 7390;
        v56 = 1;
        goto LABEL_143;
      }
      if ( v37 >= 0xC003 )
      {
        if ( (*((_DWORD *)v55 + 4) & 0x20) != 0 )
        {
          if ( *((_DWORD *)v55 + 6) >= (unsigned int)*v55 )
          {
            WdLogSingleEntry3(2LL, this, *((unsigned int *)v55 + 6), *v55);
            v164 = *v55;
            v163 = *((unsigned int *)v55 + 6);
            WdLogGlobalForLineNumber = 7408;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Adapter 0x%I64x: VirtualCopyEngineSupported but node index is invalid (VirtualCopyIndex:%u, NumEx"
                        "ecutionNodes:%u)",
              (__int64)this,
              v163,
              v164,
              0LL,
              0LL);
            return 3221225485LL;
          }
          if ( (*((_DWORD *)this + 627) & 0x2000) == 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 7415;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Adapter 0x%I64x: IoMmuSecureModeRequired must be set for a device exposing a virtual copy engine",
              (__int64)this,
              0LL,
              0LL,
              0LL,
              0LL);
            return 3221225485LL;
          }
        }
        v59 = (void (__fastcall *)(_QWORD, __int128 *))*((_QWORD *)this + 221);
        if ( v59 )
        {
          v178 = 0LL;
          LODWORD(v178) = v165;
          v59(*((_QWORD *)this + 36), &v178);
          *((_BYTE *)v55 + 50) = BYTE4(v178) & 1;
        }
        v60 = (void (__fastcall *)(__int64, _QWORD, __int128 *))*((_QWORD *)this + 222);
        if ( v60 )
        {
          v61 = *((_QWORD *)this + 36);
          *(_QWORD *)&v178 = 0LL;
          v60(v61, v165, &v178);
          *((_QWORD *)v55 + 43) = v178;
        }
      }
      if ( !*((_BYTE *)this + 209) )
      {
        Global = DXGGLOBAL::GetGlobal();
        if ( DXGGLOBAL::GpuVaIoMmuEnabled(Global) )
        {
          v168 = 0;
          LODWORD(v178) = 0;
          if ( (unsigned int)Feature_GpuVaIommuFixes__private_IsEnabledDeviceUsageNoInline() )
          {
            v63 = *(_QWORD *)(352LL * v165 + *((_QWORD *)this + 379) + 8);
            if ( (int)DpiReadPnpRegistryValue(v63, L"DxgkGpuVaIommuSupported", &v168, 4LL, 2) >= 0 )
              *(_DWORD *)(352LL * v165 + *((_QWORD *)this + 379) + 16) = (v168 != 0 ? 0x40 : 0) | *(_DWORD *)(352LL * v165 + *((_QWORD *)this + 379) + 16) & 0xFFFFFFBF;
            v64 = v63;
          }
          else
          {
            if ( (int)DpiReadPnpRegistryValue(*((_QWORD *)this + 27), L"DxgkGpuVaIommuRequired", &v168, 4LL, 2) >= 0 )
              *(_DWORD *)(352LL * v165 + *((_QWORD *)this + 379) + 16) = (v168 != 0 ? 0x40 : 0) | *(_DWORD *)(352LL * v165 + *((_QWORD *)this + 379) + 16) & 0xFFFFFFBF;
            v64 = *((_QWORD *)this + 27);
          }
          if ( (int)DpiReadPnpRegistryValue(v64, L"DxgkGpuVaIommuGlobalSupported", &v178, 4LL, 2) >= 0 )
            *(_DWORD *)(352LL * v165 + *((_QWORD *)this + 379) + 16) = ((_DWORD)v178 != 0 ? 0x80 : 0) | *(_DWORD *)(352LL * v165 + *((_QWORD *)this + 379) + 16) & 0xFFFFFF7F;
        }
      }
      v65 = v165;
      v66 = *((_QWORD *)this + 379);
      v67 = 352LL * v165;
      if ( (*(_DWORD *)(v67 + v66 + 16) & 2) != 0 )
      {
        *(_BYTE *)(v67 + v66 + 49) = 1;
        v65 = v165;
      }
      v68 = *((_QWORD *)this + 379);
      v69 = 352LL * v65;
      if ( (*(_DWORD *)(v69 + v68 + 16) & 0x40) != 0 )
      {
        if ( !DXGADAPTER::IsGpuVaIoMmuSupported(this) )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 7492;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Adapter 0x%I64x: GpuVaIommuRequired is set for a physical adapter, but not in IOMMU_CAPS",
            (__int64)this,
            0LL,
            0LL,
            0LL,
            0LL);
          return 3221225485LL;
        }
        *(_BYTE *)(v69 + v68 + 49) = 1;
        *(_BYTE *)(352LL * v165 + *((_QWORD *)this + 379) + 48) = 1;
        v65 = v165;
      }
      v70 = *((_QWORD *)this + 379);
      v71 = 352LL * v65;
      if ( (*(_DWORD *)(v71 + v70 + 16) & 0x80u) != 0 )
      {
        if ( !DXGADAPTER::IsGpuVaIoMmuGlobalSupported(this) )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 7503;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Adapter 0x%I64x: GpuVaIommuGlobalRequired is set for a physical adapter, but not in IOMMU_CAPS",
            (__int64)this,
            0LL,
            0LL,
            0LL,
            0LL);
          return 3221225485LL;
        }
        *(_BYTE *)(v71 + v70 + 49) = 1;
        *(_BYTE *)(352LL * v165 + *((_QWORD *)this + 379) + 48) = 1;
        v65 = v165;
      }
      v72 = *((_QWORD *)this + 379);
      v52 = v167;
      v57 = *(unsigned __int16 *)(352LL * v65 + v72) + *((_DWORD *)this + 760);
      v73 = v65 + 1;
      *((_DWORD *)this + 760) = v57;
      v165 = v73;
      if ( v73 >= v52 )
        break;
      *(_QWORD *)&v171.Type = 15LL;
      v55 = (unsigned __int16 *)(v72 + 352LL * v73);
      *(_QWORD *)&v171.InputDataSize = 4LL;
      v171.pOutputData = v55;
      *(_QWORD *)&v171.Flags.0 = 0LL;
      HIDWORD(v171.hKmdProcessHandle) = 0;
      v171.pInputData = &v165;
    }
  }
  if ( *((int *)this + 761) <= 2400 && v57 > 0x40 )
  {
    WdLogSingleEntry3(2LL, this, 64LL, v57);
    v84 = *((unsigned int *)this + 760);
    WdLogGlobalForLineNumber = 7521;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Adapter 0x%I64x: Exceeded maximum number of %I64d nodes on pre-WDDM 2.5 adapter. Total node count: %I64d",
      (__int64)this,
      64LL,
      v84,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)this + 626) & 1) == 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7526;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Adapter 0x%I64x: SchedulingCaps.MultiEngineAware is not set by WDDMv2 driver",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
LABEL_143:
  if ( (*((_DWORD *)this + 627) & 0x800) != 0 )
  {
    v165 = 0;
    if ( v52 )
    {
      while ( 1 )
      {
        *(_QWORD *)&v178 = 0LL;
        v173.pInputData = &v165;
        v173.Type = DXGKQAITYPE_FRAMEBUFFERSAVESIZE;
        v173.pOutputData = &v178;
        v173.InputDataSize = 4;
        v173.OutputDataSize = 8;
        v74 = DXGADAPTER::DdiQueryAdapterInfo(this, &v173);
        RenderCore = v74;
        if ( v74 < 0 )
          break;
        if ( (v178 & 0xFFF) != 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 7551;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Frame buffer reserve size must be a multiple of PAGE_SIZE. Size=%I64u",
            v178,
            0LL,
            0LL,
            0LL,
            0LL);
          return 3221225485LL;
        }
        *(_QWORD *)(352LL * v165 + *((_QWORD *)this + 379) + 56) = v178;
        v75 = v165;
        v76 = *(_QWORD *)(352LL * v165 + *((_QWORD *)this + 379) + 56);
        if ( v76 )
        {
          result = DXGADAPTER::CreateFrameBufferSaveAreaSection(this, v165, v76);
          if ( (int)result < 0 )
            return result;
          v75 = v165;
        }
        v52 = v167;
        v165 = v75 + 1;
        if ( v75 + 1 >= v167 )
          goto LABEL_151;
      }
      WdLogSingleEntry1(2LL);
      v42 = L"Failed to query frame buffer save area size. Status 0x%I64x";
      WdLogGlobalForLineNumber = 7545;
      goto LABEL_66;
    }
  }
LABEL_151:
  if ( v56 )
  {
LABEL_152:
    if ( v52 )
    {
      v77 = 0LL;
      v78 = v52;
      do
      {
        v79 = *((_QWORD *)this + 379);
        *(_WORD *)(v77 + v79) = *((_WORD *)this + 1258);
        v80 = *(_DWORD *)(v77 + v79 + 16) ^ ((unsigned __int8)*(_DWORD *)(v77 + v79 + 16) ^ (unsigned __int8)(*((_DWORD *)this + 627) >> 7)) & 1;
        *(_DWORD *)(v77 + v79 + 16) = v80;
        v81 = v80 ^ (v80 ^ (*((_DWORD *)this + 627) >> 5)) & 2;
        *(_DWORD *)(v77 + v79 + 16) = v81;
        v82 = v81 ^ ((unsigned __int8)v81 ^ (DXGADAPTER::IsGpuVaIoMmuSupported(this) << 6)) & 0x40;
        *(_DWORD *)(v77 + v79 + 16) = v82;
        IsGpuVaIoMmuGlobalSupported = DXGADAPTER::IsGpuVaIoMmuGlobalSupported(this);
        *(_DWORD *)(v77 + v79 + 16) = v82 ^ ((unsigned __int8)v82 ^ (unsigned __int8)(IsGpuVaIoMmuGlobalSupported << 7)) & 0x80;
        *(_WORD *)(v77 + v79 + 2) = *((_WORD *)this + 1256);
        *(_QWORD *)(v77 + v79 + 8) = *((_QWORD *)this + 27);
        if ( (((unsigned __int8)v82 ^ ((unsigned __int8)v82 ^ (unsigned __int8)(IsGpuVaIoMmuGlobalSupported << 7)) & 0x80) & 0xC2) != 0 )
          *(_WORD *)(v77 + v79 + 48) = 257;
        v77 += 352LL;
        --v78;
      }
      while ( v78 );
      v37 = v172;
    }
  }
  if ( *((int *)this + 761) >= 2400 )
  {
    if ( *((_DWORD *)this + 754) >= 0x400u )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 7605;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver should not set MiscCaps.Reserved bits",
        7605LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
    *((_BYTE *)this + 3097) = *((_BYTE *)this + 3016) & 1;
  }
  v85 = *((_DWORD *)this + 754);
  if ( (v85 & 0x10) != 0 && !*((_QWORD *)this + 175) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 7615;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver sets IndependentVidPnVSyncControl cap but does not support DxgkDdiControlInterrupt3, returning failure",
      7615LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( *((_BYTE *)this + 3260) )
    *((_DWORD *)this + 754) = v85 & 0xFFFFFFEF;
  if ( v37 >= 0x3001 )
  {
    v87 = *((_DWORD *)this + 694);
    if ( v87 != 4096
      && v87 != 4608
      && v87 != 4864
      && v87 != 0x2000
      && v87 != 8448
      && v87 != 8704
      && v87 != 8960
      && v87 != 9216
      && v87 != 9472
      && v87 != 9728
      && v87 != 9984
      && v87 != 10240
      && v87 != 10496
      && v87 != 12288
      && v87 != 12544
      && v87 != 12800 )
    {
      WdLogSingleEntry1(2LL);
      v88 = *((int *)this + 694);
      v31 = L"Miniport returned unknown WDDM version 0x%I64x";
      WdLogGlobalForLineNumber = 7673;
LABEL_213:
      v162 = 0LL;
      v159 = v88;
      goto LABEL_40;
    }
  }
  else
  {
    *((_DWORD *)this + 694) = 4096;
  }
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 928) || (v86 = 1, (*((_DWORD *)this + 111) & 8) != 0) )
    v86 = 0;
  *((_BYTE *)this + 3056) = v86;
  if ( v86 )
  {
    if ( *((int *)this + 694) < 4608
      && (*((_DWORD *)this + 742)
       || *((_DWORD *)this + 743)
       || *((_BYTE *)this + 2976)
       || *((_BYTE *)this + 2977)
       || *((_BYTE *)this + 2978)
       || (*((_DWORD *)this + 623) & 0x10000000) != 0
       || (*((_DWORD *)this + 626) & 0x14) != 0
       || *((_BYTE *)this + 2979)
       || *((_BYTE *)this + 2981)
       || *((_BYTE *)this + 2982)) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 7699;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver reports WDDM version less than 1.2 but implements some WDDM 1.2 features.",
        7699LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
    v89 = *((_DWORD *)this + 694);
    if ( v89 >= 4864 )
    {
      if ( v89 >= 0x2000 )
        goto LABEL_223;
    }
    else if ( (*((_DWORD *)this + 625) & 0x10) != 0
           || (*((_DWORD *)this + 627) & 0x10) != 0
           || *((_BYTE *)this + 2983)
           || *((_DWORD *)this + 746) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 7714;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver reports WDDM version less than 1.3 but implements some WDDM 1.3 features.",
        7714LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
    if ( *((_BYTE *)this + 2988) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 7742;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Pre-WDDM 2.0 driver should not set the HybridIntegrated cap.",
        7742LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
LABEL_223:
  v90 = *((_DWORD *)this + 627);
  v91 = v90 & 0x8010;
  if ( (v90 & 0x10000) != 0 )
  {
    if ( v91 != 32784 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 7756;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver reports CrossAdapterResourceScanout but does not report lower tier support.",
        7756LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  else if ( v91 == 0x8000 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 7764;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver reports CrossAdapterResourceTexture but does not report lower tier support.",
      7764LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( v37 >= 0x4000 )
  {
    if ( v37 >= 0x5011 )
      goto LABEL_235;
  }
  else
  {
    v90 &= ~0x10u;
    *((_BYTE *)this + 2983) = 0;
    *((_DWORD *)this + 627) = v90;
  }
  v92 = *((_DWORD *)this + 111);
  if ( (v92 & 1) != 0 && (v90 & 0x10) != 0 && (v92 & 0x1000) != 0 )
    *((_BYTE *)this + 2988) = 1;
LABEL_235:
  v93 = v174[0];
  v94 = *(_BYTE *)v174[0] ^ (*(_BYTE *)v174[0] ^ (4 * *((_BYTE *)this + 2976))) & 4;
  *(_BYTE *)v174[0] = v94;
  v95 = v94 & 0xF7 | (*((_BYTE *)this + 2982) != 0 ? 8 : 0);
  *(_BYTE *)v93 = v95;
  v96 = v95 ^ (v95 ^ (32 * (*((_DWORD *)this + 627) >> 4))) & 0x20;
  *(_BYTE *)v93 = v96;
  v97 = v96 ^ (v96 ^ (*((_BYTE *)this + 2983) << 6)) & 0x40;
  *(_BYTE *)v93 = v97;
  *((_DWORD *)v93 + 1) = *((_DWORD *)this + 619);
  v98 = *((_BYTE *)v93 + 1) ^ (*((_BYTE *)this + 2988) ^ *((_BYTE *)v93 + 1)) & 1;
  *((_BYTE *)v93 + 1) = v98;
  *((_DWORD *)v93 + 2) = *((_DWORD *)this + 694);
  v99 = v98 ^ (v98 ^ (32 * (*((_DWORD *)this + 754) >> 3))) & 0x20;
  v100 = v97 & 0xEF;
  *((_BYTE *)v93 + 1) = v99;
  *(_BYTE *)v93 = v97 & 0xEF;
  if ( v37 >= 0x5021 )
  {
    v100 = v97 ^ (v97 ^ (16 * *((_BYTE *)this + 3008))) & 0x10;
    *(_BYTE *)v93 = v100;
  }
  if ( *((_BYTE *)this + 209) )
    goto LABEL_268;
  if ( (v100 & 0x40) != 0 )
  {
    if ( v37 < 0x5005 && (*((_DWORD *)this + 474) || *((_DWORD *)this + 475)) )
    {
      WdLogSingleEntry1(2LL);
      v101 = *((_QWORD *)this + 27);
      WdLogGlobalForLineNumber = 7827;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver reports device 0x%I64x is hybrid discrete device but it has VidPn source and target.",
        v101,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
    v102 = v99 ^ (v99 ^ (2 * *((_BYTE *)this + 3011))) & 2;
    *((_BYTE *)v93 + 1) = v102;
    v103 = v102 & 1;
    goto LABEL_245;
  }
  v103 = v99 & 1;
  if ( (v99 & 1) != 0 )
  {
LABEL_245:
    if ( (v100 & 0x20) == 0 )
    {
      WdLogSingleEntry1(2LL);
      v104 = *((_QWORD *)this + 27);
      WdLogGlobalForLineNumber = 7841;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver reports device 0x%I64x as hybrid device but does not support cross adapter resource.",
        v104,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  v105 = v100 & 0x40;
  if ( v103 )
  {
    if ( v105 )
    {
      WdLogSingleEntry1(2LL);
      v106 = *((_QWORD *)this + 27);
      WdLogGlobalForLineNumber = 7848;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver reports both HybridIntegrated and HybridDiscrete caps 0x%I64x",
        v106,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
    if ( !*((_DWORD *)this + 475) )
    {
      WdLogSingleEntry1(2LL);
      v107 = *((_QWORD *)this + 27);
      WdLogGlobalForLineNumber = 7856;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver reports the HybridIntegrated cap, but the adapter has no outputs. 0x%I64x",
        v107,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  if ( *((_BYTE *)this + 2978) && (!*((_QWORD *)this + 101) || !*((_QWORD *)this + 102) || !*((_QWORD *)this + 103)) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 7870;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver reports SupportPerEngineTDR cap but does not fill in all of the required DDIs.",
      7870LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)this + 623) & 4) != 0 && !*((_QWORD *)this + 100) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 7877;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver reports SupportKernelModeCommandBuffer cap but does not fill in the pfnRenderKm DDI.",
      7877LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( *((_BYTE *)this + 2981) && (!*((_QWORD *)this + 105) || !*((_QWORD *)this + 106)) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 7885;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver reports SupportRuntimePowerManagement cap but does not fill in the pfnSetPowerComponentFState or p"
                "fnPowerRuntimeControlRequest DDI.",
      7885LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( v37 < 0x300C && *((_QWORD *)this + 105) && *((_QWORD *)this + 106) )
    *((_BYTE *)this + 2981) = 1;
LABEL_268:
  *((_WORD *)this + 1529) = 0;
  *((_BYTE *)this + 3060) = 0;
  if ( !*((_BYTE *)this + 2980) )
    goto LABEL_306;
  if ( v37 < 0x300B )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 7907;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver reports SupportMultiPlaneOverlay cap but it is not compiled with expected header files.",
      7907LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( v37 < 0x4000 )
  {
    *((_BYTE *)this + 3058) = 1;
    goto LABEL_288;
  }
  if ( v37 == 0x4000 )
  {
    *((_BYTE *)this + 3059) = 1;
    goto LABEL_288;
  }
  v108 = *((_DWORD *)this + 746);
  if ( !v108 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 7920;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver reports SupportMultiPlaneOverlay cap but doesn't report any overlay planes or panel fitter.",
      7920LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( v108 <= 8 )
  {
    if ( v37 > 0x5000 )
      *((_BYTE *)this + 3060) = 1;
    goto LABEL_288;
  }
  v109 = *((_DWORD *)this + 694);
  if ( v109 < 8704 )
  {
    if ( v109 < 0x2000 || v108 != 10 )
    {
      WdLogSingleEntry0(2LL);
      v110 = 7943LL;
      goto LABEL_281;
    }
    *((_DWORD *)this + 746) = 8;
  }
  else if ( v108 > 0xA )
  {
    WdLogSingleEntry0(2LL);
    v110 = 7930LL;
LABEL_281:
    WdLogGlobalForLineNumber = v110;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver reports more than the supported number of overlay planes.",
      v110,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
LABEL_288:
  v111 = *((_QWORD *)this + 109);
  if ( !v111 && !*((_QWORD *)this + 125) && !*((_QWORD *)this + 129) )
  {
    WdLogSingleEntry0(2LL);
    v112 = 7959LL;
LABEL_292:
    WdLogGlobalForLineNumber = v112;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver reports SupportMultiPlaneOverlay cap but does not fill in all of the required DDIs.",
      v112,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( v37 > 0x4002 && !*((_QWORD *)this + 113) && !*((_QWORD *)this + 124) && !*((_QWORD *)this + 128) )
  {
    WdLogSingleEntry0(2LL);
    v112 = 7971LL;
    goto LABEL_292;
  }
  if ( !*((_BYTE *)this + 2979) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 7981;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver reports SupportMultiPlaneOverlay cap but DirectFlip is not supported.",
      7981LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( v111 )
  {
    v113 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::RecordFeatureUsage(v113, 1LL, 1LL);
  }
  if ( *((_QWORD *)this + 125) )
  {
    v114 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::RecordFeatureUsage(v114, 2LL, 1LL);
  }
  if ( *((_QWORD *)this + 129) )
  {
    v115 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::RecordFeatureUsage(v115, 3LL, 1LL);
  }
LABEL_306:
  *((_BYTE *)this + 3095) = 0;
  if ( *((_BYTE *)this + 209) )
    goto LABEL_319;
  v116 = 0;
  if ( v37 >= 0x700A && *((int *)this + 694) >= 8704 && (!*((_QWORD *)this + 83) || *((_QWORD *)this + 146)) )
  {
    *((_BYTE *)this + 3095) = 1;
    v116 = 1;
  }
  if ( *((int *)this + 694) < 8960 )
  {
LABEL_319:
    *((_DWORD *)this + 622) &= 0xFFFFFFE3;
  }
  else
  {
    v117 = (*((_DWORD *)this + 622) >> 3) & 1;
    v118 = (*((_DWORD *)this + 622) >> 2) & 1;
    if ( v118 < v117 || v117 < ((*((_DWORD *)this + 622) >> 4) & 1u) )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 27), -1073741811LL);
      v120 = *((_QWORD *)this + 27);
      WdLogGlobalForLineNumber = 8031;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver reports support higher level of colorSpaceTransform but not lower levels on device 0x%I64x, returning 0x%I64x.",
        v120,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
    if ( !v116 && v118 )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 27), -1073741811LL);
      v119 = *((_QWORD *)this + 27);
      WdLogGlobalForLineNumber = 8039;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ColorSpaceTransform is supported on the device 0x%I64x which does not have pfnSetTargetGamma, returning 0x%I64x.",
        v119,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 40LL) + 133LL) && !*((_BYTE *)this + 209) )
  {
    v121 = *((_DWORD *)this + 694) >= 0x2000;
    v122 = DXGGLOBAL::GetGlobal();
    v123 = DXGGLOBAL::DeferredInitialize(v122, v121);
    RenderCore = v123;
    if ( v123 < 0 )
    {
      WdLogSingleEntry1(2LL);
      v42 = L"DXGGLOBAL::DeferredInitialize failed (Status = 0x%I64x).";
      WdLogGlobalForLineNumber = 8066;
      goto LABEL_66;
    }
  }
  DXGADAPTER::Config = 0;
  DXGADAPTER::ReadConfig(this, v93);
  DXGADAPTER::InitializeDriverWorkarounds(this);
  if ( *((_BYTE *)this + 209) )
  {
    **((_DWORD **)this + 381) = **((_DWORD **)this + 381) & 0xFFFDFFFF | v170 & 0x20000;
    **((_DWORD **)this + 381) = **((_DWORD **)this + 381) & 0xFFFE7FFF | v170 & 0x18000;
    **((_DWORD **)this + 381) = **((_DWORD **)this + 381) & 0xFFEFFFFF | v170 & 0x100000;
    **((_DWORD **)this + 381) = **((_DWORD **)this + 381) & 0xFFF3FFFF | v170 & 0xC0000;
    *((_BYTE *)this + 3061) = 0;
  }
  else if ( (*((_DWORD *)this + 111) & 0x10) != 0 && *((_BYTE *)this + 3111) )
  {
    *((_DWORD *)this + 627) |= 0x400u;
  }
  v124 = *((_DWORD *)this + 694);
  if ( v124 < 9216 )
    goto LABEL_332;
  v125 = *((_QWORD *)this + 167);
  if ( *((_QWORD *)this + 166) )
  {
    if ( v125 )
      goto LABEL_333;
LABEL_344:
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 8120;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver cannot support only one of DdiQueryDiagnosticTypesSupport and DdiControlDiagnosticReporting.",
      8120LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( v125 )
    goto LABEL_344;
LABEL_332:
  *((_QWORD *)this + 166) = W32kStub_UserRemoveWindowedSwapChain;
  *((_QWORD *)this + 167) = DXGADAPTER::DefaultDdiControlDiagnosticReporting;
LABEL_333:
  if ( v124 >= 12800 && v37 >= 0x11001 )
  {
    memset(&v171, 0, 24);
    v171.Type = DXGKQAITYPE_POWERCOMPONENTINFO|0x20;
    *(_OWORD *)&v171.OutputDataSize = 0LL;
    v171.pOutputData = (char *)this + 5168;
    v171.OutputDataSize = 4;
    if ( (int)DXGADAPTER::DdiQueryAdapterInfo(this, &v171) < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v127, v126) + 24) = this;
      WdLogGlobalForLineNumber = 8135;
    }
  }
  v169 = 0;
  memset(&v175, 0, 24);
  v175.Type = DXGKQAITYPE_PHYSICALADAPTERCAPS|0x20;
  v175.pOutputData = &v169;
  *(_OWORD *)&v175.OutputDataSize = 0LL;
  v175.OutputDataSize = 4;
  v128 = DXGADAPTER::DdiQueryAdapterInfo(this, &v175);
  v129 = *((_BYTE *)this + 3112) & 0xFD;
  if ( v128 >= 0 )
    v129 |= 2 * (v169 & 1);
  *((_BYTE *)this + 3112) = v129;
  result = DXGADAPTER::CheckMcdmDdiOverall(this);
  if ( (int)result >= 0 )
  {
    DXGADAPTER::InitializeDriverDiagnosticReporting(this);
    DXGADAPTER::QueryFeatureEnablement(this);
    if ( (*((_DWORD *)this + 626) & 0x800) != 0 )
    {
      if ( (*((_BYTE *)this + 5092) & 1) == 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 8175;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver reports NativeGpuFence cap when NativeFence feature is disabled, returning failure",
          8175LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225485LL;
      }
      v130 = (_DWORD *)((char *)this + 5112);
      v173.Type = DXGKQAITYPE_QUERYSEGMENT3|0x20;
      v173.pOutputData = (char *)this + 5112;
      v173.OutputDataSize = 56;
      v131 = DXGADAPTER::DdiQueryAdapterInfo(this, &v173);
      RenderCore = v131;
      if ( v131 < 0 )
      {
        WdLogSingleEntry1(2LL);
        v42 = L"Failed to get DXGK_NATIVE_FENCE_CAPS. Status 0x%I64x";
        WdLogGlobalForLineNumber = 8186;
        goto LABEL_66;
      }
      if ( *v130 > 0x38u )
      {
        WdLogSingleEntry2(2LL, (unsigned int)*v130, 56LL);
        v160 = (unsigned int)*v130;
        WdLogGlobalForLineNumber = 8194;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver specified native fence MonitoredValuePadding (%u) greater than maximum limit of %u bytes",
          v160,
          56LL,
          0LL,
          0LL,
          0LL);
        return (unsigned int)RenderCore;
      }
    }
    RenderCore = (int)ADAPTER_RENDER::CreateRenderCore(this, (struct ADAPTER_RENDER **)this + 396);
    v132 = *((_QWORD *)this + 396);
    if ( (int)RenderCore < 0 )
    {
      if ( v132 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 8206;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pRenderCore == NULL", 8206LL, 0LL, 0LL, 0LL, 0LL);
      }
      WdLogSingleEntry2(2LL, this, RenderCore);
      WdLogGlobalForLineNumber = 8209;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to create ADAPTER_RENDER on adapter 0x%I64x (Status = 0x%I64x).",
        (__int64)this,
        RenderCore,
        0LL,
        0LL,
        0LL);
      return (unsigned int)RenderCore;
    }
    if ( v132 )
    {
      if ( IsAdapterSessionized )
      {
        WdLogSingleEntry0(2LL);
        v88 = 8225LL;
        v31 = L"Render capable adapter should NOT be sessionized!";
        WdLogGlobalForLineNumber = 8225;
        goto LABEL_213;
      }
      v133 = *((_DWORD *)this + 754);
      if ( (v133 & 8) == 0 && (v133 & 4) == 0 )
        *((_BYTE *)this + 3112) |= 1u;
    }
    v134 = (char *)this + 3160;
    DisplayCore = ADAPTER_DISPLAY::CreateDisplayCore(this, (struct ADAPTER_DISPLAY **)this + 395);
    RenderCore = DisplayCore;
    if ( DisplayCore < 0 )
    {
      if ( *(_QWORD *)v134 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 8240;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pDisplayCore == NULL", 8240LL, 0LL, 0LL, 0LL, 0LL);
      }
      WdLogSingleEntry2(2LL, this, RenderCore);
      WdLogGlobalForLineNumber = 8243;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to create ADAPTER_DISPLAY on adapter 0x%I64x (Status = 0x%I64x).",
        (__int64)this,
        RenderCore,
        0LL,
        0LL,
        0LL);
      return (unsigned int)RenderCore;
    }
    if ( !*((_QWORD *)this + 396) && !*(_QWORD *)v134 )
    {
      WdLogSingleEntry2(2LL, this, -1073741735LL);
      v31 = L"Current adapter 0x%I64x does not have display or render capabilities (Status = 0x%I64x).";
      v162 = -1073741735LL;
      v159 = (__int64)this;
      WdLogGlobalForLineNumber = 8256;
      goto LABEL_40;
    }
    if ( (*((_DWORD *)this + 754) & 0x200) != 0 )
    {
      v136 = *(_QWORD *)v134 == 0LL;
      if ( *(_QWORD *)v134 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 8265;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"TestOnly cannot be used with display adapters. Status=0x%.8x",
          -1073741811LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225485LL;
      }
    }
    else
    {
      v136 = *(_QWORD *)v134 == 0LL;
    }
    v137 = *(_BYTE *)v93 & 0xFE | !v136;
    *(_BYTE *)v93 = v137;
    v138 = v137 & 0xFD | (*((_QWORD *)this + 396) != 0LL ? 2 : 0);
    *(_BYTE *)v93 = v138;
    if ( *(_QWORD *)v134 )
      v139 = *(_DWORD *)(*(_QWORD *)v134 + 24LL);
    else
      LOBYTE(v139) = 0;
    v140 = ((_BYTE)v139 << 7) | v138 & 0x7F;
    *(_BYTE *)v93 = v140;
    if ( (v140 & 1) != 0 )
      *((_BYTE *)v93 + 1) = *((_BYTE *)v93 + 1) & 0xFB | (DXGADAPTER::DriverSupportSetTimingsFromVidPn(this) != 0 ? 4 : 0);
    else
      *((_BYTE *)v93 + 1) &= ~4u;
    if ( !*((_QWORD *)this + 396) )
      *((_DWORD *)this + 623) |= 1u;
    if ( DXGADAPTER::IsDxgmms2(this) )
    {
      v143 = *((_DWORD *)this + 111);
      if ( (v143 & 4) == 0
        && (v143 & 8) == 0
        && v141
        && v37 >= 0x5008
        && (!*((_QWORD *)this + 114) || !*((_QWORD *)this + 126)) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 8306;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver is compiled against DXGKDDI_INTERFACE_VERSION_WDDM2_0_M2_2_1 or greater, but does not fill in "
                    "the pfnCalibrateGpuClock or pfnSetStablePowerState DDI.",
          8306LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225485LL;
      }
    }
    if ( *((_BYTE *)this + 3056) && DXGADAPTER::IsFullWDDMAdapter(v142) && *((int *)this + 694) >= 4608 )
    {
      if ( !*((_BYTE *)this + 2979) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 8321;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver reports WDDM version 1.2 but does not implement all mandatory WDDM 1.2 full adapter features.",
          8321LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225485LL;
      }
    }
    else if ( !*((_BYTE *)this + 2979) )
    {
      goto LABEL_396;
    }
    if ( *((_BYTE *)this + 209) )
      goto LABEL_397;
    v144 = *((_QWORD *)this + 396);
    if ( !v144
      || !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v144 + 760) + 8LL) + 664LL))(*(_QWORD *)(v144 + 768)) )
    {
      *(_WORD *)((char *)this + 2979) = 0;
    }
LABEL_396:
    if ( !*((_BYTE *)this + 209) )
    {
LABEL_398:
      IsBddFallbackDriver = DXGADAPTER::IsBddFallbackDriver(this);
      v146 = *((_DWORD *)this + 111);
      *((_DWORD *)this + 50) = IsBddFallbackDriver ? 3 : 1;
      if ( (v146 & 0x10) != 0 && !*((_QWORD *)this + 395) )
      {
        DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v174);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v174);
        if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + 124) )
        {
          WdLogSingleEntry2(2LL, this, -1073741735LL);
          WdLogGlobalForLineNumber = 8371;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Current adapter 0x%I64x does not have display or render capabilities (Status = 0x%I64x).",
            (__int64)this,
            -1073741735LL,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          _InterlockedIncrement64((volatile signed __int64 *)this + 3);
          *((_QWORD *)this + 4) = -1LL;
          v147 = DXGGLOBAL::GetGlobal();
          DXGGLOBAL::SetWarpAdapter(v147, this);
        }
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v174);
      }
      if ( *((_BYTE *)this + 209) || (v148 = DXGADAPTER::InitializePowerManagement(this), RenderCore = v148, v148 >= 0) )
      {
        if ( *((_BYTE *)this + 3056) )
        {
          if ( *((int *)this + 694) >= 4864 && DXGADAPTER::IsFullWDDMAdapter(this) )
          {
            v150 = *((_DWORD *)this + 111);
            if ( (v150 & 4) == 0 && (v150 & 0x20) == 0 && (*((_DWORD *)this + 625) & 0x10) == 0 )
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 8402;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"WDDM 1.3 driver must support independent flip.",
                8402LL,
                0LL,
                0LL,
                0LL,
                0LL);
              return 3221225485LL;
            }
          }
        }
      }
      else
      {
        WdLogSingleEntry2(2LL, this, v148);
        WdLogGlobalForLineNumber = 8389;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to initialize power management for the adapter 0x%I64x (Status = 0x%I64x).",
          (__int64)this,
          RenderCore,
          0LL,
          0LL,
          0LL);
      }
      if ( (*((_DWORD *)this + 111) & 0x10) != 0 )
        *((_BYTE *)this + 3098) = 1;
      if ( v37 >= 0xA008 )
        *((_BYTE *)this + 3098) = 1;
      v149 = operator new(0x28uLL, 0x4B677844u, 64LL);
      if ( v149 )
      {
        *(_OWORD *)v149 = 0LL;
        *(_OWORD *)(v149 + 16) = 0LL;
        *(_QWORD *)(v149 + 32) = 0LL;
      }
      else
      {
        v149 = 0LL;
      }
      *((_QWORD *)this + 627) = v149;
      if ( !v149 )
      {
        WdLogSingleEntry0(2LL);
        v25 = L"Failed to allocate MockDriverState object";
        v24 = 8440LL;
        WdLogGlobalForLineNumber = 8440;
        v161 = 0LL;
        goto LABEL_31;
      }
      LocallyUniqueId = MOCKDRIVERSTATE::Initialize((MOCKDRIVERSTATE *)v149, this);
      if ( LocallyUniqueId < 0 )
      {
        WdLogSingleEntry0(2LL);
        v11 = L"Failed to initialize MockDriverState object";
        v12 = 8447LL;
        v13 = 0x40000;
        goto LABEL_13;
      }
      *((_BYTE *)this + 5024) = 0;
      LocallyUniqueId = DXGADAPTER::InitializeVSyncPhaseState(this);
      if ( LocallyUniqueId < 0 )
      {
        WdLogSingleEntry0(6LL);
        v11 = L"Failed to allocate VSync Phase Timer state";
        v12 = 8460LL;
        goto LABEL_12;
      }
      if ( (int)DXGADAPTER::InitializeCABCStateV2(v151) < 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 8475;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to initialize CABC State",
          8475LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v152 = *((_QWORD *)this + 396);
      if ( v152 && !*((_BYTE *)this + 209) )
      {
        v153 = *(_QWORD *)(v152 + 736);
        v154 = DXGGLOBAL::GetGlobal();
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v153 + 8) + 936LL))(
          *(_QWORD *)(v152 + 744),
          (__int64)v154 + 1344);
      }
      if ( (*((_DWORD *)this + 111) & 1) != 0 )
        *((_QWORD *)DXGGLOBAL::GetGlobal() + 128) = *(_QWORD *)((char *)this + 412);
      if ( (int)RenderCore < 0 )
        return (unsigned int)RenderCore;
      if ( v167 > 1 )
      {
        v155 = *((_DWORD *)this + 105);
        if ( v155 == 4318 )
        {
          v156 = DXGGLOBAL::GetGlobal();
          v157 = 7LL;
LABEL_440:
          DXGGLOBAL::RecordFeatureUsage(v156, v157, 1LL);
          goto LABEL_441;
        }
        if ( v155 == 4098 )
        {
          v156 = DXGGLOBAL::GetGlobal();
          v157 = 8LL;
          goto LABEL_440;
        }
      }
LABEL_441:
      v158 = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::RecordFeatureUsageWddmVersion(v158, this);
      return (unsigned int)RenderCore;
    }
LABEL_397:
    *((_QWORD *)this + 114) = 0LL;
    goto LABEL_398;
  }
  return result;
}
