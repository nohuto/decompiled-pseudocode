/*
 * XREFs of ?OnHoloshellStateChange@CExclusiveModeListener@@AEAAXW4ShellState@Holographic@Shell@Internal@Windows@@@Z @ 0x180151588
 * Callers:
 *     wistd::__function::__func__lambda_c92775e2c8766fb845a39d8dc79764fd__void___cdecl(enum_Windows::Internal::Shell::Holographic::ShellState_const_&)_::operator() @ 0x180150BA0 (wistd--__function--__func__lambda_c92775e2c8766fb845a39d8dc79764fd__void___cdecl(en_ea_180150BA0.c)
 *     ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJPEBU_tlgProvider_t@@_N@Z @ 0x180151C00 (-RuntimeClassInitialize@CExclusiveModeListener@@QEAAJPEBU_tlgProvider_t@@_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180007978 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x1800079F4 (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@_ea_1800079F4.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18006D7F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAgileCallbackNoThrow@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@PEAVCExclusiveModeListener@@P84@EAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@3@PEAUIHolographicDisplay@783@@Z@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@@WRL@Microsoft@@$$QEAPEAVCExclusiveModeListener@@$$QEAP84@EAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@789@@Z@Z @ 0x1801500DC (--$MakeAgileCallbackNoThrow@U-$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Hologra.c)
 *     ?OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x180151000 (-OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Gra.c)
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x1801521CC (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall CExclusiveModeListener::OnHoloshellStateChange(__int64 a1, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r15
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  char v8; // r12
  char v9; // di
  __int64 v10; // rcx
  _DWORD *v11; // r8
  int ActivationFactory; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher **); // r14
  struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rdi
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  __int64 v26; // rdx
  struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *v27; // rcx
  int v28; // eax
  int v29; // eax
  _DWORD *v30; // rcx
  int updated; // eax
  __int64 v32; // r14
  int v33; // [rsp+38h] [rbp-59h] BYREF
  struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *v34; // [rsp+40h] [rbp-51h] BYREF
  char v35[8]; // [rsp+48h] [rbp-49h] BYREF
  struct Windows::Graphics::Holographic::IHolographicDisplay *v36; // [rsp+50h] [rbp-41h] BYREF
  __int64 *v37; // [rsp+58h] [rbp-39h] BYREF
  __int64 v38; // [rsp+60h] [rbp-31h] BYREF
  __int128 v39; // [rsp+68h] [rbp-29h] BYREF
  int v40[4]; // [rsp+78h] [rbp-19h] BYREF
  struct _RTL_CRITICAL_SECTION *v41; // [rsp+88h] [rbp-9h]
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp+7h] BYREF
  __int64 v43; // [rsp+B0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  LODWORD(v36) = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 80);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
  v41 = v4;
  v7 = 2;
  if ( a2 <= 2 || a2 == 5 )
  {
    v9 = 1;
    v8 = 1;
  }
  else
  {
    v8 = 0;
    v9 = 1;
    v7 = 1;
  }
  *(_DWORD *)(a1 + 176) = v7;
  if ( v8 && !*(_QWORD *)(a1 + 72) )
  {
    v10 = 0LL;
    v37 = 0LL;
    v34 = 0LL;
    v11 = *(_DWORD **)(a1 + 352);
    if ( *v11 > 4u )
    {
      v35[0] = v8;
      LOBYTE(v33) = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        (int)v11,
        (int)&unk_1801AE7EE,
        (__int64)v11,
        v6,
        (__int64)&v33,
        (__int64)v35);
      v10 = (__int64)v37;
    }
    v37 = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v43 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Graphics.Holographic.HolographicDisplay",
      0x30u,
      0x2Fu);
    LODWORD(v36) = 1;
    ActivationFactory = RoGetActivationFactory(v43, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, &v37);
    v13 = retaddr;
    if ( ActivationFactory >= 0 )
    {
      v15 = (__int64)v37;
      v16 = *(__int64 (__fastcall **)(__int64, struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher **))(*v37 + 48);
      v17 = v34;
      v34 = 0LL;
      if ( v17 )
        (*(void (__fastcall **)(struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *))(*(_QWORD *)v17 + 16LL))(v17);
      ActivationFactory = v16(v15, &v34);
      v13 = retaddr;
      if ( ActivationFactory >= 0 )
      {
LABEL_18:
        if ( !v9 )
        {
LABEL_45:
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v34);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v37);
          goto LABEL_46;
        }
        v36 = 0LL;
        v18 = *v37;
        v36 = 0LL;
        v19 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Graphics::Holographic::IHolographicDisplay **))(v18 + 64))(
                v37,
                &v36);
        v20 = retaddr;
        if ( v19 >= 0 )
        {
          if ( !v36
            || (v19 = CExclusiveModeListener::OnHmdAdded((CExclusiveModeListener *)a1, v34, v36), v20 = retaddr,
                                                                                                  v19 >= 0) )
          {
LABEL_25:
            *(_QWORD *)v40 = CExclusiveModeListener::OnHmdAdded;
            v40[2] = 0;
            v39 = *(_OWORD *)v40;
            v38 = a1;
            wil::MakeAgileCallbackNoThrow<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>,CExclusiveModeListener *,long (CExclusiveModeListener::*)(Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,Windows::Graphics::Holographic::IHolographicDisplay *)>(
              (__int64 *)v40,
              &v38,
              &v39);
            *(_QWORD *)&v39 = CExclusiveModeListener::OnHmdRemoved;
            DWORD2(v39) = 0;
            *(_OWORD *)&hstringHeader.Reserved.Reserved1 = v39;
            v38 = a1;
            wil::MakeAgileCallbackNoThrow<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>,CExclusiveModeListener *,long (CExclusiveModeListener::*)(Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,Windows::Graphics::Holographic::IHolographicDisplay *)>(
              (__int64 *)&v39,
              &v38,
              (__int128 *)&hstringHeader);
            v22 = v39;
            v23 = *(_QWORD *)v40;
            if ( *(_QWORD *)v40 && (_QWORD)v39 )
            {
              v24 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *, _QWORD, __int64))(*(_QWORD *)v34 + 56LL))(
                      v34,
                      *(_QWORD *)v40,
                      a1 + 120);
              v25 = retaddr;
              if ( v24 >= 0 )
              {
                v24 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *, __int64, __int64))(*(_QWORD *)v34 + 72LL))(
                        v34,
                        v22,
                        a1 + 128);
                v25 = retaddr;
                if ( v24 >= 0 )
                {
                  v24 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *))(*(_QWORD *)v34 + 120LL))(v34);
                  v25 = retaddr;
                  if ( v24 >= 0 )
                  {
                    v32 = *(_QWORD *)(a1 + 72);
                    v27 = v34;
                    *(_QWORD *)(a1 + 72) = v34;
                    if ( v27 )
                    {
                      (*(void (__fastcall **)(struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *))(*(_QWORD *)v27 + 8LL))(v27);
                      v27 = v34;
                    }
                    if ( v32 )
                    {
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
                      v27 = v34;
                    }
                    goto LABEL_31;
                  }
                  v26 = 297LL;
                }
                else
                {
                  v26 = 296LL;
                }
              }
              else
              {
                v26 = 295LL;
              }
              wil::details::in1diag3::_Log_Hr(
                v25,
                v26,
                (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\exclusivemodelistener.cpp",
                (const char *)(unsigned int)v24);
            }
            v27 = v34;
LABEL_31:
            if ( !*(_QWORD *)(a1 + 72) )
            {
              if ( *(_QWORD *)(a1 + 120) )
              {
                v28 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *))(*(_QWORD *)v27 + 64LL))(v27);
                if ( v28 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    307LL,
                    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\exclusivemodelistener.cpp",
                    (const char *)(unsigned int)v28);
                *(_QWORD *)(a1 + 120) = 0LL;
                v27 = v34;
              }
              if ( *(_QWORD *)(a1 + 128) )
              {
                v29 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *))(*(_QWORD *)v27 + 80LL))(v27);
                if ( v29 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    313LL,
                    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\exclusivemodelistener.cpp",
                    (const char *)(unsigned int)v29);
                *(_QWORD *)(a1 + 128) = 0LL;
              }
            }
            if ( v22 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
            if ( v23 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v36);
            goto LABEL_45;
          }
          v21 = 289LL;
        }
        else
        {
          v21 = 287LL;
        }
        wil::details::in1diag3::_Log_Hr(
          v20,
          v21,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\exclusivemodelistener.cpp",
          (const char *)(unsigned int)v19);
        goto LABEL_25;
      }
      v14 = 283LL;
    }
    else
    {
      v14 = 282LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v13,
      v14,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\exclusivemodelistener.cpp",
      (const char *)(unsigned int)ActivationFactory);
    v9 = 0;
    goto LABEL_18;
  }
LABEL_46:
  v30 = *(_DWORD **)(a1 + 352);
  if ( *v30 > 5u )
  {
    LOBYTE(v33) = v8;
    *(_QWORD *)v40 = a1 + 136;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<1>>(
      (int)v30,
      (int)&unk_1801AE74E,
      v5,
      v6,
      v40,
      (__int64)&v33);
  }
  updated = CExclusiveModeListener::UpdateExclusiveViewingMode((CExclusiveModeListener *)a1);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      326LL,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\exclusivemodelistener.cpp",
      (const char *)(unsigned int)updated);
  if ( v4 )
    LeaveCriticalSection(v4);
}
