/*
 * XREFs of DrvEnumDisplayDevices @ 0x140046490
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1400463F0 (NtUserEnumDisplayDevices.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14000C8F4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDere.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x14000E47C (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     DrvGetDeviceFromName @ 0x140028550 (DrvGetDeviceFromName.c)
 *     UserIsRemoteAndNotDisconnectConnection @ 0x140028F20 (UserIsRemoteAndNotDisconnectConnection.c)
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140029040 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x140040BF0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA?A_PPEAX@Z @ 0x1400431D0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA-A_PPEAX@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140047220 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14004725C (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140047270 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     UserIsCurrentProcessDwm @ 0x14006F430 (UserIsCurrentProcessDwm.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1400B5444 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400B6BAC (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??1EnsureMonitorDevices@@QEAA@XZ @ 0x14015DDBC (--1EnsureMonitorDevices@@QEAA@XZ.c)
 *     DrvpGetDeviceInterfaceName @ 0x14015E7A0 (DrvpGetDeviceInterfaceName.c)
 *     ??$invoke@P6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@Z @ 0x14016C27C (--$invoke@P6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@Z.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x14016D19C (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401B4ACC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x1402D21A0 (RtlReadULongFromUser.c)
 */

__int64 __fastcall DrvEnumDisplayDevices(
        const UNICODE_STRING *a1,
        __int64 a2,
        int a3,
        void *a4,
        unsigned int a5,
        int a6)
{
  __int64 DeviceFromName; // r13
  int v8; // r12d
  int v9; // r15d
  unsigned int v10; // r8d
  __int64 v11; // rbx
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  int v17; // r8d
  int v18; // ebx
  struct _DEVICE_OBJECT *v19; // rax
  unsigned int v20; // edx
  wchar_t *v21; // rcx
  unsigned int ULongFromUser; // esi
  const wchar_t *v23; // r8
  _DWORD *v24; // rbx
  _OWORD *v25; // r9
  int PruneFlag; // eax
  ULONG v27; // r12d
  __int64 v28; // r14
  unsigned __int64 v29; // rsi
  int v30; // eax
  __int64 v31; // rsi
  NTSTATUS v32; // eax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // r8d
  __int64 v37; // r14
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  _DWORD *v41; // rsi
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  int (__fastcall *v47)(char *, _QWORD, void **, PDEVICE_OBJECT *); // rbx
  __int64 v48; // rax
  ULONG v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  ULONG v55; // ecx
  void *v56; // rsi
  NTSTATUS DeviceProperty; // eax
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  int DeviceInterfaceName; // eax
  _QWORD *Pool2; // rax
  struct _DEVICE_OBJECT *v66; // rcx
  unsigned __int64 v67; // r12
  _DWORD *i; // rax
  PDEVICE_OBJECT v69; // rbx
  __int64 v70; // rbx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rbx
  PULONG ResultLength; // [rsp+20h] [rbp-1E8h]
  ULONG BufferLength; // [rsp+30h] [rbp-1D8h] BYREF
  char v78; // [rsp+34h] [rbp-1D4h]
  PVOID Buffer; // [rsp+38h] [rbp-1D0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-1C8h] BYREF
  void *v81; // [rsp+48h] [rbp-1C0h]
  size_t Size; // [rsp+50h] [rbp-1B8h]
  LONG_PTR (__stdcall *v83)(PVOID); // [rsp+58h] [rbp-1B0h] BYREF
  PCUNICODE_STRING String1; // [rsp+60h] [rbp-1A8h]
  void *v85; // [rsp+68h] [rbp-1A0h] BYREF
  LONG_PTR (__stdcall *v86)(PVOID); // [rsp+70h] [rbp-198h] BYREF
  void *v87; // [rsp+78h] [rbp-190h]
  __int64 v88; // [rsp+80h] [rbp-188h]
  _BYTE v89[8]; // [rsp+88h] [rbp-180h] BYREF
  unsigned int v90; // [rsp+90h] [rbp-178h]
  PVOID P; // [rsp+98h] [rbp-170h]
  __int128 v92; // [rsp+A0h] [rbp-168h] BYREF
  int v93; // [rsp+B0h] [rbp-158h]
  PVOID PropertyBuffer[32]; // [rsp+C0h] [rbp-148h] BYREF

  v87 = a4;
  LODWORD(v88) = a3;
  String1 = a1;
  v81 = a4;
  DeviceFromName = 0LL;
  LODWORD(Size) = 0;
  BufferLength = 0;
  DeviceObject = 0LL;
  v8 = 0;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v85);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v83);
  v9 = 0;
  LODWORD(v86) = 0;
  v11 = v10;
  WdLogSingleEntry4(4LL, a1, v10, v12, a5);
  WdLogGlobalForLineNumber = 11411;
  v16 = *(_QWORD *)(W32GetSessionState(v13) + 88);
  if ( a1 )
  {
    if ( a6 == 1 )
    {
      Buffer = 0LL;
      if ( (int)DrvProbeAndCaptureString((struct _UNICODE_STRING *)String1, (struct AUTO_FREE_STRING *)&Buffer) >= 0 )
        DeviceFromName = DrvGetDeviceFromName((PCUNICODE_STRING)Buffer);
      if ( Buffer )
        GreDeleteFastMutex((char *)Buffer, v52, v53, v54);
    }
    else
    {
      DeviceFromName = DrvGetDeviceFromName(String1);
    }
    if ( DeviceFromName )
    {
      v90 = 0;
      P = 0LL;
      EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice(
        (EnsureMonitorDevices *)v89,
        (struct tagGRAPHICS_DEVICE *)DeviceFromName);
      if ( (unsigned int)v88 < v90 )
      {
        v92 = 0LL;
        v93 = 0;
        LODWORD(v92) = 0;
        v46 = (*((_BYTE *)P + 20 * v11) & 1) != 0;
        LODWORD(v92) = (*((_BYTE *)P + 20 * v11) & 1) != 0;
        if ( (*((_DWORD *)P + 5 * v11) & 2) == 0 )
        {
          v46 = (unsigned int)v46 | 2;
          LODWORD(v92) = v46;
        }
        if ( *((int *)P + 5 * v11) >= 0 )
        {
          LODWORD(v46) = v46 | 0x80000000;
          LODWORD(v92) = v46;
        }
        if ( (*((_DWORD *)P + 5 * v11) & 0x40000000) == 0 )
        {
          v46 = (unsigned int)v46 | 0x40000000;
          LODWORD(v92) = v46;
        }
        DWORD1(v92) = *((_DWORD *)P + 5 * v11 + 1);
        *((_QWORD *)&v92 + 1) = *(_QWORD *)((char *)P + 20 * v11 + 8);
        LOBYTE(v93) = *((_BYTE *)P + 20 * v11 + 16);
        v47 = *(int (__fastcall **)(char *, _QWORD, void **, PDEVICE_OBJECT *))(DxDdGetDxgkWin32kInterface(v46, 5 * v11)
                                                                              + 456);
        if ( v85 )
        {
          Buffer = v85;
          v86 = ObfDereferenceObject;
          wistd::invoke<__int64 (*)(void *),_FILE_OBJECT * &>(&v86, &Buffer);
        }
        v85 = 0LL;
        if ( v47((char *)&v92 + 8, DWORD1(v92), &v85, &DeviceObject) >= 0 )
        {
          LODWORD(v86) = v92 & 0xFFFFFFF;
          if ( P )
            ExFreePoolWithTag(P, 0);
          goto LABEL_14;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 11533;
      }
      EnsureMonitorDevices::~EnsureMonitorDevices((EnsureMonitorDevices *)v89);
    }
LABEL_102:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v83);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(&v85);
    return 3221225473LL;
  }
  DeviceFromName = *(_QWORD *)(v16 + 1184);
  if ( !DeviceFromName )
    goto LABEL_101;
  v18 = v88;
  do
  {
    if ( a6
      && ((*(_DWORD *)(DeviceFromName + 160) & 0x2000000) != 0
       || *(_WORD *)(W32GetUserSessionState(v15, v14, v17) + 68744)
       && (v15 = *(unsigned __int16 *)(W32GetUserSessionState(v15, v14, v17) + 68744),
           *(_WORD *)(DeviceFromName + 216) != (_WORD)v15)
       && (*(_DWORD *)(DeviceFromName + 160) & 0x4000008) == 0) )
    {
      --BufferLength;
    }
    else if ( BufferLength == v18 )
    {
      break;
    }
    DeviceFromName = *(_QWORD *)(DeviceFromName + 128);
    ++BufferLength;
  }
  while ( DeviceFromName );
  if ( !DeviceFromName )
  {
LABEL_101:
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 11450;
    goto LABEL_102;
  }
  if ( *(_DWORD *)(v16 + 3000) )
  {
    v70 = *(_QWORD *)(W32GetSessionState(v15) + 88);
    if ( (unsigned int)UserIsRemoteAndNotDisconnectConnection(v72, v71, v73, v74) )
    {
      if ( *(_QWORD *)(v70 + 3016) )
      {
        v75 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
        if ( PsGetCurrentProcess() != v75
          && !(unsigned int)UserIsCurrentProcessDwm()
          && (*(_BYTE *)(DeviceFromName + 160) & 8) == 0 )
        {
          v8 = 1;
        }
      }
    }
  }
  v19 = *(struct _DEVICE_OBJECT **)(DeviceFromName + 144);
  if ( v19 && *(_QWORD *)(DeviceFromName + 224) )
    goto LABEL_13;
  if ( v8 )
  {
    v19 = *(struct _DEVICE_OBJECT **)(v16 + 3016);
LABEL_13:
    DeviceObject = v19;
    goto LABEL_14;
  }
  v66 = *(struct _DEVICE_OBJECT **)(DeviceFromName + 136);
  if ( v66 )
  {
    Buffer = 0LL;
    if ( (int)DrvForceChildDeviceReenumeration(v66, (struct _DEVICE_RELATIONS **)&Buffer) >= 0 )
    {
      DeviceObject = (PDEVICE_OBJECT)*((_QWORD *)Buffer + 1);
      ExFreePoolWithTag(Buffer, 0);
      v69 = DeviceObject;
      if ( v83 )
      {
        Buffer = v83;
        v83 = ObfDereferenceObject;
        wistd::invoke<__int64 (*)(void *),_FILE_OBJECT * &>(&v83, &Buffer);
      }
      v83 = (LONG_PTR (__stdcall *)(PVOID))v69;
    }
  }
  else
  {
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 11492;
  }
