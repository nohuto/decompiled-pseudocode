/*
 * XREFs of ?Init@DISPLAY_MUX_DEVICE@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x14008C758
 * Callers:
 *     ?Init@DISPLAY_MUX_PAIRING@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x14008CC84 (-Init@DISPLAY_MUX_PAIRING@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140064FF4 (-reset@-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x14006A7FC (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_DEVICE_OBJECT@@@Z @ 0x14006A830 (-reset@-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@.c)
 *     _DXGKCALLONEXIT__lambda_e3d89588326156f01966e6c286c7f661____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14008A344 (_DXGKCALLONEXIT__lambda_e3d89588326156f01966e6c286c7f661____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?ClearMuxProperties@DISPLAY_MUX_DEVICE@@AEAAXXZ @ 0x14008B470 (-ClearMuxProperties@DISPLAY_MUX_DEVICE@@AEAAXXZ.c)
 *     Feature_DisplayMux_ForceMuxFullSupport__private_IsEnabledDeviceUsageNoInline @ 0x14009151C (Feature_DisplayMux_ForceMuxFullSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DpiQueryBusInterface @ 0x140423E24 (DpiQueryBusInterface.c)
 */

__int64 __fastcall DISPLAY_MUX_DEVICE::Init(DISPLAY_MUX_DEVICE *this, struct _UNICODE_STRING *a2)
{
  wchar_t *Buffer; // rdx
  PVOID *v4; // rbx
  unsigned int v5; // edi
  char *v6; // rbx
  __int64 v7; // rax
  struct _STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v10[4]; // [rsp+50h] [rbp-30h] BYREF
  char v11; // [rsp+70h] [rbp-10h]
  int v12; // [rsp+B0h] [rbp+30h] BYREF
  PUNICODE_STRING ObjectName; // [rsp+B8h] [rbp+38h] BYREF
  NTSTATUS DeviceObjectPointer; // [rsp+C0h] [rbp+40h] BYREF

  ObjectName = a2;
  DeviceObjectPointer = 0;
  v10[0] = &DeviceObjectPointer;
  v12 = 0;
  Buffer = a2->Buffer;
  v10[1] = &v12;
  v10[2] = &ObjectName;
  v10[3] = this;
  v11 = 1;
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)this, Buffer) )
  {
    v12 = 8;
LABEL_9:
    v5 = -1073741801;
    DeviceObjectPointer = -1073741801;
    goto LABEL_27;
  }
  v4 = (PVOID *)((char *)this + 96);
  wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::reset(
    (__int64 *)this + 12,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    (DxgkCompositionObject **)this + 11,
    0LL);
  DeviceObjectPointer = IoGetDeviceObjectPointer(
                          ObjectName,
                          0x80000000,
                          (PFILE_OBJECT *)this + 11,
                          (PDEVICE_OBJECT *)this + 12);
  v5 = DeviceObjectPointer;
  if ( DeviceObjectPointer >= 0 )
  {
    ObfReferenceObject(*v4);
    DeviceObjectPointer = DpiQueryBusInterface((PDEVICE_OBJECT)*v4, (__int64)this + 104);
    v5 = DeviceObjectPointer;
    if ( DeviceObjectPointer < 0 )
    {
      v12 = 5;
      goto LABEL_27;
    }
    v6 = (char *)operator new(0x1808uLL, 0x4B677844u, 256LL);
    if ( !v6 )
    {
      v12 = 7;
      goto LABEL_9;
    }
    DeviceObjectPointer = (*((__int64 (__fastcall **)(_QWORD, char *))this + 17))(*((_QWORD *)this + 14), v6);
    v5 = DeviceObjectPointer;
    if ( DeviceObjectPointer < 0 )
    {
LABEL_11:
      v12 = 6;
LABEL_26:
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
      goto LABEL_27;
    }
    DISPLAY_MUX_DEVICE::ClearMuxProperties(this);
    v7 = *(_QWORD *)v6;
    *((_QWORD *)this + 8) = *(_QWORD *)v6;
    if ( (_DWORD)v7 == 1 )
    {
      v12 = 9;
    }
    else
    {
      if ( *((_DWORD *)this + 17) == 1 )
      {
        if ( (unsigned int)Feature_DisplayMux_ForceMuxFullSupport__private_IsEnabledDeviceUsageNoInline() )
          *((_DWORD *)this + 16) = 4;
        DestinationString = 0LL;
        RtlInitAnsiString(&DestinationString, v6 + 8);
        DeviceObjectPointer = RtlAnsiStringToUnicodeString((PUNICODE_STRING)this + 2, &DestinationString, 1u);
        v5 = DeviceObjectPointer;
        if ( DeviceObjectPointer >= 0 )
        {
          RtlInitAnsiString(&DestinationString, v6 + 2056);
          DeviceObjectPointer = RtlAnsiStringToUnicodeString((PUNICODE_STRING)this + 3, &DestinationString, 1u);
          v5 = DeviceObjectPointer;
          if ( DeviceObjectPointer >= 0 )
          {
            RtlInitAnsiString(&DestinationString, v6 + 4104);
            DeviceObjectPointer = RtlAnsiStringToUnicodeString((PUNICODE_STRING)this + 1, &DestinationString, 1u);
            v5 = DeviceObjectPointer;
            if ( DeviceObjectPointer >= 0 )
            {
              DeviceObjectPointer = (*((__int64 (__fastcall **)(_QWORD, char *))this + 18))(
                                      *((_QWORD *)this + 14),
                                      (char *)this + 72);
              v5 = DeviceObjectPointer;
              if ( DeviceObjectPointer >= 0 )
              {
                wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
                  (__int64 *)this + 10,
                  0LL);
                DeviceObjectPointer = IoRegisterPlugPlayNotification(
                                        EventCategoryTargetDeviceChange,
                                        0,
                                        *((PVOID *)this + 11),
                                        (PDRIVER_OBJECT)g_pDriverObject,
                                        DISPLAY_MUX_DEVICE::MuxDeviceDeviceChangeNotification,
                                        this,
                                        (PVOID *)this + 10);
                v5 = DeviceObjectPointer;
                v12 = 4;
                if ( DeviceObjectPointer >= 0 )
                  v12 = 1;
              }
              else
              {
                v12 = 11;
              }
              goto LABEL_26;
            }
          }
        }
        goto LABEL_11;
      }
      v12 = 10;
    }
    v5 = -1073741823;
    DeviceObjectPointer = -1073741823;
    goto LABEL_26;
  }
  v12 = 2;
LABEL_27:
  DXGKCALLONEXIT__lambda_e3d89588326156f01966e6c286c7f661____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v10);
  return v5;
}
