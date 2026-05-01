/*
 * XREFs of ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800600F8
 * Callers:
 *     ??$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCFrameApplicationPresentation@@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1802A50B4 (--$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvid.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180041AA8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180042468 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180043234 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z @ 0x18005C428 (-StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18005F6F4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005FE30 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_d2f504444b1331544961ef61763d2cb7___ @ 0x1801B9554 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_d2f504444b1331544961ef61763d2cb7___.c)
 *     WPP_SF_Sd @ 0x1802090C8 (WPP_SF_Sd.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     WPP_SF_Sdd @ 0x1802E7F0C (WPP_SF_Sdd.c)
 *     _lambda_d2f504444b1331544961ef61763d2cb7_::_lambda_d2f504444b1331544961ef61763d2cb7_ @ 0x1803044E0 (_lambda_d2f504444b1331544961ef61763d2cb7_--_lambda_d2f504444b1331544961ef61763d2cb7_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CFrameApplicationPresentation::RuntimeClassInitialize(
        CFrameApplicationPresentation *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        char a4,
        struct IIAMServiceProvider *a5,
        struct IImmersiveApplicationInternal *a6)
{
  __int64 (__fastcall *v10)(struct IIAMServiceProvider *, GUID *, GUID *, __int64 *); // rbx
  int v11; // ebx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, const unsigned __int16 *, _QWORD, struct IIAMServiceProvider **); // rdi
  __int64 v14; // rbx
  HWND v15; // rcx
  int (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v17)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 (__fastcall *v23)(struct IIAMServiceProvider *, SID *, GUID *, char *); // rdi
  bool v24[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 pvAttribute; // [rsp+38h] [rbp-C8h] BYREF
  struct IIAMServiceProvider *v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  struct IIAMServiceProvider *v28; // [rsp+50h] [rbp-B0h] BYREF
  HWND hwnd[3]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v30[32]; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v31[42]; // [rsp+90h] [rbp-70h] BYREF

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v31,
    (__int64)"Initialization");
  v31[0] = (volatile signed __int32 *)&CFramePresentationTelemetry::Initialization::`vftable';
  CFramePresentationTelemetry::Initialization::StartActivity((CFramePresentationTelemetry::Initialization *)v31, a2);
  *((_BYTE *)this + 53) = a4;
  hwnd[1] = (HWND)a5;
  if ( a5 )
    (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 8LL))(a5);
  v27 = 0LL;
  v10 = *(__int64 (__fastcall **)(struct IIAMServiceProvider *, GUID *, GUID *, __int64 *))(*(_QWORD *)a5 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
  v11 = v10(a5, &GUID_88b25c81_171b_48b0_91d6_c75846bcf035, &GUID_88b25c81_171b_48b0_91d6_c75846bcf035, &v27);
  if ( v11 >= 0 )
  {
    v26 = 0LL;
    v12 = v27;
    v13 = *(__int64 (__fastcall **)(__int64, const unsigned __int16 *, _QWORD, struct IIAMServiceProvider **))(*(_QWORD *)v27 + 72LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    v11 = v13(v12, a2, a3, &v26);
    if ( v11 < 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_Sd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          10,
          (unsigned int)&WPP_2c90db7e24993e53cb0c5ea1cdf0809e_Traceguids,
          (_DWORD)a2,
          a3);
      }
    }
    else
    {
      hwnd[0] = 0LL;
      v11 = (*(__int64 (__fastcall **)(struct IIAMServiceProvider *, HWND *))(*(_QWORD *)v26 + 24LL))(v26, hwnd);
      if ( v11 >= 0 )
      {
        if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
        {
          LODWORD(pvAttribute) = 0;
          if ( DwmGetWindowAttribute(hwnd[0], 0xEu, &pvAttribute, 4u) >= 0 )
            *((_BYTE *)this + 52) = (pvAttribute & 2) == 0;
        }
        v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                (__int64)this + 608,
                (__int64)a2,
                0xFFFFFFFFFFFFFFFFuLL);
        if ( v11 >= 0 )
        {
          v14 = (__int64)v26;
          if ( *((struct IIAMServiceProvider **)this + 15) != v26 )
          {
            v28 = v26;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v28);
            v28 = (struct IIAMServiceProvider *)*((_QWORD *)this + 15);
            *((_QWORD *)this + 15) = v14;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
          }
          v15 = hwnd[0];
          *((HWND *)this + 16) = hwnd[0];
          *((_QWORD *)this + 79) = a6;
          GetWindowBand(v15, (char *)this + 212);
          v28 = a5;
          if ( a5 )
            (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 8LL))(a5);
          v24[0] = 0;
          pvAttribute = 0LL;
          v16 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 79);
          v17 = **v16;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&pvAttribute);
          if ( v17(v16, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &pvAttribute) >= 0 )
            v24[0] = (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)pvAttribute + 328LL))(
                       pvAttribute,
                       6LL) == 0;
          v18 = lambda_d2f504444b1331544961ef61763d2cb7_::_lambda_d2f504444b1331544961ef61763d2cb7_(
                  v30,
                  this,
                  &v28,
                  v24);
          v11 = CFrameApplicationPresentation::_AddTaskToQueue__lambda_d2f504444b1331544961ef61763d2cb7___(this, v18);
          v19 = pvAttribute;
          if ( pvAttribute )
          {
            pvAttribute = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          }
          if ( a5 )
            (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 16LL))(a5);
        }
      }
    }
    v20 = (__int64)v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    if ( v11 >= 0 )
    {
      v23 = *(__int64 (__fastcall **)(struct IIAMServiceProvider *, SID *, GUID *, char *))(*(_QWORD *)a5 + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 80);
      v11 = v23(
              a5,
              &SID_ImmersiveApplicationManagerPriv,
              &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
              (char *)this + 640);
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_Sdd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      11,
      (unsigned int)&WPP_2c90db7e24993e53cb0c5ea1cdf0809e_Traceguids,
      (_DWORD)a2,
      a3,
      *((_DWORD *)this + 12));
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v31, v11);
  v21 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 16LL))(a5);
  v31[0] = (volatile signed __int32 *)&CFramePresentationTelemetry::Initialization::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v31);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v31);
  return (unsigned int)v11;
}
