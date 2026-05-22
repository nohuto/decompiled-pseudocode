/*
 * XREFs of ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800E3D7C
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18005DB24 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800E4B60 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180023B44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800546FC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180082C60 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x18008DE74 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x180098044 (-SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKI@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKI@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKI@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800CB2D0 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKI@std@@@std@@@std@@QEAAPEAU-$_Tree_node.c)
 *     ??$_Find_lower_bound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIAmbientDeviceMappingChangedEventArgs@Internal@Lights@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIAmbientDeviceMappingChangedEventArgs@Internal@Lights@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIAmbientDeviceMappingChangedEventArgs@Internal@Lights@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800E2FC0 (--$_Find_lower_bound@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_ea_1800E2FC0.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIAmbientDeviceMappingChangedEventArgs@Internal@Lights@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIAmbientDeviceMappingChangedEventArgs@Internal@Lights@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIAmbientDeviceMappingChangedEventArgs@Internal@Lights@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800E3044 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits_ea_1800E3044.c)
 *     ??$_Lower_bound_duplicate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIAmbientDeviceMappingChangedEventArgs@Internal@Lights@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIAmbientDeviceMappingChangedEventArgs@Internal@Lights@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIAmbientDeviceMappingChangedEventArgs@Internal@Lights@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800E3070 (--$_Lower_bound_duplicate@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@_ea_1800E3070.c)
 *     ??1?$unique_ptr@UConsumerControlNexusDeviceListEntry@ConsumerControlManager@@U?$default_delete@UConsumerControlNexusDeviceListEntry@ConsumerControlManager@@@std@@@std@@QEAA@XZ @ 0x1800E334C (--1-$unique_ptr@UConsumerControlNexusDeviceListEntry@ConsumerControlManager@@U-$default_delete@U.c)
 *     ?QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z @ 0x1800E5698 (-QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z.c)
 *     ?AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z @ 0x1800E6924 (-AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z.c)
 *     ?CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800E6AD8 (-CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 *     ?SetAmbientPids@LampArrayDevice@@QEAAXPEAUIAmbientDeviceMappingChangedEventArgs@Internal@Lights@Devices@Windows@@@Z @ 0x1800E707C (-SetAmbientPids@LampArrayDevice@@QEAAXPEAUIAmbientDeviceMappingChangedEventArgs@Internal@Lights@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LampArrayRawInputProvider::OnLampArrayAdded(LampArrayRawInputProvider *this, HSTRING *a2)
{
  unsigned int v4; // r15d
  char *v5; // rax
  char *v6; // r14
  LampArrayDevice **v7; // r13
  unsigned int v8; // edx
  LampArrayRawInputProvider **v9; // rcx
  char *v10; // rax
  char *v11; // rbx
  int active; // eax
  RTL_SRWLOCK **p_string; // rcx
  int InterfacePath; // eax
  PCWSTR StringRawBuffer; // rax
  __int64 *v16; // r15
  __int64 v17; // rbx
  __int64 v18; // rcx
  char *v19; // rax
  __int64 v20; // rcx
  int v22; // eax
  unsigned int v23; // ebx
  HSTRING string; // [rsp+30h] [rbp-39h] BYREF
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v25; // [rsp+38h] [rbp-31h] BYREF
  RTL_SRWLOCK *v26; // [rsp+40h] [rbp-29h] BYREF
  const wchar_t *v27; // [rsp+48h] [rbp-21h] BYREF
  __int64 v28; // [rsp+58h] [rbp-11h]
  wchar_t v29[16]; // [rsp+60h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = 1;
  if ( *((_DWORD *)a2 + 30) == 65625 )
  {
    v5 = (char *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    if ( v5 )
    {
      *(_QWORD *)v5 = 0LL;
      *((_QWORD *)v5 + 1) = 0LL;
      *((_QWORD *)v5 + 2) = 0LL;
      v25 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v5;
      v7 = (LampArrayDevice **)(v5 + 16);
      if ( LampArrayDevice::CreateAndInitialize((struct PnpDevice *)a2, (struct LampArrayDevice **)v5 + 2) >= 0 )
      {
        AcquireSRWLockExclusive((PSRWLOCK)this + 20);
        v26 = (RTL_SRWLOCK *)((char *)this + 160);
        v9 = (LampArrayRawInputProvider **)*((_QWORD *)this + 10);
        if ( *v9 != (LampArrayRawInputProvider *)((char *)this + 72) )
          __fastfail(3u);
        *(_QWORD *)v6 = (char *)this + 72;
        *((_QWORD *)v6 + 1) = v9;
        *v9 = (LampArrayRawInputProvider *)v6;
        *((_QWORD *)this + 10) = v6;
        ++*((_DWORD *)this + 22);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v26);
        AcquireSRWLockExclusive((PSRWLOCK)this + 18);
        string = (HSTRING)((char *)this + 144);
        v10 = (char *)this + 96;
        v11 = (char *)*((_QWORD *)this + 12);
        while ( v11 != v10 )
        {
          LampArrayDevice::AddViewClient(*v7, (struct LampArrayEndpoint *)(v11 + 16));
          if ( *((_DWORD *)v11 + 6) == *((_DWORD *)this + 16) )
          {
            active = LampArrayRawInputProvider::SetActiveViewClient(
                       (HANDLE *)this,
                       *v7,
                       (struct LampArrayEndpoint *)(v11 + 16));
            v4 = active;
            if ( active < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xC8,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
                (const char *)(unsigned int)active);
              p_string = (RTL_SRWLOCK **)&string;
LABEL_12:
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(p_string);
              goto LABEL_23;
            }
          }
          v11 = *(char **)v11;
          v10 = (char *)this + 96;
        }
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&string);
        AcquireSRWLockExclusive((PSRWLOCK)this + 19);
        v26 = (RTL_SRWLOCK *)((char *)this + 152);
        WindowsDeleteString(0LL);
        string = 0LL;
        InterfacePath = PnpDevice::GetInterfacePath(a2, &string);
        v4 = InterfacePath;
        if ( InterfacePath < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xD2,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
            (const char *)(unsigned int)InterfacePath);
          WindowsDeleteString(string);
          string = 0LL;
          p_string = &v26;
          goto LABEL_12;
        }
        StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
        v16 = (__int64 *)((char *)this + 368);
        std::wstring::wstring((__int64)v29, (__int64)StringRawBuffer);
        std::_Tree<std::_Tmap_traits<std::wstring,wil::com_ptr_t<Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs,wil::err_returncode_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs,wil::err_returncode_policy>>>,0>>::_Find_lower_bound<std::wstring>(
          (__int64)this + 368,
          &v27,
          v29);
        v17 = v28;
        if ( !std::_Tree<std::_Tmap_traits<std::wstring,wil::com_ptr_t<Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs,wil::err_returncode_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs,wil::err_returncode_policy>>>,0>>::_Lower_bound_duplicate<std::wstring>(
                v18,
                v28,
                v29) )
          v17 = *v16;
        std::wstring::_Tidy_deallocate(v29);
        if ( v17 != *v16 )
        {
          LampArrayDevice::SetAmbientPids(
            *((LampArrayDevice **)v6 + 2),
            *(struct Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs **)(v17 + 64));
          v19 = (char *)std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned int>>>::_Extract(
                          (_QWORD *)this + 46,
                          v17);
          std::_Tree_node<std::pair<std::wstring const,wil::com_ptr_t<Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs,wil::err_returncode_policy>>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<std::wstring const,wil::com_ptr_t<Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs,wil::err_returncode_policy>>,void *>>>(
            v20,
            v19);
        }
        WindowsDeleteString(string);
        string = 0LL;
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v26);
        if ( !*((_BYTE *)this + 320) )
        {
          (*(void (__fastcall **)(_QWORD, __int64 (__fastcall *)(LampArrayRawInputProvider *), LampArrayRawInputProvider *, __int64))(**((_QWORD **)this + 7) + 152LL))(
            *((_QWORD *)this + 7),
            lambda_15d270ed647e652b2d70a0e99e327c3c_::_lambda_invoker_cdecl_,
            this,
            3LL);
          *((_BYTE *)this + 320) = 1;
        }
        v25 = 0LL;
        v4 = 0;
      }
    }
    else
    {
      v25 = 0LL;
      v4 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB5,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        (const char *)0x8007000ELL);
    }
LABEL_23:
    std::unique_ptr<ConsumerControlManager::ConsumerControlNexusDeviceListEntry>::~unique_ptr<ConsumerControlManager::ConsumerControlNexusDeviceListEntry>(
      &v25,
      v8);
    return v4;
  }
  else if ( IsEdition(6176LL)
         && (v22 = ConsumerControlManager::QueueAddRemoveDevice(
                     *((ConsumerControlManager **)this + 43),
                     (struct PnpDevice *)a2,
                     1),
             v23 = v22,
             v22 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x84,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
      (const char *)(unsigned int)v22);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFD,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)v23);
    return v23;
  }
  else
  {
    return 0LL;
  }
}