LABEL_14:
  Buffer = 0LL;
  if ( a6 == 1 )
  {
    ULongFromUser = RtlReadULongFromUser(v87, v14);
    LODWORD(Size) = ULongFromUser;
    if ( ULongFromUser > 0x348 )
      ULongFromUser = 840;
    LODWORD(v81) = ULongFromUser;
    LODWORD(Size) = ULongFromUser;
    if ( ULongFromUser )
      v24 = Win32AllocPoolZInitImpl(0x100uLL, ULongFromUser, 0x73726447u);
    else
      v24 = 0LL;
    Buffer = v24;
    if ( !v24 )
    {
      v9 = -1073741823;
      goto LABEL_58;
    }
  }
  else
  {
    ULongFromUser = 840;
    if ( *(_DWORD *)v87 < 0x348u )
      ULongFromUser = *(_DWORD *)v87;
    LODWORD(v81) = ULongFromUser;
    LODWORD(Size) = ULongFromUser;
    v24 = v87;
    Buffer = v87;
    memset(v87, 0, ULongFromUser);
  }
  if ( ULongFromUser >= 4 )
    *v24 = 4;
  if ( ULongFromUser >= 0x44 )
  {
    *v24 = 68;
    v25 = (_OWORD *)(DeviceFromName + 64);
    v21 = (wchar_t *)(v24 + 1);
    if ( String1 )
    {
      LODWORD(ResultLength) = v88;
      swprintf_s(v21, 0x20uLL, L"%ws\\Monitor%d", v25, ResultLength);
    }
    else
    {
      *(_OWORD *)v21 = *v25;
      *(_OWORD *)(v24 + 5) = *(_OWORD *)(DeviceFromName + 80);
      *(_OWORD *)(v24 + 9) = *(_OWORD *)(DeviceFromName + 96);
      *(_OWORD *)(v24 + 13) = *(_OWORD *)(DeviceFromName + 112);
    }
    *((_WORD *)v24 + 33) = 0;
  }
  if ( ULongFromUser >= 0x144 )
  {
    *v24 = 324;
    *((_WORD *)v24 + 34) = 0;
    if ( String1 || v8 )
    {
      if ( DeviceObject )
      {
        v55 = 256;
        for ( BufferLength = 256; ; v55 = BufferLength )
        {
          v56 = (void *)PALLOCNOZ(v55, 0x64646547u);
          if ( !v56 )
          {
            v9 = -1073741670;
            goto LABEL_124;
          }
          DeviceProperty = IoGetDeviceProperty(
                             DeviceObject,
                             DevicePropertyDeviceDescription,
                             BufferLength,
                             v56,
                             &BufferLength);
          if ( DeviceProperty != -1073741789 )
            break;
          GreDeleteFastMutex((char *)v56, v58, v59, v60);
        }
        if ( !DeviceProperty )
        {
          wcsncpy_s((wchar_t *)v24 + 34, 0x80uLL, (const wchar_t *)v56, 0x7FuLL);
          GreDeleteFastMutex((char *)v56, v61, v62, v63);
          ULongFromUser = (unsigned int)v81;
          goto LABEL_31;
        }
        GreDeleteFastMutex((char *)v56, v58, v59, v60);
LABEL_124:
        ULongFromUser = (unsigned int)v81;
      }
    }
    else
    {
      v23 = *(const wchar_t **)(DeviceFromName + 208);
      if ( v23 )
        wcsncpy_s((wchar_t *)v24 + 34, 0x80uLL, v23, 0x7FuLL);
    }
LABEL_31:
    *((_WORD *)v24 + 161) = 0;
  }
  if ( ULongFromUser >= 0x148 )
  {
    *v24 = 328;
    PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)DeviceFromName);
    LODWORD(v21) = *(_DWORD *)(DeviceFromName + 160) | 0x80000;
    v20 = *(_DWORD *)(DeviceFromName + 160) & 0xFFF7FFFF;
    if ( !PruneFlag )
      v20 = *(_DWORD *)(DeviceFromName + 160) | 0x80000;
    *(_DWORD *)(DeviceFromName + 160) = v20;
    if ( String1 )
    {
      v24[81] = (_DWORD)v86;
    }
    else
    {
      LODWORD(v21) = v20 & ((a5 & 2) != 0 ? 0xFFFFFFF : 254803967);
      v24[81] = (_DWORD)v21;
    }
  }
  if ( ULongFromUser < 0x248 )
  {
    v37 = -1LL;
    goto LABEL_54;
  }
  *v24 = 584;
  *((_WORD *)v24 + 164) = 0;
  if ( (a5 & 1) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceInterfaceName = DrvpGetDeviceInterfaceName(DeviceObject);
      v9 = DeviceInterfaceName;
      if ( DeviceInterfaceName < 0 )
      {
        WdLogSingleEntry1(5LL, DeviceInterfaceName);
        WdLogGlobalForLineNumber = 11722;
        goto LABEL_58;
      }
    }
