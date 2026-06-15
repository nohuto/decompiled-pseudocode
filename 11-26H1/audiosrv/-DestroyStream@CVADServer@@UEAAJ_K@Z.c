/*
 * XREFs of ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180064650
 * Callers:
 *     AudioServerDestroyStream @ 0x180064490 (AudioServerDestroyStream.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x18001C520 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ??4?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001C7DC (--4-$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV0.c)
 *     ?reset@?$shared_ptr@VCPowerReference@@@std@@QEAAXXZ @ 0x1800463BC (-reset@-$shared_ptr@VCPowerReference@@@std@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800584C0 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x18006645C (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVADServer::DestroyStream(CVADServer *this, unsigned __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rdx
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // esi
  std::_Ref_count_base *v9; // rcx
  std::_Ref_count_base *v11[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct CAudioStream *v13; // [rsp+50h] [rbp+20h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+60h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+68h] [rbp+38h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  v13 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
  v14 = v2;
  *(_OWORD *)v11 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)this + 11);
  v15 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 440);
  std::shared_ptr<std::function<void (void)>>::operator=(v11, (__int64 *)this + 60);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v15);
  std::shared_ptr<CPowerReference>::reset(v11);
  if ( !*((_DWORD *)this + 40) )
  {
    v5 = 1915LL;
LABEL_5:
    v6 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
    goto LABEL_8;
  }
  if ( !*((_QWORD *)this + 22) )
  {
    v5 = 1916LL;
    goto LABEL_5;
  }
  v7 = CVADServer::ValidateStreamHandle(this, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v6 = -2005139336;
    if ( v7 != -2005139336 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x77D,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v7);
      if ( v11[1] )
        std::_Ref_count_base::_Decref(v11[1]);
      v6 = v8;
      goto LABEL_13;
    }
LABEL_8:
    if ( v11[1] )
      std::_Ref_count_base::_Decref(v11[1]);
LABEL_13:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v14);
    goto LABEL_19;
  }
  if ( *((_DWORD *)this + 42) == 1 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 18) + 232LL))(
      *((_QWORD *)this + 18),
      *((_QWORD *)this + 22));
    *((_DWORD *)this + 42) = 0;
  }
  wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy>::operator=(
    (__int64 *)&v13,
    (__int64 *)this + 22);
  v9 = v11[1];
  *((_DWORD *)this + 40) = 0;
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v14);
  CAudioSession::RemoveStream(*((CAudioSession **)this + 18), v13, 1);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v13);
  v6 = 0;
LABEL_19:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v13);
  return v6;
}
