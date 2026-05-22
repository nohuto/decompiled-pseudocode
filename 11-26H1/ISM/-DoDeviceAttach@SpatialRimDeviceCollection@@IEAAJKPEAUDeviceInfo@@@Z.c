/*
 * XREFs of ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x1800D53CC
 * Callers:
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D6FF0 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??0SpatialRimDeviceCollectionCallbacks@@QEAA@PEAVSpatialRimDeviceCollection@@@Z @ 0x1800473A8 (--0SpatialRimDeviceCollectionCallbacks@@QEAA@PEAVSpatialRimDeviceCollection@@@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180064414 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ @ 0x180098274 (--1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?GetNextSpectrumId@MPCInputInfoHelper@@SAIXZ @ 0x1800CE418 (-GetNextSpectrumId@MPCInputInfoHelper@@SAIXZ.c)
 *     ??$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEAPEAVHIDDevice@@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIHidDevice@SpatialInteractions@Internal@Windows@@AEAPEAVHIDDevice@@AEAPEAX@Z @ 0x1800D374C (--$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEA.c)
 *     ??0?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800D41D0 (--0-$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0Is.c)
 *     ??1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ @ 0x1800D4848 (--1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ.c)
 *     ?EnsureSpatialInteractionInitialized@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800D56E0 (-EnsureSpatialInteractionInitialized@SpatialRimDeviceCollection@@AEAAJXZ.c)
 *     ?StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z @ 0x1800D7F98 (-StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z.c)
 *     ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x1800D84C8 (-Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall SpatialRimDeviceCollection::DoDeviceAttach(void **this, unsigned int a2, struct DeviceInfo *a3)
{
  int Device; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  const char *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  const char *v15; // r9
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int NextSpectrumId; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  struct RIMDevice *v20[4]; // [rsp+50h] [rbp-B0h] BYREF
  char v21; // [rsp+70h] [rbp-90h]
  _BYTE v22[40]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v23[42]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v17 = 0;
  NextSpectrumId = 0;
  wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<RawInputProvidersTracing,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v23);
  v23[0] = &RawInputProvidersTracing::DeviceAttached::`vftable';
  RawInputProvidersTracing::DeviceAttached::StartActivity((RawInputProvidersTracing::DeviceAttached *)v23, a2);
  v20[1] = (struct RIMDevice *)&v17;
  v20[2] = (struct RIMDevice *)&NextSpectrumId;
  v20[3] = (struct RIMDevice *)v23;
  v21 = 1;
  v20[0] = 0LL;
  Device = RIMDeviceCollection::FindDevice((RIMDeviceCollection *)this, a2, 0LL, v20, 0LL);
  v7 = Device;
  v17 = Device;
  if ( Device >= 0 )
  {
    if ( (int)SpatialRimDeviceCollection::EnsureSpatialInteractionInitialized((SpatialRimDeviceCollection *)this) >= 0
      && this[354] )
    {
      NextSpectrumId = MPCInputInfoHelper::GetNextSpectrumId();
      v19 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
      v8 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialRimDevice,Windows::Internal::SpatialInteractions::IHidDevice,HIDDevice * &,void * &>(
             &v19,
             v20,
             this + 10);
      v7 = v8;
      v17 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x24F,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
          (const char *)(unsigned int)v8);
LABEL_7:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
        goto LABEL_12;
      }
      SpatialRimDeviceCollectionCallbacks::SpatialRimDeviceCollectionCallbacks(
        (SpatialRimDeviceCollectionCallbacks *)v22,
        (struct SpatialRimDeviceCollection *)this);
      v9 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD, __int64, char *, _BYTE *))(*(_QWORD *)this[354] + 48LL))(
             this[354],
             a2,
             NextSpectrumId,
             v19,
             (char *)a3 + 596,
             v22);
      v7 = v9;
      v17 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x255,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
          (const char *)(unsigned int)v9);
        SpatialRimDeviceCollectionCallbacks::~SpatialRimDeviceCollectionCallbacks(
          (SpatialRimDeviceCollectionCallbacks *)v22,
          v13,
          v14,
          v15);
        goto LABEL_7;
      }
      SpatialRimDeviceCollectionCallbacks::~SpatialRimDeviceCollectionCallbacks(
        (SpatialRimDeviceCollectionCallbacks *)v22,
        v10,
        v11,
        v12);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    }
    v7 = 0;
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x245,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
    (const char *)(unsigned int)Device);
LABEL_12:
  RawInputProvidersTracing::DeviceAttached::Stop((RawInputProvidersTracing::DeviceAttached *)v23, v17, NextSpectrumId);
  RawInputProvidersTracing::DeviceAttached::~DeviceAttached((RawInputProvidersTracing::DeviceAttached *)v23);
  return v7;
}
