/*
 * XREFs of ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x140071F80
 * Callers:
 *     ?ndisWdmPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x140071F60 (-ndisWdmPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     NdisWdfPnPAddDevice @ 0x140096A30 (NdisWdfPnPAddDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     ??1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ @ 0x1400567D0 (--1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140056810 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140056870 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140069840 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     WPP_RECORDER_SF__guid_ @ 0x14006A860 (WPP_RECORDER_SF__guid_.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x140070190 (McTemplateK0z_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x140137010 (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     ?ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z @ 0x140137420 (-ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x140138160 (-QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z.c)
 *     ndisMiniBlockFromDriverObject @ 0x140138650 (ndisMiniBlockFromDriverObject.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x14015F9C0 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ?ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z @ 0x140163630 (-ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ?ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z @ 0x1401636F0 (-ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z @ 0x140163960 (-QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z.c)
 *     ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x140167A00 (-ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$defaul.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14016A190 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 *     ?ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x14016AB10 (-ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x14016C370 (-ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 */

__int64 __fastcall ndisPnPAddDevice(struct _DRIVER_OBJECT *a1, struct _DEVICE_OBJECT *a2, void *a3, void **a4)
{
  NTSTATUS updated; // ebx
  int v9; // edx
  int v11; // eax
  unsigned __int8 v12; // cl
  __int64 v13; // rcx
  __int64 v14; // r8
  LOGICAL CheckStamp[2]; // [rsp+30h] [rbp-A9h]
  bool v16; // [rsp+40h] [rbp-99h] BYREF
  bool v17; // [rsp+41h] [rbp-98h] BYREF
  KRegKey v18; // [rsp+48h] [rbp-91h] BYREF
  PCUNICODE_STRING GuidString; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v20; // [rsp+58h] [rbp-81h] BYREF
  HANDLE DeviceRegKey; // [rsp+60h] [rbp-79h] BYREF
  GUID Guid; // [rsp+70h] [rbp-69h] BYREF
  union _NET_LUID_LH v23; // [rsp+80h] [rbp-59h] BYREF
  void *v24; // [rsp+88h] [rbp-51h] BYREF
  struct _DEVICE_OBJECT *v25; // [rsp+90h] [rbp-49h]
  char v26; // [rsp+98h] [rbp-41h]
  int v27; // [rsp+9Ch] [rbp-3Dh]
  __int128 v28; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-29h]
  int v30; // [rsp+B8h] [rbp-21h]
  void *v31; // [rsp+C0h] [rbp-19h]
  unsigned __int8 v32[8]; // [rsp+C8h] [rbp-11h] BYREF
  __int64 v33; // [rsp+D0h] [rbp-9h]

  DeviceRegKey = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Du,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)a1,
      a2);
  updated = IoOpenDeviceRegistryKey(a2, 2u, 0xC2000000, &DeviceRegKey);
  if ( updated < 0 )
    goto LABEL_33;
  v18.m_ptr = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &v18.m_ptr,
    DeviceRegKey);
  v16 = 0;
  v17 = 0;
  GuidString = 0LL;
  updated = ndisCheckIfDeviceNeedsInstallation(&v18, &GuidString, &v16);
  if ( updated >= 0 )
  {
    if ( v16 )
      goto LABEL_12;
    updated = ndisCheckIfDeviceNeedsPseudoMigration(&v18);
    if ( updated >= 0 )
    {
      if ( v16 )
        goto LABEL_12;
      updated = ndisCheckIfDeviceNeedsFullMigration(&v18, &GuidString, &v16);
      if ( updated >= 0 )
      {
        if ( v16 )
          goto LABEL_12;
        updated = ndisCheckIfDeviceNeedsUpdates(&v18, &v16);
        if ( updated >= 0 )
        {
          if ( !v16 )
          {
LABEL_17:
            v24 = 0LL;
            v23.Value = 0LL;
            v26 = 0;
            v28 = 0LL;
            v30 = 0;
            *(_WORD *)v32 = 0;
            v25 = 0LL;
            v27 = 0;
            v29 = 0LL;
            v33 = 0LL;
            v31 = a3;
            updated = RtlGUIDFromString(GuidString, &Guid);
            if ( updated >= 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF__guid_(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  4u,
                  0xDu,
                  0x3Fu,
                  (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
                  (__int64)&Guid);
              if ( !a3 )
                goto LABEL_38;
              v11 = KRegKey::QueryValueBoolean(&v18, L"HardwareLoopback", v32, FailIfNotFound);
              v12 = v32[0];
              if ( v11 < 0 )
                v12 = 0;
              v32[0] = v12;
              updated = ndisWdfUpdateAddDeviceParameters(&v18, (struct NDIS_MINIPORT_CREATION_CONFIG *)&Guid);
              if ( updated >= 0 )
              {
LABEL_38:
                if ( ndisIfReadInterfaceAddDeviceParameters((struct NDIS_MINIPORT_CREATION_CONFIG *)&Guid, a2) )
                {
                  updated = -1073741823;
                }
                else
                {
                  v20 = 0;
                  KRegKey::QueryValueUlong(&v18, L"IMMiniport", &v20);
                  KRegKey::QueryValueString(&v18, L"ComponentID", &v28);
                  if ( !a3 )
                    ndisTemporarilyScribbleNetLuidIndex(&v18, &v23);
                  if ( Microsoft_Windows_NDISEnableBits < 0 )
                    McTemplateK0z_EtwWriteTransfer(
                      v13,
                      &AddPnPDevice,
                      v14,
                      *(const wchar_t **)(*((_QWORD *)&v28 + 1) + 8LL));
                  v33 = ndisMiniBlockFromDriverObject(a1);
                  v25 = a2;
                  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
                    &v24,
                    v18.m_ptr);
                  v18.m_ptr = 0LL;
                  updated = ndisAddDevice(&Guid, a4);
                }
              }
            }
            NDIS_MINIPORT_CREATION_CONFIG::~NDIS_MINIPORT_CREATION_CONFIG((NDIS_MINIPORT_CREATION_CONFIG *)&Guid);
            goto LABEL_32;
          }
LABEL_12:
          ZwUpdateWnfStateData(&WNF_NDIS_ADAPTER_ARRIVAL, 0LL, 0, 0LL, 0LL, 0, 0);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = 4;
            WPP_RECORDER_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v9,
              13,
              62,
              (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids);
          }
          updated = ndisCheckAlwaysStartFlag(&v18, &v17);
          if ( updated < 0 )
            goto LABEL_32;
          if ( !v17 )
          {
            wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&GuidString, 0LL);
            wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v18.m_ptr);
            return 3221226645LL;
          }
          goto LABEL_17;
        }
      }
    }
  }
LABEL_32:
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&GuidString, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v18.m_ptr);
LABEL_33:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    CheckStamp[0] = updated;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x40u,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)a2,
      *(_QWORD *)CheckStamp);
  }
  return (unsigned int)updated;
}
