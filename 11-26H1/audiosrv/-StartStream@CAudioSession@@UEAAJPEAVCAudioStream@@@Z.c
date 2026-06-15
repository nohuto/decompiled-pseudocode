/*
 * XREFs of ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180015E40
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180013780 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEA.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x180022E2C (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?Start@CAudioStream@@QEAAJXZ @ 0x1800857A0 (-Start@CAudioStream@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_qD @ 0x1800CFEB4 (WPP_SF_qD.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18015E640 (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::StartStream(CAudioSession *this, struct CAudioStream *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  struct CAudioStream **i; // r14
  struct CAudioStream *v7; // r14
  int updated; // eax
  DWORD LastError; // edi
  int v10; // [rsp+20h] [rbp-48h]
  void (__fastcall **v11[2])(_QWORD, void **); // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+40h] [rbp-28h]
  int v13; // [rsp+44h] [rbp-24h]
  struct CAudioStream *v14; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+80h] [rbp+18h] BYREF

  v17 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v16 = v4;
  for ( i = (struct CAudioStream **)*((_QWORD *)this + 14); ; ++i )
  {
    if ( i == *((struct CAudioStream ***)this + 15) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAD3,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)0x88890004LL,
        v10);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v16);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
      return 2290679812LL;
    }
    if ( *i == a2 )
      break;
  }
  v7 = *i;
  if ( v7 )
    (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)v7 + 8LL))(v7);
  CAudioStream::Start(v7);
  updated = CAudioStream::UpdateStreamPriority(v7);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAD8,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)updated,
      v10);
  if ( ++*((_DWORD *)this + 50) == 1 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 45LL, &WPP_ee85f21a7da73824226bb42893b0f656_Traceguids, this, 1);
    }
    if ( v4 )
    {
      LastError = GetLastError();
      LeaveCriticalSection(v4);
      SetLastError(LastError);
    }
    v4 = 0LL;
    (*(void (__fastcall **)(CAudioSession *, __int64))(*(_QWORD *)this + 56LL))(this, 1LL);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
  v11[0] = (void (__fastcall **)(_QWORD, void **))&CAudioStreamStateChanged::`vftable';
  v11[1] = (void (__fastcall **)(_QWORD, void **))this;
  v12 = 0;
  v13 = 1;
  v14 = v7;
  if ( *((_DWORD *)v7 + 76) == 1 )
    MicrosoftTelemetryAssertTriggeredArgs("AudioSrv.dll", 1LL, 1LL, 1LL);
  *((_DWORD *)v7 + 76) = 1;
  *((_QWORD *)v7 + 39) = L"CAudioSession::StartStream";
  CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::ForEachEntry(
    (LPCRITICAL_SECTION)((char *)this + 432),
    v11);
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
  (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)v7 + 16LL))(v7);
  return 0LL;
}