LABEL_121:
    v37 = -1LL;
    goto LABEL_53;
  }
  if ( !DeviceObject )
    goto LABEL_121;
  v27 = 256;
  for ( BufferLength = 256; ; v27 = BufferLength )
  {
    if ( v27 )
    {
      v28 = W32GetUserSessionState((_DWORD)v21, v20, (_DWORD)v23) + 72016;
      LODWORD(v86) = 1684301127;
      v88 = 256LL;
      v29 = v27;
      v30 = *(_DWORD *)v28;
      if ( !*(_DWORD *)v28 )
        goto LABEL_43;
      if ( v30 == 1 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
               (NSInstrumentation::CLeakTrackingAllocator *)v28,
               0x64646547u)
          && (unsigned __int64)v27 + 16 >= v27 )
        {
          Pool2 = (_QWORD *)ExAllocatePool2(v88 | 2, v27 + 16LL, (unsigned int)v86);
          v31 = (__int64)Pool2;
          if ( !Pool2
            || (_InterlockedIncrement64((volatile signed __int64 *)(v28 + 112)),
                *Pool2 = 1684301127LL,
                v31 = (__int64)(Pool2 + 2),
                Pool2 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *(NSInstrumentation::CPointerHashTable **)(v28 + 8),
              (const void *)0x64646547);
          }
          goto LABEL_45;
        }
      }
      else if ( v30 == 2 )
      {
        if ( (*(_DWORD *)(v28 + 80) & 0x64646547) != 0x64646547 )
        {
LABEL_43:
          v31 = ExAllocatePool2(258LL, v29, 1684301127LL);
          if ( v31 )
            _InterlockedIncrement64((volatile signed __int64 *)(v28 + 112));
          goto LABEL_45;
        }
        v67 = 0LL;
        for ( i = (_DWORD *)(v28 + 48); ; ++i )
        {
          if ( v67 >= *(unsigned int *)(v28 + 84) )
            goto LABEL_43;
          if ( *i == 1684301127 )
            break;
          ++v67;
        }
        v78 = 0;
        if ( v29 < 0x1000 || (v29 & 0xFFF) != 0 )
        {
          v78 = 1;
          v29 += 16LL;
        }
        v31 = ExAllocatePool2(258LL, v29, 1684301127LL);
        if ( v31 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v28 + 128));
          memset(PropertyBuffer, 0, 0xA0uLL);
          RtlCaptureStackBackTrace(0, 0x14u, PropertyBuffer, 0LL);
          if ( !v78 || (unsigned __int64)(v31 & 0xFFF) + 16 >= 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                    v28,
                                    v31,
                                    v67,
                                    PropertyBuffer) )
              goto LABEL_45;
