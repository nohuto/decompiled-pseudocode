/*
 * XREFs of ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x140040BF0
 * Callers:
 *     DrvGetDisplayDriverParameters @ 0x1400285D4 (DrvGetDisplayDriverParameters.c)
 *     DrvUpdateGraphicsDeviceList @ 0x140029C20 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x14002AA74 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     DrvEnumDisplayDevices @ 0x140046490 (DrvEnumDisplayDevices.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140047270 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvUpdateDisplayDriverParameters @ 0x140151A54 (DrvUpdateDisplayDriverParameters.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1401583D8 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140173AF8 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14017BA40 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x140185B40 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     DrvSetPruneFlag @ 0x14018A874 (DrvSetPruneFlag.c)
 * Callees:
 *     UserIsRemoteAndNotDisconnectConnection @ 0x140028F20 (UserIsRemoteAndNotDisconnectConnection.c)
 *     Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck @ 0x14002AA00 (Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14002BBDC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Win32FreePoolImpl@@YAXPEAX@Z @ 0x140041D84 (-Win32FreePoolImpl@@YAXPEAX@Z.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA?A_PPEAX@Z @ 0x1400431D0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA-A_PPEAX@Z.c)
 *     UserIsCurrentProcessDwm @ 0x14006F430 (UserIsCurrentProcessDwm.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400B40C8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1400B5444 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400B6BAC (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1400FC330 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401B4ACC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     wcsstr @ 0x1401C7178 (wcsstr.c)
 *     wcschr @ 0x1401C73A4 (wcschr.c)
 *     toupper @ 0x1401C77FC (toupper.c)
 *     _wcsnicmp @ 0x1401C7868 (_wcsnicmp.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

HANDLE __fastcall DrvGetRegistryHandleFromDeviceMap(
        unsigned __int16 *a1,
        int a2,
        unsigned int *a3,
        unsigned __int16 *a4,
        unsigned int a5,
        NTSTATUS *a6)
{
  unsigned __int16 *v6; // r13
  int v7; // r12d
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  int v18; // eax
  WCHAR *Pool2; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  NTSTATUS v22; // edi
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rbx
  int v26; // eax
  WCHAR *v27; // rsi
  HANDLE result; // rax
  const WCHAR *v29; // rdx
  unsigned __int16 *v30; // rbx
  unsigned __int16 k; // ax
  wchar_t *v32; // rbx
  __int64 v33; // rdi
  ULONG v34; // r12d
  WCHAR *v35; // rax
  WCHAR *v36; // rax
  const WCHAR *v37; // rdx
  _DWORD *v38; // rax
  unsigned __int64 i; // rdi
  _DWORD *v40; // rax
  unsigned __int64 j; // rdi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  int v45; // eax
  __int64 v46; // rcx
  char *v47; // rcx
  __int64 v48; // rax
  signed int v49; // r12d
  unsigned __int64 v50; // rax
  unsigned __int16 *v51; // rax
  unsigned __int16 *v52; // r13
  unsigned __int64 v53; // r12
  unsigned __int16 *v54; // r11
  char *v55; // r11
  unsigned __int64 v56; // r12
  unsigned __int64 v57; // rcx
  signed __int64 v58; // rdx
  __int16 v59; // ax
  char *v60; // rax
  int v61; // eax
  __int64 v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rbx
  unsigned __int16 *v68; // rax
  __int64 v69; // rcx
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  __int128 v78; // xmm1
  __int128 v79; // xmm0
  wchar_t *v80; // rax
  wchar_t *v81; // rsi
  unsigned __int16 *v82; // r12
  unsigned __int16 m; // ax
  wchar_t *v84; // rbx
  wchar_t *v85; // r12
  int v86; // edi
  wchar_t *v87; // rsi
  int v88; // r13d
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v92; // [rsp+58h] [rbp-A8h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  ULONG CreateOptions; // [rsp+68h] [rbp-98h]
  void *KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+78h] [rbp-88h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  ULONG ResultLength; // [rsp+B8h] [rbp-48h] BYREF
  ULONG v99[2]; // [rsp+C0h] [rbp-40h] BYREF
  ULONG Length; // [rsp+C8h] [rbp-38h]
  int v101; // [rsp+CCh] [rbp-34h]
  unsigned __int16 *v102; // [rsp+D0h] [rbp-30h]
  HANDLE v103; // [rsp+D8h] [rbp-28h] BYREF
  wchar_t *Str1; // [rsp+E0h] [rbp-20h]
  wchar_t *v105; // [rsp+E8h] [rbp-18h]
  unsigned __int16 *v106; // [rsp+F0h] [rbp-10h]
  unsigned int *v107; // [rsp+F8h] [rbp-8h]
  size_t Size; // [rsp+100h] [rbp+0h]
  unsigned __int16 *v109; // [rsp+108h] [rbp+8h]
  __int64 v110; // [rsp+110h] [rbp+10h]
  NTSTATUS *v111; // [rsp+118h] [rbp+18h]
  PVOID BackTrace[20]; // [rsp+120h] [rbp+20h] BYREF
  PVOID v113[20]; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned __int16 v114[152]; // [rsp+260h] [rbp+160h] BYREF

  v6 = a1;
  v111 = a6;
  v107 = a3;
  v106 = a1;
  Handle = 0LL;
  KeyHandle = 0LL;
  v7 = 0;
  ResultLength = 0;
  v8 = 0LL;
  v102 = a4;
  v9 = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v114, 0, sizeof(v114));
  v12 = *(_QWORD *)(W32GetSessionState(v11) + 88);
  v110 = v12;
  WdLogSingleEntry3(5LL, v6);
  WdLogGlobalForLineNumber = 2077;
  if ( a4 && !a5 )
  {
    v22 = -1073741811;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(v12 + 3000) )
  {
    v62 = *(_QWORD *)(W32GetSessionState(v14) + 88);
    if ( (unsigned int)UserIsRemoteAndNotDisconnectConnection(v64, v63, v65, v66) )
    {
      if ( *(_QWORD *)(v62 + 3016) )
      {
        v67 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
        if ( PsGetCurrentProcess() != v67
          && !(unsigned int)UserIsCurrentProcessDwm()
          && (*((_DWORD *)v6 + 40) & 0x4000000) != 0 )
        {
          v68 = v114;
          v69 = 2LL;
          do
          {
            v68 += 64;
            v70 = *(_OWORD *)v6;
            v71 = *((_OWORD *)v6 + 1);
            v6 += 64;
            *((_OWORD *)v68 - 8) = v70;
            v72 = *((_OWORD *)v6 - 6);
            *((_OWORD *)v68 - 7) = v71;
            v73 = *((_OWORD *)v6 - 5);
            *((_OWORD *)v68 - 6) = v72;
            v74 = *((_OWORD *)v6 - 4);
            *((_OWORD *)v68 - 5) = v73;
            v75 = *((_OWORD *)v6 - 3);
            *((_OWORD *)v68 - 4) = v74;
            v76 = *((_OWORD *)v6 - 2);
            *((_OWORD *)v68 - 3) = v75;
            v77 = *((_OWORD *)v6 - 1);
            *((_OWORD *)v68 - 2) = v76;
            *((_OWORD *)v68 - 1) = v77;
            --v69;
          }
          while ( v69 );
          v78 = *((_OWORD *)v6 + 1);
          *(_OWORD *)v68 = *(_OWORD *)v6;
          v79 = *((_OWORD *)v6 + 2);
          v6 = v114;
          *((_OWORD *)v68 + 1) = v78;
          v106 = v114;
          *((_OWORD *)v68 + 2) = v79;
          StringCchCopyW(v114, 0x20uLL, (const unsigned __int16 *)(v12 + 3024));
          *(_DWORD *)&v114[80] &= ~0x4000000u;
        }
      }
    }
  }
  if ( (*((_DWORD *)v6 + 40) & 8) != 0 )
  {
    Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck();
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v44);
    v7 = 1;
  }
  v17 = W32GetUserSessionState(v14, v13, v15, v16) + 72016;
  v18 = *(_DWORD *)v17;
  if ( !*(_DWORD *)v17 )
    goto LABEL_6;
  if ( v18 != 1 )
  {
    if ( v18 == 2 )
    {
      if ( (*(_DWORD *)(v17 + 80) & 0x706D7447) != 0x706D7447 )
      {
LABEL_6:
        Pool2 = (WCHAR *)ExAllocatePool2(256LL, 512LL, 1886221383LL);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)(v17 + 112));
        goto LABEL_8;
      }
      v38 = (_DWORD *)(v17 + 48);
      for ( i = 0LL; ; ++i )
      {
        if ( i >= *(unsigned int *)(v17 + 84) )
          goto LABEL_6;
        if ( *v38 == 1886221383 )
          break;
        ++v38;
      }
      v9 = ExAllocatePool2(256LL, 528LL, 1886221383LL);
      if ( v9 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v17 + 128));
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( (unsigned __int64)(v9 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v17,
                                  v9,
                                  i,
                                  BackTrace) )
          {
            Pool2 = (WCHAR *)v9;
            goto LABEL_9;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v17,
                                     v9,
                                     i,
                                     BackTrace) )
        {
          Pool2 = (WCHAR *)(v9 + 16);
          goto LABEL_8;
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v17 + 136));
        _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>((PVOID)v9);
      }
    }
    v9 = 0LL;
    goto LABEL_16;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
          (NSInstrumentation::CLeakTrackingAllocator *)v17,
          0x706D7447u) )
    goto LABEL_16;
  v35 = (WCHAR *)ExAllocatePool2(256LL, 528LL, 1886221383LL);
  Pool2 = v35;
  if ( !v35
    || (_InterlockedIncrement64((volatile signed __int64 *)(v17 + 112)),
        *(_QWORD *)v35 = 1886221383LL,
        Pool2 = v35 + 8,
        v35 == (WCHAR *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *(NSInstrumentation::CPointerHashTable **)(v17 + 8),
      (const void *)0x706D7447);
  }
LABEL_8:
  v9 = (__int64)Pool2;
  if ( !Pool2 )
  {
LABEL_16:
    v22 = -1073741670;
    goto LABEL_17;
  }
LABEL_9:
  if ( (*((_DWORD *)v6 + 40) & 0x4000000) == 0 || v7 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\DeviceMap\\Video");
  }
  else
  {
    if ( (unsigned int)(a2 - 1) <= 1 )
    {
      v22 = -1073741766;
      goto LABEL_17;
    }
    DestinationString.Buffer = Pool2;
    *(_DWORD *)&DestinationString.Length = 33423360;
    RtlAppendUnicodeToString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Terminal Server\\Video\\");
    v37 = L"vgastub";
    if ( *(_QWORD *)(v12 + 2976) )
      v37 = *(const WCHAR **)(v12 + 2976);
    RtlAppendUnicodeToString(&DestinationString, v37);
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v22 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v22 < 0 )
  {
LABEL_126:
    WdLogSingleEntry1(5LL, v22);
    WdLogGlobalForLineNumber = 2622;
    goto LABEL_17;
  }
  v25 = W32GetUserSessionState(v21, v20, v23, v24) + 72016;
  v26 = *(_DWORD *)v25;
  if ( !*(_DWORD *)v25 )
    goto LABEL_13;
  if ( v26 != 1 )
  {
    if ( v26 == 2 )
    {
      if ( (*(_DWORD *)(v25 + 80) & 0x706D7447) != 0x706D7447 )
      {
LABEL_13:
        v92 = ExAllocatePool2(256LL, 1024LL, 1886221383LL);
        v27 = (WCHAR *)v92;
        if ( v92 )
          _InterlockedIncrement64((volatile signed __int64 *)(v25 + 112));
        goto LABEL_15;
      }
      v40 = (_DWORD *)(v25 + 48);
      for ( j = 0LL; ; ++j )
      {
        if ( j >= *(unsigned int *)(v25 + 84) )
          goto LABEL_13;
        if ( *v40 == 1886221383 )
          break;
        ++v40;
      }
      v8 = ExAllocatePool2(256LL, 1040LL, 1886221383LL);
      if ( v8 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v25 + 128));
        memset(v113, 0, sizeof(v113));
        RtlCaptureStackBackTrace(0, 0x14u, v113, 0LL);
        if ( (unsigned __int64)(v8 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v25,
                                  v8,
                                  j,
                                  v113) )
          {
            v27 = (WCHAR *)v8;
            v92 = v8;
            goto LABEL_28;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v25,
                                     v8,
                                     j,
                                     v113) )
        {
          v27 = (WCHAR *)(v8 + 16);
          v92 = v8 + 16;
          goto LABEL_15;
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v25 + 136));
        _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>((PVOID)v8);
      }
    }
    v8 = 0LL;
    goto LABEL_16;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
          (NSInstrumentation::CLeakTrackingAllocator *)v25,
          0x706D7447u) )
    goto LABEL_16;
  v36 = (WCHAR *)ExAllocatePool2(256LL, 1040LL, 1886221383LL);
  v92 = (__int64)v36;
  v27 = v36;
  if ( !v36
    || (_InterlockedIncrement64((volatile signed __int64 *)(v25 + 112)),
        v27 = v36 + 8,
        *(_QWORD *)v36 = 1886221383LL,
        v92 = (__int64)(v36 + 8),
        v36 == (WCHAR *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *(NSInstrumentation::CPointerHashTable **)(v25 + 8),
      (const void *)0x706D7447);
  }
LABEL_15:
  v8 = (__int64)v27;
  if ( !v27 )
    goto LABEL_16;
LABEL_28:
  if ( (*((_DWORD *)v6 + 40) & 0x4000000) == 0 || v7 )
    v29 = v6;
  else
    v29 = L"\\Device\\Video0";
  RtlInitUnicodeString(&DestinationString, v29);
  v22 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, v27, 0x200u, &ResultLength);
  if ( v22 < 0 )
    goto LABEL_126;
  v30 = (WCHAR *)((char *)v27 + *((unsigned int *)v27 + 2));
  CreateOptions = 0;
  Destination = 0LL;
  if ( a2 != 3 )
  {
    for ( k = *v30; *v30; k = *v30 )
      *v30++ = toupper(k);
    v105 = wcsstr((WCHAR *)((char *)v27 + *((unsigned int *)v27 + 2)), L"\\CONTROL\\");
    v32 = v105;
    if ( !v105 )
    {
      v32 = wcsstr((WCHAR *)((char *)v27 + *((unsigned int *)v27 + 2)), L"\\SERVICES");
      v105 = v32;
    }
    v33 = -1LL;
    if ( !v102 )
    {
LABEL_37:
      if ( v107 )
      {
        do
          ++v33;
        while ( v32[v33] );
        StringCchPrintfW(&v32[v33], 512 - ((unsigned int)(v32 - v27) >> 1) - (unsigned int)v33, L"\\Mon%08X", *v107);
      }
      *(_DWORD *)&Destination.Length = 33423360;
      Destination.Buffer = v27 + 256;
      RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\System\\CurrentControlSet");
      if ( (unsigned int)(a2 - 1) <= 1 )
      {
        if ( (*((_DWORD *)v6 + 40) & 0x800000) != 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"\\Control\\UnitedVideo");
          v34 = (unsigned __int8)RtlIsStateSeparationEnabled() != 0;
LABEL_40:
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &Destination;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          if ( a2 == 2 )
          {
            ObjectAttributes.SecurityDescriptor = *(PVOID *)(v110 + 1824);
            ObjectAttributes.SecurityQualityOfService = 0LL;
            v22 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, v34, 0LL);
            if ( v22 >= 0 )
            {
              while ( 1 )
              {
                v80 = wcschr(v32 + 1, 0x5Cu);
                v81 = v80;
                if ( v80 )
                  *v80 = 0;
                RtlAppendUnicodeToString(&Destination, v32);
                if ( Handle )
                  ZwClose(Handle);
                v22 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, v34, 0LL);
                if ( v22 < 0 )
                  break;
                if ( !v81 )
                  goto LABEL_17;
                v32 = v81;
                *v81 = 92;
              }
            }
            Handle = 0LL;
          }
          else
          {
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            RtlAppendUnicodeToString(&Destination, v32);
            v22 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
            if ( v22 >= 0 )
              goto LABEL_17;
            v22 = -1073741438;
          }
          goto LABEL_126;
        }
        RtlAppendUnicodeToString(&Destination, L"\\Hardware Profiles\\Current\\System\\CurrentControlSet");
      }
      v34 = CreateOptions;
      goto LABEL_40;
    }
    Str1 = v102;
    v45 = a5 - 1;
    if ( a5 - 1 > 0x1F )
      v45 = 31;
    v46 = *((unsigned int *)v27 + 2);
    v101 = v45;
    v103 = 0LL;
    v47 = (char *)v27 + v46;
    v48 = -1LL;
    do
      ++v48;
    while ( *(_WORD *)&v47[2 * v48] );
    v49 = 102;
    *(_QWORD *)v99 = (int)v48;
    v50 = 2LL * (int)v48 + 12;
    if ( v50 > 0x66 )
      v49 = v50;
    Length = v49;
    v51 = (unsigned __int16 *)PALLOCMEM((unsigned int)v49, 1936876615LL);
    v109 = v51;
    v52 = v51;
    if ( !v51 )
    {
LABEL_98:
      v6 = v106;
      *Str1 = 0;
      goto LABEL_37;
    }
    Size = v49;
    memset(v51, 0, v49);
    v53 = (unsigned __int64)v49 >> 1;
    StringCchCopyW(v52, v53, (WCHAR *)((char *)v27 + *((unsigned int *)v27 + 2)));
    v54 = &v52[*(_QWORD *)v99 - 1];
    if ( v54 <= v52 )
    {
LABEL_86:
      if ( *v54 != 92 )
      {
LABEL_97:
        GreDeleteFastMutex(v52);
        goto LABEL_98;
      }
    }
    else
    {
      while ( *v54 != 92 )
      {
        if ( --v54 <= v52 )
          goto LABEL_86;
      }
    }
    v55 = (char *)(v54 + 1);
    v56 = v53 - *(_QWORD *)v99;
    if ( v56 )
    {
      if ( v56 > 0x7FFFFFFF )
      {
        *(_WORD *)v55 = 0;
      }
      else
      {
        v57 = 2147483646 - v56;
        v58 = (char *)L"Video" - v55;
        do
        {
          if ( !(v56 + v57) )
            break;
          v59 = *(_WORD *)&v55[v58];
          if ( !v59 )
            break;
          *(_WORD *)v55 = v59;
          v55 += 2;
          --v56;
        }
        while ( v56 );
        v60 = v55 - 2;
        if ( v56 )
          v60 = v55;
        *(_WORD *)v60 = 0;
      }
    }
    RtlInitUnicodeString(&DestinationString, v52);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&v103, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v99[0] = 0;
      RtlInitUnicodeString(&DestinationString, L"Service");
      memset(v52, 0, Size);
      if ( ZwQueryValueKey(v103, &DestinationString, KeyValueFullInformation, v52, Length, v99) >= 0 )
      {
        v82 = (unsigned __int16 *)((char *)v52 + *((unsigned int *)v52 + 2));
        for ( m = *v82; *v82; m = *v82 )
          *v82++ = toupper(m);
        v84 = Str1;
        v85 = (unsigned __int16 *)((char *)v52 + *((unsigned int *)v52 + 2));
        v86 = v101;
        v87 = Str1;
        v88 = v101;
        while ( v86-- )
        {
          if ( !*v85 )
            break;
          *v84++ = *v85++;
          if ( v86 == v88 - 3 && !wcsnicmp(v87, L"VGA", 3uLL) )
            break;
        }
        v27 = (WCHAR *)v92;
        v33 = -1LL;
        v52 = v109;
        Str1 = v84;
        v32 = v105;
      }
      ZwClose(v103);
    }
    goto LABEL_97;
  }
  if ( v102 )
  {
    v61 = StringCchCopyNW(v102, a5, v30, 0x7FuLL);
    if ( (int)(v61 + 0x80000000) >= 0 && v61 != -2147024774 )
      v22 = -1073741811;
  }
LABEL_17:
  if ( v111 )
    *v111 = v22;
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( v9 )
    Win32FreePoolImpl((PVOID)v9);
  if ( v8 )
    Win32FreePoolImpl((PVOID)v8);
  WdLogSingleEntry1(5LL, v22);
  result = Handle;
  WdLogGlobalForLineNumber = 2646;
  return result;
}
