/*
 * XREFs of ?TryGetResourceManagerService@CBluetoothAudioEndpointResourceManagerProvider@@UEAAJPEAVCEndpointCharacteristics@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F8090
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18007D194 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??4?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIMuteControlHandler@@@Z @ 0x1800AE6D4 (--4-$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIMuteContro.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800B0034 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCPBMStreamClassVolumeGainSta.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     ??$MakeAndInitialize@VCBtAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@PEAUIBluetoothResourceArbitrator@@@Details@WRL@Microsoft@@YAJPEAPEAUIBtAudioResourceManager@@AEAU_GUID@@$$QEAPEAUIBluetoothResourceArbitrator@@@Z @ 0x1800F6CF8 (--$MakeAndInitialize@VCBtAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@PEAUIBluetoo.c)
 *     ??$MakeAndInitialize@VCBtLeAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@PEAUIBluetoothResourceArbitrator@@@Details@WRL@Microsoft@@YAJPEAPEAUIBtAudioResourceManager@@AEAU_GUID@@$$QEAPEAUIBluetoothResourceArbitrator@@@Z @ 0x1800F6DDC (--$MakeAndInitialize@VCBtLeAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@PEAUIBluet.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall CBluetoothAudioEndpointResourceManagerProvider::TryGetResourceManagerService(
        RTL_SRWLOCK *this,
        struct CEndpointCharacteristics *a2,
        const struct _GUID *a3,
        void **a4)
{
  RTL_SRWLOCK *v9; // r15
  _QWORD *i; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  unsigned int v16; // edi
  _QWORD *v17; // rdi
  __int64 *v18; // rcx
  bool v19; // zf
  __int64 v20; // rax
  int v21; // eax
  unsigned int v22; // edi
  int v23; // eax
  unsigned int v24; // edi
  int v25[2]; // [rsp+20h] [rbp-88h] BYREF
  __int128 Buf1; // [rsp+28h] [rbp-80h] BYREF
  RTL_SRWLOCK *v27; // [rsp+38h] [rbp-70h] BYREF
  struct _GUID v28; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v29[16]; // [rsp+50h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  *a4 = 0LL;
  Buf1 = *(_OWORD *)((char *)a2 + 8252);
  v28 = *(struct _GUID *)((char *)a2 + 8268);
  if ( memcmp_0(&Buf1, &BLUETOOTH_AUDIO_RESOURCE_MANAGER, 0x10uLL) && memcmp_0(&Buf1, "?", 0x10uLL) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\customaudioresourcemanagerprovider.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  AcquireSRWLockExclusive(this + 3);
  v27 = this + 3;
  v9 = this + 4;
  for ( i = this[4].Ptr; i; i = (_QWORD *)*i )
  {
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)i[1] + 56LL))(i[1], v29);
    v12 = *v11 - *(_QWORD *)&v28.Data1;
    if ( *v11 == *(_QWORD *)&v28.Data1 )
      v12 = v11[1] - *(_QWORD *)v28.Data4;
    if ( !v12 )
      break;
  }
  *(_QWORD *)v25 = 0LL;
  if ( i )
  {
    wil::com_ptr_t<IMuteControlHandler,wil::err_exception_policy>::operator=((__int64 *)v25, i[1]);
  }
  else
  {
    if ( !memcmp_0(&Buf1, &BLUETOOTH_AUDIO_RESOURCE_MANAGER, 0x10uLL) )
    {
      *(_QWORD *)&Buf1 = (unsigned __int64)&this[1] & -(__int64)(this != 0LL);
      *(_QWORD *)v25 = 0LL;
      v13 = Microsoft::WRL::Details::MakeAndInitialize<CBtAudioResourceManager,IBtAudioResourceManager,_GUID &,IBluetoothResourceArbitrator *>(
              v25,
              &v28,
              (struct IBluetoothResourceArbitrator **)&Buf1);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4B,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\customaudioresourcemanagerprovider.cpp",
          (const char *)(unsigned int)v13);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v25);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v27);
        return v14;
      }
    }
    else if ( !memcmp_0(&Buf1, "?", 0x10uLL) )
    {
      *(_QWORD *)&Buf1 = (unsigned __int64)&this[1] & -(__int64)(this != 0LL);
      *(_QWORD *)v25 = 0LL;
      v15 = Microsoft::WRL::Details::MakeAndInitialize<CBtLeAudioResourceManager,IBtAudioResourceManager,_GUID &,IBluetoothResourceArbitrator *>(
              v25,
              &v28,
              (struct IBluetoothResourceArbitrator **)&Buf1);
      v16 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4F,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\customaudioresourcemanagerprovider.cpp",
          (const char *)(unsigned int)v15);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v25);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v27);
        return v16;
      }
    }
    Buf1 = (unsigned __int64)v9;
    v17 = std::_Allocate<16,std::_Default_allocate_traits>(0x10uLL);
    *((_QWORD *)&Buf1 + 1) = v17;
    v18 = *(__int64 **)v25;
    v17[1] = *(_QWORD *)v25;
    if ( v18 )
      (*(void (__fastcall **)(__int64 *))(*v18 + 8))(v18);
    *v17 = v9->Ptr;
    *((_QWORD *)&Buf1 + 1) = 0LL;
    v9->Ptr = v17;
    std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>((__int64)&Buf1);
  }
  v19 = (*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a2 + 56LL))(a2) == 0;
  v20 = **(_QWORD **)v25;
  if ( v19 )
  {
    v21 = (*(__int64 (__fastcall **)(_QWORD, struct CEndpointCharacteristics *))(v20 + 64))(*(_QWORD *)v25, a2);
    v22 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5B,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\customaudioresourcemanagerprovider.cpp",
        (const char *)(unsigned int)v21);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v25);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v27);
      return v22;
    }
  }
  else
  {
    v23 = (*(__int64 (__fastcall **)(_QWORD, struct CEndpointCharacteristics *))(v20 + 72))(*(_QWORD *)v25, a2);
    v24 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\customaudioresourcemanagerprovider.cpp",
        (const char *)(unsigned int)v23);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v25);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v27);
      return v24;
    }
  }
  (***(void (__fastcall ****)(_QWORD, const struct _GUID *, void **))v25)(*(_QWORD *)v25, a3, a4);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v25);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v27);
  return 0LL;
}
