/*
 * XREFs of ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14015F7C0
 * Callers:
 *     NdisLWMInitializeNetworkInterface @ 0x14000AE00 (NdisLWMInitializeNetworkInterface.c)
 * Callees:
 *     ??1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ @ 0x1400567D0 (--1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140056810 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140056870 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x14005C970 (NdisConvertNtStatusToNdisStatus.c)
 *     WPP_RECORDER_SF_q_guid_d @ 0x140067C90 (WPP_RECORDER_SF_q_guid_d.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140069840 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     WPP_RECORDER_SF__guid_ @ 0x14006A860 (WPP_RECORDER_SF__guid_.c)
 *     WPP_RECORDER_SF_q_guid_ @ 0x140096F3C (WPP_RECORDER_SF_q_guid_.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x14015EB30 (-ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x14015F9C0 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 */

__int64 __fastcall ndisLWMCreateMiniport(
        struct _NDIS_M_DRIVER_BLOCK *a1,
        const struct _GUID *a2,
        struct _NDIS_MINIPORT_BLOCK **a3)
{
  struct _GUID v6; // xmm0
  int InterfaceAddDeviceParameters; // eax
  unsigned int v8; // ebx
  int v10; // eax
  unsigned __int16 v11; // r9
  int v12; // eax
  KRegKey v13; // [rsp+40h] [rbp-69h] BYREF
  struct _GUID v14; // [rsp+50h] [rbp-59h] BYREF
  __int64 v15; // [rsp+60h] [rbp-49h]
  void *v16[2]; // [rsp+68h] [rbp-41h] BYREF
  char v17; // [rsp+78h] [rbp-31h]
  __int16 v18; // [rsp+79h] [rbp-30h]
  char v19; // [rsp+7Bh] [rbp-2Eh]
  int v20; // [rsp+7Ch] [rbp-2Dh]
  __int128 v21; // [rsp+80h] [rbp-29h] BYREF
  void *v22[3]; // [rsp+90h] [rbp-19h] BYREF
  __int16 v23; // [rsp+A8h] [rbp-1h]
  int v24; // [rsp+AAh] [rbp+1h]
  __int16 v25; // [rsp+AEh] [rbp+5h]
  struct _NDIS_M_DRIVER_BLOCK *v26; // [rsp+B0h] [rbp+7h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      (__int64)a3,
      0x94u,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)a1,
      (__int64)a2);
  v15 = 0LL;
  *a3 = 0LL;
  v21 = 0LL;
  v6 = *a2;
  v16[0] = 0LL;
  v16[1] = 0LL;
  v14 = v6;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  memset(v22, 0, sizeof(v22));
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0LL;
  InterfaceAddDeviceParameters = ndisIfReadInterfaceAddDeviceParameters(
                                   (struct NDIS_MINIPORT_CREATION_CONFIG *)&v14,
                                   0LL);
  v8 = NdisConvertNtStatusToNdisStatus(InterfaceAddDeviceParameters);
  if ( !v8 )
  {
    if ( !HIBYTE(v23) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0x96u,
          (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
          (__int64)a2);
      v8 = -1073741811;
      goto LABEL_22;
    }
    v13.m_ptr = 0LL;
    v10 = ndisLWMOpenConfigurationKey(&v14, &v13);
    v8 = NdisConvertNtStatusToNdisStatus(v10);
    if ( v8 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_21:
        wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v13.m_ptr);
LABEL_22:
        NDIS_MINIPORT_CREATION_CONFIG::~NDIS_MINIPORT_CREATION_CONFIG((NDIS_MINIPORT_CREATION_CONFIG *)&v14);
        goto LABEL_7;
      }
      v11 = 151;
    }
    else
    {
      v26 = a1;
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        v16,
        v13.m_ptr);
      v13.m_ptr = 0LL;
      v12 = ndisAddDevice(&v14, (void **)a3);
      v8 = NdisConvertNtStatusToNdisStatus(v12);
      if ( !v8 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v11 = 152;
    }
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      v11,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (__int64)a2);
    goto LABEL_21;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      0x95u,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (__int64)a2);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(v22, 0LL);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&v21 + 1, 0LL);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&v21, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(v16);
LABEL_7:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q_guid_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x99u,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)a1,
      (__int64)a2,
      v8);
  return v8;
}
