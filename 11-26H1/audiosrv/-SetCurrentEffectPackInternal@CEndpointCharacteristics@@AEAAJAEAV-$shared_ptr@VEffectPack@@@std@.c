/*
 * XREFs of ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180091814
 * Callers:
 *     _lambda_9690ae725cbb2a29975841b6bdf2d8b3_::operator() @ 0x18013688C (_lambda_9690ae725cbb2a29975841b6bdf2d8b3_--operator().c)
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18013CD84 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U1@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@43AEBU?$_tlgWrapSz@G@@@Z @ 0x1800058D4 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U1@U-$_tlgWrapSz@G@@@-$_tlgWrite.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x18004BF24 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 *     ??4?$shared_ptr@VEffectPack@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18005E070 (--4-$shared_ptr@VEffectPack@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ @ 0x1800AEE64 (-DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateEffectPackContexts@CEndpointCharacteristics@@AEAAJPEAVEffectPack@@@Z @ 0x180137FBC (-CreateEffectPackContexts@CEndpointCharacteristics@@AEAAJPEAVEffectPack@@@Z.c)
 *     ?EnsureRwFxPropertyStoreExists@CEndpointCharacteristics@@AEAAJXZ @ 0x180138F70 (-EnsureRwFxPropertyStoreExists@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?GetLastSetEffectPack@CEndpointCharacteristics@@AEBAXAEAU_LAST_SET_EFFECTPACK_METADATA@@@Z @ 0x180139E78 (-GetLastSetEffectPack@CEndpointCharacteristics@@AEBAXAEAU_LAST_SET_EFFECTPACK_METADATA@@@Z.c)
 *     ?PersistLastSetEffectPack@CEndpointCharacteristics@@AEAAXAEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x18013B230 (-PersistLastSetEffectPack@CEndpointCharacteristics@@AEAAXAEAV-$shared_ptr@VEffectPack@@@std@@@Z.c)
 *     ?UpdateEffectPackDeviceIdInFxPropStore@CEndpointCharacteristics@@AEAAJPEAU_GUID@@IPEBG@Z @ 0x18013E6D8 (-UpdateEffectPackDeviceIdInFxPropStore@CEndpointCharacteristics@@AEAAJPEAU_GUID@@IPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::SetCurrentEffectPackInternal(
        struct _RTL_CRITICAL_SECTION *this,
        struct EffectPack **a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // r9
  __int128 *v6; // rcx
  int v7; // r14d
  unsigned int v8; // ebx
  _DWORD *v9; // r8
  _QWORD *LockSemaphore; // rax
  GUID *v11; // rax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // r14d
  const char *v15; // r9
  __int64 result; // rax
  int updated; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int EffectPackContexts; // eax
  int v23; // eax
  int v24; // [rsp+20h] [rbp-C8h]
  int v25; // [rsp+50h] [rbp-98h] BYREF
  unsigned int v26; // [rsp+54h] [rbp-94h] BYREF
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+58h] [rbp-90h] BYREF
  const wchar_t *v28; // [rsp+60h] [rbp-88h] BYREF
  GUID *v29; // [rsp+68h] [rbp-80h] BYREF
  int v30[2]; // [rsp+70h] [rbp-78h] BYREF
  __int128 Buf1; // [rsp+78h] [rbp-70h] BYREF
  __int128 Buf2; // [rsp+88h] [rbp-60h] BYREF
  _QWORD v33[2]; // [rsp+98h] [rbp-50h]
  __int128 v34; // [rsp+A8h] [rbp-40h] BYREF
  GUID v35; // [rsp+B8h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v4 = this + 8;
  EnterCriticalSection(this + 8);
  v27 = v4;
  v6 = (__int128 *)*((_QWORD *)*a2 + 196);
  v7 = *((_DWORD *)v6 + 462);
  v8 = *((_DWORD *)v6 + 463);
  v9 = *(_DWORD **)&this[207].LockCount;
  if ( *v9 > 5u )
  {
    v28 = *(const wchar_t **)&this[1].LockCount;
    LockSemaphore = this[9].LockSemaphore;
    if ( LockSemaphore )
    {
      v34 = *(_OWORD *)LockSemaphore[196];
      v11 = (GUID *)&v34;
    }
    else
    {
      v35 = GUID_00000000_0000_0000_0000_000000000000;
      v11 = &v35;
    }
    v29 = v11;
    v26 = v8;
    v25 = v7;
    Buf1 = *v6;
    *(_QWORD *)v30 = &Buf1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
      (int)v9,
      (int)&unk_1801ABDA3,
      (__int64)v9,
      v5,
      (__int64 *)v30,
      (__int64)&v25,
      (__int64)&v26,
      (__int64 *)&v29,
      &v28);
  }
  try
  {
    Buf2 = 0LL;
    v33[0] = 0LL;
    LODWORD(v33[1]) = 0;
    CEndpointCharacteristics::GetLastSetEffectPack(
      (CEndpointCharacteristics *)this,
      (struct _LAST_SET_EFFECTPACK_METADATA *)&Buf2);
    Buf1 = *(_OWORD *)*((_QWORD *)*a2 + 196);
    if ( memcmp_0(&Buf1, &Buf2, 0x10uLL)
      || v7 != LODWORD(v33[0])
      || *(_QWORD *)((char *)v33 + 4) != (v8 | 0x100000000LL) )
    {
      v12 = CEndpointCharacteristics::ClearMixFormatCache((__int64)this, 0);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x682,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v12,
          v24);
      Buf1 = *(_OWORD *)*((_QWORD *)*a2 + 196);
      if ( memcmp_0(&Buf1, &DRIVER_APO_EFFECTPACK_ID, 0x10uLL) )
      {
        v13 = CEndpointCharacteristics::EnsureRwFxPropertyStoreExists((CEndpointCharacteristics *)this);
        v14 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x688,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v13);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v27);
          return v14;
        }
        updated = CEndpointCharacteristics::UpdateEffectPackDeviceIdInFxPropStore(
                    (CEndpointCharacteristics *)this,
                    *(struct _GUID **)(*((_QWORD *)*a2 + 196) + 1320LL),
                    *(_DWORD *)(*((_QWORD *)*a2 + 196) + 1312LL),
                    (const unsigned __int16 *)(*((_QWORD *)*a2 + 196) + 544LL));
        if ( updated < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x68D,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)updated,
            v24);
        v18 = CEndpointCharacteristics::UpdateEffectPackDeviceIdInFxPropStore(
                (CEndpointCharacteristics *)this,
                *(struct _GUID **)(*((_QWORD *)*a2 + 196) + 1352LL),
                *(_DWORD *)(*((_QWORD *)*a2 + 196) + 1344LL),
                (const unsigned __int16 *)(*((_QWORD *)*a2 + 196) + 544LL));
        if ( v18 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x690,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v18,
            v24);
        v19 = CEndpointCharacteristics::UpdateEffectPackDeviceIdInFxPropStore(
                (CEndpointCharacteristics *)this,
                *(struct _GUID **)(*((_QWORD *)*a2 + 196) + 1384LL),
                *(_DWORD *)(*((_QWORD *)*a2 + 196) + 1376LL),
                (const unsigned __int16 *)(*((_QWORD *)*a2 + 196) + 544LL));
        if ( v19 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x693,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v19,
            v24);
        v20 = CEndpointCharacteristics::UpdateEffectPackDeviceIdInFxPropStore(
                (CEndpointCharacteristics *)this,
                *(struct _GUID **)(*((_QWORD *)*a2 + 196) + 1416LL),
                *(_DWORD *)(*((_QWORD *)*a2 + 196) + 1408LL),
                (const unsigned __int16 *)(*((_QWORD *)*a2 + 196) + 544LL));
        if ( v20 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x697,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v20,
            v24);
        v21 = CEndpointCharacteristics::UpdateEffectPackDeviceIdInFxPropStore(
                (CEndpointCharacteristics *)this,
                *(struct _GUID **)(*((_QWORD *)*a2 + 196) + 1448LL),
                *(_DWORD *)(*((_QWORD *)*a2 + 196) + 1440LL),
                (const unsigned __int16 *)(*((_QWORD *)*a2 + 196) + 544LL));
        if ( v21 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x69A,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v21,
            v24);
        EffectPackContexts = CEndpointCharacteristics::CreateEffectPackContexts((CEndpointCharacteristics *)this, *a2);
        if ( EffectPackContexts < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x69D,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)EffectPackContexts,
            v24);
      }
    }
    v23 = EffectPack::DeriveEffectiveConnectorAndEffectPackCapabilities(*a2);
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6A2,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v23,
        v24);
    std::shared_ptr<EffectPack>::operator=(&this[9].LockSemaphore, a2);
    CEndpointCharacteristics::PersistLastSetEffectPack(this, a2);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)g_policyConfigInternal + 56LL))(
      g_policyConfigInternal,
      *(_QWORD *)&this[1].LockCount);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v27);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6AD,
                           (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                           v15);
  }
  return result;
}
