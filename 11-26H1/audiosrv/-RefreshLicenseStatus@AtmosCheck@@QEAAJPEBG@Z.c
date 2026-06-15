/*
 * XREFs of ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x180156DC8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Do_call @ 0x18010CEF0 (std--_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x180037A44 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 *     ?MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z @ 0x1800397EC (-MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x18005E468 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180061260 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@34@Z @ 0x180077450 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U1@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ?UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x1800815F4 (-UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x1800AD434 (-GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV-$vector@V-$basic_string@GU-$char_traits@G@st.c)
 *     ?RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ @ 0x1800AF1F4 (-RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::RefreshLicenseStatus(AtmosCheck *this, const unsigned __int16 *a2)
{
  const unsigned __int16 *v2; // rsi
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r13d
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v12; // eax
  int CurrentEndpointsUnderLock; // eax
  bool v14; // r15
  __int64 i; // rbx
  const unsigned __int16 *v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // r12d
  bool v22; // r12
  const wchar_t *v23; // rax
  bool v24; // [rsp+40h] [rbp-49h] BYREF
  bool v25[7]; // [rsp+41h] [rbp-48h] BYREF
  __int128 v26; // [rsp+48h] [rbp-41h] BYREF
  __int64 v27; // [rsp+58h] [rbp-31h]
  const wchar_t *v28; // [rsp+60h] [rbp-29h] BYREF
  const wchar_t *v29; // [rsp+68h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+70h] [rbp-19h] BYREF
  const unsigned __int16 *v31; // [rsp+90h] [rbp+7h]
  int v32; // [rsp+98h] [rbp+Fh]
  int v33; // [rsp+9Ch] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v2 = a2;
  v4 = -1LL;
  v8 = 2;
  if ( CompareStringOrdinal(a2, -1, L"{00000000-0000-0000-0000-000000000000}", -1, 1) != 2 )
  {
    if ( *((_BYTE *)this + 96) )
    {
      if ( *((_BYTE *)this + 217) )
      {
        v12 = AtmosCheck::MapSubtypeToCommonTechIndex(this, v2);
        if ( v12 == -1 )
        {
          v9 = -2147024809;
          v10 = 2264LL;
        }
        else
        {
          if ( *((_BYTE *)this + 56 * v12 + 272) )
          {
            v26 = 0LL;
            v27 = 0LL;
            CurrentEndpointsUnderLock = AtmosCheck::GetCurrentEndpointsUnderLock((__int64)this, (__int64)&v26);
            v9 = CurrentEndpointsUnderLock;
            if ( CurrentEndpointsUnderLock >= 0 )
            {
              v14 = 0;
              for ( i = v26; i != *((_QWORD *)&v26 + 1); i += 32LL )
              {
                v24 = 0;
                v16 = (const unsigned __int16 *)i;
                if ( *(_QWORD *)(i + 24) > 7uLL )
                  v16 = *(const unsigned __int16 **)i;
                v17 = AtmosCheck::PerformLicenseCheckForSpatialAudioSubtype(this, v16, v2, &v24);
                v21 = v17;
                if ( v17 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x8E3,
                    (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
                    (const char *)(unsigned int)v17);
                  if ( (_QWORD)v26 )
                  {
                    std::_Destroy_range<std::allocator<std::wstring>>((char *)v26, *((char **)&v26 + 1));
                    std::_Deallocate<16>((void *)v26, (struct std::nothrow_t *)((v27 - v26) & 0xFFFFFFFFFFFFFFE0uLL));
                  }
                  return v21;
                }
                v22 = v24;
                if ( (unsigned int)CallbackContext > 5 )
                {
                  v23 = (const wchar_t *)i;
                  if ( *(_QWORD *)(i + 24) > 7uLL )
                    v23 = *(const wchar_t **)i;
                  v28 = v23;
                  v25[0] = v24;
                  v29 = v2;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
                    v18,
                    byte_1801AF263,
                    v19,
                    v20,
                    &v29,
                    (__int64)v25,
                    &v28,
                    (__int64)&v24);
                }
                v14 = v14 || v22;
              }
              if ( v14 )
              {
                AtmosCheck::UpdateLicenseRefreshTimer(this);
                if ( *((_QWORD *)this + 5) )
                {
                  if ( (unsigned int)CallbackContext > 5 )
                  {
                    if ( v2 )
                    {
                      do
                        ++v4;
                      while ( v2[v4] );
                      v8 = 2 * v4 + 2;
                    }
                    else
                    {
                      v2 = &LocaleName;
                    }
                    v31 = v2;
                    v32 = v8;
                    v33 = 0;
                    tlgWriteTransfer_EventWriteTransfer((__int64)&CallbackContext, byte_1801AE9B2, 0LL, 0LL, 3u, &v30);
                  }
                  (***((void (__fastcall ****)(_QWORD))this + 5))(*((_QWORD *)this + 5));
                }
              }
              if ( (_QWORD)v26 )
              {
                std::_Destroy_range<std::allocator<std::wstring>>((char *)v26, *((char **)&v26 + 1));
                std::_Deallocate<16>((void *)v26, (struct std::nothrow_t *)((v27 - v26) & 0xFFFFFFFFFFFFFFE0uLL));
              }
              return 0LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x8DD,
              (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
              (const char *)(unsigned int)CurrentEndpointsUnderLock);
            if ( (_QWORD)v26 )
            {
              std::_Destroy_range<std::allocator<std::wstring>>((char *)v26, *((char **)&v26 + 1));
              std::_Deallocate<16>((void *)v26, (struct std::nothrow_t *)((v27 - v26) & 0xFFFFFFFFFFFFFFE0uLL));
            }
            return v9;
          }
          v9 = -2147024809;
          v10 = 2265LL;
        }
      }
      else
      {
        v9 = -2147467259;
        v10 = 2259LL;
      }
    }
    else
    {
      v9 = -2147418113;
      v10 = 2258LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)v9);
    return v9;
  }
  AtmosCheck::RefreshPlatformLicenses(this, v5, v6, v7);
  return 0LL;
}
