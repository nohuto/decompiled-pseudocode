/*
 * XREFs of ?UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800E4590
 * Callers:
 *     ?AmbientUpdateAPC@LampArrayRawInputProvider@@CAX_K@Z @ 0x1800E3840 (-AmbientUpdateAPC@LampArrayRawInputProvider@@CAX_K@Z.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180021CF0 (-Release@InputContext@@UEAAKXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180023B44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800546FC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180061DD4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180082C60 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIAmbientDeviceMappingChangedEventArgs@Internal@Lights@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIAmbientDeviceMappingChangedEventArgs@Internal@Lights@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIAmbientDeviceMappingChangedEventArgs@Internal@Lights@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800E30A0 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-_ea_1800E30A0.c)
 *     ?SetAmbientPids@LampArrayDevice@@QEAAXPEAUIAmbientDeviceMappingChangedEventArgs@Internal@Lights@Devices@Windows@@@Z @ 0x1800E707C (-SetAmbientPids@LampArrayDevice@@QEAAXPEAUIAmbientDeviceMappingChangedEventArgs@Internal@Lights@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall LampArrayRawInputProvider::UpdateDeviceAmbientProcess(LampArrayRawInputProvider *this)
{
  RTL_SRWLOCK *v2; // rbx
  _QWORD **v3; // r14
  _QWORD **v4; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  void (__fastcall *v7)(_QWORD *, HSTRING *); // rbx
  _QWORD *i; // rdi
  HSTRING v9; // rcx
  __int64 v10; // rbx
  const WCHAR *v11; // rcx
  __int64 v12; // rdx
  HSTRING StringRawBuffer; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // rbx
  HSTRING string; // [rsp+38h] [rbp-39h] BYREF
  HSTRING string1; // [rsp+40h] [rbp-31h] BYREF
  INT32 result; // [rsp+48h] [rbp-29h] BYREF
  const char *v23; // [rsp+50h] [rbp-21h] BYREF
  RTL_SRWLOCK *v24[2]; // [rsp+58h] [rbp-19h] BYREF
  char v25[16]; // [rsp+68h] [rbp-9h] BYREF
  wchar_t v26[16]; // [rsp+78h] [rbp+7h] BYREF

  v2 = (RTL_SRWLOCK *)((char *)this + 152);
  AcquireSRWLockExclusive((PSRWLOCK)this + 19);
  v24[0] = v2;
  v3 = (_QWORD **)((char *)this + 120);
  v4 = (_QWORD **)*((_QWORD *)this + 15);
  v5 = *v4;
  if ( v4[1] != (_QWORD *)((char *)this + 120) )
LABEL_25:
    __fastfail(3u);
  while ( 1 )
  {
    if ( (_QWORD **)v5[1] != v4 )
      goto LABEL_25;
    *v3 = v5;
    v5[1] = v3;
    if ( v4 == v3 )
      break;
    --*((_DWORD *)this + 34);
    if ( !v4 )
      break;
    string1 = 0LL;
    v24[1] = 0LL;
    v6 = v4[2];
    v7 = *(void (__fastcall **)(_QWORD *, HSTRING *))(*v6 + 48LL);
    WindowsDeleteString(0LL);
    string1 = 0LL;
    v7(v6, &string1);
    for ( i = (_QWORD *)*((_QWORD *)this + 9); i != (_QWORD *)((char *)this + 72); i = (_QWORD *)*i )
    {
      v9 = 0LL;
      string = 0LL;
      v10 = i[2];
      if ( v10 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
        v9 = string;
      }
      WindowsDeleteString(v9);
      string = 0LL;
      v11 = (const WCHAR *)(*(_QWORD *)(v10 + 24) + 24LL);
      v12 = -1LL;
      do
        ++v12;
      while ( v11[v12] );
      WindowsCreateString(v11, v12, &string);
      if ( string )
      {
        if ( WindowsGetStringLen(string1) >= 4 )
        {
          result = 0;
          if ( WindowsCompareStringOrdinal(string1, string, &result) >= 0 && !result )
          {
            LampArrayDevice::SetAmbientPids(
              (LampArrayDevice *)v10,
              (struct Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs *)v4[2]);
            InputContext::Release((InputContext *)v10);
            WindowsDeleteString(string);
            goto LABEL_24;
          }
        }
      }
      InputContext::Release((InputContext *)v10);
      WindowsDeleteString(string);
    }
    StringRawBuffer = (HSTRING)WindowsGetStringRawBuffer(string1, 0LL);
    v16 = (__int64)StringRawBuffer;
    if ( (unsigned int)dword_180251248 > 5 )
    {
      string = StringRawBuffer;
      v23 = "Adding ambient PIDs to pending list";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        (__int64)&dword_180251248,
        byte_180216173,
        v14,
        v15,
        (const unsigned __int16 **)&v23,
        (const WCHAR **)&string);
    }
    std::wstring::wstring((__int64)v26, v16);
    v17 = std::map<std::wstring,wil::com_ptr_t<Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs,wil::err_returncode_policy>>::_Try_emplace<std::wstring,>(
            (__int64 *)this + 46,
            (__int64)v25,
            v26);
    v18 = v4[2];
    v19 = *(_QWORD *)(*(_QWORD *)v17 + 64LL);
    *(_QWORD *)(*(_QWORD *)v17 + 64LL) = v18;
    if ( v18 )
      (*(void (__fastcall **)(_QWORD *))(*v18 + 8LL))(v18);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    std::wstring::_Tidy_deallocate(v26);
LABEL_24:
    WindowsDeleteString(string1);
    v4 = (_QWORD **)*v3;
    v5 = (_QWORD *)**v3;
    if ( (_QWORD **)(*v3)[1] != v3 )
      goto LABEL_25;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v24);
}
