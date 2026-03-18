/*
 * XREFs of DpiFdoStartAdapterThreadImpl @ 0x14024809C
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x140247F90 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DxgkCompletePnPTransition @ 0x140204E64 (DxgkCompletePnPTransition.c)
 *     DxgkStartPnPTransition @ 0x14020531C (DxgkStartPnPTransition.c)
 *     DpiFdoStartNonLdaAdapter @ 0x140248970 (DpiFdoStartNonLdaAdapter.c)
 *     DpiDisableMsBddFallbackDriver @ 0x14024B0EC (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x14024B32C (DpiEnableMsBddFallbackDriver.c)
 *     DpiPnpEnableVga @ 0x14024BC74 (DpiPnpEnableVga.c)
 *     DpiPnpNotifyGdi @ 0x14024BD94 (DpiPnpNotifyGdi.c)
 *     DpiIndirectFindDeviceFromInstanceId @ 0x140250698 (DpiIndirectFindDeviceFromInstanceId.c)
 *     DpiLdaStartAdapterInChain @ 0x140254BB0 (DpiLdaStartAdapterInChain.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x140402768 (DpiAcquirePostDisplayInfoFromBgfx.c)
 */

__int64 __fastcall DpiFdoStartAdapterThreadImpl(_DWORD *a1, char a2, char *a3)
{
  char v4; // r15
  NTSTATUS DeviceFromInstanceId; // esi
  _DWORD *v7; // rdi
  char v8; // al
  bool v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rbx
  ULONG TimeIncrement; // eax
  __int64 v13; // r15
  NTSTATUS v14; // eax
  __int64 v15; // rbx
  ULONG v16; // eax
  __int64 v17; // rdx
  char *started; // r12
  __int64 v19; // rdx
  unsigned int v20; // r15d
  __int64 v21; // rdi
  char v22; // cl
  char v23; // al
  __int64 v24; // rbx
  __int64 v25; // rcx
  int v26; // edx
  struct _DEVICE_OBJECT *v27; // rcx
  int v28; // eax
  bool v29; // al
  bool v30; // cl
  struct _DEVICE_OBJECT *v31; // rcx
  __int64 v32; // rdi
  __int64 *v33; // rbx
  int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rcx
  int Timeout; // [rsp+20h] [rbp-A9h]
  int Timeouta; // [rsp+20h] [rbp-A9h]
  __int64 v40; // [rsp+28h] [rbp-A1h]
  char v41; // [rsp+40h] [rbp-89h]
  char v43; // [rsp+42h] [rbp-87h]
  char v44; // [rsp+43h] [rbp-86h]
  char v45; // [rsp+44h] [rbp-85h]
  char v46; // [rsp+45h] [rbp-84h]
  bool v47; // [rsp+48h] [rbp-81h]
  struct _GUID *v48; // [rsp+50h] [rbp-79h]
  _DWORD *v49; // [rsp+60h] [rbp-69h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v51[2]; // [rsp+70h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-49h] BYREF
  union _LARGE_INTEGER v53; // [rsp+90h] [rbp-39h] BYREF
  int v54; // [rsp+98h] [rbp-31h]
  _DWORD v55[2]; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v56; // [rsp+A8h] [rbp-21h]
  __int128 v57; // [rsp+B0h] [rbp-19h]
  __int64 v58; // [rsp+C0h] [rbp-9h]
  __int64 v59; // [rsp+C8h] [rbp-1h]
  int v60; // [rsp+D0h] [rbp+7h]
  int v61; // [rsp+D4h] [rbp+Bh]
  __int64 v62; // [rsp+D8h] [rbp+Fh]

  v4 = a2;
  LOBYTE(v51[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v51, 0LL, 7u, 0);
  DeviceFromInstanceId = 0;
  v7 = 0LL;
  v48 = (struct _GUID *)v51[1];
  v8 = 0;
  v41 = 0;
  v49 = 0LL;
  v44 = 0;
  v43 = 0;
  v45 = 0;
  v46 = *a3;
  if ( !a1 )
  {
    v9 = 1;
LABEL_6:
    v47 = v9;
    goto LABEL_7;
  }
  v7 = a1;
  v49 = a1;
  v9 = (*a1 & 2) != 0;
  v47 = v9;
  if ( (*a1 & 4) == 0 )
  {
    v8 = 0;
    v41 = 0;
    goto LABEL_6;
  }
  v8 = 1;
  v41 = 1;
LABEL_7:
  if ( byte_140168DDB )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 17206;
    goto LABEL_105;
  }
  if ( v8 )
  {
    DeviceFromInstanceId = KeWaitForSingleObject(&stru_140169428, Executive, 0, 0, 0LL);
    if ( DeviceFromInstanceId < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 17246;
      goto LABEL_105;
    }
    *((_WORD *)v7 + 261) = 0;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)v7 + 2);
    DeviceFromInstanceId = DpiIndirectFindDeviceFromInstanceId(&DestinationString);
    if ( DeviceFromInstanceId < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 17264;
      goto LABEL_105;
    }
    v10 = MEMORY[0x40];
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(MEMORY[0x40] + 152LL), PowerRelations);
    v11 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    v53.QuadPart = -600000000LL;
    v13 = v11 * TimeIncrement;
    v14 = KeWaitForSingleObject((PVOID)(v10 + 1288), Executive, 0, 0, &v53);
    DeviceFromInstanceId = v14;
    if ( v14 == 258 )
    {
      v60 = 129;
      v56 = 0LL;
      v62 = 60000LL;
      v61 = 0;
    }
    else
    {
      if ( v14 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 17317;
        goto LABEL_105;
      }
      v15 = MEMORY[0xFFFFF78000000320];
      v16 = KeQueryTimeIncrement();
      v56 = 0LL;
      v60 = 128;
      v61 = 0;
      v62 = (unsigned int)((v15 * (unsigned __int64)v16 - v13) / 0x2710);
    }
    v58 = 0LL;
    v55[1] = 64;
    v55[0] = 6;
    v57 = 0LL;
    v59 = 0LL;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v55, 0x100000000uLL);
    v4 = a2;
  }
  started = DxgkStartPnPTransition(v48, 0LL, (!v9 + 2LL) << 32, 0LL);
  if ( !started )
  {
    DeviceFromInstanceId = -1073741670;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 17335;
    goto LABEL_105;
  }
  if ( v9 )
  {
    _InterlockedCompareExchange(&dword_1401691D0, 5, 4);
    LOBYTE(v17) = 1;
    DpiPnpEnableVga(0LL, v17, 0LL, v48);
  }
  AcquireMiniportListMutex();
  if ( !qword_140169078 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 17379;
  }
  if ( v4 )
  {
    byte_140168E22 = 1;
    LOBYTE(v19) = 1;
    DpiAcquirePostDisplayInfoFromBgfx(&xmmword_140169088, v19);
    dword_14016921C = 1;
    *((_OWORD *)&DpGlobals + 55) = *(_OWORD *)((char *)&DpGlobals + 712);
    *((_OWORD *)&DpGlobals + 56) = *(_OWORD *)((char *)&DpGlobals + 728);
    *((_OWORD *)&DpGlobals + 57) = *(_OWORD *)((char *)&DpGlobals + 744);
    *((_OWORD *)&DpGlobals + 58) = *(_OWORD *)((char *)&DpGlobals + 760);
    *((_OWORD *)&DpGlobals + 59) = *(_OWORD *)((char *)&DpGlobals + 776);
    *((_OWORD *)&DpGlobals + 60) = *(_OWORD *)((char *)&DpGlobals + 792);
    *((_OWORD *)&DpGlobals + 61) = *(_OWORD *)((char *)&DpGlobals + 808);
    *((_OWORD *)&DpGlobals + 62) = *(_OWORD *)((char *)&DpGlobals + 824);
    *((_OWORD *)&DpGlobals + 63) = *(_OWORD *)((char *)&DpGlobals + 840);
    *((_OWORD *)&DpGlobals + 64) = *(_OWORD *)((char *)&DpGlobals + 856);
    if ( qword_140169078 )
      (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)(qword_140169078 + 64) + 976LL))(
        *(_QWORD *)(*(_QWORD *)(qword_140169078 + 64) + 48LL),
        &xmmword_140169130);
    dword_1401691D0 = 1;
    v20 = 0;
  }
  else
  {
    if ( v9 && (unsigned int)(dword_1401691D0 - 4) <= 1 )
      DpiDisableMsBddFallbackDriver(v48);
    v20 = 1;
  }
  do
  {
    v21 = qword_140168E08;
    if ( *(_QWORD *)v21 != v21 )
    {
      v22 = v41;
      do
      {
        v23 = *(_BYTE *)(v21 + 134);
        if ( v22 )
        {
          if ( v23 )
            goto LABEL_40;
        }
        else if ( !v23 )
        {
LABEL_40:
          KeWaitForSingleObject((PVOID)(v21 + 72), Executive, 0, 0, 0LL);
          v24 = *(_QWORD *)(v21 + 56);
          if ( *(_QWORD *)v24 != v24 )
          {
            do
            {
              if ( *(_DWORD *)(v24 + 16) != 1953656900 || *(_DWORD *)(v24 + 20) != 4 )
              {
                KeEnterCriticalRegion();
                if ( *(_BYTE *)(v24 + 484) )
                  DpiCheckForOutstandingD3Requests(v24);
                ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v24 + 168), 1u);
                if ( (v20 || *(_BYTE *)(*(_QWORD *)(v24 + 168) + 108LL))
                  && *(_DWORD *)(v24 + 236) == 1
                  && !*(_BYTE *)(v24 + 232) )
                {
                  if ( !*(_BYTE *)(v24 + 481) || v46 )
                  {
                    v25 = 0LL;
                    v53.QuadPart = 0LL;
                    v26 = 0;
                    v54 = 0;
                    if ( v49 && v49[131] )
                    {
                      v25 = (__int64)(v49 + 132);
                      v26 = v49[131];
                    }
                    v40 = v25;
                    v27 = *(struct _DEVICE_OBJECT **)(v24 + 24);
                    Timeouta = v26;
                    LOBYTE(v26) = a2;
                    if ( *(_DWORD *)(v24 + 504) )
                      v28 = DpiLdaStartAdapterInChain(
                              (_DWORD)v27,
                              v26,
                              (_DWORD)started,
                              (_DWORD)v48,
                              Timeouta,
                              v40,
                              (__int64)&v53);
                    else
                      v28 = DpiFdoStartNonLdaAdapter(v27, Timeouta, v40, (__int64)&v53);
                    DeviceFromInstanceId = v28;
                    if ( v28 != 1075708986 )
                    {
                      if ( v28 < 0 )
                      {
                        v31 = *(struct _DEVICE_OBJECT **)(v24 + 152);
                        *(_BYTE *)(v24 + 232) = 1;
                        IoInvalidateDeviceState(v31);
                      }
                      else
                      {
                        v29 = (v53.LowPart & 1) != 0 || (_BYTE)word_140168DDD && (v53.LowPart & 0x40) != 0;
                        v44 |= v29;
                        v30 = (v53.LowPart & 2) != 0 && (v53.LowPart & 0x2000) == 0;
                        v43 |= v30;
                        v45 |= (v53.LowPart & 0x4000) != 0;
                      }
                    }
                  }
                  else
                  {
                    *a3 = 1;
                  }
                }
                if ( *(_BYTE *)(v24 + 484) )
                  DpiEnableD3Requests(*(_QWORD *)(v24 + 24));
                ExReleaseResourceLite(*(PERESOURCE *)(v24 + 168));
                KeLeaveCriticalRegion();
              }
              v24 = *(_QWORD *)v24;
            }
            while ( *(_QWORD *)v24 != *(_QWORD *)(v21 + 56) );
          }
          KeReleaseMutex((PRKMUTEX)(v21 + 72), 0);
          v22 = v41;
        }
        v21 = *(_QWORD *)v21;
      }
      while ( *(_QWORD *)v21 != qword_140168E08 );
    }
    ++v20;
  }
  while ( v20 < 2 );
  if ( v47 && (unsigned int)(dword_1401691D0 - 1) <= 1 )
    DpiEnableMsBddFallbackDriver(started, v48);
  if ( v43 )
  {
    v32 = qword_140168E08;
    if ( *(_QWORD *)v32 != v32 )
    {
      do
      {
        if ( *(_BYTE *)(v32 + 133) )
        {
          KeWaitForSingleObject((PVOID)(v32 + 72), Executive, 0, 0, 0LL);
          v33 = *(__int64 **)(v32 + 56);
          if ( (__int64 *)*v33 != v33 )
          {
            do
            {
              KeEnterCriticalRegion();
              if ( *((_BYTE *)v33 + 484) )
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v33[3] + 64) + 4232LL));
              ExAcquireResourceSharedLite((PERESOURCE)v33[21], 1u);
              if ( *((_DWORD *)v33 + 4) == 1953656900 && *((_DWORD *)v33 + 5) == 2 )
              {
                v34 = *((_DWORD *)v33 + 59);
                if ( v34 == 2 || *((_DWORD *)v33 + 60) == 2 && ((v34 - 3) & 0xFFFFFFFC) == 0 && v34 != 4 )
                  IoInvalidateDeviceRelations((PDEVICE_OBJECT)v33[19], PowerRelations);
              }
              if ( *((_BYTE *)v33 + 484) )
                DpiEnableD3Requests(v33[3]);
              ExReleaseResourceLite((PERESOURCE)v33[21]);
              KeLeaveCriticalRegion();
              v33 = (__int64 *)*v33;
            }
            while ( *v33 != *(_QWORD *)(v32 + 56) );
          }
          KeReleaseMutex((PRKMUTEX)(v32 + 72), 0);
        }
        v32 = *(_QWORD *)v32;
      }
      while ( *(_QWORD *)v32 != qword_140168E08 );
    }
  }
  ReleaseMiniportListMutex();
  if ( v44 || v45 )
  {
    LOBYTE(v35) = 1;
    LOBYTE(Timeout) = v41;
    DpiPnpNotifyGdi(0LL, v35, started, 0x100000000LL, Timeout, v48);
  }
  else if ( v47 )
  {
    LOBYTE(v35) = 1;
    LOBYTE(v36) = 1;
    DpiPnpEnableVga(v36, v35, started, v48);
  }
  else
  {
    DxgkCompletePnPTransition((struct _PNP_TRANS_TOKEN *)started);
  }
LABEL_105:
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v51);
  return (unsigned int)DeviceFromInstanceId;
}
