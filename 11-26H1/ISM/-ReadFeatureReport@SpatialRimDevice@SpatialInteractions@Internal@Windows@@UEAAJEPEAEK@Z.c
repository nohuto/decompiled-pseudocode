/*
 * XREFs of ?ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z @ 0x1800E0100
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180095C24 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x1800D2924 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800D30B4 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     _lambda_00acc3e30bec0ac7fd9c7cd13d293566_::_lambda_00acc3e30bec0ac7fd9c7cd13d293566_ @ 0x1800DFEC8 (_lambda_00acc3e30bec0ac7fd9c7cd13d293566_--_lambda_00acc3e30bec0ac7fd9c7cd13d293566_.c)
 *     ?ReadFeatureReport_@RawInputProvidersTracing@@QEAAXJKE@Z @ 0x1800E0214 (-ReadFeatureReport_@RawInputProvidersTracing@@QEAAXJKE@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialRimDevice::ReadFeatureReport(
        Windows::Internal::SpatialInteractions::SpatialRimDevice *this,
        unsigned __int8 a2,
        unsigned __int8 *a3,
        int a4)
{
  unsigned int v5; // ebx
  _QWORD *v6; // r8
  _DWORD *v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  RawInputProvidersTracing *v11; // rcx
  int v13; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v14[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v15; // [rsp+68h] [rbp-18h]
  _DWORD *v16; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  unsigned __int8 v18; // [rsp+A8h] [rbp+28h] BYREF
  unsigned __int8 *v19; // [rsp+B0h] [rbp+30h] BYREF
  int v20; // [rsp+B8h] [rbp+38h] BYREF

  v20 = a4;
  v19 = a3;
  v18 = a2;
  if ( a4 )
  {
    lambda_00acc3e30bec0ac7fd9c7cd13d293566_::_lambda_00acc3e30bec0ac7fd9c7cd13d293566_(
      v14,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)this,
      (__int64)&v20);
    v6 = (_QWORD *)v14[0];
    v13 = 0;
    v7 = v16;
    **(_BYTE **)v14[0] = *(_BYTE *)v14[1];
    v8 = NtRIMDeviceIoControl(*(_QWORD *)(v15 + 152), *(_QWORD *)(v15 + 168), 721298LL, 0LL, 0, *v6, *v7, &v13, 0);
    if ( v8 >= 0 )
      v5 = 0;
    else
      v5 = wil::details::NtStatusToHr((wil::details *)(unsigned int)v8);
    if ( RawInputProvidersTracing::IsEnabled(v9) )
    {
      wil::details::static_lazy<RawInputProvidersTracing>::get(
        v10,
        (void (__cdecl *)())_lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
      RawInputProvidersTracing::ReadFeatureReport_(v11, v5, *((_DWORD *)this + 12), v18);
    }
  }
  else
  {
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
      (const char *)0x80070057LL);
  }
  return v5;
}
