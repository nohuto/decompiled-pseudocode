/*
 * XREFs of ?KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z @ 0x180123740
 * Callers:
 *     ?KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z @ 0x180078EE0 (-KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z.c)
 *     ?KsNotifications_ServiceStart@@YAJXZ @ 0x180123924 (-KsNotifications_ServiceStart@@YAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetNext@?$TList@VCKsNotificationsMonitor@@@@QEBAHAEAPEAXPEAPEAVCKsNotificationsMonitor@@@Z @ 0x1800767B8 (-GetNext@-$TList@VCKsNotificationsMonitor@@@@QEBAHAEAPEAXPEAPEAVCKsNotificationsMonitor@@@Z.c)
 *     ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x18008E518 (-Dispose@CKsNotificationsMonitor@@QEAAXXZ.c)
 *     ?KsNotifications_CreateMonitor@@YAPEAVCKsNotificationsMonitor@@PEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V?$CComPtr@UIConnector@@@ATL@@V?$CComPtr@UIDeviceTopology@@@4@@Z @ 0x18010FD70 (-KsNotifications_CreateMonitor@@YAPEAVCKsNotificationsMonitor@@PEBGW4__MIDL___MIDL_itf_devicetop.c)
 *     ?AddTail@?$TList@VCKsNotificationsMonitor@@@@QEAAPEAXPEAVCKsNotificationsMonitor@@@Z @ 0x180122EA0 (-AddTail@-$TList@VCKsNotificationsMonitor@@@@QEAAPEAXPEAVCKsNotificationsMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall KsNotifications_ProcessPnpInterface(
        struct IMMDevice *a1,
        unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  __int64 v5; // rcx
  unsigned __int16 *v6; // rdx
  int v7; // eax
  unsigned int i; // edi
  __int64 v9; // rdx
  CKsNotificationsMonitor *v10; // rax
  __int64 v11; // rcx
  CKsNotificationsMonitor *v12; // rbx
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v14; // [rsp+38h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v16; // [rsp+48h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v18; // [rsp+90h] [rbp+30h] BYREF
  int v19; // [rsp+94h] [rbp+34h]
  __int64 v20; // [rsp+98h] [rbp+38h] BYREF

  v19 = HIDWORD(a3);
  v13 = 0LL;
  v18 = 0;
  EnterCriticalSection(&g_csKsNotificationMonitors);
  v17 = &g_csKsNotificationMonitors;
  v14 = (_QWORD *)g_lstKsNotificationMonitors;
  if ( g_lstKsNotificationMonitors )
  {
    while ( 1 )
    {
      v20 = 0LL;
      TList<CKsNotificationsMonitor>::GetNext(v5, &v14, &v20);
      v6 = a2;
      do
      {
        v5 = *(unsigned __int16 *)((char *)v6 + *(_QWORD *)(v20 + 16) - (_QWORD)a2);
        v7 = *v6 - (_DWORD)v5;
        if ( v7 )
          break;
        ++v6;
      }
      while ( (_DWORD)v5 );
      if ( !v7 )
        break;
      if ( !v14 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    if ( ((int (__fastcall *)(struct IMMDevice *, GUID *, __int64))a1->lpVtbl->Activate)(
           a1,
           &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
           23LL) >= 0
      && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 24LL))(v13, &v18) >= 0 )
    {
      for ( i = 0; i < v18; ++i )
      {
        v14 = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v13 + 32LL))(v13, i, &v14) >= 0 )
        {
          LODWORD(v20) = 0;
          if ( (*(int (__fastcall **)(_QWORD *, __int64 *))(*v14 + 24LL))(v14, &v20) >= 0 )
          {
            v15 = v13;
            v16 = v14;
            if ( v14 )
              (*(void (__fastcall **)(_QWORD *))(*v14 + 8LL))(v14);
            v10 = KsNotifications_CreateMonitor(a2, v9, (__int64 *)&v16, &v15);
            v12 = v10;
            if ( v10 && !TList<CKsNotificationsMonitor>::AddTail(v11, (__int64)v10) )
            {
              CKsNotificationsMonitor::Dispose(v12);
              (*(void (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v12 + 16LL))(v12);
            }
          }
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v14);
      }
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v17);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
}
