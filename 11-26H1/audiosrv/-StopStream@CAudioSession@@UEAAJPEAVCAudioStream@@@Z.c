/*
 * XREFs of ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18007E0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180013780 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEA.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x180022E2C (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800677F8 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x180067C64 (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     ?Stop@CAudioStream@@QEAAJXZ @ 0x18007E338 (-Stop@CAudioStream@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_ @ 0x1800CC908 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::StopStream(CAudioSession *this, struct CAudioStream *a2)
{
  struct CAudioStream *v4; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  struct CAudioStream **i; // rax
  bool v7; // zf
  int updated; // eax
  __int64 *j; // rdx
  int v10; // eax
  void (__fastcall ***v11)(_QWORD, void **); // rax
  int v13; // [rsp+20h] [rbp-58h]
  _BYTE v14[72]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  CAudioStream *v16; // [rsp+90h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0LL;
  v16 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  for ( i = (struct CAudioStream **)*((_QWORD *)this + 14); i != *((struct CAudioStream ***)this + 15); ++i )
  {
    if ( *i == a2 )
    {
      v4 = *i;
      v16 = v4;
      if ( v4 )
        (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)v4 + 8LL))(v4);
      CAudioStream::Stop(v4);
      v7 = (*((_DWORD *)this + 50))-- == 1;
      if ( v7 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 46LL, &WPP_ee85f21a7da73824226bb42893b0f656_Traceguids, 0LL);
        }
        (*(void (__fastcall **)(CAudioSession *, _QWORD))(*(_QWORD *)this + 56LL))(this, 0LL);
      }
      updated = CAudioStream::UpdateStreamPriority(v4);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB1F,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)updated,
          v13);
      break;
    }
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  if ( v4 )
    goto LABEL_37;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  v17 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 136);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_ee85f21a7da73824226bb42893b0f656_Traceguids);
  }
  for ( j = (__int64 *)*((_QWORD *)this + 22); j != *((__int64 **)this + 23); ++j )
  {
    if ( (struct CAudioStream *)*j == a2 )
    {
      wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=((__int64 *)&v16, j);
      v4 = v16;
      CAudioStream::Stop(v16);
      v7 = (*((_DWORD *)this + 50))-- == 1;
      if ( v7 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 48LL, &WPP_ee85f21a7da73824226bb42893b0f656_Traceguids, 0LL);
        }
        (*(void (__fastcall **)(CAudioSession *, _QWORD))(*(_QWORD *)this + 56LL))(this, 0LL);
      }
      v10 = CAudioStream::UpdateStreamPriority(v4);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB47,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)v10,
          v13);
      break;
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v17);
  if ( v4 )
  {
LABEL_37:
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v11 = (void (__fastcall ***)(_QWORD, void **))CAudioStreamStateChanged::CAudioStreamStateChanged(
                                                    (__int64)v14,
                                                    (__int64)this,
                                                    1,
                                                    0,
                                                    (__int64)v4,
                                                    (__int64)L"CAudioSession::StopStream");
    CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::ForEachEntry(
      (LPCRITICAL_SECTION)((char *)this + 432),
      v11);
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
  }
  if ( v4 )
    (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)v4 + 16LL))(v4);
  return 0LL;
}