LABEL_148:
            _InterlockedIncrement64((volatile signed __int64 *)(v28 + 136));
            _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>((PVOID)v31);
            goto LABEL_149;
          }
          if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                   v28,
                                   v31,
                                   v67,
                                   PropertyBuffer) )
            goto LABEL_148;
          v31 += 16LL;
          goto LABEL_45;
        }
      }
LABEL_149:
      v31 = 0LL;
LABEL_45:
      v27 = BufferLength;
      goto LABEL_46;
    }
    v31 = 0LL;
LABEL_46:
    if ( !v31 )
    {
      v9 = -1073741670;
      goto LABEL_106;
    }
    v32 = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, v27, (PVOID)v31, &BufferLength);
    if ( v32 != -1073741789 )
      break;
    GreDeleteFastMutex((char *)v31, v33, v34, v35);
  }
  if ( v32 )
  {
    GreDeleteFastMutex((char *)v31, v33, v34, v35);
LABEL_106:
    v37 = -1LL;
    goto LABEL_51;
  }
  v36 = 0;
  v37 = -1LL;
  if ( String1 )
  {
    v50 = -1LL;
    do
      ++v50;
    while ( *(_WORD *)(v31 + 2 * v50) );
    if ( BufferLength > 2 * (unsigned __int64)(unsigned int)(v50 + 2) )
      v36 = v50 + 1;
  }
  wcsncpy_s((wchar_t *)v24 + 164, 0x80uLL, (const wchar_t *)(v31 + 2LL * v36), 0x7FuLL);
  GreDeleteFastMutex((char *)v31, v38, v39, v40);
