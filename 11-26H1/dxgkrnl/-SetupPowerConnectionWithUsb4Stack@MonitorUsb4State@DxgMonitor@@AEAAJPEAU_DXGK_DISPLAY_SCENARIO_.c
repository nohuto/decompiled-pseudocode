/*
 * XREFs of ?SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402789DC
 * Callers:
 *     ?OnInitialized@MonitorUsb4State@DxgMonitor@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402782E8 (-OnInitialized@MonitorUsb4State@DxgMonitor@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_Usb4TargetDeviceChangeNotification@MonitorUsb4State@DxgMonitor@@CAJPEAX0@Z @ 0x140279890 (-_Usb4TargetDeviceChangeNotification@MonitorUsb4State@DxgMonitor@@CAJPEAX0@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140064CAC (--1-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@detail.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140064FF4 (-reset@-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140069DF4 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x14006A7FC (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 *     DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___ @ 0x14006E5C8 (DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___.c)
 *     _DXGKCALLONEXIT__lambda_2fbe1e6675968e3c1c931614a5d80f9c____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140098A74 (_DXGKCALLONEXIT__lambda_2fbe1e6675968e3c1c931614a5d80f9c____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     _lambda_2fbe1e6675968e3c1c931614a5d80f9c_::_lambda_2fbe1e6675968e3c1c931614a5d80f9c_ @ 0x14019689C (_lambda_2fbe1e6675968e3c1c931614a5d80f9c_--_lambda_2fbe1e6675968e3c1c931614a5d80f9c_.c)
 *     ?AddUsb4HRPowerRef@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAAJU_LUID@@I@Z @ 0x140277BE4 (-AddUsb4HRPowerRef@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAAJU_LUID@@I@Z.c)
 *     ?OnInitialized@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAA?AW4SetupFailureStage@2@PEAU_DEVICE_OBJECT@@@Z @ 0x1402783F0 (-OnInitialized@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAA-AW4SetupFailureStage@2@PEAU_DEVICE_OBJEC.c)
 */

