/*
 * XREFs of ?GetCompatibleMulticastProvider@CMulticastSessionManager@@AEAAJAEAV?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIMulticastProvider@@@Z @ 0x180107750
 * Callers:
 *     ?ActivateMulticastSession@CMulticastSessionManager@@QEAAJPEAPEBGIAEBU_GUID@@@Z @ 0x1801074AC (-ActivateMulticastSession@CMulticastSessionManager@@QEAAJPEAPEBGIAEBU_GUID@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector@U_Loop_vals_t@std@@V?$allocator@U_Loop_vals_t@std@@@2@@std@@QEAA@XZ @ 0x180086C7C (--1-$vector@U_Loop_vals_t@std@@V-$allocator@U_Loop_vals_t@std@@@2@@std@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioPumpDspResourceTrackerToken@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800AE644 (--1-$com_ptr_t@UIAudioPumpDspResourceTrackerToken@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBU_GUID@@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAPEAU_GUID@@QEAU2@AEBU2@@Z @ 0x1800D3D28 (--$_Emplace_reallocate@AEBU_GUID@@@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAPEAU_GU.c)
 *     _lambda_29cbe834aaff6b3962c1372fb6672b17_::operator() @ 0x180107438 (_lambda_29cbe834aaff6b3962c1372fb6672b17_--operator().c)
 *     ?GetMulticastProvider@CMulticastSessionManager@@AEAAJAEBU_GUID@@PEAPEAUIMulticastProvider@@@Z @ 0x180107CF0 (-GetMulticastProvider@CMulticastSessionManager@@AEAAJAEBU_GUID@@PEAPEAUIMulticastProvider@@@Z.c)
 *     ?GetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18013A130 (-GetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall CMulticastSessionManager::GetCompatibleMulticastProvider(
        CMulticastSessionManager *a1,
        __int64 *a2,
        struct IMulticastProvider **a3)
{
  unsigned int v5; // r15d
  __int64 v6; // rbx
  const struct _GUID *v7; // r14
  __int64 v8; // rcx
  int PropertyStoreProperty; // eax
  unsigned int v10; // edi
  unsigned int i; // edi
  HRESULT v13; // eax
  unsigned int v14; // esi
  struct _GUID *v15; // r9
  bool v16; // zf
  struct _GUID *j; // rdx
  struct _GUID *v18; // rdx
  int MulticastProvider; // eax
  unsigned int v20; // ebx
  struct IMulticastProvider *v21; // rbx
  struct IMulticastProvider *v22; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v23; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+38h] [rbp-90h]
  __m128i v25; // [rsp+40h] [rbp-88h] BYREF
  __int64 v26; // [rsp+50h] [rbp-78h]
  struct tagPROPVARIANT pvar; // [rsp+58h] [rbp-70h] BYREF
  CMulticastSessionManager *v28; // [rsp+70h] [rbp-58h]
  GUID pclsid; // [rsp+78h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v28 = a1;
  v25 = 0LL;
  v26 = 0LL;
  v5 = 0;
  v6 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  v7 = 0LL;
  while ( 1 )
  {
    v8 = *a2;
    if ( v5 >= (unsigned __int64)((a2[1] - *a2) >> 3) )
      break;
    memset(&pvar, 0, sizeof(pvar));
    PropertyStoreProperty = CEndpointCharacteristics::GetPropertyStoreProperty(
                              *(CEndpointCharacteristics **)(v8 + 8LL * v5),
                              &PKEY_Multicast_CompatibleProviders,
                              &pvar);
    v10 = PropertyStoreProperty;
    if ( PropertyStoreProperty < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18C,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
        (const char *)(unsigned int)PropertyStoreProperty);
      PropVariantClear((PROPVARIANT *)&pvar);
      std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>((__int64)&v25);
      return v10;
    }
    if ( pvar.vt == 4127 )
    {
      v23 = 0LL;
      v24 = 0LL;
      for ( i = 0; i < pvar.lVal; ++i )
      {
        pclsid = 0LL;
        v13 = CLSIDFromString(*(LPCOLESTR *)&pvar.bstrblobVal.pData[8 * i], &pclsid);
        v14 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x193,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
            (const char *)(unsigned int)v13);
          std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>((__int64)&v23);
          PropVariantClear((PROPVARIANT *)&pvar);
          std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>((__int64)&v25);
          return v14;
        }
        if ( v23.m128i_i64[1] == v24 )
        {
          std::vector<_GUID>::_Emplace_reallocate<_GUID const &>(&v23, v23.m128i_i64[1], (__int128 *)&pclsid);
        }
        else
        {
          *(GUID *)v23.m128i_i64[1] = pclsid;
          v23.m128i_i64[1] += 16LL;
        }
      }
      if ( v5 )
      {
        *(_QWORD *)&pclsid.Data1 = &v23;
        v22 = (struct IMulticastProvider *)&v23;
        v15 = (struct _GUID *)v7;
        if ( v7 != (const struct _GUID *)v6 )
        {
          do
          {
            if ( lambda_29cbe834aaff6b3962c1372fb6672b17_::operator()((_QWORD **)&v22, v15) )
              break;
            ++v15;
          }
          while ( v15 != (struct _GUID *)v6 );
        }
        v16 = v15 == (struct _GUID *)v6;
        if ( v15 != (struct _GUID *)v6 )
        {
          for ( j = v15 + 1; j != (struct _GUID *)v6; j = v18 + 1 )
          {
            if ( !lambda_29cbe834aaff6b3962c1372fb6672b17_::operator()(&pclsid, j) )
              *v15++ = *v18;
          }
          v16 = v15 == (struct _GUID *)v6;
        }
        if ( !v16 )
          v6 = (__int64)v15;
        v25.m128i_i64[1] = v6;
      }
      else
      {
        std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>((__int64)&v25);
        v25 = v23;
        v26 = v24;
        v23 = 0LL;
        v24 = 0LL;
        v6 = _mm_srli_si128(v25, 8).m128i_u64[0];
        v7 = (const struct _GUID *)v25.m128i_i64[0];
      }
      std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>((__int64)&v23);
    }
    if ( v7 == (const struct _GUID *)v6 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AB,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
        (const char *)0x80070490LL);
      PropVariantClear((PROPVARIANT *)&pvar);
      std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>((__int64)&v25);
      return 2147943568LL;
    }
    PropVariantClear((PROPVARIANT *)&pvar);
    ++v5;
  }
  if ( v6 - (_QWORD)v7 == 16 )
  {
    v22 = 0LL;
    MulticastProvider = CMulticastSessionManager::GetMulticastProvider(v28, v7, &v22);
    v20 = MulticastProvider;
    if ( MulticastProvider >= 0 )
    {
      v21 = v22;
      if ( (*(unsigned __int8 (__fastcall **)(struct IMulticastProvider *))(*(_QWORD *)v22 + 24LL))(v22) )
      {
        v22 = 0LL;
        *a3 = v21;
        wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>((__int64 *)&v22);
        std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>((__int64)&v25);
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1B7,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
          (const char *)0x80070490LL);
        wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>((__int64 *)&v22);
        std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>((__int64)&v25);
        return 2147943568LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B6,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
        (const char *)(unsigned int)MulticastProvider);
      wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>((__int64 *)&v22);
      std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>((__int64)&v25);
      return v20;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B2,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
      (const char *)0x80004001LL);
    std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>((__int64)&v25);
    return 2147500033LL;
  }
}