LABEL_51:
  if ( String1 )
  {
    *((_WORD *)v24 + 291) = 0;
    v48 = -1LL;
    do
      ++v48;
    while ( *((_WORD *)v24 + v48 + 164) );
    v49 = v48 + 1;
    BufferLength = v49;
    if ( v49 < 0x7E )
    {
      *((_WORD *)v24 + v49 + 163) = 92;
      IoGetDeviceProperty(
        DeviceObject,
        DevicePropertyDriverKeyName,
        2 * (127 - BufferLength),
        (char *)v24 + 2 * BufferLength + 328,
        &BufferLength);
    }
  }
  ULongFromUser = (unsigned int)v81;
LABEL_53:
  *((_WORD *)v24 + 291) = 0;
LABEL_54:
  if ( ULongFromUser >= 0x348 )
  {
    *v24 = 840;
    v41 = v24 + 146;
    *((_WORD *)v24 + 292) = 0;
    if ( String1 )
    {
      if ( IoGetDeviceProperty(DeviceObject, DevicePropertyDriverKeyName, 0xFEu, PropertyBuffer, &BufferLength) >= 0 )
      {
        wcscpy_s((wchar_t *)v24 + 292, 0x80uLL, L"\\Registry\\Machine\\System\\CurrentControlSet");
        v51 = -1LL;
        do
          ++v51;
        while ( *((_WORD *)v41 + v51) );
        BufferLength = v51;
        wcsncpy_s(
          (wchar_t *)v24 + (unsigned int)v51 + 292,
          128LL - (unsigned int)v51,
          L"\\Control\\Class\\",
          (unsigned int)(127 - v51));
        do
          ++v37;
        while ( *((_WORD *)v41 + v37) );
        BufferLength = v37;
        wcsncpy_s(
          (wchar_t *)v24 + (unsigned int)v37 + 292,
          128LL - (unsigned int)v37,
          (const wchar_t *)PropertyBuffer,
          (unsigned int)(127 - v37));
      }
    }
    else
    {
      DrvGetRegistryHandleFromDeviceMap(
        (unsigned __int16 *)DeviceFromName,
        3,
        0LL,
        (unsigned __int16 *)v24 + 292,
        0x80u,
        0LL);
    }
    *((_WORD *)v24 + 419) = 0;
    ULongFromUser = (unsigned int)v81;
  }
LABEL_58:
  if ( v24 != v87 )
  {
    if ( v24 )
    {
      RtlCopyToUser(v87, v24, ULongFromUser);
      GreDeleteFastMutex((char *)v24, v43, v44, v45);
    }
  }
  WdLogSingleEntry1(5LL, v9);
  WdLogGlobalForLineNumber = 11854;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v83);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(&v85);
  return (unsigned int)v9;
}
