/*
 * XREFs of ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1403FE2EC
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1403FDED8 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x14005A8AC (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     CreateTokenManagerSessionGlobal @ 0x14005D114 (CreateTokenManagerSessionGlobal.c)
 *     Feature_SavePairedAdapterInRemoteSession__private_IsEnabledDeviceUsageNoInline @ 0x14006737C (Feature_SavePairedAdapterInRemoteSession__private_IsEnabledDeviceUsageNoInline.c)
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x14008210C (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ @ 0x1401EDC80 (-Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0OUTPUTDUPL_SESSION_MGR@@QEAA@XZ @ 0x1403FECC4 (--0OUTPUTDUPL_SESSION_MGR@@QEAA@XZ.c)
 */

DXGSESSIONDATA *__fastcall DXGSESSIONDATA::DXGSESSIONDATA(DXGSESSIONDATA *this, unsigned int a2)
{
  __int64 v2; // r15
  CTokenManager **v3; // r12
  char *v4; // r13
  DispBrokerClientHandle **v6; // rcx
  OUTPUTDUPL_SESSION_MGR *v7; // rax
  OUTPUTDUPL_SESSION_MGR *v8; // rax
  OUTPUTDUPL_SESSION_MGR *v9; // rcx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(_DWORD *); // rax
  int v16; // eax
  __int64 v17; // rbx
  __int64 (*v18)(void); // rax
  __int64 (*v19)(void); // rax
  struct DXGPROCESS *v20; // rax
  __int64 v21; // rcx
  void *CurrentProcess; // rax
  __int64 ProcessServerSilo; // rax
  char IsHostSilo; // al
  __int64 HostSilo; // rax
  __int64 v26; // rdi
  int v27; // ebx
  struct _KEVENT *v28; // rax
  int v30; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+54h] [rbp-ACh] BYREF
  void *EventHandle; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v33[2]; // [rsp+60h] [rbp-A0h] BYREF
  char *v34; // [rsp+68h] [rbp-98h]
  __int64 v35; // [rsp+70h] [rbp-90h] BYREF
  int v36; // [rsp+78h] [rbp-88h]
  const wchar_t *v37; // [rsp+80h] [rbp-80h]
  int *v38; // [rsp+88h] [rbp-78h]
  int v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+98h] [rbp-68h]
  int v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  int v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h]
  __int128 v45; // [rsp+C0h] [rbp-40h]
  __int128 v46; // [rsp+D0h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v48; // [rsp+F0h] [rbp-10h] BYREF
  int v49; // [rsp+F8h] [rbp-8h]
  const wchar_t *v50; // [rsp+100h] [rbp+0h]
  int *v51; // [rsp+108h] [rbp+8h]
  int v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+118h] [rbp+18h]
  int v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h]
  int v56; // [rsp+130h] [rbp+30h]
  __int64 v57; // [rsp+138h] [rbp+38h]
  __int128 v58; // [rsp+140h] [rbp+40h]
  __int128 v59; // [rsp+150h] [rbp+50h]
  int v60; // [rsp+1B0h] [rbp+B0h] BYREF
  char v61; // [rsp+1B8h] [rbp+B8h] BYREF
  enum _NT_PRODUCT_TYPE ProductType; // [rsp+1C0h] [rbp+C0h] BYREF
  int v63; // [rsp+1C8h] [rbp+C8h] BYREF

  v2 = a2;
  *(_DWORD *)this = a2;
  v3 = (CTokenManager **)((char *)this + 18752);
  *((_QWORD *)this + 3) = 0LL;
  v4 = (char *)this + 18792;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = -1;
  *((_DWORD *)this + 14) = 76;
  *((_DWORD *)this + 4624) = 0;
  *((_WORD *)this + 9250) = 0;
  *((_BYTE *)this + 18503) = 0;
  *((_DWORD *)this + 4632) = 0;
  *((_QWORD *)this + 2317) = 0LL;
  *((_QWORD *)this + 2318) = 0LL;
  *((_QWORD *)this + 2319) = 0LL;
  *((_QWORD *)this + 2320) = 0LL;
  *((_DWORD *)this + 4642) = 0;
  *((_DWORD *)this + 4643) = 59;
  *((_DWORD *)this + 4644) = 61;
  *((_DWORD *)this + 4660) = 0;
  *((_QWORD *)this + 2331) = 0LL;
  *((_QWORD *)this + 2335) = 0LL;
  *((_QWORD *)this + 2336) = 0LL;
  *((_QWORD *)this + 2337) = 0LL;
  *((_DWORD *)this + 4676) = 0;
  *((_DWORD *)this + 4677) = 81;
  *((_DWORD *)this + 4678) = 1;
  *((_QWORD *)this + 2340) = 0LL;
  *((_QWORD *)this + 2341) = 0LL;
  *((_QWORD *)this + 2345) = 0LL;
  *((_QWORD *)this + 2346) = 0LL;
  *((_DWORD *)this + 4694) = 4;
  *((_QWORD *)this + 2348) = (char *)this + 18792;
  *((_QWORD *)this + 2344) = 0LL;
  *((_QWORD *)this + 2366) = 0LL;
  *((_QWORD *)this + 2367) = 0LL;
  *((_QWORD *)this + 2368) = 0LL;
  *((_DWORD *)this + 4738) = 0;
  *((_DWORD *)this + 4739) = -1;
  *((_DWORD *)this + 4740) = 70;
  *((_DWORD *)this + 4742) = 0;
  *((_QWORD *)this + 2372) = 0LL;
  *((_QWORD *)this + 2373) = 0LL;
  *((_WORD *)this + 9496) = 0;
  *((_QWORD *)this + 2375) = 0LL;
  *((_QWORD *)this + 2376) = 0LL;
  *((_DWORD *)this + 4754) = 0;
  *((_DWORD *)this + 4755) = 1;
  *((_DWORD *)this + 4756) = -1;
  v6 = (DispBrokerClientHandle **)((char *)this + 19032);
  *v6 = 0LL;
  DispBrokerClientReference::Assign(v6, 0LL);
  *((_QWORD *)this + 2381) = 0LL;
  *((_QWORD *)this + 2382) = 0LL;
  *((_QWORD *)this + 2383) = 0LL;
  *((_DWORD *)this + 4768) = 0;
  *((_DWORD *)this + 4769) = -1;
  *((_DWORD *)this + 4770) = 1;
  *((_QWORD *)this + 2386) = 0LL;
  *((_QWORD *)this + 2387) = 0LL;
  *((_BYTE *)this + 19104) = 0;
  *((_QWORD *)this + 2391) = 0LL;
  *((_QWORD *)this + 2392) = 0LL;
  *((_QWORD *)this + 2393) = 0LL;
  *((_DWORD *)this + 4788) = 0;
  *((_DWORD *)this + 4789) = -1;
  *((_DWORD *)this + 4790) = 1;
  *((_QWORD *)this + 2396) = 0LL;
  *((_DWORD *)this + 4794) = 0;
  *((_DWORD *)this + 4795) = 1;
  *((_QWORD *)this + 2398) = 0LL;
  *((_QWORD *)this + 2400) = 0LL;
  *((_QWORD *)this + 2401) = 0LL;
  *((_QWORD *)this + 2402) = 0LL;
  *((_DWORD *)this + 4806) = 0;
  *((_DWORD *)this + 4807) = -1;
  *((_DWORD *)this + 4808) = 1;
  *((_QWORD *)this + 2408) = 0LL;
  *((_QWORD *)this + 2409) = 0LL;
  *((_DWORD *)this + 4820) = 0;
  *((_DWORD *)this + 4821) = 62;
  *((_DWORD *)this + 4822) = 67;
  ProductType = 0;
  v7 = (OUTPUTDUPL_SESSION_MGR *)operator new(0x208uLL, 0x674D444Fu, 256LL);
  if ( v7 )
    v8 = OUTPUTDUPL_SESSION_MGR::OUTPUTDUPL_SESSION_MGR(v7);
  else
    v8 = 0LL;
  *((_QWORD *)this + 1) = v8;
  if ( v8 && (int)OUTPUTDUPL_SESSION_MGR::Initialize(v8) < 0 )
  {
    v9 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
    if ( v9 )
      OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v9);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2324) = (char *)this + 18584;
  *((_QWORD *)this + 2323) = (char *)this + 18584;
  *((_QWORD *)this + 2326) = (char *)this + 18600;
  *((_QWORD *)this + 2325) = (char *)this + 18600;
  *((_QWORD *)this + 2328) = (char *)this + 18616;
  *((_QWORD *)this + 2327) = (char *)this + 18616;
  RtlGetNtProductType(&ProductType);
  RtlGetSuiteMask();
  *((_BYTE *)this + 18505) = ProductType != NtProductServer
                          || !g_bSkuSupportMultipleUsers
                          || (v63 = 0,
                              v30 = 0,
                              v31 = 0,
                              DestinationString = 0LL,
                              RtlInitUnicodeString(
                                &DestinationString,
                                L"TerminalServices-RemoteConnectionManager-WVD-Enabled"),
                              (int)ZwQueryLicenseValue(&DestinationString, &v30, &v31, 4LL, &v63) >= 0)
                          && v63 == 4
                          && v30 == 4
                          && v31;
  v60 = 0;
  v48 = 0LL;
  v50 = L"bEnumerateHWBeforeSW";
  v49 = 292;
  v51 = &v60;
  v52 = 0x4000000;
  v53 = 0LL;
  v54 = 0;
  v55 = 0LL;
  v56 = 0;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows NT\\Terminal Services",
              &v48,
              0LL,
              0LL) >= 0 )
    goto LABEL_19;
  v35 = 0LL;
  v36 = 292;
  v37 = L"fUseHardwareGPU";
  v39 = 0x4000000;
  v38 = &v60;
  v40 = 0LL;
  v41 = 0;
  v42 = 0LL;
  v43 = 0;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\\WinStations",
              &v35,
              0LL,
              0LL) >= 0 )
