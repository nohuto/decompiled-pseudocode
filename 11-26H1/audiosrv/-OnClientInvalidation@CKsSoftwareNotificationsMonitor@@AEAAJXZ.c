/*
 * XREFs of ?OnClientInvalidation@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18010FF14
 * Callers:
 *     ?OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z @ 0x1801100A0 (-OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180001984 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001BB70 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180040624 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800584C0 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$make_shared@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$$V@std@@YA?AV?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@0@XZ @ 0x18005E39C (--$make_shared@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFr.c)
 *     ??1?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180061DB4 (--1-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6A.c)
 *     ?GetDeviceId@CKsNotificationsMonitor@@QEAAJPEAPEAG@Z @ 0x180122FF8 (-GetDeviceId@CKsNotificationsMonitor@@QEAAJPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CKsSoftwareNotificationsMonitor::OnClientInvalidation(CKsSoftwareNotificationsMonitor *this)
{
  unsigned __int16 **v2; // rbx
  __int64 *v3; // rax
  int DeviceId; // eax
  int v5; // edi
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // edi
  _DWORD *v9; // rcx
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // r9
  const wchar_t *v13; // rax
  struct CSerialWorkQueue *SerialWorkQueue; // rax
  unsigned __int16 **v15; // rcx
  unsigned __int16 **v17[2]; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v18[24]; // [rsp+40h] [rbp-9h] BYREF
  __int64 (__fastcall **v19)(); // [rsp+58h] [rbp+Fh] BYREF
  int v20; // [rsp+60h] [rbp+17h]
  unsigned __int16 **v21; // [rsp+68h] [rbp+1Fh]
  unsigned __int16 **v22; // [rsp+70h] [rbp+27h]
  __int64 (__fastcall ***v23)(); // [rsp+90h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  int v25; // [rsp+B8h] [rbp+6Fh] BYREF
  const wchar_t *v26; // [rsp+C0h] [rbp+77h] BYREF

  *(_OWORD *)v17 = 0LL;
  *(_OWORD *)v18 = 0LL;
  std::shared_ptr<std::function<void (void)>>::operator=(v17, (__int64 *)v18);
  if ( *(_QWORD *)&v18[8] )
    std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&v18[8]);
  v2 = v17[0];
  if ( !v17[0] )
  {
    v3 = std::make_shared<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,>(v18);
    std::shared_ptr<std::function<void (void)>>::operator=(v17, v3);
    if ( *(_QWORD *)&v18[8] )
      std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&v18[8]);
    v2 = v17[0];
  }
  DeviceId = CKsNotificationsMonitor::GetDeviceId(this, v2);
  v5 = DeviceId;
  if ( DeviceId >= 0 )
  {
    v8 = _InterlockedIncrement(&dword_1801D7878);
    v9 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v9 > 4u && tlgKeywordOn((__int64)v9, 32LL) )
    {
      if ( v2 )
        v13 = *v2;
      else
        v13 = 0LL;
      v26 = v13;
      v25 = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v10,
        (int)&unk_1801A731C,
        v11,
        v12,
        (__int64)&v25,
        &v26);
    }
    SerialWorkQueue = GetSerialWorkQueue();
    *(_DWORD *)v18 = v8;
    v15 = v17[1];
    if ( v17[1] )
      _InterlockedIncrement((volatile signed __int32 *)v17[1] + 2);
    v19 = off_1801777B8;
    v20 = v8;
    v21 = v2;
    v22 = v15;
    *(_OWORD *)&v18[8] = 0LL;
    v23 = &v19;
    v5 = CSerialWorkQueue::QueueWorkItem((__int64)SerialWorkQueue, (__int64 *)&v19);
    wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>((__int64)&v18[8]);
    if ( v5 >= 0 )
    {
      v5 = 0;
      goto LABEL_21;
    }
    v6 = (unsigned int)v5;
    v7 = 362LL;
  }
  else
  {
    v6 = (unsigned int)DeviceId;
    v7 = 337LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
    (const char *)v6);
LABEL_21:
  wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>((__int64)v17);
  return (unsigned int)v5;
}
