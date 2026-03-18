/*
 * XREFs of NtUserDisplayConfigGetDeviceInfo @ 0x14016ED70
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     DrvSampleDisplayState @ 0x14002B4D0 (DrvSampleDisplayState.c)
 *     ??1MaybeEnterLeaveCrit@@QEAA@XZ @ 0x140047520 (--1MaybeEnterLeaveCrit@@QEAA@XZ.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     UserIsWddmConnectedSession @ 0x14006BDB0 (UserIsWddmConnectedSession.c)
 *     ??0MaybeEnterLeaveCritSharedOnly@@QEAA@_N@Z @ 0x14008A1FC (--0MaybeEnterLeaveCritSharedOnly@@QEAA@_N@Z.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ?AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1400C7E18 (-AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     _DeviceInfoTranslateStatusDefault @ 0x1400CD658 (_DeviceInfoTranslateStatusDefault.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400F6DD8 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     ?GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14016E3DC (-GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14016E4D0 (-RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     DrvCreateLiveDumpWithWdLogs @ 0x1401CD184 (DrvCreateLiveDumpWithWdLogs.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140243540 (memmove.c)
 *     RtlCopyToUser @ 0x1402C9008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtUserDisplayConfigGetDeviceInfo(char *a1)
{
  _DWORD *v2; // r14
  void *v3; // r12
  signed int DeviceInfoInternal; // edi
  unsigned int *v5; // rdx
  size_t v6; // rbx
  unsigned __int64 v7; // r13
  _DWORD *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // eax
  char v11; // al
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int GetterTypeSize; // eax
  volatile void *v16; // rbx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  BOOL v21; // r13d
  __int64 UserSessionState; // rax
  unsigned int v24; // [rsp+30h] [rbp-D8h]
  _DWORD v25[3]; // [rsp+34h] [rbp-D4h] BYREF
  int v26; // [rsp+50h] [rbp-B8h] BYREF
  int v27[5]; // [rsp+54h] [rbp-B4h] BYREF
  _DWORD v28[4]; // [rsp+68h] [rbp-A0h] BYREF
  volatile void *Address; // [rsp+78h] [rbp-90h]
  __int128 v30; // [rsp+80h] [rbp-88h] BYREF
  __int64 v31; // [rsp+90h] [rbp-78h]
  int v32; // [rsp+98h] [rbp-70h]
  _DWORD *v33; // [rsp+B0h] [rbp-58h]
  char v34; // [rsp+118h] [rbp+10h] BYREF
  int v35; // [rsp+120h] [rbp+18h]
  int Src; // [rsp+128h] [rbp+20h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  Address = 0LL;
  v24 = 0;
  memset(v25, 0, sizeof(v25));
  DeviceInfoInternal = 0;
  v35 = 0;
  if ( !*(_DWORD *)(W32GetUserGdiSessionState(a1) + 32) )
  {
    DeviceInfoInternal = -1073741823;
LABEL_3:
    v35 = DeviceInfoInternal;
LABEL_54:
    if ( v25[0] )
    {
      v30 = 0LL;
      v31 = 0LL;
      v32 = 0;
      DrvSampleDisplayState((__int64)&v30);
      v21 = *(_QWORD *)&v25[1] == __PAIR64__(v30, DWORD2(v30));
      if ( *(_QWORD *)&v25[1] != __PAIR64__(v30, DWORD2(v30)) )
      {
        v28[0] = 0;
        RtlCopyToUser(a1 + 2024, v28, 4uLL);
        WdLogSingleEntry5(2LL, v25[2], v25[1], (unsigned int)v30, DWORD2(v30), (int)v24);
        WdLogGlobalForLineNumber = 2355;
        WdLogSingleEntry2(2LL, DeviceInfoInternal, (int)v24);
        WdLogGlobalForLineNumber = 2360;
      }
      UserSessionState = W32GetUserSessionState(v20, v19);
      if ( *(_DWORD *)(UserSessionState + 57000) )
      {
        WdLogSingleEntry2(2LL, DeviceInfoInternal, (int)v24);
        WdLogGlobalForLineNumber = 2390;
      }
      else if ( v21 )
      {
        *(_DWORD *)(UserSessionState + 57000) = 1;
        DrvCreateLiveDumpWithWdLogs((unsigned int)DeviceInfoInternal, v24);
      }
      else
      {
        WdLogSingleEntry2(2LL, DeviceInfoInternal, (int)v24);
        WdLogGlobalForLineNumber = 2382;
      }
    }
    goto LABEL_62;
  }
  v5 = (unsigned int *)(a1 + 4);
  if ( (unsigned __int64)(a1 + 4) >= MmUserProbeAddress )
    v5 = (unsigned int *)MmUserProbeAddress;
  v6 = *v5;
  if ( (unsigned int)v6 < 0x14 )
    ExRaiseStatus(-1073741811);
  v7 = *v5;
  v2 = (_DWORD *)Win32AllocPoolWithQuotaZInitImpl(MmUserProbeAddress, v7, 0x63447355u);
  v33 = v2;
  if ( !v2 )
  {
    v8 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v8 = (_DWORD *)MmUserProbeAddress;
    if ( *v8 == -21 && (_DWORD)v6 == 2056 )
    {
      Src = 0;
      RtlCopyToUser(a1 + 2016, &Src, 4uLL);
      v26 = 0;
      RtlCopyToUser(a1 + 2020, &v26, 4uLL);
      v27[0] = 1144084230;
      RtlCopyToUser(a1 + 2024, v27, 4uLL);
    }
    WdLogSingleEntry2(2LL, v7, 1144084230LL);
    WdLogGlobalForLineNumber = 2178;
    ExRaiseStatus(-1073741801);
  }
  if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  RtlCopyVolatileMemory(v2, a1, v6);
  v2[1] = v6;
  v9 = (unsigned int)*v2;
  if ( (_DWORD)v9 == -21 )
  {
    if ( (_DWORD)v6 != 2056 )
      goto LABEL_20;
    v25[2] = v2[504];
    v25[1] = v2[505];
    v2[504] = 0;
    v2[505] = 0;
    v25[0] = 1;
  }
  else if ( (_DWORD)v9 == -15 )
  {
    if ( (_DWORD)v6 != 32 )
    {
LABEL_20:
      DeviceInfoInternal = -1073741811;
      goto LABEL_3;
    }
    v10 = v2[5];
    if ( v10 )
    {
      v3 = (void *)Win32AllocPoolWithQuotaZInitImpl(v9, v10, 0x63447355u);
      if ( !v3 )
      {
        DeviceInfoInternal = -1073741801;
        goto LABEL_3;
      }
      Address = (volatile void *)*((_QWORD *)v2 + 3);
      *((_QWORD *)v2 + 3) = v3;
      LODWORD(v9) = *v33;
    }
  }
  v11 = DispConfigTypes::RequiresUserCritShared(v9);
  MaybeEnterLeaveCritSharedOnly::MaybeEnterLeaveCritSharedOnly((MaybeEnterLeaveCritSharedOnly *)&v34, v11);
  if ( !DispConfigTypes::AllowInAnySession(*v2) )
  {
    if ( *(_DWORD *)(W32GetUserGdiSessionState(v12) + 36) )
    {
      DeviceInfoInternal = -1073741823;
      v35 = -1073741823;
      goto LABEL_39;
    }
    if ( !(unsigned int)UserIsWddmConnectedSession(v14, v13) )
      DeviceInfoInternal = -1073741790;
    v35 = DeviceInfoInternal;
  }
  if ( DeviceInfoInternal >= 0 )
  {
    GetterTypeSize = DispConfigTypes::GetGetterTypeSize(*v2);
    if ( !GetterTypeSize || v2[1] != GetterTypeSize )
    {
      DeviceInfoInternal = -1073741811;
      v35 = -1073741811;
    }
    if ( DeviceInfoInternal >= 0 )
    {
      DeviceInfoInternal = DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v2, 1);
      v35 = DeviceInfoInternal;
    }
  }
LABEL_39:
  MaybeEnterLeaveCrit::~MaybeEnterLeaveCrit((MaybeEnterLeaveCrit *)&v34);
  if ( DeviceInfoInternal < 0 && v25[0] )
    v24 = v2[506];
  if ( DeviceInfoInternal == -2147483643 )
  {
    DeviceInfoInternal = -1073741789;
    v35 = -1073741789;
  }
  else if ( DeviceInfoInternal != -1073741789 )
  {
    DeviceInfoInternal = DeviceInfoTranslateStatusDefault(*v2, DeviceInfoInternal);
    v35 = DeviceInfoInternal;
  }
  if ( *v2 == -15 )
  {
    v16 = Address;
    *((_QWORD *)v2 + 3) = Address;
    if ( DeviceInfoInternal >= 0 )
    {
      if ( v2[5] )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
        ProbeForWrite(v16, (unsigned int)v2[5], CurrentProcessWow64Process != 0 ? 1 : 4);
        memmove((void *)v16, v3, (unsigned int)v2[5]);
      }
    }
  }
  if ( *v2 == 3 && DeviceInfoInternal >= 0 )
    v2[7] = 0;
  v18 = PsGetCurrentProcessWow64Process();
  ProbeForWrite(a1, (unsigned int)v2[1], v18 != 0 ? 1 : 4);
  RtlCopyVolatileMemory(a1, v2, (unsigned int)v2[1]);
  if ( DeviceInfoInternal < 0 )
    goto LABEL_54;
LABEL_62:
  if ( v3 )
    GreDeleteFastMutex((char *)v3);
  if ( v2 )
    GreDeleteFastMutex((char *)v2);
  return (unsigned int)DeviceInfoInternal;
}