LABEL_19:
    *((_BYTE *)this + 18505) = v60 != 0;
  *(_QWORD *)((char *)this + 18508) = 0LL;
  *((_DWORD *)this + 4629) = 0;
  if ( (unsigned int)Feature_SavePairedAdapterInRemoteSession__private_IsEnabledDeviceUsageNoInline() )
    *((_QWORD *)this + 2315) = 0LL;
  v61 = 0;
  v34 = &v61;
  v33[0] = 3;
  v33[1] = 1;
  Current = DXGPROCESS::GetCurrent(v10);
  if ( Current )
  {
    v13 = *((_QWORD *)Current + 11);
    v14 = v13;
    if ( v13 && (v15 = *(__int64 (__fastcall **)(_DWORD *))(v13 + 368)) != 0LL && (v16 = v15(v33), v16 < 0) )
    {
      v17 = v16;
      WdLogSingleEntry2(2LL, v2, v16);
      WdLogGlobalForLineNumber = 3431;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get session TTM support in session 0x%I64x (Status = 0x%I64x).",
        v2,
        v17,
        0LL,
        0LL,
        0LL);
      v61 = 0;
      v14 = v13;
      *((_BYTE *)this + 18497) = 0;
    }
    else
    {
      *((_BYTE *)this + 18497) = v61;
      if ( !v13 )
        goto LABEL_32;
    }
    v18 = *(__int64 (**)(void))(v14 + 352);
    if ( v18 )
      *((_QWORD *)this + 2317) = v18();
    v19 = *(__int64 (**)(void))(v14 + 400);
    if ( v19 )
      *((_QWORD *)this + 2318) = v19();
  }
  else
  {
    *((_BYTE *)this + 18497) = v61;
  }
