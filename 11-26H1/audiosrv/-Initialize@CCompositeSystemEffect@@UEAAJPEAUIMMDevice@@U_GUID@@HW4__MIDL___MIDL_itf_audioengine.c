/*
 * XREFs of ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800575D0
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000B910 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180047B14 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??A?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@H@Z @ 0x180057AE8 (--A-$CSimpleArray@V-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V-$CSimpleArrayEqualHelper@.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180057B18 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Add@?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAHAEBV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@Z @ 0x180057B40 (-Add@-$CSimpleArray@V-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V-$CSimpleArrayEqualHelpe.c)
 *     ?Add@?$CSimpleArray@V?$ComPtr@UIAudioSystemEffects2@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioSystemEffects2@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAHAEBV?$ComPtr@UIAudioSystemEffects2@@@WRL@Microsoft@@@Z @ 0x1800664B0 (-Add@-$CSimpleArray@V-$ComPtr@UIAudioSystemEffects2@@@WRL@Microsoft@@V-$CSimpleArrayEqualHelper@.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B0D18 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?CreateInstance@CAPOWrapperClient@@SAJPEBGW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@AEBU_GUID@@PEAPEAUIAudioProcessingObject@@@Z @ 0x1800B9AAC (-CreateInstance@CAPOWrapperClient@@SAJPEBGW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@AE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositeSystemEffect::Initialize(
        CCompositeSystemEffect *this,
        struct IMMDevice *a2,
        struct _GUID *a3,
        int a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        struct IAudioProcessingObject **a6,
        struct IAudioSystemEffects2 **a7)
{
  signed int v9; // edi
  char *v10; // r15
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v20; // ebx
  struct IAudioSystemEffects2 **v21; // r14
  __int64 (__fastcall ****v22)(_QWORD, GUID *, LPVOID *); // rax
  __int64 (__fastcall ***v23)(_QWORD, GUID *, LPVOID *); // rdi
  __int64 (__fastcall *v24)(_QWORD, GUID *, LPVOID *); // rbx
  signed int v25; // ebx
  __int64 v26; // rcx
  LPVOID v27; // rcx
  __int64 v28; // rcx
  int v29; // r13d
  int v30; // r12d
  int v31; // r15d
  __int64 v32; // rdi
  int v33; // r14d
  int v34; // esi
  __int64 v35; // rcx
  unsigned int v36; // edx
  struct IAudioProcessingObject **v37; // rdi
  struct IAudioProcessingObject **v38; // rbx
  struct IAudioSystemEffects2 **v39; // rbx
  int v40; // eax
  __int64 v41; // rdx
  char *v42; // [rsp+30h] [rbp-89h]
  __int64 v43; // [rsp+38h] [rbp-81h]
  LPVOID pv; // [rsp+88h] [rbp-31h] BYREF
  __int64 v45; // [rsp+90h] [rbp-29h] BYREF
  int v46; // [rsp+98h] [rbp-21h]
  int v47; // [rsp+9Ch] [rbp-1Dh]
  int v48; // [rsp+A0h] [rbp-19h]
  int v49; // [rsp+A4h] [rbp-15h]
  __int64 v50; // [rsp+A8h] [rbp-11h]
  __int64 v51; // [rsp+B0h] [rbp-9h] BYREF
  struct _GUID v52; // [rsp+B8h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+47h]
  __int64 v54; // [rsp+108h] [rbp+4Fh] BYREF
  struct _GUID *v55; // [rsp+118h] [rbp+5Fh]
  int v56; // [rsp+120h] [rbp+67h]

  v56 = a4;
  v55 = a3;
  v9 = 0;
  v10 = (char *)this + 96;
  v50 = (__int64)this + 96;
  while ( v9 < *((_DWORD *)v10 + 2) )
  {
    v54 = 0LL;
    pv = 0LL;
    v11 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &pv);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x306,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v11);
      if ( pv )
        CoTaskMemFree(pv);
      v18 = v54;
      if ( v54 )
      {
        v54 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      return v12;
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v54);
    v13 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v10, v9);
    v14 = CAPOWrapperClient::CreateInstance(pv, *((unsigned int *)this + 20), v13, &v54);
    v12 = v14;
    if ( v14 < 0 )
    {
      v16 = (unsigned int)v14;
      v17 = 776LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v16);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v54);
      return v12;
    }
    if ( !(unsigned int)ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::Add(
                          (char *)this + 112,
                          &v54) )
    {
      v12 = -2147024882;
      v16 = 2147942414LL;
      v17 = 778LL;
      goto LABEL_13;
    }
    if ( pv )
      CoTaskMemFree(pv);
    v15 = v54;
    if ( v54 )
    {
      v54 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    ++v9;
  }
  v20 = 0;
  v21 = a7;
  while ( 1 )
  {
    LODWORD(v54) = v20;
    if ( v20 >= *((_DWORD *)this + 30) )
      break;
    pv = 0LL;
    v45 = 0LL;
    v22 = (__int64 (__fastcall ****)(_QWORD, GUID *, LPVOID *))ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                                                                 (char *)this + 112,
                                                                 (unsigned int)v20);
    v23 = *v22;
    v24 = ***v22;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&pv);
    v46 = v24(v23, &GUID_48d5d115_0037_423d_a1d7_f4be39ae9dd6, &pv);
    if ( v46 < 0 )
    {
      v25 = v54;
LABEL_33:
      v47 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                   (__int64)v10,
                                   v25)
                               + 15);
      v48 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                   (__int64)v10,
                                   v25)
                               + 14);
      v49 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                   (__int64)v10,
                                   v25)
                               + 13);
      v29 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                   (__int64)v10,
                                   v25)
                               + 12);
      v30 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                   (__int64)v10,
                                   v25)
                               + 11);
      v31 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                   (__int64)v10,
                                   v25)
                               + 10);
      v32 = v50;
      v33 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v50, v25) + 9);
      v34 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v32, v25) + 8);
      LODWORD(v32) = *(unsigned __int16 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                             v32,
                                             v25)
                                         + 6);
      LODWORD(v43) = *(unsigned __int16 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                             v50,
                                             v25)
                                         + 4);
      LODWORD(v42) = *(_DWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v50, v54);
      v12 = v46;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x31E,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v46,
        (__int64)"SysFxInitializationFailure{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        v42,
        v43,
        v32,
        v34,
        v33,
        v31,
        v30,
        v29,
        v49,
        v48,
        v47);
      v35 = v45;
      if ( v45 )
      {
        v45 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      }
LABEL_35:
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&pv);
      return v12;
    }
    v52 = *v55;
    v25 = v54;
    v46 = (*(__int64 (__fastcall **)(LPVOID, struct IMMDevice *, __int64, struct _GUID *, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, _QWORD))(*(_QWORD *)pv + 24LL))(
            pv,
            a2,
            *(_QWORD *)v10 + 16LL * (int)v54,
            &v52,
            v56,
            a5,
            (unsigned __int64)&v45 & ((unsigned __int128)-(__int128)(unsigned __int64)v21 >> 64));
    if ( v46 < 0 )
      goto LABEL_33;
    if ( !(unsigned int)ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioSystemEffects2>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioSystemEffects2>>>::Add(
                          (char *)this + 128,
                          &v45) )
    {
      v12 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31A,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL);
      v28 = v45;
      if ( v45 )
      {
        v45 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      goto LABEL_35;
    }
    v26 = v45;
    if ( v45 )
    {
      v45 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v27 = pv;
    if ( pv )
    {
      pv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v27 + 16LL))(v27);
    }
    v20 = v25 + 1;
  }
  v51 = 0LL;
  if ( (**(int (__fastcall ***)(CCompositeSystemEffect *, GUID *, __int64 *))this)(
         this,
         &GUID_25385759_3236_4101_a943_25693dfb5d2d,
         &v51) >= 0 )
    *((_DWORD *)this + 21) = 1;
  if ( *((_DWORD *)this + 30) == 1 )
  {
    v37 = a6;
    if ( a6 )
    {
      v38 = (struct IAudioProcessingObject **)*((_QWORD *)this + 14);
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v38);
      *v37 = *v38;
    }
    if ( v21 )
    {
      if ( *((int *)this + 34) <= 0 )
      {
        ATL::_AtlRaiseException(0xC000008C, v36);
        __debugbreak();
      }
      v39 = (struct IAudioSystemEffects2 **)*((_QWORD *)this + 16);
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v39);
      *v21 = *v39;
    }
    goto LABEL_44;
  }
  if ( a6 )
  {
    v40 = (**(__int64 (__fastcall ***)(CCompositeSystemEffect *, GUID *))this)(
            this,
            &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10);
    v12 = v40;
    if ( v40 < 0 )
    {
      v41 = 820LL;
LABEL_54:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v41,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v40);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v51);
      return v12;
    }
  }
  if ( v21 )
  {
    v40 = (**(__int64 (__fastcall ***)(CCompositeSystemEffect *, GUID *, struct IAudioSystemEffects2 **))this)(
            this,
            &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
            v21);
    v12 = v40;
    if ( v40 < 0 )
    {
      v41 = 823LL;
      goto LABEL_54;
    }
  }
LABEL_44:
  if ( v51 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
  return 0LL;
}