__int64 __fastcall DxgMonitor::MonitorUsb4State::SetupPowerConnectionWithUsb4Stack(
        _QWORD *Context,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int128 *v4; // rax
  __int128 v5; // xmm1
  unsigned __int16 v6; // di
  unsigned __int64 v7; // rax
  wchar_t *v8; // rax
  __int64 v9; // rcx
  wchar_t *v10; // rbx
  int v11; // edi
  _QWORD *v12; // rax
  unsigned int v13; // edi
  __int64 v14; // rcx
  DxgMonitor::Usb4HostRouterPoFxRefv2 *v15; // r14
  unsigned int v16; // edi
  struct _LUID *v17; // rax
  int v18; // edi
  _QWORD *v19; // rax
  const WCHAR *v20; // rdx
  PDRIVER_NOTIFICATION_CALLBACK_ROUTINE CallbackRoutine; // [rsp+20h] [rbp-E0h]
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  int appended; // [rsp+44h] [rbp-BCh] BYREF
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+50h] [rbp-B0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v27[8]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v28[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v29[40]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v30[5]; // [rsp+B8h] [rbp-48h] BYREF
  WCHAR Source[32]; // [rsp+E0h] [rbp-20h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v32; // [rsp+168h] [rbp+68h] BYREF

  v32 = a2;
  if ( !*((_BYTE *)Context + 8) )
    return 0LL;
  v22 = 0;
  FileObject = 0LL;
  appended = 0;
  v4 = (__int128 *)lambda_2fbe1e6675968e3c1c931614a5d80f9c_::_lambda_2fbe1e6675968e3c1c931614a5d80f9c_(
                     v30,
                     (__int64)&v32,
                     (__int64)&appended,
                     (__int64)&v22,
                     (__int64)Context);
  v5 = v4[1];
  v28[0] = *v4;
  v28[1] = v5;
  DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e_((__int64)v29, v28);
  v6 = *((_WORD *)Context + 20) + 64;
  v7 = 2 * ((unsigned __int64)v6 >> 1);
  if ( !is_mul_ok((unsigned __int64)v6 >> 1, 2uLL) )
    v7 = -1LL;
  v8 = (wchar_t *)operator new[](v7, 0x4D677844u, 256LL);
  v9 = *Context;
  v10 = v8;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = v8;
  Destination.MaximumLength = v6;
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v12 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*Context + 8LL))(*Context, v27);
  LODWORD(CallbackRoutine) = v11;
  appended = RtlStringCchPrintfW(Source, 32LL, L"GFX-%016llx:%08x", *v12, CallbackRoutine);
  v13 = appended;
  if ( appended < 0 )
  {
    v22 = 4;
    goto LABEL_35;
  }
  appended = RtlAppendUnicodeToString(&Destination, (PCWSTR)Context[6]);
  v13 = appended;
  if ( appended < 0 )
  {
    v22 = 5;
    goto LABEL_35;
  }
  appended = RtlAppendUnicodeToString(&Destination, Source);
  v13 = appended;
  if ( appended < 0 )
  {
    v22 = 6;
    goto LABEL_35;
  }
  DeviceObject = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    (DxgkCompositionObject **)&FileObject,
    0LL);
  appended = IoGetDeviceObjectPointer(&Destination, 0x80000000, &FileObject, &DeviceObject);
  v13 = appended;
  if ( appended < 0 )
  {
    v22 = 7;
    goto LABEL_35;
  }
  v14 = Context[10];
  if ( !v14 )
  {
    v22 = 17;
    goto LABEL_34;
  }
  v22 = DxgMonitor::Usb4HostRouterPoFxRefv2::OnInitialized(v14, DeviceObject);
  if ( v22 != 1 )
  {
LABEL_34:
    v13 = -1073741823;
    appended = -1073741823;
    goto LABEL_35;
  }
  v15 = (DxgMonitor::Usb4HostRouterPoFxRefv2 *)Context[10];
  if ( !v15 )
  {
    v13 = -1073741823;
    appended = -1073741823;
    goto LABEL_32;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*Context + 16LL))(*Context);
  v17 = (struct _LUID *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*Context + 8LL))(*Context, v27);
  appended = DxgMonitor::Usb4HostRouterPoFxRefv2::AddUsb4HRPowerRef(v15, *v17, v16);
  v13 = appended;
  if ( appended < 0 )
  {
LABEL_32:
    v22 = 9;
    goto LABEL_35;
  }
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    (DxgkCompositionObject **)&FileObject,
    0LL);
  v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*Context + 16LL))(*Context);
  v19 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*Context + 8LL))(*Context, v27);
  appended = RtlStringCchPrintfW(Source, 32LL, L"GFX%02x-%016llx:%08x", *((unsigned int *)Context + 3), *v19, v18);
  v13 = appended;
  if ( appended >= 0 )
  {
    v20 = (const WCHAR *)Context[6];
    Destination.Length = 0;
    appended = RtlAppendUnicodeToString(&Destination, v20);
    v13 = appended;
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeToString(&Destination, Source);
      v13 = appended;
      if ( appended >= 0 )
      {
        wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
          (DxgkCompositionObject **)Context + 4,
          0LL);
        appended = IoGetDeviceObjectPointer(&Destination, 0x80000000, (PFILE_OBJECT *)Context + 4, &DeviceObject);
        v13 = appended;
        if ( appended >= 0 )
        {
          if ( Context[11]
            || (wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
                  Context + 11,
                  0LL),
                appended = IoRegisterPlugPlayNotification(
                             EventCategoryTargetDeviceChange,
                             0,
                             (PVOID)Context[4],
                             (PDRIVER_OBJECT)g_pDriverObject,
                             DxgMonitor::MonitorUsb4State::_Usb4TargetDeviceChangeNotification,
                             Context,
                             (PVOID *)Context + 11),
                v13 = appended,
                appended >= 0) )
          {
            v22 = 1;
            if ( v10 )
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
            v13 = 0;
            goto LABEL_37;
          }
          v22 = 14;
        }
        else
        {
          v22 = 13;
        }
      }
      else
      {
        v22 = 12;
      }
    }
    else
    {
      v22 = 11;
    }
  }
  else
  {
    v22 = 10;
  }
LABEL_35:
  if ( v10 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
LABEL_37:
  DXGKCALLONEXIT__lambda_2fbe1e6675968e3c1c931614a5d80f9c____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v29);
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>((__int64 *)&FileObject);
  return v13;
}
