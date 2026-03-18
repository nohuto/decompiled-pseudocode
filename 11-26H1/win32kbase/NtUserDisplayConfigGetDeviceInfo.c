/*
 * XREFs of NtUserDisplayConfigGetDeviceInfo @ 0x1400FAA90
 * Callers:
 *     <none>
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1400293B0 (UserIsWddmConnectedSession.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     DrvSampleDisplayState @ 0x14007EBD0 (DrvSampleDisplayState.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ??1MaybeEnterLeaveCritSharedOnly@@QEAA@XZ @ 0x1400FB674 (--1MaybeEnterLeaveCritSharedOnly@@QEAA@XZ.c)
 *     ?AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1400FB7E0 (-AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1400FB820 (-RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400FB88C (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     _DeviceInfoTranslateStatusDefault @ 0x1400FBEB8 (_DeviceInfoTranslateStatusDefault.c)
 *     ?GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1400FBFCC (-GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     DrvCreateLiveDumpWithWdLogs @ 0x1401F6AE4 (DrvCreateLiveDumpWithWdLogs.c)
 *     RtlCopyVolatileMemory @ 0x14024BC90 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x1402D21A0 (RtlReadULongFromUser.c)
 */

__int64 __fastcall NtUserDisplayConfigGetDeviceInfo(char *a1)
{
  volatile void **v2; // rdi
  void *v3; // r12
  __int64 v4; // r14
  unsigned int v5; // r13d
  int DeviceInfoInternal; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int ULongFromUser; // eax
  int v11; // ecx
  SIZE_T v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 CurrentProcessWow64Process; // rax
  int v18; // r14d
  __int64 v19; // r8
  __int64 v20; // r9
  int GetterTypeSize; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  volatile void *v24; // r14
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // eax
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  int v36; // r13d
  __int64 v37; // r15
  __int64 UserSessionState; // rax
  unsigned int v39; // [rsp+30h] [rbp-A8h]
  unsigned int v40; // [rsp+34h] [rbp-A4h]
  int v41; // [rsp+38h] [rbp-A0h]
  unsigned int v42; // [rsp+3Ch] [rbp-9Ch]
  __int128 v43; // [rsp+80h] [rbp-58h] BYREF
  __int64 v44; // [rsp+90h] [rbp-48h]
  int v45; // [rsp+98h] [rbp-40h]
  int Src; // [rsp+E8h] [rbp+10h] BYREF
  int v47; // [rsp+F0h] [rbp+18h] BYREF
  volatile void *Address; // [rsp+F8h] [rbp+20h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  Address = 0LL;
  LODWORD(v4) = 0;
  v40 = 0;
  v42 = 0;
  v5 = 0;
  v39 = 0;
  v41 = 0;
  DeviceInfoInternal = 0;
  v47 = 0;
  if ( !*(_DWORD *)(W32GetUserGdiSessionState() + 32) )
  {
    DeviceInfoInternal = -1073741823;
    v47 = -1073741823;
    goto LABEL_52;
  }
  ULongFromUser = RtlReadULongFromUser(a1 + 4, v7);
  v12 = ULongFromUser;
  if ( ULongFromUser < 0x14 )
    ExRaiseStatus(-1073741811);
  v2 = (volatile void **)Win32AllocPoolWithQuotaZInitImpl(v11, ULongFromUser, 0x63447355u);
  if ( !v2 )
  {
    if ( (unsigned int)RtlReadULongFromUser(a1, v13) == -21 && (_DWORD)v12 == 2056 )
    {
      RtlReadULongFromUser(a1 + 2016, v15);
      RtlReadULongFromUser(a1 + 2020, v16);
      Src = 0;
      RtlCopyToUser(a1 + 2016, &Src, 4uLL);
      v47 = 0;
      RtlCopyToUser(a1 + 2020, &v47, 4uLL);
      LODWORD(Address) = 1144084230;
      RtlCopyToUser(a1 + 2024, &Address, 4uLL);
    }
    WdLogSingleEntry2(2LL, v12, 1144084230LL);
    WdLogGlobalForLineNumber = 2217;
    ExRaiseStatus(-1073741801);
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v14, v13);
  ProbeForRead(a1, v12, CurrentProcessWow64Process != 0 ? 1 : 4);
  RtlCopyVolatileMemory(v2, a1, v12);
  *((_DWORD *)v2 + 1) = v12;
  if ( *(_DWORD *)v2 != -21 )
  {
    if ( *(_DWORD *)v2 != -15 )
    {
LABEL_11:
      v18 = 0;
      goto LABEL_12;
    }
    if ( (_DWORD)v12 == 32 )
    {
      v32 = *((_DWORD *)v2 + 5);
      if ( !v32 )
        goto LABEL_11;
      v3 = (void *)Win32AllocPoolWithQuotaZInitImpl(-15, v32, 0x63447355u);
      if ( v3 )
      {
        Address = v2[3];
        v2[3] = v3;
        goto LABEL_11;
      }
      DeviceInfoInternal = -1073741801;
LABEL_50:
      v47 = DeviceInfoInternal;
LABEL_51:
      v5 = v39;
      LODWORD(v4) = v40;
LABEL_52:
      if ( v41 )
      {
        v43 = 0LL;
        v44 = 0LL;
        v45 = 0;
        DrvSampleDisplayState((__int64)&v43);
        if ( v42 == (_DWORD)v43 && v5 == DWORD2(v43) )
        {
          v36 = 1;
          v4 = (int)v4;
          v37 = DeviceInfoInternal;
        }
        else
        {
          v36 = 0;
          Src = 0;
          RtlCopyToUser(a1 + 2024, &Src, 4uLL);
          v4 = (int)v4;
          WdLogSingleEntry5(2LL, v42, v39, (unsigned int)v43, DWORD2(v43), (int)v4);
          WdLogGlobalForLineNumber = 2394;
          v37 = DeviceInfoInternal;
          WdLogSingleEntry2(2LL, DeviceInfoInternal, (int)v4);
          WdLogGlobalForLineNumber = 2399;
        }
        UserSessionState = W32GetUserSessionState(v34, v33, v35);
        if ( *(_DWORD *)(UserSessionState + 56992) )
        {
          WdLogSingleEntry2(2LL, v37, v4);
          WdLogGlobalForLineNumber = 2429;
        }
        else if ( v36 )
        {
          *(_DWORD *)(UserSessionState + 56992) = 1;
          DrvCreateLiveDumpWithWdLogs((unsigned int)DeviceInfoInternal, v40);
        }
        else
        {
          WdLogSingleEntry2(2LL, v37, v4);
          WdLogGlobalForLineNumber = 2421;
        }
      }
      goto LABEL_30;
    }
LABEL_48:
    DeviceInfoInternal = -1073741811;
    goto LABEL_50;
  }
  if ( (_DWORD)v12 != 2056 )
    goto LABEL_48;
  v42 = *((_DWORD *)v2 + 504);
  v39 = *((_DWORD *)v2 + 505);
  v2[252] = 0LL;
  v18 = 1;
  v41 = 1;
LABEL_12:
  LOBYTE(Src) = DispConfigTypes::RequiresUserCritShared();
  if ( (_BYTE)Src )
    EnterSharedCrit(1LL, 1LL, v19, v20);
  if ( !(unsigned __int8)DispConfigTypes::AllowInAnySession(*(unsigned int *)v2) )
  {
    if ( *(_DWORD *)(W32GetUserGdiSessionState() + 36) )
    {
      DeviceInfoInternal = -1073741823;
      v47 = -1073741823;
      goto LABEL_20;
    }
    if ( !(unsigned int)UserIsWddmConnectedSession(v29, v28, v30, v31) )
      DeviceInfoInternal = -1073741790;
    v47 = DeviceInfoInternal;
  }
  if ( DeviceInfoInternal >= 0 )
  {
    GetterTypeSize = DispConfigTypes::GetGetterTypeSize(*(unsigned int *)v2);
    if ( !GetterTypeSize || *((_DWORD *)v2 + 1) != GetterTypeSize )
    {
      DeviceInfoInternal = -1073741811;
      v47 = -1073741811;
    }
    if ( DeviceInfoInternal >= 0 )
    {
      DeviceInfoInternal = DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v2, 1);
      v47 = DeviceInfoInternal;
    }
  }
