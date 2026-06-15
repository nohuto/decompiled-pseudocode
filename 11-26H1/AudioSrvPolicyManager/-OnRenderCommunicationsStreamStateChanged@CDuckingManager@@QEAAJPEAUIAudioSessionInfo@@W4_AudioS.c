/*
 * XREFs of ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180040094
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000EA10 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x1800133E0 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180006440 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006744 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18000E540 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$com_ptr_t@UIDuckingController@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDuckingController@@@Z @ 0x180024B70 (--0-$com_ptr_t@UIDuckingController@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDuckingControlle.c)
 *     ??$try_com_query_to@UIDuckingController@@AEAPEAUIAudioStreamInfo@@@wil@@YA_NAEAPEAUIAudioStreamInfo@@PEAPEAUIDuckingController@@@Z @ 0x180028E6C (--$try_com_query_to@UIDuckingController@@AEAPEAUIAudioStreamInfo@@@wil@@YA_NAEAPEAUIAudioStreamI.c)
 *     ??A?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@@std@@QEAAAEAUCRenderEndpointDuckingManagerContext@@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18002E90C (--A-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UCRenderEndpoin.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     _lambda_642215a69899d380996b25cb8587b28c_::__lambda_642215a69899d380996b25cb8587b28c_ @ 0x18003EF14 (_lambda_642215a69899d380996b25cb8587b28c_--__lambda_642215a69899d380996b25cb8587b28c_.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800403A4 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7 #try_helpers=1
__int64 __fastcall CDuckingManager::OnRenderCommunicationsStreamStateChanged(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5)
{
  struct CDuckingManager *v6; // rdi
  _WORD *v8; // r14
  _DWORD *v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  _WORD *v14; // r14
  _DWORD *v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+20h] [rbp-88h] BYREF
  __int64 v21; // [rsp+28h] [rbp-80h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+30h] [rbp-78h] BYREF
  __int64 v23; // [rsp+38h] [rbp-70h]
  struct CDuckingManager *v24; // [rsp+40h] [rbp-68h]
  __int64 v25; // [rsp+48h] [rbp-60h]
  __int64 (__fastcall ***v26)(); // [rsp+68h] [rbp-40h]
  __int64 v27; // [rsp+70h] [rbp-38h] BYREF
  struct CDuckingManager *v28; // [rsp+78h] [rbp-30h]
  _QWORD v29[2]; // [rsp+80h] [rbp-28h] BYREF

  v21 = a5;
  v6 = g_DuckingManager;
  if ( *((_BYTE *)g_DuckingManager + 456) )
    return 0LL;
  if ( a4 != 1 )
  {
    if ( a4 )
      return 0LL;
    v14 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 136));
    v20 = (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 136);
    std::wstring::wstring(&v27, v14);
    v15 = (_DWORD *)std::unordered_map<std::wstring,CRenderEndpointDuckingManagerContext>::operator[](
                      (float *)v6 + 44,
                      (unsigned __int8 *)&v27);
    --*v15;
    std::wstring::~wstring((__int64)&v27);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v20);
    if ( *((_DWORD *)v6 + 104) == 3 )
      return 0LL;
    v20 = 0LL;
    wil::try_com_query_to<IDuckingController,IAudioStreamInfo * &>(&v21, (__int64)&v20);
    v16 = wil::com_ptr_t<IDuckingController,wil::err_returncode_policy>::com_ptr_t<IDuckingController,wil::err_returncode_policy>(
            &v21,
            a2);
    v17 = *v16;
    *v16 = 0LL;
    v27 = v17;
    v28 = v6;
    wil::com_ptr_t<IDuckingController,wil::err_returncode_policy>::com_ptr_t<IDuckingController,wil::err_returncode_policy>(
      v29,
      (__int64)v20);
    v22 = off_1800536A0;
    v18 = v27;
    v27 = 0LL;
    v23 = v18;
    v24 = v28;
    v19 = v29[0];
    v29[0] = 0LL;
    v25 = v19;
    v26 = &v22;
    CSerialWorkQueue::QueueWorkItem((struct CDuckingManager *)((char *)v6 + 240));
    lambda_642215a69899d380996b25cb8587b28c_::__lambda_642215a69899d380996b25cb8587b28c_(&v27);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
    goto LABEL_9;
  }
  v8 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 136));
  v20 = (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 136);
  std::wstring::wstring(&v27, v8);
  v9 = (_DWORD *)std::unordered_map<std::wstring,CRenderEndpointDuckingManagerContext>::operator[](
                   (float *)v6 + 44,
                   (unsigned __int8 *)&v27);
  ++*v9;
  std::wstring::~wstring((__int64)&v27);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v20);
  if ( *((_DWORD *)v6 + 104) != 3 )
  {
    v20 = 0LL;
    wil::try_com_query_to<IDuckingController,IAudioStreamInfo * &>(&v21, (__int64)&v20);
    v10 = wil::com_ptr_t<IDuckingController,wil::err_returncode_policy>::com_ptr_t<IDuckingController,wil::err_returncode_policy>(
            &v21,
            a2);
    v11 = *v10;
    *v10 = 0LL;
    v27 = v11;
    v28 = v6;
    wil::com_ptr_t<IDuckingController,wil::err_returncode_policy>::com_ptr_t<IDuckingController,wil::err_returncode_policy>(
      v29,
      (__int64)v20);
    v22 = off_1800536D0;
    v12 = v27;
    v27 = 0LL;
    v23 = v12;
    v24 = v28;
    v13 = v29[0];
    v29[0] = 0LL;
    v25 = v13;
    v26 = &v22;
    CSerialWorkQueue::QueueWorkItem((struct CDuckingManager *)((char *)v6 + 240));
    lambda_642215a69899d380996b25cb8587b28c_::__lambda_642215a69899d380996b25cb8587b28c_(&v27);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
LABEL_9:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
  }
  return 0LL;
}
