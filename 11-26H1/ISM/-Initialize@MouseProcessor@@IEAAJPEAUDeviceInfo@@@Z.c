/*
 * XREFs of ?Initialize@MouseProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x18019BF58
 * Callers:
 *     ?Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18019BC40 (-Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x18008DEBC (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetHapticProcessor@ISMStatics@@SAPEAVHapticProcessor@@XZ @ 0x1800A622C (-GetHapticProcessor@ISMStatics@@SAPEAVHapticProcessor@@XZ.c)
 *     ?OnMouseArrival@HapticProcessor@@QEAAJPEBUDeviceInfo@@@Z @ 0x1800C9D18 (-OnMouseArrival@HapticProcessor@@QEAAJPEBUDeviceInfo@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MouseHaptics2@@@details@wil@@QEAA_NXZ @ 0x1800CB6E8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MouseHaptics2@@@details@wil@@QEAA.c)
 *     ?IsHIDMouse@MouseProcessor@@AEAA_NPEBULegacyDeviceInfo@@@Z @ 0x18019C134 (-IsHIDMouse@MouseProcessor@@AEAA_NPEBULegacyDeviceInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MouseProcessor::Initialize(MouseProcessor *this, struct DeviceInfo *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, char *); // rbx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64, char *); // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64 (__fastcall *)(MouseProcessor *), MouseProcessor *, char *); // rsi
  __int64 v15; // rcx
  MouseProcessor *v16; // rcx
  HapticProcessor *HapticProcessor; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 72LL))(*((_QWORD *)this + 7));
  v5 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 72LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 15);
  v6 = v5(v4, (char *)this + 120);
  if ( v6 < 0 )
  {
    v7 = 131LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = *((_QWORD *)this + 15);
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)v9 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 16);
  v6 = v10(v9, *((_QWORD *)this + 8), 1LL, (char *)this + 128);
  if ( v6 < 0 )
  {
    v7 = 132LL;
    goto LABEL_3;
  }
  if ( IsEdition(253345LL) )
  {
    v19 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    v11 = CoreUICreate(&v19);
    v6 = v11;
    if ( v11 < 0 )
    {
      v12 = 137LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
      return (unsigned int)v6;
    }
    v13 = v19;
    v14 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(MouseProcessor *), MouseProcessor *, char *))(*(_QWORD *)v19 + 144LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 214);
    v11 = v14(v13, lambda_0ae42814bce62c2276581394a3e1fe3f_::_lambda_invoker_cdecl_, this, (char *)this + 1712);
    v6 = v11;
    if ( v11 < 0 )
    {
      v12 = 146LL;
      goto LABEL_12;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 17);
    RegistryWatcher::Create(
      v15,
      L"SYSTEM\\MOUSE",
      (HKEY)this,
      (void (*)(void *, HKEY))lambda_de32a61301aa02ed510f29790f759930_::_lambda_invoker_cdecl_,
      (struct RegistryWatcher **)this + 17);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_MouseHaptics2>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_MouseHaptics2>::GetImpl'::`2'::impl)
    && !*((_BYTE *)a2 + 12)
    && MouseProcessor::IsHIDMouse(v16, a2) )
  {
    HapticProcessor = ISMStatics::GetHapticProcessor();
    HapticProcessor::OnMouseArrival(HapticProcessor, a2);
  }
  return 0LL;
}
