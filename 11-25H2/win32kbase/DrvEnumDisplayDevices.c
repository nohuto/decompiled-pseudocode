/*
 * XREFs of DrvEnumDisplayDevices @ 0x140047DF0
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x140047D40 (NtUserEnumDisplayDevices.c)
 * Callees:
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x14000C940 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D154 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14000EB2C (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x14001D340 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001EBA0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140048BCC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140048BE4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDere.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140048BFC (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140049CA4 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvGetDeviceFromName @ 0x14004A170 (DrvGetDeviceFromName.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x14004B800 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     PALLOCNOZ @ 0x14004B924 (PALLOCNOZ.c)
 *     UserIsRemoteAndNotDisconnectConnection @ 0x14004D190 (UserIsRemoteAndNotDisconnectConnection.c)
 *     UserIsCurrentProcessDwm @ 0x14004E260 (UserIsCurrentProcessDwm.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x14006C22C (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64_&_ @ 0x1400BF974 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e.c)
 *     DrvpGetDeviceInterfaceName @ 0x14011E7E8 (DrvpGetDeviceInterfaceName.c)
 *     ??1EnsureMonitorDevices@@QEAA@XZ @ 0x140120630 (--1EnsureMonitorDevices@@QEAA@XZ.c)
 *     ??$invoke@P6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@Z @ 0x14013654C (--$invoke@P6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1401567DC (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ABF4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ACBC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
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
  int v8; // r15d
  int v9; // r12d
  unsigned int v10; // r8d
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  struct _DEVICE_OBJECT *v16; // rax
  int v17; // r15d
  ULONG64 v18; // rcx
  unsigned int *v19; // rax
  SIZE_T v20; // rbx
  char *v21; // rsi
  _OWORD *v22; // r9
  const wchar_t *v23; // r8
  int PruneFlag; // eax
  ULONG v25; // r15d
  __int64 v26; // r14
  unsigned __int64 v27; // rbx
  int v28; // eax
  __int64 Pool2; // rbx
  NTSTATUS v30; // eax
  unsigned int v31; // r8d
  __int64 v32; // r14
  char *v33; // r15
  void *v34; // r14
  __int64 v36; // rcx
  int (__fastcall *v37)(char *, _QWORD, __int64 *, PDEVICE_OBJECT *); // rbx
  __int64 v38; // rax
  ULONG v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  void *v43; // r14
  NTSTATUS DeviceProperty; // eax
  int DeviceInterfaceName; // eax
  _QWORD *v46; // rax
  struct _DEVICE_OBJECT *v47; // rcx
  __int64 v48; // rbx
  int v49; // eax
  __int64 v50; // rbx
  bool v51; // zf
  unsigned int v52; // edx
  char v53; // r15
  PULONG ResultLength; // [rsp+20h] [rbp-2D8h]
  ULONG BufferLength; // [rsp+30h] [rbp-2C8h] BYREF
  _DWORD Length[3]; // [rsp+34h] [rbp-2C4h]
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-2B8h] BYREF
  PCUNICODE_STRING String1; // [rsp+48h] [rbp-2B0h]
  __int64 v59; // [rsp+50h] [rbp-2A8h] BYREF
  PDEVICE_OBJECT v60; // [rsp+58h] [rbp-2A0h] BYREF
  void *v61; // [rsp+60h] [rbp-298h]
  int v62; // [rsp+68h] [rbp-290h]
  int v63; // [rsp+6Ch] [rbp-28Ch]
  unsigned int v64; // [rsp+70h] [rbp-288h] BYREF
  PCUNICODE_STRING v65; // [rsp+78h] [rbp-280h] BYREF
  unsigned __int64 v66; // [rsp+80h] [rbp-278h] BYREF
  PVOID v67; // [rsp+88h] [rbp-270h] BYREF
  __int64 v68; // [rsp+90h] [rbp-268h] BYREF
  unsigned __int64 v69; // [rsp+98h] [rbp-260h] BYREF
  _BYTE v70[8]; // [rsp+A0h] [rbp-258h] BYREF
  unsigned int v71; // [rsp+A8h] [rbp-250h]
  PVOID P; // [rsp+B0h] [rbp-248h]
  PDEVICE_OBJECT v73; // [rsp+B8h] [rbp-240h] BYREF
  LONG_PTR (__stdcall *v74)(PVOID); // [rsp+C0h] [rbp-238h] BYREF
  __int64 v75; // [rsp+C8h] [rbp-230h] BYREF
  _QWORD v76[2]; // [rsp+D0h] [rbp-228h] BYREF
  _QWORD v77[2]; // [rsp+E0h] [rbp-218h] BYREF
  PVOID BackTrace[20]; // [rsp+F0h] [rbp-208h] BYREF
  __int128 v79; // [rsp+190h] [rbp-168h] BYREF
  int v80; // [rsp+1A0h] [rbp-158h]
  wchar_t PropertyBuffer[128]; // [rsp+1B0h] [rbp-148h] BYREF

  v61 = a4;
  Length[1] = a3;
  String1 = a1;
  v76[1] = a4;
  DeviceFromName = 0LL;
  Length[0] = 0;
  BufferLength = 0;
  DeviceObject = 0LL;
  v8 = 0;
  v62 = 0;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v59);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v60);
  v9 = 0;
  v63 = 0;
  v11 = v10;
  ResultLength = (PULONG)a5;
  WdLogSingleEntry4(4LL, a1, v10);
  WdLogGlobalForLineNumber = 11554;
  v15 = *(_QWORD *)(W32GetSessionState(v12) + 88);
  if ( !a1 )
  {
    DeviceFromName = *(_QWORD *)(v15 + 1096);
    if ( DeviceFromName )
    {
      do
      {
        if ( a6
          && ((*(_DWORD *)(DeviceFromName + 160) & 0x2000000) != 0
           || *(_WORD *)(W32GetUserSessionState(v14, v13) + 68752)
           && (v14 = *(unsigned __int16 *)(W32GetUserSessionState(v14, v13) + 68752),
               *(_WORD *)(DeviceFromName + 216) != (_WORD)v14)
           && (*(_DWORD *)(DeviceFromName + 160) & 0x4000008) == 0) )
        {
          --BufferLength;
        }
        else if ( BufferLength == Length[1] )
        {
          break;
        }
        DeviceFromName = *(_QWORD *)(DeviceFromName + 128);
        ++BufferLength;
      }
      while ( DeviceFromName );
      if ( DeviceFromName )
      {
        if ( *(_DWORD *)(v15 + 2920) )
        {
          v48 = *(_QWORD *)(W32GetSessionState(v14) + 88);
          if ( !(unsigned int)UserIsRemoteAndNotDisconnectConnection()
            || !*(_QWORD *)(v48 + 2936)
            || (v50 = *(_QWORD *)(W32GetUserGdiSessionState() + 40), PsGetCurrentProcess() == v50)
            || (v51 = (unsigned int)UserIsCurrentProcessDwm() == 0, v49 = 1, !v51) )
          {
            v49 = 0;
          }
          if ( v49 )
          {
            if ( (*(_BYTE *)(DeviceFromName + 160) & 8) == 0 )
              v8 = 1;
            v62 = v8;
          }
        }
        v16 = *(struct _DEVICE_OBJECT **)(DeviceFromName + 144);
        if ( !v16 || !*(_QWORD *)(DeviceFromName + 224) )
        {
          if ( !v8 )
          {
            v47 = *(struct _DEVICE_OBJECT **)(DeviceFromName + 136);
            if ( v47 )
            {
              v67 = 0LL;
              if ( (int)DrvForceChildDeviceReenumeration(v47, (struct _DEVICE_RELATIONS **)&v67) >= 0 )
              {
                DeviceObject = (PDEVICE_OBJECT)*((_QWORD *)v67 + 1);
                ExFreePoolWithTag(v67, 0);
                if ( v60 )
                {
                  v73 = v60;
                  v74 = ObfDereferenceObject;
                  wistd::invoke<__int64 (*)(void *),_FILE_OBJECT * &>(&v74, &v73);
                }
                v60 = DeviceObject;
              }
            }
            else
            {
              WdLogSingleEntry0(5LL);
              WdLogGlobalForLineNumber = 11635;
            }
            goto LABEL_13;
          }
          v16 = *(struct _DEVICE_OBJECT **)(v15 + 2936);
        }
        DeviceObject = v16;
LABEL_13:
        v17 = Length[1];
        goto LABEL_14;
      }
    }
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 11593;
LABEL_107:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v60);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(&v59);
    return 3221225473LL;
  }
  if ( a6 == 1 )
  {
    v65 = 0LL;
    if ( (int)DrvProbeAndCaptureString((struct _UNICODE_STRING *)String1, (struct AUTO_FREE_STRING *)&v65) >= 0 )
      DeviceFromName = DrvGetDeviceFromName(v65);
    if ( v65 )
      GreDeleteFastMutex((char *)v65);
  }
  else
  {
    DeviceFromName = DrvGetDeviceFromName(String1);
  }
  if ( !DeviceFromName )
    goto LABEL_107;
  v71 = 0;
  P = 0LL;
  EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice(
    (EnsureMonitorDevices *)v70,
    (struct tagGRAPHICS_DEVICE *)DeviceFromName);
  v17 = Length[1];
  if ( Length[1] >= v71 )
  {
LABEL_151:
    EnsureMonitorDevices::~EnsureMonitorDevices((EnsureMonitorDevices *)v70);
    goto LABEL_107;
  }
  v79 = 0LL;
  v80 = 0;
  LODWORD(v79) = 0;
  v36 = (*((_BYTE *)P + 20 * v11) & 1) != 0;
  LODWORD(v79) = (*((_BYTE *)P + 20 * v11) & 1) != 0;
  if ( (*((_DWORD *)P + 5 * v11) & 2) == 0 )
  {
    v36 = (unsigned int)v36 | 2;
    LODWORD(v79) = v36;
  }
  if ( *((int *)P + 5 * v11) >= 0 )
  {
    LODWORD(v36) = v36 | 0x80000000;
    LODWORD(v79) = v36;
  }
  if ( (*((_DWORD *)P + 5 * v11) & 0x40000000) == 0 )
  {
    v36 = (unsigned int)v36 | 0x40000000;
    LODWORD(v79) = v36;
  }
  DWORD1(v79) = *((_DWORD *)P + 5 * v11 + 1);
  *((_QWORD *)&v79 + 1) = *(_QWORD *)((char *)P + 20 * v11 + 8);
  LOBYTE(v80) = *((_BYTE *)P + 20 * v11 + 16);
  v37 = *(int (__fastcall **)(char *, _QWORD, __int64 *, PDEVICE_OBJECT *))(DxDdGetDxgkWin32kInterface(v36) + 456);
  if ( v59 )
  {
    v75 = v59;
    v76[0] = ObfDereferenceObject;
    wistd::invoke<__int64 (*)(void *),_FILE_OBJECT * &>(v76, &v75);
  }
  v59 = 0LL;
  if ( v37((char *)&v79 + 8, DWORD1(v79), &v59, &DeviceObject) < 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 11676;
    goto LABEL_151;
  }
  v63 = v79 & 0xFFFFFFF;
  if ( P )
    ExFreePoolWithTag(P, 0);
LABEL_14:
  *(_QWORD *)&Length[1] = 0LL;
  if ( a6 == 1 )
  {
    v18 = MmUserProbeAddress;
    v19 = (unsigned int *)v61;
    if ( (unsigned __int64)v61 >= MmUserProbeAddress )
      v19 = (unsigned int *)MmUserProbeAddress;
    v20 = *v19;
    if ( (unsigned int)v20 > 0x348 )
      v20 = 840LL;
    Length[0] = v20;
    if ( (_DWORD)v20 )
      v21 = (char *)Win32AllocPoolZInitImpl(0x100uLL, (unsigned int)v20, 0x73726447u);
    else
      v21 = 0LL;
    *(_QWORD *)&Length[1] = v21;
    if ( !v21 )
    {
      v9 = -1073741823;
      goto LABEL_61;
    }
  }
  else
  {
    v20 = 840LL;
    if ( *(_DWORD *)v61 < 0x348u )
      v20 = *(unsigned int *)v61;
    Length[0] = v20;
    v21 = (char *)v61;
    *(_QWORD *)&Length[1] = v61;
    memset(v61, 0, (unsigned int)v20);
  }
  if ( (unsigned int)v20 >= 4 )
    *(_DWORD *)v21 = 4;
  if ( (unsigned int)v20 >= 0x44 )
  {
    *(_DWORD *)v21 = 68;
    v22 = (_OWORD *)(DeviceFromName + 64);
    v18 = (ULONG64)(v21 + 4);
    if ( String1 )
    {
      LODWORD(ResultLength) = v17;
      swprintf_s((wchar_t *)v18, 0x20uLL, L"%ws\\Monitor%d", v22, ResultLength);
    }
    else
    {
      *(_OWORD *)v18 = *v22;
      *(_OWORD *)(v21 + 20) = *(_OWORD *)(DeviceFromName + 80);
      *(_OWORD *)(v21 + 36) = *(_OWORD *)(DeviceFromName + 96);
      *(_OWORD *)(v21 + 52) = *(_OWORD *)(DeviceFromName + 112);
    }
    *((_WORD *)v21 + 33) = 0;
  }
  if ( (unsigned int)v20 >= 0x144 )
  {
    *(_DWORD *)v21 = 324;
    *((_WORD *)v21 + 34) = 0;
    if ( String1 || v62 )
    {
      if ( DeviceObject )
      {
        v42 = 256LL;
        for ( BufferLength = 256; ; v42 = BufferLength )
        {
          v43 = (void *)PALLOCNOZ(v42, 1684301127LL);
          if ( !v43 )
          {
            v9 = -1073741670;
            goto LABEL_33;
          }
          DeviceProperty = IoGetDeviceProperty(
                             DeviceObject,
                             DevicePropertyDeviceDescription,
                             BufferLength,
                             v43,
                             &BufferLength);
          if ( DeviceProperty != -1073741789 )
            break;
          GreDeleteFastMutex((char *)v43);
        }
        if ( !DeviceProperty )
          wcsncpy_s((wchar_t *)v21 + 34, 0x80uLL, (const wchar_t *)v43, 0x7FuLL);
        GreDeleteFastMutex((char *)v43);
      }
    }
    else
    {
      v23 = *(const wchar_t **)(DeviceFromName + 208);
      if ( v23 )
        wcsncpy_s((wchar_t *)v21 + 34, 0x80uLL, v23, 0x7FuLL);
    }
LABEL_33:
    *((_WORD *)v21 + 161) = 0;
  }
  if ( (unsigned int)v20 >= 0x148 )
  {
    *(_DWORD *)v21 = 328;
    PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)DeviceFromName);
    v13 = *(unsigned int *)(DeviceFromName + 160);
    v18 = v13 | 0x80000;
    LODWORD(v13) = v13 & 0xFFF7FFFF;
    if ( !PruneFlag )
      v13 = (unsigned int)v18;
    *(_DWORD *)(DeviceFromName + 160) = v13;
    if ( String1 )
    {
      *((_DWORD *)v21 + 81) = v63;
    }
    else
    {
      v18 = (unsigned int)v13 & ((a5 & 2) != 0 ? 0xFFFFFFF : 254803967);
      *((_DWORD *)v21 + 81) = v18;
    }
  }
  if ( (unsigned int)v20 < 0x248 )
  {
    v32 = -1LL;
    goto LABEL_57;
  }
  *(_DWORD *)v21 = 584;
  *((_WORD *)v21 + 164) = 0;
  if ( (a5 & 1) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceInterfaceName = DrvpGetDeviceInterfaceName(DeviceObject);
      v9 = DeviceInterfaceName;
      if ( DeviceInterfaceName < 0 )
      {
        WdLogSingleEntry1(5LL, DeviceInterfaceName);
        WdLogGlobalForLineNumber = 11865;
        goto LABEL_61;
      }
    }
LABEL_123:
    v32 = -1LL;
    goto LABEL_56;
  }
  if ( !DeviceObject )
    goto LABEL_123;
  v25 = 256;
  for ( BufferLength = 256; ; v25 = BufferLength )
  {
    if ( v25 )
    {
      v26 = W32GetUserSessionState(v18, v13) + 72032;
      v64 = 1684301127;
      v68 = 256LL;
      v27 = v25;
      v69 = v25;
      v28 = *(_DWORD *)v26;
      if ( !*(_DWORD *)v26 )
      {
        Pool2 = ExAllocatePool2(258LL, v25, 1684301127LL);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)(v26 + 112));
        goto LABEL_47;
      }
      if ( v28 == 1 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
               (NSInstrumentation::CLeakTrackingAllocator *)v26,
               0x64646547u)
          && (unsigned __int64)v25 + 16 >= v25 )
        {
          v46 = (_QWORD *)ExAllocatePool2(v68 | 2, v25 + 16LL, v64);
          Pool2 = (__int64)v46;
          if ( !v46
            || (_InterlockedIncrement64((volatile signed __int64 *)(v26 + 112)),
                *v46 = 1684301127LL,
                Pool2 = (__int64)(v46 + 2),
                v46 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *(NSInstrumentation::CPointerHashTable **)(v26 + 8),
              0x64646547uLL);
          }
          goto LABEL_47;
        }
        goto LABEL_166;
      }
      if ( v28 == 2 )
      {
        v66 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                (NSInstrumentation::CLeakTrackingAllocator *)v26,
                0x64646547u,
                &v66) )
        {
          v77[0] = &v68;
          v77[1] = &v64;
          Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64___(
                    v26,
                    v77,
                    &v69);
LABEL_47:
          v25 = BufferLength;
          goto LABEL_48;
        }
        v53 = 0;
        if ( v27 < 0x1000 || (v27 & 0xFFF) != 0 )
        {
          v53 = 1;
          v27 += 16LL;
          v69 = v27;
        }
        Pool2 = ExAllocatePool2(258LL, v27, v52);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v26 + 128));
          memset(BackTrace, 0, sizeof(BackTrace));
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( v53 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v26,
                                    Pool2,
                                    v66,
                                    BackTrace) )
            {
              Pool2 += 16LL;
              goto LABEL_47;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v26,
                                       Pool2,
                                       v66,
                                       BackTrace) )
          {
            goto LABEL_47;
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v26 + 136));
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
      }
LABEL_166:
      Pool2 = 0LL;
      goto LABEL_47;
    }
    Pool2 = 0LL;
LABEL_48:
    if ( !Pool2 )
    {
      v9 = -1073741670;
      goto LABEL_105;
    }
    v30 = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, v25, (PVOID)Pool2, &BufferLength);
    if ( v30 != -1073741789 )
      break;
    GreDeleteFastMutex((char *)Pool2);
  }
  if ( v30 )
  {
    GreDeleteFastMutex((char *)Pool2);
LABEL_105:
    v32 = -1LL;
    goto LABEL_54;
  }
  v31 = 0;
  v32 = -1LL;
  if ( String1 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( *(_WORD *)(Pool2 + 2 * v40) );
    if ( BufferLength > 2 * (unsigned __int64)(unsigned int)(v40 + 2) )
      v31 = v40 + 1;
  }
  wcsncpy_s((wchar_t *)v21 + 164, 0x80uLL, (const wchar_t *)(Pool2 + 2LL * v31), 0x7FuLL);
  GreDeleteFastMutex((char *)Pool2);
LABEL_54:
  if ( String1 )
  {
    *((_WORD *)v21 + 291) = 0;
    v38 = -1LL;
    do
      ++v38;
    while ( *(_WORD *)&v21[2 * v38 + 328] );
    v39 = v38 + 1;
    BufferLength = v39;
    if ( v39 < 0x7E )
    {
      *(_WORD *)&v21[2 * v39 + 326] = 92;
      IoGetDeviceProperty(
        DeviceObject,
        DevicePropertyDriverKeyName,
        2 * (127 - BufferLength),
        &v21[2 * BufferLength + 328],
        &BufferLength);
    }
  }
  v20 = Length[0];
LABEL_56:
  *((_WORD *)v21 + 291) = 0;
LABEL_57:
  if ( (unsigned int)v20 >= 0x348 )
  {
    *(_DWORD *)v21 = 840;
    v33 = v21 + 584;
    *((_WORD *)v21 + 292) = 0;
    if ( String1 )
    {
      if ( IoGetDeviceProperty(DeviceObject, DevicePropertyDriverKeyName, 0xFEu, PropertyBuffer, &BufferLength) >= 0 )
      {
        wcscpy_s((wchar_t *)v21 + 292, 0x80uLL, L"\\Registry\\Machine\\System\\CurrentControlSet");
        v41 = -1LL;
        do
          ++v41;
        while ( *(_WORD *)&v33[2 * v41] );
        BufferLength = v41;
        wcsncpy_s(
          (wchar_t *)&v21[2 * (unsigned int)v41 + 584],
          128LL - (unsigned int)v41,
          L"\\Control\\Class\\",
          (unsigned int)(127 - v41));
        do
          ++v32;
        while ( *(_WORD *)&v33[2 * v32] );
        BufferLength = v32;
        wcsncpy_s(
          (wchar_t *)&v21[2 * (unsigned int)v32 + 584],
          128LL - (unsigned int)v32,
          PropertyBuffer,
          (unsigned int)(127 - v32));
      }
    }
    else
    {
      DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)DeviceFromName, 3, 0LL, (wchar_t *)v21 + 292, 0x80u, 0LL);
    }
    *((_WORD *)v21 + 419) = 0;
  }
LABEL_61:
  v34 = v61;
  if ( v21 != v61 )
  {
    if ( v21 )
    {
      ProbeForWrite(v61, v20, 4u);
      memmove(v34, v21, v20);
      GreDeleteFastMutex(v21);
    }
  }
  WdLogSingleEntry1(5LL, v9);
  WdLogGlobalForLineNumber = 11998;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v60);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(&v59);
  return (unsigned int)v9;
}
