/*
 * XREFs of ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x180448830
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800EDA04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180181C58 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     swscanf_s @ 0x1802D3238 (swscanf_s.c)
 *     ?GetExperienceManager@VirtualTouchpadUriHandler@@CAJPEBGPEAPEAUIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x180448AE8 (-GetExperienceManager@VirtualTouchpadUriHandler@@CAJPEBGPEAPEAUIVirtualTouchpadExperienceManager.c)
 *     ?GetLaunchLocationForMonitor@VirtualTouchpadUriHandler@@CAJPEAUHMONITOR__@@PEAUtagPOINT@@@Z @ 0x180448CB0 (-GetLaunchLocationForMonitor@VirtualTouchpadUriHandler@@CAJPEAUHMONITOR__@@PEAUtagPOINT@@@Z.c)
 *     ?GetPrimaryTouchEnabledMonitorIfAny@VirtualTouchpadUriHandler@@CAJPEAPEAUHMONITOR__@@@Z @ 0x180448EC8 (-GetPrimaryTouchEnabledMonitorIfAny@VirtualTouchpadUriHandler@@CAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?_GetSelectedItem@CWRLExecuteCommandBase@@IEAAJKAEBU_GUID@@PEAPEAX@Z @ 0x1804492A4 (-_GetSelectedItem@CWRLExecuteCommandBase@@IEAAJKAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualTouchpadUriHandler::Execute(VirtualTouchpadUriHandler *this)
{
  unsigned int v2; // edx
  const struct _GUID *v3; // r8
  int SelectedItem; // eax
  unsigned int v5; // ebx
  void *v6; // rbx
  __int64 (__fastcall *v7)(void *, __int64, void **); // rdi
  void **v8; // rax
  int v9; // eax
  const unsigned __int16 *v10; // rcx
  int ExperienceManager; // eax
  unsigned int v12; // edi
  int LaunchLocationForMonitor; // eax
  int v14; // eax
  void *v16[2]; // [rsp+20h] [rbp-20h] BYREF
  HMONITOR v17[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  wchar_t *Buffer; // [rsp+68h] [rbp+28h] BYREF
  struct Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager *v20; // [rsp+70h] [rbp+30h] BYREF
  struct tagPOINT v21; // [rsp+78h] [rbp+38h] BYREF

  v16[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v16);
  SelectedItem = CWRLExecuteCommandBase::_GetSelectedItem(this, v2, v3, v16);
  v5 = SelectedItem;
  if ( SelectedItem >= 0 )
  {
    Buffer = 0LL;
    v6 = v16[0];
    v7 = *(__int64 (__fastcall **)(void *, __int64, void **))(*(_QWORD *)v16[0] + 40LL);
    v8 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&Buffer);
    v9 = v7(v6, 2147909632LL, v8);
    v5 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E,
        (int)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
        (const char *)(unsigned int)v9);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&Buffer);
      goto LABEL_18;
    }
    if ( (unsigned int)_o__wcsnicmp(Buffer, L"ms-virtualtouchpad", 18LL) )
    {
      v5 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F,
        (int)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
        (const char *)0x80070057LL);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&Buffer);
      goto LABEL_18;
    }
    v20 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
    ExperienceManager = VirtualTouchpadUriHandler::GetExperienceManager(v10, &v20);
    v5 = ExperienceManager;
    if ( ExperienceManager < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22,
        (int)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
        (const char *)(unsigned int)ExperienceManager);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&Buffer);
      goto LABEL_18;
    }
    v21 = 0LL;
    v12 = 0;
    if ( swscanf_s(Buffer, L"ms-virtualtouchpad:?x=%d&y=%d", &v21, &v21.y) != 2 )
    {
      v12 = 1;
      v17[0] = 0LL;
      if ( VirtualTouchpadUriHandler::GetPrimaryTouchEnabledMonitorIfAny(v17) < 0 || !v17[0] )
        goto LABEL_17;
      LaunchLocationForMonitor = VirtualTouchpadUriHandler::GetLaunchLocationForMonitor(v17[0], &v21);
      v5 = LaunchLocationForMonitor;
      if ( LaunchLocationForMonitor < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2E,
          (int)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
          (const char *)(unsigned int)LaunchLocationForMonitor);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&Buffer);
        goto LABEL_18;
      }
    }
    *(float *)v17 = (float)v21.x;
    *((float *)v17 + 1) = (float)v21.y;
    *(float *)&v17[1] = (float)v21.x;
    *((float *)&v17[1] + 1) = (float)v21.y;
    v14 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager *, _QWORD, HMONITOR *))(*(_QWORD *)v20 + 48LL))(
            v20,
            v12,
            v17);
    v5 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31,
        (int)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
        (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&Buffer);
      goto LABEL_18;
    }
LABEL_17:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&Buffer);
    v5 = 0;
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B,
    (int)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
    (const char *)(unsigned int)SelectedItem);
LABEL_18:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v16);
  return v5;
}
