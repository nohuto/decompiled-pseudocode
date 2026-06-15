/*
 * XREFs of ?GetPreferredFormat@CCompositeSystemEffect@@AEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x18014F4F8
 * Callers:
 *     ?GetPreferredOutputFormat@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x18014F760 (-GetPreferredOutputFormat@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??A?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@H@Z @ 0x180057AE8 (--A-$CSimpleArray@V-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V-$CSimpleArrayEqualHelper@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAudioProcessingObjectPreferredFormatSupport@@@WRL@Microsoft@@IEAAKXZ @ 0x18014F770 (-InternalRelease@-$ComPtr@UIAudioProcessingObjectPreferredFormatSupport@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CCompositeSystemEffect::GetPreferredFormat(
        CCompositeSystemEffect *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType **a3)
{
  struct IAudioMediaType *v3; // r15
  int v5; // r12d
  int v6; // ecx
  int v7; // r13d
  struct IAudioMediaType *v8; // rax
  signed int v9; // r14d
  char *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned int (__fastcall *v13)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, _QWORD **); // rbx
  __int64 v14; // rax
  int (__fastcall ****v15)(_QWORD, GUID *, _QWORD **); // rax
  int (__fastcall ***v16)(_QWORD, GUID *, _QWORD **); // rdi
  int (__fastcall *v17)(_QWORD, GUID *, _QWORD **); // rbx
  _QWORD *v18; // rbx
  __int64 v19; // rax
  __int64 (__fastcall *v20)(_QWORD *, struct IAudioMediaType *, struct IAudioMediaType **); // rdi
  int v21; // eax
  __int64 (__fastcall *v22)(_QWORD *, struct IAudioMediaType *, struct IAudioMediaType **); // rdi
  int v23; // eax
  signed int i; // r15d
  __int64 v25; // rax
  __int64 v26; // rdi
  unsigned int (__fastcall *v27)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *); // rbx
  _QWORD *v29; // [rsp+30h] [rbp-18h] BYREF
  __int64 v30[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+40h]
  int v32; // [rsp+90h] [rbp+48h]
  struct IAudioMediaType *v35; // [rsp+A8h] [rbp+60h] BYREF

  v3 = a2;
  *a3 = 0LL;
  if ( *((_DWORD *)this + 22) == 1 )
  {
    v5 = 0;
    v6 = *((_DWORD *)this + 30);
  }
  else
  {
    v5 = *((_DWORD *)this + 30) - 1;
    v6 = -1;
  }
  v32 = v6;
  v7 = 1;
  if ( *((_DWORD *)this + 22) != 1 )
    v7 = -1;
  v8 = 0LL;
  v35 = 0LL;
  v9 = v5;
  while ( 1 )
  {
    if ( v9 == v6 )
    {
      v35 = 0LL;
      *a3 = v8;
      goto LABEL_31;
    }
    v10 = (char *)this + 112;
    v29 = 0LL;
    if ( !v8 )
      break;
    if ( *((_DWORD *)this + 22) == 1 )
    {
      v11 = ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
              (__int64)v10,
              v9);
      v12 = *(_QWORD *)v11;
      v13 = *(unsigned int (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, _QWORD **))(**(_QWORD **)v11 + 56LL);
    }
    else
    {
      v14 = ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
              (__int64)v10,
              v9);
      v12 = *(_QWORD *)v14;
      v13 = *(unsigned int (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, _QWORD **))(**(_QWORD **)v14 + 64LL);
    }
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v29);
    if ( v13(v12, v35, v35, &v29) )
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v29);
      goto LABEL_31;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v29);
LABEL_27:
    v9 += v7;
    v8 = v35;
    v6 = v32;
  }
  v15 = (int (__fastcall ****)(_QWORD, GUID *, _QWORD **))ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                                                            (__int64)v10,
                                                            v9);
  v16 = *v15;
  v17 = ***v15;
  Microsoft::WRL::ComPtr<IAudioProcessingObjectPreferredFormatSupport>::InternalRelease(&v29);
  if ( v17(v16, &GUID_51cbd3c4_f1f3_4d2f_a0e1_7e9c4dd0feb3, &v29) < 0 )
  {
LABEL_26:
    Microsoft::WRL::ComPtr<IAudioProcessingObjectPreferredFormatSupport>::InternalRelease(&v29);
    goto LABEL_27;
  }
  v18 = v29;
  v19 = *v29;
  if ( !*((_DWORD *)this + 22) )
  {
    v20 = *(__int64 (__fastcall **)(_QWORD *, struct IAudioMediaType *, struct IAudioMediaType **))(v19 + 24);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v35);
    v21 = v20(v18, v3, &v35);
    if ( v21 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1385LL,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v21);
    goto LABEL_26;
  }
  v22 = *(__int64 (__fastcall **)(_QWORD *, struct IAudioMediaType *, struct IAudioMediaType **))(v19 + 32);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v35);
  v23 = v22(v18, v3, &v35);
  if ( v23 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1389LL,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v23);
  if ( !v35 )
    goto LABEL_26;
  for ( i = v5; ; i += v7 )
  {
    if ( i == v9 )
    {
      v3 = a2;
      goto LABEL_26;
    }
    v30[0] = 0LL;
    v25 = ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
            (__int64)this + 112,
            i);
    v26 = *(_QWORD *)v25;
    v27 = *(unsigned int (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *))(**(_QWORD **)v25 + 56LL);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(v30);
    if ( v27(v26, v35, v35, v30) )
      break;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v30);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v30);
  Microsoft::WRL::ComPtr<IAudioProcessingObjectPreferredFormatSupport>::InternalRelease(&v29);
LABEL_31:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
  return 0LL;
}