LABEL_32:
  v20 = DXGPROCESS::GetCurrent(v12);
  *((_QWORD *)this + 2333) = v20;
  *((_DWORD *)v20 + 102) |= 1u;
  CurrentProcess = (void *)PsGetCurrentProcess(v21);
  *((_QWORD *)this + 2332) = CurrentProcess;
  ObfReferenceObject(CurrentProcess);
  if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + 38121) )
    CreateTokenManagerSessionGlobal(v3);
  ProcessServerSilo = PsGetProcessServerSilo(*((_QWORD *)this + 2332));
  IsHostSilo = PsIsHostSilo(ProcessServerSilo);
  *((_BYTE *)this + 18502) = IsHostSilo == 0;
  if ( !IsHostSilo )
  {
    v63 = 0;
    v35 = 0LL;
    v37 = L"DisableContainerSessionVersionCheck";
    v38 = &v63;
    v36 = 292;
    v39 = 67108868;
    v40 = 0LL;
    v41 = 0;
    v42 = 0LL;
    v43 = 0;
    v44 = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    HostSilo = PsGetHostSilo();
    v26 = PsAttachSiloToCurrentThread(HostSilo);
    v27 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v35, 0LL, 0LL);
    PsAttachSiloToCurrentThread(v26);
    if ( v27 < 0 || !v63 )
      *((_BYTE *)this + 18503) = 1;
  }
  *((_DWORD *)this + 4684) = 0;
  *((_QWORD *)this + 2343) = 0LL;
  *((_BYTE *)this + 18504) = 1;
  *((_QWORD *)this + 2373) = this;
  EventHandle = 0LL;
  v28 = IoCreateNotificationEvent(0LL, &EventHandle);
  *((_QWORD *)this + 2346) = v28;
  if ( v28 )
  {
    KeSetEvent(v28, 0, 0);
    ObfReferenceObject(*((PVOID *)this + 2346));
    ZwClose(EventHandle);
  }
  else
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 3526;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to create PnP event object for session 0x%I64x.",
      v2,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  memset(v4, 0, 0x80uLL);
  *((_DWORD *)this + 4814) = 0;
  RtlInitializeBitMap((PRTL_BITMAP)((char *)this + 19240), (PULONG)this + 4814, 2u);
  return this;
}