LABEL_20:
  MaybeEnterLeaveCritSharedOnly::~MaybeEnterLeaveCritSharedOnly((MaybeEnterLeaveCritSharedOnly *)&Src);
  if ( DeviceInfoInternal < 0 && v18 )
  {
    v22 = *((unsigned int *)v2 + 506);
    v40 = *((_DWORD *)v2 + 506);
  }
  if ( DeviceInfoInternal != -1073741789 )
  {
    if ( DeviceInfoInternal == -2147483643 )
    {
      DeviceInfoInternal = -1073741789;
      v47 = -1073741789;
    }
    else
    {
      DeviceInfoInternal = DeviceInfoTranslateStatusDefault(*(unsigned int *)v2, (unsigned int)DeviceInfoInternal);
      v47 = DeviceInfoInternal;
    }
  }
  if ( *(_DWORD *)v2 == -15 )
  {
    v24 = Address;
    v2[3] = Address;
    if ( DeviceInfoInternal >= 0 )
    {
      if ( *((_DWORD *)v2 + 5) )
      {
        v25 = PsGetCurrentProcessWow64Process(v23, v22);
        ProbeForWrite(v24, *((unsigned int *)v2 + 5), v25 != 0 ? 1 : 4);
        memmove((void *)v24, v3, *((unsigned int *)v2 + 5));
      }
    }
  }
  if ( *(_DWORD *)v2 == 3 && DeviceInfoInternal >= 0 )
    *((_DWORD *)v2 + 7) = 0;
  v26 = PsGetCurrentProcessWow64Process(v23, v22);
  ProbeForWrite(a1, *((unsigned int *)v2 + 1), v26 != 0 ? 1 : 4);
  RtlCopyVolatileMemory(a1, v2, *((unsigned int *)v2 + 1));
  if ( DeviceInfoInternal < 0 )
    goto LABEL_51;
LABEL_30:
  if ( v3 )
    GreDeleteFastMutex((char *)v3, v7, v8, v9);
  if ( v2 )
    GreDeleteFastMutex((char *)v2, v7, v8, v9);
  return (unsigned int)DeviceInfoInternal;
}
