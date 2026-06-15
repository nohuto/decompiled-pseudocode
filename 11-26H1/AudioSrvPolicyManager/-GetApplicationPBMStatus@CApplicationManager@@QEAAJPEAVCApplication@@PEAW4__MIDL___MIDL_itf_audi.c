/*
 * XREFs of ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x180011710
 * Callers:
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18000F768 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18000FDB0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180010540 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x180039D58 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$swprintf_s@$0CA@@@YAHAEAY0CA@GPEBGZZ @ 0x1800120D0 (--$swprintf_s@$0CA@@@YAHAEAY0CA@GPEBGZZ.c)
 *     ?IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800125C0 (-IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x180012930 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180014990 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800162C0 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x18002BF3C (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 *     ?IsMutedForSleep@CApplication@@QEAAHXZ @ 0x18002BFD0 (-IsMutedForSleep@CApplication@@QEAAHXZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x18002DAB8 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x18002DB40 (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     atexit @ 0x18002FCC4 (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x180037AB8 (--1Completer@-$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ @ 0x18003BEC4 (-IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::GetApplicationPBMStatus(
        CApplicationManager *this,
        struct CApplication *a2,
        enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *a3,
        enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *a4,
        enum _PLM_EXEMPTION *a5)
{
  struct _RTL_CRITICAL_SECTION *v8; // r15
  int v9; // esi
  int v10; // edi
  __int64 v11; // rcx
  int v13; // r14d
  _QWORD *v14; // r15
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  int v17; // r8d
  int *v18; // rax
  int *v19; // r9
  int *v20; // rcx
  int v21; // r14d
  _QWORD *v22; // rdx
  int v23; // r14d
  _QWORD *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // r14d
  _QWORD *v28; // rdx
  const wchar_t *v29; // rdi
  const wchar_t *v30; // r9
  const wchar_t *v31; // r14
  const wchar_t *v32; // r8
  const wchar_t *v33; // r9
  int v34; // eax
  const wchar_t *v35; // r8
  __int64 v36; // r10
  _BYTE *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // eax
  int v43; // esi
  __int64 v44; // r8
  __int64 v45; // rcx
  LPVOID Context; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending[2]; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  struct _RTL_CRITICAL_SECTION *v49; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  void *v51; // [rsp+70h] [rbp-90h]
  int v52; // [rsp+78h] [rbp-88h]
  int v53; // [rsp+7Ch] [rbp-84h]
  _BYTE *v54; // [rsp+80h] [rbp-80h]
  int v55; // [rsp+88h] [rbp-78h]
  int v56; // [rsp+8Ch] [rbp-74h]
  struct _RTL_CRITICAL_SECTION **v57; // [rsp+90h] [rbp-70h]
  __int64 v58; // [rsp+98h] [rbp-68h]
  WINBOOL *v59; // [rsp+A0h] [rbp-60h]
  __int64 v60; // [rsp+A8h] [rbp-58h]
  _WORD *v61; // [rsp+B0h] [rbp-50h]
  int v62; // [rsp+B8h] [rbp-48h]
  int v63; // [rsp+BCh] [rbp-44h]
  _WORD *v64; // [rsp+C0h] [rbp-40h]
  int v65; // [rsp+C8h] [rbp-38h]
  int v66; // [rsp+CCh] [rbp-34h]
  _WORD *v67; // [rsp+D0h] [rbp-30h]
  int v68; // [rsp+D8h] [rbp-28h]
  int v69; // [rsp+DCh] [rbp-24h]
  _WORD v70[32]; // [rsp+E0h] [rbp-20h] BYREF
  _WORD v71[32]; // [rsp+120h] [rbp+20h] BYREF
  _WORD v72[32]; // [rsp+160h] [rbp+60h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  *(_QWORD *)fPending = (char *)this + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v49 = v8;
  EnterCriticalSection(v8);
  Context = v8;
  if ( !*((_DWORD *)a2 + 158) )
  {
    if ( *((_DWORD *)a2 + 52) )
    {
      if ( !v8 )
        goto LABEL_66;
    }
    else
    {
      if ( (unsigned int)CApplication::IsMutedForSleep(a2) )
        goto LABEL_128;
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
      v23 = 0;
      v24 = (_QWORD *)*((_QWORD *)a2 + 9);
      while ( v24 )
      {
        v25 = v24[2];
        v24 = (_QWORD *)*v24;
        if ( !*(_DWORD *)(v25 + 416) )
        {
          v26 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 - *(_QWORD *)(v25 + 520);
          if ( *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 == *(_QWORD *)(v25 + 520) )
            v26 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 - *(_QWORD *)(v25 + 528);
          if ( v26 )
          {
            v23 = 1;
            break;
          }
        }
      }
      if ( a2 != (struct CApplication *)-32LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
      if ( v23
        || (unsigned int)CApplication::IsUnrestrictedBackgroundAudioCapable(a2)
        && (CApplication::GetTotalActiveRenderStreamCount(a2)
         || (unsigned int)CApplication::IsInPlmSponsoredGracePeriod(a2)) )
      {
        goto LABEL_135;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
      v27 = 0;
      v28 = (_QWORD *)*((_QWORD *)a2 + 9);
      while ( v28 )
      {
        v45 = v28[2];
        v28 = (_QWORD *)*v28;
        if ( !*(_DWORD *)(v45 + 416) && *(_DWORD *)(v45 + 440) )
        {
          v27 = 1;
          break;
        }
      }
      if ( a2 != (struct CApplication *)-32LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
      if ( v27
        && (CApplication::GetTotalActiveCaptureStreamCount(a2)
         || (unsigned int)CApplication::IsInPlmSponsoredGracePeriod(a2)) )
      {
LABEL_135:
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&Context);
        goto LABEL_66;
      }
      if ( !dword_180056608[(int)CApplication::Category(a2)] )
      {
LABEL_128:
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&Context);
        v9 = 0;
        goto LABEL_4;
      }
      if ( (unsigned int)CApplication::HasDuckedStream(a2) )
      {
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&Context);
        v9 = 1;
        goto LABEL_4;
      }
      if ( !v8 )
      {
LABEL_66:
        v9 = 2;
        goto LABEL_4;
      }
    }
    LeaveCriticalSection(v8);
    goto LABEL_66;
  }
  v9 = *((_DWORD *)a2 + 159);
  if ( v8 )
    LeaveCriticalSection(v8);
LABEL_4:
  if ( a3 )
    *(_DWORD *)a3 = v9;
  if ( a4 )
  {
    if ( *((_DWORD *)a2 + 156) )
      *(_DWORD *)a4 = *((_DWORD *)a2 + 157);
    else
      *(_DWORD *)a4 = v9;
  }
  if ( a5 )
  {
    EnterCriticalSection(v8);
    if ( *((_DWORD *)a2 + 160) )
    {
      v10 = *((_DWORD *)a2 + 161);
    }
    else
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
      v13 = 4;
      v14 = (_QWORD *)((char *)a2 + 72);
      if ( *((_DWORD *)a2 + 153) )
      {
        v13 = *((_DWORD *)a2 + 154);
      }
      else
      {
        v15 = (_QWORD *)*v14;
        if ( *v14 )
        {
          do
          {
            v16 = v15[2];
            v15 = (_QWORD *)*v15;
            if ( !*(_DWORD *)(v16 + 416) || *(_QWORD *)(v16 + 360) )
            {
              v17 = *(_DWORD *)(v16 + 480);
              v18 = (int *)(v17 ? v16 + 484 : v16 + 312);
              v19 = (int *)(v16 + 484);
              v20 = (int *)(v16 + 312);
              if ( *v18 < v13 )
              {
                if ( !v17 )
                  v19 = v20;
                v13 = *v19;
              }
            }
          }
          while ( v15 );
        }
      }
      if ( a2 != (struct CApplication *)-32LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
      if ( dword_180056608[v13] && (unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(a2) )
      {
        v10 = 2;
      }
      else
      {
        if ( v9 )
        {
          if ( (unsigned int)CApplication::IsUnrestrictedBackgroundAudioCapable(a2)
            && !(unsigned int)CApplication::HasBackgroundAudioTask(a2) )
          {
            goto LABEL_124;
          }
          EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
          v21 = 0;
          v22 = (_QWORD *)*v14;
          while ( v22 )
          {
            v44 = v22[2];
            v22 = (_QWORD *)*v22;
            if ( !*(_DWORD *)(v44 + 416) && *(_DWORD *)(v44 + 440) )
            {
              v21 = 1;
              break;
            }
          }
          if ( a2 != (struct CApplication *)-32LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
          if ( v21 )
          {
LABEL_124:
            v10 = 2;
            v8 = *(struct _RTL_CRITICAL_SECTION **)fPending;
            goto LABEL_10;
          }
        }
        v10 = 1;
      }
      v8 = *(struct _RTL_CRITICAL_SECTION **)fPending;
    }
LABEL_10:
    if ( v8 )
      LeaveCriticalSection(v8);
    *(_DWORD *)a5 = v10;
  }
  Context = 0LL;
  fPending[0] = 0;
  if ( InitOnceBeginInitialize(&`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    *(_QWORD *)&EventDescriptor.Id = &`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1800688A0;
    qword_1800688A8 = 0LL;
    byte_1800688B0 = 0;
    dword_1800688B4 = 0;
    qword_1800688A0 = (__int64)&AudioSrvPolicyManagerTelemetryProvider::`vftable';
    qword_1800688B8 = (__int64)&`AudioSrvPolicyManagerTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f2e7b9994f24091cfba2638cd640fd9f_::_lambda_invoker_cdecl_);
    LODWORD(EventDescriptor.Keyword) = 0;
    wil::details::static_lazy<AudioSrvPolicyManagerTelemetryProvider>::Completer::~Completer(&EventDescriptor);
  }
  v11 = *((_QWORD *)Context + 1);
  if ( v11
    && *(_DWORD *)v11 > 5u
    && (*(_DWORD *)(v11 + 16) & 0x10000) != 0
    && (*(_QWORD *)(v11 + 24) & 0x10000LL) == *(_QWORD *)(v11 + 24) )
  {
    v29 = L"(override)";
    v30 = L"(override)";
    if ( !*((_DWORD *)a2 + 158) )
      v30 = (const wchar_t *)byte_180056CEC;
    v31 = L"Unknown level";
    if ( v9 )
    {
      v43 = v9 - 1;
      if ( v43 )
      {
        if ( v43 == 1 )
          v32 = L"SNDLVL_Full";
        else
          v32 = L"Unknown level";
      }
      else
      {
        v32 = L"SNDLVL_Low";
      }
    }
    else
    {
      v32 = L"SNDLVL_Muted";
    }
    swprintf_s<32>(v72, L"%s%s", v32, v30);
    v33 = L"(override)";
    if ( !*((_DWORD *)a2 + 156) )
      v33 = (const wchar_t *)byte_180056CEC;
    if ( a4 )
    {
      if ( *(_DWORD *)a4 )
      {
        if ( *(_DWORD *)a4 == 1 )
        {
          v31 = L"SNDLVL_Low";
        }
        else if ( *(_DWORD *)a4 == 2 )
        {
          v31 = L"SNDLVL_Full";
        }
      }
      else
      {
        v31 = L"SNDLVL_Muted";
      }
    }
    else
    {
      v31 = L"Not computed";
    }
    swprintf_s<32>(v71, L"%s%s", v31, v33);
    if ( !*((_DWORD *)a2 + 160) )
      v29 = (const wchar_t *)byte_180056CEC;
    if ( a5 )
    {
      v34 = *(_DWORD *)a5;
      if ( *(_DWORD *)a5 == 1 )
      {
        v35 = L"No";
      }
      else if ( v34 )
      {
        if ( v34 == 2 )
          v35 = L"Yes";
        else
          v35 = L"Unknown";
      }
      else
      {
        v35 = L"Invalid";
      }
    }
    else
    {
      v35 = L"Not computed";
    }
    swprintf_s<32>(v70, L"%s%s", v35, v29);
    Context = 0LL;
    fPending[0] = 0;
    if ( InitOnceBeginInitialize(
           &`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper,
           0,
           fPending,
           &Context)
      && fPending[0] )
    {
      *(_QWORD *)&EventDescriptor.Id = &`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper;
      Context = &qword_1800688A0;
      qword_1800688A8 = 0LL;
      byte_1800688B0 = 0;
      dword_1800688B4 = 0;
      qword_1800688A0 = (__int64)&AudioSrvPolicyManagerTelemetryProvider::`vftable';
      qword_1800688B8 = (__int64)&`AudioSrvPolicyManagerTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f2e7b9994f24091cfba2638cd640fd9f_::_lambda_invoker_cdecl_);
      LODWORD(EventDescriptor.Keyword) = 0;
      wil::details::static_lazy<AudioSrvPolicyManagerTelemetryProvider>::Completer::~Completer(&EventDescriptor);
    }
    v36 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v36 > 5u
      && (*(_DWORD *)(v36 + 16) & 0x10000) != 0
      && (*(_QWORD *)(v36 + 24) & 0x10000LL) == *(_QWORD *)(v36 + 24) )
    {
      fPending[0] = *((_DWORD *)a2 + 53);
      v49 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)a2 + 87);
      v37 = (_BYTE *)*((_QWORD *)a2 + 3);
      v38 = -1LL;
      v39 = -1LL;
      do
        ++v39;
      while ( v70[v39] );
      v67 = v70;
      v68 = 2 * v39 + 2;
      v69 = 0;
      v40 = -1LL;
      do
        ++v40;
      while ( v71[v40] );
      v64 = v71;
      v65 = 2 * v40 + 2;
      v66 = 0;
      v41 = -1LL;
      do
        ++v41;
      while ( v72[v41] );
      v61 = v72;
      v62 = 2 * v41 + 2;
      v63 = 0;
      v59 = fPending;
      v60 = 4LL;
      v57 = &v49;
      v58 = 8LL;
      if ( v37 )
      {
        do
          ++v38;
        while ( *(_WORD *)&v37[2 * v38] );
        v42 = 2 * v38 + 2;
      }
      else
      {
        v37 = byte_180056CEC;
        v42 = 2;
      }
      v54 = v37;
      v55 = v42;
      v56 = 0;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 5;
      EventDescriptor.Keyword = 0x10000LL;
      UserData.Ptr = *(_QWORD *)(v36 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v51 = &unk_18005ABA9;
      v52 = 108;
      v53 = 1;
      LODWORD(Context) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v36 + 32), &EventDescriptor, 0LL, 0LL, 8u, &UserData);
    }
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}
