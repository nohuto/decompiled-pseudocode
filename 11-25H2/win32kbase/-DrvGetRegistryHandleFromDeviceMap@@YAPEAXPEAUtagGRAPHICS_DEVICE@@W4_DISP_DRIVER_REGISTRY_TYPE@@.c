/*
 * XREFs of ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x14001D340
 * Callers:
 *     DrvEnumDisplayDevices @ 0x140047DF0 (DrvEnumDisplayDevices.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140048BFC (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvGetDisplayDriverParameters @ 0x14004C840 (DrvGetDisplayDriverParameters.c)
 *     DrvUpdateGraphicsDeviceList @ 0x14006ADB0 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x14006BF78 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x140118CB0 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     DrvUpdateDisplayDriverParameters @ 0x14012292C (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1401398CC (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140143DF0 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x14014A194 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     DrvSetPruneFlag @ 0x14014D2F0 (DrvSetPruneFlag.c)
 * Callees:
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x14000C940 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D154 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001EBA0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     UserIsRemoteAndNotDisconnectConnection @ 0x14004D190 (UserIsRemoteAndNotDisconnectConnection.c)
 *     UserIsCurrentProcessDwm @ 0x14004E260 (UserIsCurrentProcessDwm.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400696EC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14006A82C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14013A6A0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ABF4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ACBC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     wcsstr @ 0x1401A2CB8 (wcsstr.c)
 *     wcschr @ 0x1401A30D0 (wcschr.c)
 *     toupper @ 0x1401A32E4 (toupper.c)
 *     _wcsnicmp @ 0x1401A334C (_wcsnicmp.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1401A5B78 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

HANDLE __fastcall DrvGetRegistryHandleFromDeviceMap(
        unsigned __int16 *a1,
        int a2,
        unsigned int *a3,
        wchar_t *a4,
        unsigned int a5,
        NTSTATUS *a6)
{
  __int64 v7; // r15
  int v9; // r12d
  __int64 v10; // rsi
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  int v18; // eax
  NTSTATUS v19; // r15d
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rsi
  WCHAR *v23; // r13
  const WCHAR *v24; // rdx
  char *v25; // rbx
  ULONG v26; // r12d
  __int64 v27; // rcx
  signed __int64 v28; // rbx
  wchar_t v29; // ax
  wchar_t *v30; // rax
  HANDLE result; // rax
  unsigned __int16 i; // ax
  wchar_t *v33; // rbx
  __int64 v34; // r15
  _QWORD *Pool2; // rax
  _QWORD *v36; // rax
  const WCHAR *v37; // rdx
  wchar_t *v38; // rax
  wchar_t *v39; // rdi
  __int64 v40; // rcx
  _DWORD *v41; // rax
  unsigned __int64 m; // r15
  _DWORD *v43; // rax
  unsigned __int64 k; // r15
  int v45; // eax
  __int64 v46; // rcx
  signed int Length; // r13d
  unsigned __int16 *v48; // rax
  unsigned __int16 *v49; // r12
  __int64 v50; // r10
  unsigned __int16 *v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // rbx
  unsigned __int16 *v54; // rax
  __int64 v55; // rcx
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  unsigned __int16 *v66; // r13
  unsigned __int16 j; // ax
  wchar_t *v68; // rbx
  wchar_t *v69; // r13
  int v70; // r12d
  int v71; // r15d
  PVOID Buffer; // [rsp+40h] [rbp-C0h]
  PVOID Buffera; // [rsp+40h] [rbp-C0h]
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v77; // [rsp+60h] [rbp-A0h]
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  void *KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+78h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  ULONG ResultLength; // [rsp+B8h] [rbp-48h] BYREF
  ULONG v83; // [rsp+BCh] [rbp-44h] BYREF
  int v84; // [rsp+C0h] [rbp-40h]
  ULONG v85; // [rsp+C4h] [rbp-3Ch]
  HANDLE v86; // [rsp+C8h] [rbp-38h] BYREF
  wchar_t *v87; // [rsp+D0h] [rbp-30h]
  wchar_t *v88; // [rsp+D8h] [rbp-28h]
  __int64 v89; // [rsp+E0h] [rbp-20h]
  unsigned __int16 *v90; // [rsp+E8h] [rbp-18h]
  unsigned int *v91; // [rsp+F0h] [rbp-10h]
  __int64 v92; // [rsp+F8h] [rbp-8h]
  NTSTATUS *v93; // [rsp+100h] [rbp+0h]
  PVOID BackTrace[20]; // [rsp+110h] [rbp+10h] BYREF
  PVOID v95[20]; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned __int16 v96[152]; // [rsp+250h] [rbp+150h] BYREF

  v7 = a2;
  Handle = 0LL;
  v9 = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  v10 = 0LL;
  v77 = 0LL;
  v91 = a3;
  v93 = a6;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v96, 0, sizeof(v96));
  v13 = *(_QWORD *)(W32GetSessionState(v12) + 88);
  v92 = v13;
  WdLogSingleEntry3(5LL, a1, v7, a3);
  WdLogGlobalForLineNumber = 2077;
  if ( a4 && !a5 )
  {
    v19 = -1073741811;
    goto LABEL_29;
  }
  if ( *(_DWORD *)(v13 + 2920) )
  {
    v52 = *(_QWORD *)(W32GetSessionState(v15) + 88);
    if ( (unsigned int)UserIsRemoteAndNotDisconnectConnection() )
    {
      if ( *(_QWORD *)(v52 + 2936) )
      {
        v53 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
        if ( PsGetCurrentProcess() != v53
          && !(unsigned int)UserIsCurrentProcessDwm()
          && (*((_DWORD *)a1 + 40) & 0x4000000) != 0 )
        {
          v54 = v96;
          v55 = 2LL;
          do
          {
            v54 += 64;
            v56 = *(_OWORD *)a1;
            v57 = *((_OWORD *)a1 + 1);
            a1 += 64;
            *((_OWORD *)v54 - 8) = v56;
            v58 = *((_OWORD *)a1 - 6);
            *((_OWORD *)v54 - 7) = v57;
            v59 = *((_OWORD *)a1 - 5);
            *((_OWORD *)v54 - 6) = v58;
            v60 = *((_OWORD *)a1 - 4);
            *((_OWORD *)v54 - 5) = v59;
            v61 = *((_OWORD *)a1 - 3);
            *((_OWORD *)v54 - 4) = v60;
            v62 = *((_OWORD *)a1 - 2);
            *((_OWORD *)v54 - 3) = v61;
            v63 = *((_OWORD *)a1 - 1);
            *((_OWORD *)v54 - 2) = v62;
            *((_OWORD *)v54 - 1) = v63;
            --v55;
          }
          while ( v55 );
          v64 = *((_OWORD *)a1 + 1);
          *(_OWORD *)v54 = *(_OWORD *)a1;
          v65 = *((_OWORD *)a1 + 2);
          a1 = v96;
          *((_OWORD *)v54 + 1) = v64;
          *((_OWORD *)v54 + 2) = v65;
          StringCchCopyW(v96, 0x20uLL, (const unsigned __int16 *)(v13 + 2944));
          *(_DWORD *)&v96[80] &= ~0x4000000u;
        }
      }
    }
  }
  if ( (*((_DWORD *)a1 + 40) & 8) != 0 )
  {
    v40 = (unsigned int)Feature_RestrictXpdm_Block3rdPartyDrivers__private_featureState;
    if ( (Feature_RestrictXpdm_Block3rdPartyDrivers__private_featureState & 0x10) == 0 )
    {
      Buffera = (PVOID)(Feature_RestrictXpdm_Block3rdPartyDrivers__private_featureState | 1u);
      wil_details_FeatureReporting_ReportUsageToService(
        &Feature_RestrictXpdm_Block3rdPartyDrivers__private_descriptor,
        Buffera,
        3LL);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        Buffera,
        3LL,
        &Feature_RestrictXpdm_Block3rdPartyDrivers__private_descriptor);
    }
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v14, v16);
    v9 = 1;
  }
  v17 = W32GetUserSessionState() + 72032;
  v18 = *(_DWORD *)v17;
  if ( !*(_DWORD *)v17 )
    goto LABEL_5;
  if ( v18 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
            (NSInstrumentation::CLeakTrackingAllocator *)v17,
            0x706D7447u) )
      goto LABEL_72;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 528LL, 1886221383LL);
    v10 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedIncrement64((volatile signed __int64 *)(v17 + 112)),
          *Pool2 = 1886221383LL,
          v10 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *(NSInstrumentation::CPointerHashTable **)(v17 + 8),
        0x706D7447uLL);
    }
    goto LABEL_7;
  }
  if ( v18 != 2 )
    goto LABEL_71;
  if ( (*(_DWORD *)(v17 + 80) & 0x706D7447) != 0x706D7447 )
  {
LABEL_5:
    v10 = ExAllocatePool2(256LL, 512LL, 1886221383LL);
    if ( v10 )
      _InterlockedIncrement64((volatile signed __int64 *)(v17 + 112));
LABEL_7:
    Buffer = (PVOID)v10;
    if ( !v10 )
      goto LABEL_72;
LABEL_8:
    if ( (*((_DWORD *)a1 + 40) & 0x4000000) == 0 || v9 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\DeviceMap\\Video");
    }
    else
    {
      if ( (unsigned int)(v7 - 1) <= 1 )
      {
        v19 = -1073741766;
        goto LABEL_28;
      }
      DestinationString.Buffer = (PWSTR)v10;
      *(_DWORD *)&DestinationString.Length = 33423360;
      RtlAppendUnicodeToString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Terminal Server\\Video\\");
      v37 = L"vgastub";
      if ( *(_QWORD *)(v13 + 2896) )
        v37 = *(const WCHAR **)(v13 + 2896);
      RtlAppendUnicodeToString(&DestinationString, v37);
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v19 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v19 < 0 )
      goto LABEL_90;
    v20 = W32GetUserSessionState() + 72032;
    v21 = *(_DWORD *)v20;
    if ( !*(_DWORD *)v20 )
      goto LABEL_12;
    if ( v21 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
             (NSInstrumentation::CLeakTrackingAllocator *)v20,
             0x706D7447u) )
      {
        v36 = (_QWORD *)ExAllocatePool2(256LL, 1040LL, 1886221383LL);
        v22 = (__int64)v36;
        if ( !v36
          || (_InterlockedIncrement64((volatile signed __int64 *)(v20 + 112)),
              *v36 = 1886221383LL,
              v22 = (__int64)(v36 + 2),
              v36 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *(NSInstrumentation::CPointerHashTable **)(v20 + 8),
            0x706D7447uLL);
        }
LABEL_14:
        v77 = (PVOID)v22;
        if ( v22 )
        {
LABEL_15:
          v23 = (WCHAR *)(v22 + 512);
          if ( (*((_DWORD *)a1 + 40) & 0x4000000) == 0 || v9 )
            v24 = a1;
          else
            v24 = L"\\Device\\Video0";
          RtlInitUnicodeString(&DestinationString, v24);
          v19 = ZwQueryValueKey(
                  KeyHandle,
                  &DestinationString,
                  KeyValueFullInformation,
                  (PVOID)v22,
                  0x200u,
                  &ResultLength);
          if ( v19 < 0 )
            goto LABEL_90;
          v25 = (char *)(v22 + *(unsigned int *)(v22 + 8));
          v85 = 0;
          Destination = 0LL;
          v26 = 0;
          if ( a2 == 3 )
          {
            if ( a4 )
            {
              v27 = a5;
              if ( (unsigned __int64)a5 - 1 > 0x7FFFFFFE )
              {
                if ( a5 )
                  *a4 = 0;
                v19 = -1073741811;
              }
              else
              {
                v28 = v25 - (char *)a4;
                do
                {
                  if ( !(127LL - a5 + v27) )
                    break;
                  v29 = *(wchar_t *)((char *)a4 + v28);
                  if ( !v29 )
                    break;
                  *a4++ = v29;
                  --v27;
                }
                while ( v27 );
                v30 = a4 - 1;
                if ( v27 )
                  v30 = a4;
                *v30 = 0;
              }
            }
            goto LABEL_28;
          }
          for ( i = *(_WORD *)v25; *(_WORD *)v25; i = *(_WORD *)v25 )
          {
            *(_WORD *)v25 = toupper(i);
            v25 += 2;
          }
          v87 = wcsstr((const wchar_t *)(v22 + *(unsigned int *)(v22 + 8)), L"\\CONTROL\\");
          v33 = v87;
          if ( !v87 )
          {
            v33 = wcsstr((const wchar_t *)(v22 + *(unsigned int *)(v22 + 8)), L"\\SERVICES");
            v87 = v33;
          }
          v34 = -1LL;
          if ( !a4 )
            goto LABEL_43;
          v45 = a5 - 1;
          v88 = a4;
          if ( a5 - 1 > 0x1F )
            v45 = 31;
          v46 = -1LL;
          v84 = v45;
          v86 = 0LL;
          do
            ++v46;
          while ( *(_WORD *)(v22 + *(unsigned int *)(v22 + 8) + 2 * v46) );
          v89 = (int)v46;
          if ( (unsigned __int64)(2LL * (int)v46 + 12) > 0x66 )
            Length = 2 * v46 + 12;
          else
            Length = 102;
          v48 = (unsigned __int16 *)PALLOCMEM((unsigned int)Length, 1936876615LL);
          v90 = v48;
          v49 = v48;
          if ( !v48 )
          {
LABEL_113:
            v23 = (WCHAR *)(v22 + 512);
            v26 = v85;
            *v88 = 0;
LABEL_43:
            if ( v91 )
            {
              do
                ++v34;
              while ( v33[v34] );
              StringCchPrintfW(
                &v33[v34],
                512 - ((unsigned int)(((__int64)v33 - v22) >> 1) >> 1) - (unsigned int)v34,
                L"\\Mon%08X",
                *v91);
            }
            Destination.Buffer = v23;
            *(_DWORD *)&Destination.Length = 33423360;
            RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\System\\CurrentControlSet");
            if ( (unsigned int)(a2 - 1) <= 1 )
            {
              if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
              {
                RtlAppendUnicodeToString(&Destination, L"\\Control\\UnitedVideo");
                v26 = (unsigned __int8)RtlIsStateSeparationEnabled() != 0;
              }
              else
              {
                RtlAppendUnicodeToString(&Destination, L"\\Hardware Profiles\\Current\\System\\CurrentControlSet");
              }
            }
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &Destination;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 576;
            if ( a2 == 2 )
            {
              ObjectAttributes.SecurityDescriptor = *(PVOID *)(v92 + 1736);
              ObjectAttributes.SecurityQualityOfService = 0LL;
              v19 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, v26, 0LL);
              if ( v19 >= 0 )
              {
                while ( 1 )
                {
                  v38 = wcschr(v33 + 1, 0x5Cu);
                  v39 = v38;
                  if ( v38 )
                    *v38 = 0;
                  RtlAppendUnicodeToString(&Destination, v33);
                  if ( Handle )
                    ZwClose(Handle);
                  v19 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, v26, 0LL);
                  if ( v19 < 0 )
                    break;
                  if ( !v39 )
                    goto LABEL_28;
                  *v39 = 92;
                  v33 = v39;
                }
              }
              Handle = 0LL;
              goto LABEL_90;
            }
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            RtlAppendUnicodeToString(&Destination, v33);
            v19 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
            if ( v19 < 0 )
            {
              v19 = -1073741438;
LABEL_90:
              WdLogSingleEntry1(5LL, v19);
              WdLogGlobalForLineNumber = 2622;
            }
LABEL_28:
            v10 = (__int64)Buffer;
            goto LABEL_29;
          }
          memset(v48, 0, Length);
          StringCchCopyW(
            v49,
            (unsigned __int64)Length >> 1,
            (const unsigned __int16 *)(v22 + *(unsigned int *)(v22 + 8)));
          v51 = &v49[v89 - 1];
          if ( v51 > v49 )
          {
            while ( *v51 != 92 )
            {
              if ( --v51 <= v49 )
                goto LABEL_111;
            }
          }
          else
          {
LABEL_111:
            if ( *v51 != 92 )
            {
LABEL_112:
              GreDeleteFastMutex(v49);
              goto LABEL_113;
            }
          }
          StringCchCopyW(v51 + 1, v50 - v89, L"Video");
          RtlInitUnicodeString(&DestinationString, v49);
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = &DestinationString;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&v86, 0x20019u, &ObjectAttributes) >= 0 )
          {
            v83 = 0;
            RtlInitUnicodeString(&DestinationString, L"Service");
            memset(v49, 0, Length);
            if ( ZwQueryValueKey(v86, &DestinationString, KeyValueFullInformation, v49, Length, &v83) >= 0 )
            {
              v66 = (unsigned __int16 *)((char *)v49 + *((unsigned int *)v49 + 2));
              for ( j = *v66; *v66; j = *v66 )
                *v66++ = toupper(j);
              v68 = a4;
              v69 = (unsigned __int16 *)((char *)v49 + *((unsigned int *)v49 + 2));
              v70 = v84;
              v71 = v84;
              while ( v70-- )
              {
                if ( !*v69 )
                  break;
                *v68++ = *v69++;
                if ( v70 == v71 - 3 && !wcsnicmp(a4, L"VGA", 3uLL) )
                  break;
              }
              v49 = v90;
              v34 = -1LL;
              v88 = v68;
              v33 = v87;
            }
            ZwClose(v86);
          }
          goto LABEL_112;
        }
LABEL_76:
        v19 = -1073741670;
        goto LABEL_28;
      }
    }
    else if ( v21 == 2 )
    {
      if ( (*(_DWORD *)(v20 + 80) & 0x706D7447) != 0x706D7447 )
      {
LABEL_12:
        v22 = ExAllocatePool2(256LL, 1024LL, 1886221383LL);
        if ( v22 )
          _InterlockedIncrement64((volatile signed __int64 *)(v20 + 112));
        goto LABEL_14;
      }
      v43 = (_DWORD *)(v20 + 48);
      for ( k = 0LL; ; ++k )
      {
        if ( k >= *(unsigned int *)(v20 + 84) )
          goto LABEL_12;
        if ( *v43 == 1886221383 )
          break;
        ++v43;
      }
      v22 = ExAllocatePool2(256LL, 1040LL, 1886221383LL);
      if ( v22 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v20 + 128));
        memset(v95, 0, sizeof(v95));
        RtlCaptureStackBackTrace(0, 0x14u, v95, 0LL);
        if ( (unsigned __int64)(v22 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v20,
                                  v22,
                                  k,
                                  v95) )
          {
            v77 = (PVOID)v22;
            goto LABEL_15;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v20,
                                     v22,
                                     k,
                                     v95) )
        {
          v22 += 16LL;
          goto LABEL_14;
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v20 + 136));
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v22);
      }
    }
    v77 = 0LL;
    goto LABEL_76;
  }
  v41 = (_DWORD *)(v17 + 48);
  for ( m = 0LL; ; ++m )
  {
    if ( m >= *(unsigned int *)(v17 + 84) )
    {
      LODWORD(v7) = a2;
      goto LABEL_5;
    }
    if ( *v41 == 1886221383 )
      break;
    ++v41;
  }
  v10 = ExAllocatePool2(256LL, 528LL, 1886221383LL);
  if ( !v10 )
  {
    v10 = 0LL;
    goto LABEL_72;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v17 + 128));
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(v10 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                             v17,
                             v10,
                             m,
                             BackTrace) )
      goto LABEL_70;
    LODWORD(v7) = a2;
    Buffer = (PVOID)v10;
    goto LABEL_8;
  }
  if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                          v17,
                          v10,
                          m,
                          BackTrace) )
  {
    LODWORD(v7) = a2;
    v10 += 16LL;
    goto LABEL_7;
  }
LABEL_70:
  _InterlockedIncrement64((volatile signed __int64 *)(v17 + 136));
  _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v10);
LABEL_71:
  v10 = 0LL;
LABEL_72:
  v19 = -1073741670;
LABEL_29:
  if ( v93 )
    *v93 = v19;
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( v10 )
    GreDeleteFastMutex((PVOID)v10);
  if ( v77 )
    GreDeleteFastMutex(v77);
  WdLogSingleEntry1(5LL, v19);
  result = Handle;
  WdLogGlobalForLineNumber = 2646;
  return result;
}
