/*
 * XREFs of ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18013CD84
 * Callers:
 *     _lambda_9690ae725cbb2a29975841b6bdf2d8b3_::operator() @ 0x18013688C (_lambda_9690ae725cbb2a29975841b6bdf2d8b3_--operator().c)
 *     ?SetUserSelectedEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18013DB54 (-SetUserSelectedEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18000578C (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapSz@G@@@Z @ 0x18004DFC0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U1@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvi.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x18005A368 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180091814 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@VEffectPack@@@std@.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureRwFxPropertyStoreExists@CEndpointCharacteristics@@AEAAJXZ @ 0x180138F70 (-EnsureRwFxPropertyStoreExists@CEndpointCharacteristics@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall CEndpointCharacteristics::SetCurrentEffectPackInternal(
        struct _RTL_CRITICAL_SECTION *this,
        struct _GUID *Buf2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *p_Type; // rbx
  _QWORD *v8; // r14
  _DWORD *v9; // rcx
  _QWORD *LockSemaphore; // rax
  PROPVARIANT *v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // rcx
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+40h] [rbp-88h] BYREF
  struct _GUID *v19; // [rsp+48h] [rbp-80h] BYREF
  __int128 Buf1; // [rsp+50h] [rbp-78h] BYREF
  struct EffectPack *v21; // [rsp+60h] [rbp-68h] BYREF
  std::_Ref_count_base *v22; // [rsp+68h] [rbp-60h]
  const wchar_t *v23; // [rsp+70h] [rbp-58h] BYREF
  PROPVARIANT pvar[2]; // [rsp+78h] [rbp-50h] BYREF
  __int64 v25; // [rsp+88h] [rbp-40h]
  __int128 v26; // [rsp+90h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v4 = this + 8;
  EnterCriticalSection(this + 8);
  v18 = v4;
  p_Type = &this[9].DebugInfo->Type;
  v8 = *(_QWORD **)&this[9].LockCount;
  while ( p_Type != v8 )
  {
    std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v21, p_Type);
    Buf1 = *(_OWORD *)*((_QWORD *)v21 + 196);
    if ( !memcmp_0(&Buf1, Buf2, 0x10uLL) )
    {
      v9 = *(_DWORD **)&this[207].LockCount;
      if ( *v9 > 5u )
      {
        v23 = *(const wchar_t **)&this[1].LockCount;
        LockSemaphore = this[9].LockSemaphore;
        if ( LockSemaphore )
        {
          v26 = *(_OWORD *)LockSemaphore[196];
          v11 = (PROPVARIANT *)&v26;
        }
        else
        {
          *(GUID *)pvar = GUID_00000000_0000_0000_0000_000000000000;
          v11 = pvar;
        }
        v19 = (struct _GUID *)v11;
        *(_QWORD *)&Buf1 = Buf2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
          (int)v9,
          (int)&unk_1801ABEA0,
          v5,
          v6,
          (__int64 *)&Buf1,
          (__int64 *)&v19,
          &v23);
      }
      v12 = CEndpointCharacteristics::EnsureRwFxPropertyStoreExists((CEndpointCharacteristics *)this);
      v13 = v12;
      if ( v12 >= 0 )
      {
        *(_OWORD *)pvar = 0LL;
        v25 = 0LL;
        LOWORD(pvar[0]) = 0;
        v15 = (*(__int64 (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**(_QWORD **)&this[2].LockCount
                                                                                    + 48LL))(
                *(_QWORD *)&this[2].LockCount,
                &PKEY_AudioEndpoint_Disable_SysFx,
                pvar);
        if ( v15 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1612LL,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v15);
        PropVariantClear(pvar);
        v16 = CEndpointCharacteristics::SetCurrentEffectPackInternal(this, &v21);
        if ( v16 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1615LL,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v16);
        if ( v22 )
          std::_Ref_count_base::_Decref(v22);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x646,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v12);
        if ( v22 )
          std::_Ref_count_base::_Decref(v22);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
        return v13;
      }
    }
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    p_Type += 2;
  }
  v17 = *(_DWORD **)&this[207].LockCount;
  if ( *v17 > 5u )
  {
    *(_QWORD *)&Buf1 = *(_QWORD *)&this[1].LockCount;
    v19 = Buf2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
      (int)v17,
      (int)&unk_1801ABE48,
      v5,
      v6,
      (__int64 *)&v19,
      (const wchar_t **)&Buf1);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
  return 2147942487LL;
}
