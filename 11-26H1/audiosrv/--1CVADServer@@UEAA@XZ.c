/*
 * XREFs of ??1CVADServer@@UEAA@XZ @ 0x180011374
 * Callers:
 *     ??_GCVADServer@@UEAAPEAXI@Z @ 0x180074260 (--_GCVADServer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180012FDC (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x1800130C0 (-RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x18001C520 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800448A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?RemoveAt@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18005494C (-RemoveAt@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXPEAU__PO.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVADServer::~CVADServer(CVADServer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  std::_Ref_count_base *v3; // rdi
  CServerAudioSessionControl *v4; // rcx
  struct CAudioStream **v5; // rdi
  __int64 v6; // rcx
  __int64 i; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  void *v10; // rcx
  __int64 v11; // rcx
  std::_Ref_count_base *v12; // rcx
  void *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx

  *(_QWORD *)this = &CVADServer::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IUnknown>::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IUnknown>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 440);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 11);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 61);
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = (CServerAudioSessionControl *)*((_QWORD *)this + 17);
  if ( v4 )
    CServerAudioSessionControl::RemoveClientReference(v4);
  v5 = (struct CAudioStream **)((char *)this + 176);
  if ( *((_QWORD *)this + 22) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
    if ( *((_QWORD *)*v5 + 6) )
    {
      if ( *((_DWORD *)this + 42) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 232LL))(*((_QWORD *)this + 18));
      CAudioSession::RemoveStream(*((CAudioSession **)this + 18), *v5, 1);
    }
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((char *)this + 176);
    if ( this != (CVADServer *)-200LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)this + 5);
  }
  v6 = *((_QWORD *)this + 18);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 18) = 0LL;
  }
  *((_QWORD *)this + 16) = 0LL;
  EnterCriticalSection(&g_csVadList);
  for ( i = g_VADServerList; i; i = *(_QWORD *)i )
  {
    if ( *(CVADServer **)(i + 16) == this )
    {
      ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAt();
      break;
    }
  }
  LeaveCriticalSection(&g_csVadList);
  v8 = *((_QWORD *)this + 69);
  if ( v8 )
  {
    *((_QWORD *)this + 69) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 65);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = (void *)*((_QWORD *)this + 63);
  if ( v10 )
    operator delete(v10, (const struct std::nothrow_t *)1);
  v11 = *((_QWORD *)this + 62);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = (std::_Ref_count_base *)*((_QWORD *)this + 61);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  DeleteCriticalSection(v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 5);
  v13 = (void *)*((_QWORD *)this + 24);
  if ( v13 )
    CoTaskMemFree(v13);
  v14 = *((_QWORD *)this + 22);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  CoTaskMemFree(*((LPVOID *)this + 19));
  *((_QWORD *)this + 19) = 0LL;
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CVADServer *)((char *)this + 48));
  v15 = *((_QWORD *)this + 4);
  if ( v15 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2 * v15);
}
