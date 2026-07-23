/*
 * XREFs of EtwpTraceSystemInitialization @ 0x140CE77E0
 * Callers:
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     RtlGetSystemTimePrecise @ 0x14021E1C0 (RtlGetSystemTimePrecise.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     HviGetHardwareFeatures @ 0x1404DF900 (HviGetHardwareFeatures.c)
 *     HviGetHypervisorFeatures @ 0x1406E09D0 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x1406E0C30 (HviIsHypervisorVendorMicrosoft.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlGetVersion @ 0x140A97730 (RtlGetVersion.c)
 *     EtwpTraceBootSystemTime @ 0x140CE7588 (EtwpTraceBootSystemTime.c)
 */

char EtwpTraceSystemInitialization()
{
  NTSTATUS Version; // eax
  __int64 v1; // r8
  __int64 v2; // r9
  char v3; // r8
  __int64 v4; // rcx
  ULONGLONG v5; // rax
  __int64 v6; // rax
  ULONGLONG v7; // rax
  int v9; // [rsp+48h] [rbp-C0h] BYREF
  int v10; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v11; // [rsp+50h] [rbp-B8h] BYREF
  int v12; // [rsp+54h] [rbp-B4h] BYREF
  int v13; // [rsp+58h] [rbp-B0h] BYREF
  DWORD dwMajorVersion; // [rsp+5Ch] [rbp-ACh] BYREF
  DWORD dwMinorVersion; // [rsp+60h] [rbp-A8h] BYREF
  DWORD dwBuildNumber; // [rsp+64h] [rbp-A4h] BYREF
  int v17; // [rsp+68h] [rbp-A0h] BYREF
  int v18; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v19; // [rsp+70h] [rbp-98h] BYREF
  int v20; // [rsp+74h] [rbp-94h] BYREF
  LARGE_INTEGER v21; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER SystemTimePrecise; // [rsp+80h] [rbp-88h] BYREF
  __int128 v23; // [rsp+88h] [rbp-80h] BYREF
  __int128 v24; // [rsp+98h] [rbp-70h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+A8h] [rbp-60h] BYREF
  __int16 v26; // [rsp+1BCh] [rbp+B4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1C8h] [rbp+C0h] BYREF
  LARGE_INTEGER *p_SystemTimePrecise; // [rsp+1D8h] [rbp+D0h]
  __int64 v29; // [rsp+1E0h] [rbp+D8h]
  DWORD *v30; // [rsp+1E8h] [rbp+E0h]
  __int64 v31; // [rsp+1F0h] [rbp+E8h]
  int *v32; // [rsp+1F8h] [rbp+F0h]
  __int64 v33; // [rsp+200h] [rbp+F8h]
  __int16 *v34; // [rsp+208h] [rbp+100h]
  __int64 v35; // [rsp+210h] [rbp+108h]
  int *v36; // [rsp+218h] [rbp+110h]
  __int64 v37; // [rsp+220h] [rbp+118h]
  LARGE_INTEGER *v38; // [rsp+228h] [rbp+120h]
  __int64 v39; // [rsp+230h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+238h] [rbp+130h] BYREF
  DWORD *p_dwMajorVersion; // [rsp+258h] [rbp+150h]
  __int64 v42; // [rsp+260h] [rbp+158h]
  DWORD *p_dwMinorVersion; // [rsp+268h] [rbp+160h]
  __int64 v44; // [rsp+270h] [rbp+168h]
  DWORD *p_dwBuildNumber; // [rsp+278h] [rbp+170h]
  __int64 v46; // [rsp+280h] [rbp+178h]
  int *v47; // [rsp+288h] [rbp+180h]
  __int64 v48; // [rsp+290h] [rbp+188h]
  int *v49; // [rsp+298h] [rbp+190h]
  __int64 v50; // [rsp+2A0h] [rbp+198h]
  int *v51; // [rsp+2A8h] [rbp+1A0h]
  __int64 v52; // [rsp+2B0h] [rbp+1A8h]
  int *v53; // [rsp+2B8h] [rbp+1B0h]
  __int64 v54; // [rsp+2C0h] [rbp+1B8h]
  __int128 *v55; // [rsp+2C8h] [rbp+1C0h]
  __int64 v56; // [rsp+2D0h] [rbp+1C8h]
  unsigned int *v57; // [rsp+2D8h] [rbp+1D0h]
  __int64 v58; // [rsp+2E0h] [rbp+1D8h]
  int *v59; // [rsp+2E8h] [rbp+1E0h]
  __int64 v60; // [rsp+2F0h] [rbp+1E8h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+2F8h] [rbp+1F0h] BYREF
  unsigned int *v62; // [rsp+318h] [rbp+210h]
  __int64 v63; // [rsp+320h] [rbp+218h]
  int *v64; // [rsp+328h] [rbp+220h]
  __int64 v65; // [rsp+330h] [rbp+228h]

  memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  v12 = NtBuildQfe;
  v13 = InitSafeBootMode;
  v23 = 0LL;
  VersionInformation.dwOSVersionInfoSize = 284;
  Version = RtlGetVersion(&VersionInformation);
  if ( Version >= 0 )
  {
    v21 = KeBootTime;
    if ( (unsigned int)dword_140E08F78 > 5 && tlgKeywordOn((__int64)&dword_140E08F78, 0x800000000000LL) )
    {
      dwMajorVersion = VersionInformation.dwMajorVersion;
      *(_QWORD *)&v24 = v1;
      p_dwMajorVersion = &dwMajorVersion;
      dwMinorVersion = VersionInformation.dwMinorVersion;
      LOBYTE(v9) = v2 != 0;
      v42 = 4LL;
      p_dwMinorVersion = &dwMinorVersion;
      dwBuildNumber = VersionInformation.dwBuildNumber;
      p_dwBuildNumber = &dwBuildNumber;
      v47 = &v17;
      v18 = v12;
      v49 = &v18;
      LOWORD(v10) = v26;
      v51 = &v10;
      v19 = v13;
      v53 = &v19;
      v55 = &v24;
      v11 = dword_140E65EF8;
      v57 = &v11;
      v59 = &v9;
      v44 = 4LL;
      v46 = 4LL;
      v17 = 1;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 2LL;
      v54 = 4LL;
      v56 = 8LL;
      v58 = 4LL;
      v60 = 1LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08F78,
        (unsigned __int8 *)&byte_140055527,
        0LL,
        0LL,
        0xCu,
        &v40);
    }
    LOBYTE(Version) = HviIsHypervisorVendorMicrosoft();
    if ( (_BYTE)Version )
    {
      HviGetHardwareFeatures((__int64)&v23);
      v24 = 0LL;
      LOBYTE(Version) = HviGetHypervisorFeatures(&v24);
      if ( (unsigned int)dword_140E08F78 > 5 )
      {
        LOBYTE(Version) = tlgKeywordOn((__int64)&dword_140E08F78, 0x400000000000LL);
        if ( (_BYTE)Version )
        {
          LOBYTE(v9) = v3;
          v11 = ((unsigned int)v23 >> 10) & 0xF;
          v63 = 4LL;
          v62 = &v11;
          v65 = 1LL;
          v64 = &v9;
          LOBYTE(Version) = tlgWriteTransfer_EtwWriteTransfer(
                              (__int64)&dword_140E08F78,
                              (unsigned __int8 *)word_1400554F2,
                              0LL,
                              0LL,
                              4u,
                              &v61);
        }
      }
    }
    if ( EtwKernelProvRegHandle )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&VersionInformation.dwMajorVersion;
      v29 = 4LL;
      p_SystemTimePrecise = (LARGE_INTEGER *)&VersionInformation.dwMinorVersion;
      v31 = 4LL;
      v30 = &VersionInformation.dwBuildNumber;
      v33 = 4LL;
      v32 = &v12;
      v34 = &v26;
      v36 = &v13;
      v38 = &v21;
      v35 = 2LL;
      v37 = 4LL;
      v39 = 8LL;
      EtwWriteEx(EtwKernelProvRegHandle, &KernelSystemStart, 0LL, 0, 0LL, 0LL, 7u, &UserData);
      EtwpTraceBootSystemTime();
      if ( EtwEventEnabled(EtwKernelProvRegHandle, &BootPerformanceData) )
      {
        UserData.Ptr = (ULONGLONG)&EtwBootPerfData;
        *(_QWORD *)&UserData.Size = 264LL;
        EtwWriteEx(EtwKernelProvRegHandle, &BootPerformanceData, 0LL, 0, 0LL, 0LL, 1u, &UserData);
      }
      LOBYTE(Version) = KeLoaderBlock_0;
      v4 = *(_QWORD *)(KeLoaderBlock_0 + 240);
      if ( (*(_DWORD *)(v4 + 132) & 0x100) != 0 || *(_QWORD *)(v4 + 224) )
      {
        LOBYTE(Version) = EtwEventEnabled(EtwKernelProvRegHandle, &VsmPerformanceData);
        if ( (_BYTE)Version )
        {
          v5 = *(_QWORD *)(KeLoaderBlock_0 + 240) + 224LL;
          *(_QWORD *)&UserData.Size = 8LL;
          UserData.Ptr = v5;
          v6 = *(_QWORD *)(KeLoaderBlock_0 + 240) + 3520LL;
          v29 = 64LL;
          p_SystemTimePrecise = (LARGE_INTEGER *)v6;
          v30 = (DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3864LL);
          v31 = 8LL;
          LOBYTE(Version) = EtwWriteEx(EtwKernelProvRegHandle, &VsmPerformanceData, 0LL, 0, 0LL, 0LL, 3u, &UserData);
        }
      }
      if ( ((__int64)ExpSysDbgLock.MutantListHead.Flink & 4) != 0 )
      {
        v20 = (*(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 2648LL) >> 14) & 1;
        SystemTimePrecise = RtlGetSystemTimePrecise();
        v7 = *(_QWORD *)(KeLoaderBlock_0 + 240) + 2944LL;
        *(_QWORD *)&UserData.Size = 8LL;
        UserData.Ptr = v7;
        p_SystemTimePrecise = &SystemTimePrecise;
        v29 = 8LL;
        v30 = (DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 2936LL);
        v32 = &v20;
        v31 = 4LL;
        v33 = 4LL;
        LOBYTE(Version) = EtwWriteEx(EtwKernelProvRegHandle, &SoftBootInfo, 0LL, 0, 0LL, 0LL, 4u, &UserData);
      }
    }
  }
  return Version;
}
