/*
 * XREFs of ?GetPacketSizeConstraints@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@AEAV?$unique_ptr@UPacketSizeConstraints@@U?$default_delete@UPacketSizeConstraints@@@std@@@std@@@Z @ 0x1801613FC
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18013898C (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18013DEF8 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180063B78 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006C618 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _Init_thread_footer @ 0x1800B2850 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800B28B8 (_Init_thread_header.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     ??1?$unique_ptr@UPacketSizeConstraints@@U?$default_delete@UPacketSizeConstraints@@@std@@@std@@QEAA@XZ @ 0x180135420 (--1-$unique_ptr@UPacketSizeConstraints@@U-$default_delete@UPacketSizeConstraints@@@std@@@std@@QE.c)
 *     ??R?$default_delete@UPacketSizeConstraints@@@std@@QEBAXPEAUPacketSizeConstraints@@@Z @ 0x1801375C0 (--R-$default_delete@UPacketSizeConstraints@@@std@@QEBAXPEAUPacketSizeConstraints@@@Z.c)
 *     ??4?$unique_ptr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801603C0 (--4-$unique_ptr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFre.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall GetPacketSizeConstraints(__int64 a1, __int64 a2, void ***a3)
{
  __int128 *v6; // rdi
  char v7; // si
  int v8; // eax
  IMalloc *v9; // rcx
  int v10; // ebx
  __int16 v11; // ax
  int v12; // eax
  __int64 (__fastcall *v13)(__int64, PROPVARIANT, __int64 **); // rbx
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  void **v18; // rax
  void **v19; // rbx
  __int64 v20; // rcx
  void **v21; // rdx
  __int64 *v23; // [rsp+20h] [rbp-69h] BYREF
  void *v24; // [rsp+28h] [rbp-61h] BYREF
  __int64 v25; // [rsp+30h] [rbp-59h] BYREF
  void *v26; // [rsp+38h] [rbp-51h] BYREF
  size_t Size[2]; // [rsp+40h] [rbp-49h] BYREF
  void *Src; // [rsp+50h] [rbp-39h]
  __int64 v29; // [rsp+58h] [rbp-31h] BYREF
  PROPVARIANT pvar[2]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v31; // [rsp+70h] [rbp-19h]
  void **v32; // [rsp+78h] [rbp-11h] BYREF
  void *v33; // [rsp+80h] [rbp-9h] BYREF
  char v34; // [rsp+88h] [rbp-1h]
  _DWORD v35[6]; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  if ( dword_1801D7E38 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1801D7E38);
    if ( dword_1801D7E38 == -1 )
    {
      xmmword_1801D79F0 = DEVPKEY_KsAudio_PacketSize_Constraints2;
      dword_1801D7A00 = 2;
      xmmword_1801D7A04 = DEVPKEY_KsAudio_PacketSize_Constraints;
      dword_1801D7A14 = 2;
      Init_thread_footer(&dword_1801D7E38);
    }
  }
  v26 = 0LL;
  v6 = &xmmword_1801D79F0;
  v7 = 1;
  while ( 1 )
  {
    if ( v6 == (__int128 *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_DisableModePipeForOffloadPins>::GetImpl'::`2'::impl )
      goto LABEL_41;
    *(_OWORD *)Size = 0LL;
    Src = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int128 *, size_t *))(*(_QWORD *)a2 + 40LL))(a2, v6, Size);
    v10 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36E,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_39;
    }
    v11 = Size[0];
    if ( !LOWORD(Size[0]) )
    {
      *(_OWORD *)pvar = 0LL;
      v31 = 0LL;
      v35[0] = 590439624;
      v35[1] = 1283267372;
      v35[2] = 1907779772;
      v35[3] = 1730509416;
      v35[4] = 1;
      v12 = (*(__int64 (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(a2, v35, pvar);
      v10 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x376,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
          (const char *)(unsigned int)v12);
      }
      else
      {
        if ( LOWORD(pvar[0]) != 31 )
        {
          PropVariantClear(pvar);
          v10 = -2147023728;
LABEL_39:
          PropVariantClear((PROPVARIANT *)Size);
          goto LABEL_40;
        }
        v23 = 0LL;
        v13 = *(__int64 (__fastcall **)(__int64, PROPVARIANT, __int64 **))(*(_QWORD *)a1 + 40LL);
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v23);
        v14 = v13(a1, pvar[1], &v23);
        v10 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x37C,
            (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
            (const char *)(unsigned int)v14);
        }
        else
        {
          v25 = 0LL;
          v15 = *v23;
          v25 = 0LL;
          v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v15 + 32))(v23, 0LL, &v25);
          v10 = v16;
          if ( v16 < 0 )
          {
            v17 = 895LL;
          }
          else
          {
            v16 = (*(__int64 (__fastcall **)(__int64, __int128 *, size_t *))(*(_QWORD *)v25 + 40LL))(v25, v6, Size);
            v10 = v16;
            if ( v16 >= 0 )
            {
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
              PropVariantClear(pvar);
              v11 = Size[0];
              goto LABEL_14;
            }
            v17 = 897LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v17,
            (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
            (const char *)(unsigned int)v16);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
      }
      PropVariantClear(pvar);
      goto LABEL_39;
    }
LABEL_14:
    if ( v11 == 65 && LODWORD(Size[1]) >= 0x28 )
      break;
LABEL_19:
    PropVariantClear((PROPVARIANT *)Size);
    v6 = (__int128 *)((char *)v6 + 20);
  }
  v24 = 0LL;
  v32 = &v24;
  v33 = 0LL;
  v34 = 1;
  v10 = CTCoAllocPolicy::Alloc(v9, 1, LODWORD(Size[1]), &v33);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v32);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38C,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v10);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &v24,
      0LL);
    goto LABEL_39;
  }
  memcpy_0(v24, Src, LODWORD(Size[1]));
  if ( LODWORD(Size[1]) < 24 * *((_DWORD *)v24 + 3) + 16 )
  {
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &v24,
      0LL);
    goto LABEL_19;
  }
  if ( *((_DWORD *)v6 + 4) != 2 || memcmp_0(v6, &DEVPKEY_KsAudio_PacketSize_Constraints2, 0x10uLL) )
    v7 = 0;
  wistd::unique_ptr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::operator=(
    &v26,
    &v24);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v24,
    0LL);
  PropVariantClear((PROPVARIANT *)Size);
  if ( !v26 )
  {
LABEL_41:
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &v26,
      0LL);
    return 2147943568LL;
  }
  v18 = (void **)operator new[](0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v19 = v18;
  if ( !v18 )
  {
    v29 = 0LL;
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A0,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)0x8007000ELL);
    std::unique_ptr<PacketSizeConstraints>::~unique_ptr<PacketSizeConstraints>(&v29);
LABEL_40:
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &v26,
      0LL);
    return (unsigned int)v10;
  }
  *v18 = 0LL;
  v18[1] = 0LL;
  *(_BYTE *)v18 = v7;
  wistd::unique_ptr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::operator=(
    v18 + 1,
    &v26);
  v29 = 0LL;
  v21 = *a3;
  *a3 = v19;
  if ( v21 )
    std::default_delete<PacketSizeConstraints>::operator()(v20, v21);
  std::unique_ptr<PacketSizeConstraints>::~unique_ptr<PacketSizeConstraints>(&v29);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v26,
    0LL);
  return 0LL;
}
