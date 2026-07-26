/*
 * XREFs of ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x14015F9C0
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x140071F80 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14015F7C0 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140056810 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140056870 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x14006DE70 (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x14015F120 (ndisIfOpenInterfaceRegistryKey.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x14015FCA0 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x14015FEF0 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ndisIfReadHiddenFlag @ 0x140160000 (ndisIfReadHiddenFlag.c)
 *     ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x1401601E0 (-ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x140167170 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall ndisIfReadInterfaceAddDeviceParameters(
        struct NDIS_MINIPORT_CREATION_CONFIG *a1,
        struct _DEVICE_OBJECT *a2)
{
  struct Rtl::KString *v3; // r15
  int v5; // ebx
  int v6; // ebx
  wchar_t *v7; // rax
  __int64 v8; // rcx
  int v9; // edx
  __int16 v10; // cx
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE *p_Handle; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v14; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING v15; // [rsp+88h] [rbp-78h] BYREF
  wchar_t v16[48]; // [rsp+A0h] [rbp-60h] BYREF

  v3 = 0LL;
  Handle = 0LL;
  v5 = ndisIfOpenInterfaceRegistryKey((__int64)a1, (KRegKey *)&Handle, 1u, 1);
  if ( v5 < 0 )
  {
    if ( Handle )
      ZwClose(Handle);
    return (unsigned int)v5;
  }
  else
  {
    p_Handle = &Handle;
    if ( (unsigned int)NetSetupPropertyBag::ReadUint64(
                         (NetSetupPropertyBag *)&p_Handle,
                         (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_NetLuid,
                         (unsigned __int64 *)a1 + 2) )
      goto LABEL_28;
    if ( !(unsigned int)NetSetupPropertyBag::ReadUint32(
                          (NetSetupPropertyBag *)&p_Handle,
                          (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_PhysicalMediaType,
                          (unsigned int *)a1 + 11) )
      *((_BYTE *)a1 + 40) = 1;
    v14 = 0;
    if ( (unsigned int)NetSetupPropertyBag::ReadUint32(
                         (NetSetupPropertyBag *)&p_Handle,
                         (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_INF_Characteristics,
                         &v14)
      || (*((_BYTE *)a1 + 72) = (v14 & 2) != 0,
          (unsigned int)NetSetupPropertyBag::ReadBoolean(
                          (NetSetupPropertyBag *)&p_Handle,
                          (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_IsVirtual,
                          (bool *)a1 + 73))
      || (unsigned int)NetSetupPropertyBag::ReadBoolean(
                         (NetSetupPropertyBag *)&p_Handle,
                         (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_IsPhysical,
                         (bool *)a1 + 74)
      || (unsigned int)ndisIfReadHiddenFlag((NetSetupPropertyBag *)&p_Handle, a2, (bool *)a1 + 75) )
    {
LABEL_28:
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
      return 3221225805LL;
    }
    v6 = RtlStringCchPrintfW(
           v16,
           48LL,
           L"\\Device\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
           *(unsigned int *)a1,
           *((unsigned __int16 *)a1 + 2),
           *((unsigned __int16 *)a1 + 3),
           *((unsigned __int8 *)a1 + 8),
           *((unsigned __int8 *)a1 + 9),
           *((unsigned __int8 *)a1 + 10),
           *((unsigned __int8 *)a1 + 11),
           *((unsigned __int8 *)a1 + 12),
           *((unsigned __int8 *)a1 + 13),
           *((unsigned __int8 *)a1 + 14),
           *((unsigned __int8 *)a1 + 15));
    if ( v6 < 0 )
    {
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
      return (unsigned int)v6;
    }
    else
    {
      v7 = v16;
      v15 = 0LL;
      v8 = 0x7FFFLL;
      do
      {
        if ( !*v7 )
          break;
        ++v7;
        --v8;
      }
      while ( v8 );
      v9 = -1073741811;
      if ( v8 )
      {
        v9 = 0;
        v10 = 2 * v8;
        v15.Length = -2 - v10;
        v15.MaximumLength = -v10;
        v15.Buffer = v16;
      }
      if ( v9 >= 0 )
        v3 = Rtl::KString::Initialize(&v15);
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)a1 + 7, v3);
      if ( *((_QWORD *)a1 + 7) )
      {
        if ( (unsigned int)NetSetupPropertyBag::ReadBoolean(
                             (NetSetupPropertyBag *)&p_Handle,
                             (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_IsLightweight,
                             (bool *)a1 + 89) )
        {
          if ( Handle )
            ZwClose(Handle);
          return 3221225805LL;
        }
        wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
        return 0LL;
      }
      else
      {
        wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
        return 3221225626LL;
      }
    }
  }
}
