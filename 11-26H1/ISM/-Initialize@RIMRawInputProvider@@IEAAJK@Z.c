/*
 * XREFs of ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180076CF0
 * Callers:
 *     ?Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x180076BF0 (-Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INVALIDATE_INPUT_MESSAGE@@@Z@std@@@Z @ 0x18004178C (-Initialize@-$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessag.c)
 *     ?Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180043250 (-Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEA.c)
 *     ?Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180044BD0 (-Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@CallControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180044F00 (-Create@CallControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPE.c)
 *     ?Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x18007A7E8 (-Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z @ 0x18007FA28 (-RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A6364 (-InternalRelease@-$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MouseHaptics2@@@details@wil@@QEAA_NXZ @ 0x1800CB6E8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MouseHaptics2@@@details@wil@@QEAA.c)
 *     ?Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x1800D4F58 (-Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageS.c)
 *     ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800D97E8 (-Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAP.c)
 *     ?Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DA9F0 (-Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXP.c)
 *     ?Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DBED4 (-Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DC2CC (-Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DCBC0 (-Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@DockableDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DDDD0 (-Create@DockableDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1.c)
 *     ?Create@HapticDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DF3B4 (-Create@HapticDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RIMRawInputProvider::Initialize(RIMRawInputProvider *this, int a2)
{
  struct IMessageSession **v2; // r13
  int v5; // ebx
  const char *v6; // r9
  __int64 v7; // rdx
  struct IRawInputClient **v9; // rsi
  int (*v10)(void *, unsigned int, void *); // r8
  struct IRawInputClient **v11; // rbx
  int (*v12)(void *, unsigned int, void *); // r8
  struct IRawInputClient **v13; // r14
  int v14; // esi
  int (*v15)(void *, unsigned int, void *); // r8
  __int64 v16; // rdx
  int (*v17)(void *, unsigned int, void *); // r8
  int (*v18)(void *, unsigned int, void *); // r8
  int (*v19)(void *, unsigned int, void *); // r8
  struct IRawInputClient **v20; // r14
  void **v21; // r14
  int (*v22)(void *, unsigned int, void *); // r8
  struct IRawInputClient **v23; // rsi
  int (*v24)(void *, unsigned int, void *); // r8
  int (*v25)(void *, unsigned int, void *); // r8
  int (*v26)(void *, unsigned int, void *); // r8
  int (*v27)(void *, unsigned int, void *); // r8
  __int64 v28; // r8
  int v29; // [rsp+20h] [rbp-50h]
  _QWORD v30[8]; // [rsp+30h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  void *v32; // [rsp+B0h] [rbp+40h] BYREF

  v2 = (struct IMessageSession **)((char *)this + 32);
  v32 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
  v5 = CoreUICreate(v2);
  if ( v5 < 0 )
  {
    v7 = 103LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
      (const char *)(unsigned int)v5,
      v29);
    return (unsigned int)v5;
  }
  v9 = (struct IRawInputClient **)((char *)this + 24);
  if ( (a2 & 0x400) != 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
    v5 = AugmentedInputDeviceCollection::Create(*v9, &v32, (struct AugmentedInputDeviceCollection **)this + 6);
    if ( v5 < 0 )
    {
      v7 = 110LL;
      goto LABEL_3;
    }
    v5 = RIMRawInputProvider::RegisterWaitHandler(this, v32, v10, *((void **)this + 6));
    if ( v5 < 0 )
    {
      v7 = 115LL;
      goto LABEL_3;
    }
  }
  v11 = (struct IRawInputClient **)((char *)this + 24);
  if ( (a2 & 0x2000) != 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
    v5 = SpatialRimDeviceCollection::Create(*v9, this, *v2, &v32, (struct SpatialRimDeviceCollection **)this + 7);
    if ( v5 < 0 )
    {
      v7 = 125LL;
      goto LABEL_3;
    }
    v5 = RIMRawInputProvider::RegisterWaitHandler(this, v32, v12, *((void **)this + 7));
    if ( v5 < 0 )
    {
      v7 = 130LL;
      goto LABEL_3;
    }
    v11 = (struct IRawInputClient **)((char *)this + 24);
  }
  if ( (a2 & 0x80u) != 0 )
  {
    v13 = v11;
    if ( IsEdition(253345LL) )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
      v14 = MobileButtonDeviceCollection::Create(*v9, this, &v32, (struct MobileButtonDeviceCollection **)this + 5);
      if ( v14 < 0 )
      {
        v16 = 149LL;
LABEL_19:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
          (const char *)(unsigned int)v14,
          v29);
        return (unsigned int)v14;
      }
      v14 = RIMRawInputProvider::RegisterWaitHandler(this, v32, v15, *((void **)this + 5));
      if ( v14 < 0 )
      {
        v16 = 154LL;
        goto LABEL_19;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
      v5 = ConsumerControlDeviceCollection::Create(
             *v11,
             this,
             &v32,
             (struct ConsumerControlDeviceCollection **)this + 8);
      if ( v5 < 0 )
      {
        v7 = 160LL;
        goto LABEL_3;
      }
      v5 = RIMRawInputProvider::RegisterWaitHandler(this, v32, v17, *((void **)this + 8));
      if ( v5 < 0 )
      {
        v7 = 165LL;
        goto LABEL_3;
      }
      v13 = (struct IRawInputClient **)((char *)this + 24);
    }
    v11 = v13;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 9);
    v14 = SystemControlDeviceCollection::Create(*v13, this, &v32, (struct SystemControlDeviceCollection **)this + 9);
    if ( v14 < 0 )
    {
      v16 = 172LL;
      goto LABEL_19;
    }
    v14 = RIMRawInputProvider::RegisterWaitHandler(this, v32, v18, *((void **)this + 9));
    if ( v14 < 0 )
    {
      v16 = 177LL;
      goto LABEL_19;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 15);
    v14 = CallControlDeviceCollection::Create(*v13, this, &v32, (struct CallControlDeviceCollection **)this + 15);
    if ( v14 < 0 )
    {
      v16 = 183LL;
      goto LABEL_19;
    }
    v14 = RIMRawInputProvider::RegisterWaitHandler(this, v32, v19, *((void **)this + 15));
    if ( v14 < 0 )
    {
      v16 = 188LL;
      goto LABEL_19;
    }
  }
  v20 = v11;
  if ( (a2 & 0x800) != 0 )
  {
    v21 = (void **)((char *)this + 80);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 10);
    v14 = HeatDeviceCollection::Create(*v11, this, &v32, (struct HeatDeviceCollection **)this + 10);
    if ( v14 < 0 )
    {
      v16 = 197LL;
      goto LABEL_19;
    }
    v14 = (*(__int64 (__fastcall **)(void *, void **))(*(_QWORD *)*v21 + 48LL))(*v21, &v32);
    if ( v14 < 0 )
    {
      v16 = 204LL;
      goto LABEL_19;
    }
    v14 = RIMRawInputProvider::RegisterWaitHandler(this, v32, v22, *v21);
    if ( v14 < 0 )
    {
      v16 = 209LL;
      goto LABEL_19;
    }
    v20 = (struct IRawInputClient **)((char *)this + 24);
  }
  v23 = v20;
  if ( (a2 & 0x4000) != 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 11);
    v5 = GazeDeviceCollection::Create(*v11, this, &v32, (struct GazeDeviceCollection **)this + 11);
    if ( v5 < 0 )
    {
      v7 = 218LL;
      goto LABEL_3;
    }
    v5 = RIMRawInputProvider::RegisterWaitHandler(this, v32, v24, *((void **)this + 11));
    if ( v5 < 0 )
    {
      v7 = 223LL;
      goto LABEL_3;
    }
    v23 = (struct IRawInputClient **)((char *)this + 24);
  }
  if ( (a2 & 0x100000) != 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 13);
    v5 = DockDeviceCollection::Create(*v20, this, &v32, (struct DockDeviceCollection **)this + 13);
    if ( v5 < 0 )
    {
      v7 = 232LL;
      goto LABEL_3;
    }
    v5 = RIMRawInputProvider::RegisterWaitHandler(this, v32, v25, *((void **)this + 13));
    if ( v5 < 0 )
    {
      v7 = 237LL;
      goto LABEL_3;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 14);
    v5 = DockableDeviceCollection::Create(*v23, this, &v32, (struct DockableDeviceCollection **)this + 14);
    if ( v5 < 0 )
    {
      v7 = 243LL;
      goto LABEL_3;
    }
    v5 = RIMRawInputProvider::RegisterWaitHandler(this, v32, v26, *((void **)this + 14));
    if ( v5 < 0 )
    {
      v7 = 248LL;
      goto LABEL_3;
    }
    v23 = (struct IRawInputClient **)((char *)this + 24);
  }
  if ( !ISMScenarios::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
      v6);
  if ( !*(_DWORD *)ISMScenarios::s_instance )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 12);
    v5 = PenDeviceCollection::Create(*v23, this, &v32, (struct PenDeviceCollection **)this + 12);
    if ( v5 < 0 )
    {
      v7 = 257LL;
      goto LABEL_3;
    }
    v5 = RIMRawInputProvider::RegisterWaitHandler(this, v32, v27, *((void **)this + 12));
    if ( v5 < 0 )
    {
      v7 = 262LL;
      goto LABEL_3;
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MouseHaptics2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_MouseHaptics2>::GetImpl'::`2'::impl) )
    {
      Microsoft::WRL::ComPtr<GamepadInterceptionHelper>::InternalRelease((char *)this + 128);
      v5 = HapticDeviceCollection::Create(*v23, this, &v32, (struct HapticDeviceCollection **)this + 16);
      if ( v5 < 0 )
      {
        v7 = 270LL;
        goto LABEL_3;
      }
    }
    v30[1] = this;
    v30[0] = off_1801E75F0;
    v30[7] = v30;
    KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>::Initialize((_QWORD *)this + 17, v2, v28, (__int64)v30);
  }
  return 0LL;
}
