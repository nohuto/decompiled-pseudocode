/*
 * XREFs of ?GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x18007D518
 * Callers:
 *     ?GetCustomDeviceFormatsSupportedOnEndpoint@CPolicyConfig@@UEAAJPEBGPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x18007D470 (-GetCustomDeviceFormatsSupportedOnEndpoint@CPolicyConfig@@UEAAJPEBGPEAIPEAPEAPEAUtWAVEFORMATEX@@.c)
 * Callees:
 *     ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000F634 (-GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@.c)
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000F84C (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180011074 (-GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     MIDL_user_allocate @ 0x180031380 (MIDL_user_allocate.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180037160 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetGfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18007DA3C (-GetGfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIComposi.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall EffectPack::GetCustomDeviceFormatsSupportedOnEndpoint(
        EffectPack *this,
        unsigned int *a2,
        struct tWAVEFORMATEX ***a3,
        unsigned __int16 ***a4)
{
  unsigned int v7; // esi
  int Gfx; // eax
  unsigned int v9; // ebx
  int EndpointEffect; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  struct IAudioProcessingObject *v13; // rcx
  int v15; // eax
  __int64 v16; // r9
  __int64 v17; // rdx
  void *v18; // rax
  void *v19; // rax
  unsigned int i; // r14d
  __int64 v21; // rax
  size_t v22; // rbx
  char *v23; // rcx
  int v24; // eax
  unsigned int v25; // edi
  __int64 v26; // rbx
  int (__fastcall *v27)(__int64, _QWORD, __int64 *); // rdi
  unsigned __int16 *v28; // rbx
  void *v29; // rcx
  unsigned int k; // edi
  unsigned int j; // ebx
  unsigned int m; // edi
  struct IAudioProcessingObject **v33; // [rsp+20h] [rbp-59h]
  __int64 v34; // [rsp+40h] [rbp-39h] BYREF
  struct IAudioProcessingObject *v35; // [rsp+48h] [rbp-31h] BYREF
  void *v36; // [rsp+50h] [rbp-29h] BYREF
  __int64 v37; // [rsp+58h] [rbp-21h] BYREF
  struct _GUID v38; // [rsp+60h] [rbp-19h] BYREF
  unsigned int *v39; // [rsp+70h] [rbp-9h]
  void **v40; // [rsp+78h] [rbp-1h]
  char v41; // [rsp+80h] [rbp+7h]
  unsigned int *v42; // [rsp+88h] [rbp+Fh]
  void **v43; // [rsp+90h] [rbp+17h]
  char v44; // [rsp+98h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  unsigned int v47; // [rsp+F0h] [rbp+77h] BYREF
  void *v48; // [rsp+F8h] [rbp+7Fh] BYREF

  v7 = 0;
  v35 = 0LL;
  *a4 = 0LL;
  *a3 = 0LL;
  *a2 = 0;
  if ( !(unsigned int)EffectPack::EndpointConnectorSupportsProcessingModes(this, 0LL, (__int64)a3) )
  {
    v35 = 0LL;
    Gfx = EffectPack::GetGfx(this, eHostProcessConnector, 0LL, &v35, (struct IAudioSystemEffects2 **)v33);
    v9 = Gfx;
    if ( Gfx < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x249E,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)Gfx);
      if ( v35 )
        ((void (__fastcall *)(struct IAudioProcessingObject *))v35->lpVtbl->Release)(v35);
      return v9;
    }
LABEL_13:
    v13 = v35;
    if ( !v35 )
      return 0LL;
    goto LABEL_15;
  }
  v35 = 0LL;
  EndpointEffect = EffectPack::GetEndpointEffect((struct _RTL_CRITICAL_SECTION *)this, 0LL, 0LL, 0LL, &v35, 0LL);
  v9 = EndpointEffect;
  if ( EndpointEffect < 0 )
  {
    v12 = 9380LL;
    goto LABEL_12;
  }
  v13 = v35;
  if ( !v35 )
  {
    if ( !(unsigned int)EffectPack::EndpointConnectorSupportsProcessingModes(this, 0LL, v11) )
      return 0LL;
    v35 = 0LL;
    v38 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    EndpointEffect = EffectPack::GetModeEffect((unsigned __int64)this, (__m128i *)&v38, 0LL, 0, 0LL, &v35, 0LL);
    v9 = EndpointEffect;
    if ( EndpointEffect >= 0 )
      goto LABEL_13;
    v12 = 9386LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)EndpointEffect);
    goto LABEL_55;
  }
LABEL_15:
  v47 = 0;
  v34 = 0LL;
  ((void (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v13->lpVtbl->QueryInterface)(
    v13,
    &GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097,
    &v34);
  if ( !v34 )
  {
LABEL_54:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
    v9 = 0;
    goto LABEL_55;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v34 + 24LL))(v34, &v47);
  v9 = v15;
  if ( v15 < 0 )
  {
    v16 = (unsigned int)v15;
    v17 = 9407LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v16);
    goto LABEL_19;
  }
  v18 = MIDL_user_allocate(8LL * v47);
  v48 = v18;
  if ( !v18 )
  {
    v9 = -2147024882;
    v16 = 2147942414LL;
    v17 = 9410LL;
    goto LABEL_18;
  }
  memset_0(v18, 0, 8LL * v47);
  v39 = &v47;
  v40 = &v48;
  v41 = 1;
  v19 = MIDL_user_allocate(8LL * v47);
  v36 = v19;
  if ( !v19 )
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24CD,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000ELL);
    if ( v47 )
    {
      do
        operator delete(*((void **)v48 + v7++));
      while ( v7 < v47 );
    }
    goto LABEL_25;
  }
  memset_0(v19, 0, 8LL * v47);
  v42 = &v47;
  v43 = &v36;
  v44 = 1;
  for ( i = 0; ; ++i )
  {
    if ( i >= v47 )
    {
      *a2 = v47;
      *a3 = (struct tWAVEFORMATEX **)v48;
      *a4 = (unsigned __int16 **)v36;
      goto LABEL_54;
    }
    *(_QWORD *)&v38.Data1 = 0LL;
    if ( (*(int (__fastcall **)(__int64, _QWORD, struct _GUID *))(*(_QWORD *)v34 + 40LL))(v34, i, &v38) < 0 )
      continue;
    v21 = -1LL;
    do
      ++v21;
    while ( *(_WORD *)(*(_QWORD *)&v38.Data1 + 2 * v21) );
    v22 = 2 * v21 + 2;
    *((_QWORD *)v36 + i) = MIDL_user_allocate(v22);
    v23 = (char *)*((_QWORD *)v36 + i);
    if ( !v23 )
      break;
    v24 = StringCbCopyW(v23, v22, *(char **)&v38.Data1);
    v25 = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24E2,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v24);
      for ( j = 0; j < v47; ++j )
        operator delete(*((void **)v36 + j));
      operator delete(v36);
      if ( v47 )
      {
        do
          operator delete(*((void **)v48 + v7++));
        while ( v7 < v47 );
      }
      operator delete(v48);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
      v9 = v25;
      goto LABEL_55;
    }
    v37 = 0LL;
    v26 = v34;
    v27 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v34 + 32LL);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v37);
    if ( v27(v26, i, &v37) >= 0 )
    {
      v28 = (unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 40LL))(v37);
      *((_QWORD *)v48 + i) = MIDL_user_allocate(v28[8] + 18LL);
      v29 = (void *)*((_QWORD *)v48 + i);
      if ( !v29 )
      {
        v9 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x24ED,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)0x8007000ELL);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v37);
        for ( k = 0; k < v47; ++k )
          operator delete(*((void **)v36 + k));
        operator delete(v36);
        if ( v47 )
        {
          do
            operator delete(*((void **)v48 + v7++));
          while ( v7 < v47 );
        }
        goto LABEL_25;
      }
      memcpy_0(v29, v28, v28[8] + 18LL);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v37);
  }
  v9 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x24E0,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)0x8007000ELL);
  for ( m = 0; m < v47; ++m )
    operator delete(*((void **)v36 + m));
  operator delete(v36);
  if ( v47 )
  {
    do
      operator delete(*((void **)v48 + v7++));
    while ( v7 < v47 );
  }
LABEL_25:
  operator delete(v48);
LABEL_19:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
LABEL_55:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
  return v9;
}
