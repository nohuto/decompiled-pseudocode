/*
 * XREFs of ??1CProcess@@MEAA@XZ @ 0x18001ADE4
 * Callers:
 *     ??_ECProcess@@MEAAPEAXI@Z @ 0x180029B00 (--_ECProcess@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAt@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEAAHH@Z @ 0x180006318 (-RemoveAt@-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CSim.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180006440 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006744 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800089A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18000B220 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?CancelDeferredBamExemptionRelease@CProcess@@IEAAXXZ @ 0x1800158A0 (-CancelDeferredBamExemptionRelease@CProcess@@IEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180017320 (--3@YAXPEAX@Z.c)
 *     ??1?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18001AC28 (--1-$_Hash@V-$_Umap_traits@PEAXV-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18001ADA0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001B8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?RemoveAll@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@QEAAXXZ @ 0x18001C3C8 (-RemoveAll@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_poli.c)
 *     ?GetValueAt@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEBAAEAPEAIH@Z @ 0x180023C60 (-GetValueAt@-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CS.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18002B87C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CProcess::~CProcess(CProcess *this)
{
  void *v2; // rbx
  void *v3; // rbx
  __int64 v4; // rdx
  void *v5; // rcx
  _DWORD *v6; // rbx
  int i; // esi
  void *v8; // rcx
  int j; // ebx
  void *v10; // rcx
  __int64 v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  struct std::nothrow_t *v17; // rdx
  struct std::nothrow_t *v18; // [rsp+40h] [rbp+8h] BYREF
  void *v19; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)this = &CProcess::`vftable'{for `IAudioProcess'};
  *((_QWORD *)this + 1) = &CProcess::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessInternal>'};
  while ( *((int *)this + 68) > 0 )
  {
    v2 = (void *)**((_QWORD **)this + 33);
    ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::RemoveAt((ATL::Checked **)this + 32);
    operator delete(v2);
  }
  while ( *((int *)this + 74) > 0 )
  {
    v3 = *(void **)ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::GetValueAt(
                     (char *)this + 280,
                     0LL);
    ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::RemoveAt((ATL::Checked **)this + 35);
    operator delete(v3);
  }
  if ( *((_DWORD *)this + 58) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 40LL))(*((_QWORD *)this + 30));
  if ( *((_QWORD *)this + 73) )
  {
    CProcess::CancelDeferredBamExemptionRelease(this);
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 73));
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 368));
  v4 = *((_QWORD *)this + 51);
  if ( v4 )
  {
    (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, __int64))(*(_QWORD *)ThreadPool + 48LL))(
      ThreadPool,
      v4,
      1LL);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 96LL))(
      ThreadPool,
      *((_QWORD *)this + 51));
    *((_QWORD *)this + 51) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)this);
  }
  if ( this != (CProcess *)-368LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 368));
  v5 = (void *)*((_QWORD *)this + 95);
  if ( v5 )
  {
    std::_Deallocate<16>(
      v5,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 97) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 95) = 0LL;
    *((_QWORD *)this + 96) = 0LL;
    *((_QWORD *)this + 97) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 712));
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 88);
  ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::RemoveAll((char *)this + 632);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 592));
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 72);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 536));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 368));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 8);
  v6 = (_DWORD *)((char *)this + 296);
  if ( *((_QWORD *)this + 35) )
  {
    for ( i = 0; i < *v6; ++i )
      std::wstring::~wstring(*((_QWORD *)this + 35) + 32LL * i);
    free(*((void **)this + 35));
    *((_QWORD *)this + 35) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 36);
  if ( v8 )
  {
    free(v8);
    *((_QWORD *)this + 36) = 0LL;
  }
  *v6 = 0;
  if ( *((_QWORD *)this + 32) )
  {
    for ( j = 0; j < *((_DWORD *)this + 68); ++j )
      std::wstring::~wstring(*((_QWORD *)this + 32) + 32LL * j);
    free(*((void **)this + 32));
    *((_QWORD *)this + 32) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 33);
  if ( v10 )
  {
    free(v10);
    *((_QWORD *)this + 33) = 0LL;
  }
  *((_DWORD *)this + 68) = 0;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 31);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 30);
  v11 = *((_QWORD *)this + 28);
  if ( v11 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v11);
  v12 = (void *)*((_QWORD *)this + 25);
  if ( v12 )
    CoTaskMemFree(v12);
  v13 = (void *)*((_QWORD *)this + 23);
  if ( v13 )
    CoTaskMemFree(v13);
  v14 = (void *)*((_QWORD *)this + 22);
  if ( v14 )
    CoTaskMemFree(v14);
  v15 = (void *)*((_QWORD *)this + 21);
  if ( v15 )
    CoTaskMemFree(v15);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 19);
  v16 = (void *)*((_QWORD *)this + 16);
  if ( v16 )
  {
    v17 = (struct std::nothrow_t *)((*((_QWORD *)this + 18) - (_QWORD)v16) & 0xFFFFFFFFFFFFFFFCuLL);
    v18 = v17;
    v19 = v16;
    if ( (unsigned __int64)v17 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v19, (unsigned __int64 *)&v18);
      v17 = v18;
      v16 = v19;
    }
    operator delete(v16, v17);
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
  }
  std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>,0>>::~_Hash<std::_Umap_traits<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>,0>>((__int64 *)this + 8);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *((_DWORD *)this + 5) = -1073741823;
}
