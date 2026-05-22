/*
 * XREFs of ?OnInputReport@SpatialRimDeviceCollection@@MEAAJKPEAXK@Z @ 0x180047080
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z @ 0x18004729C (-IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersContinuousTracing@@P6AXXZ@Z @ 0x1800472DC (-get@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersC.c)
 *     ??0SpatialRimDeviceCollectionCallbacks@@QEAA@PEAVSpatialRimDeviceCollection@@@Z @ 0x1800473A8 (--0SpatialRimDeviceCollectionCallbacks@@QEAA@PEAVSpatialRimDeviceCollection@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InputReportReceived_@RawInputProvidersContinuousTracing@@QEAAXKK@Z @ 0x1800D6408 (-InputReportReceived_@RawInputProvidersContinuousTracing@@QEAAXKK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialRimDeviceCollection::OnInputReport(
        SpatialRimDeviceCollection *this,
        unsigned __int64 a2,
        void *a3,
        unsigned int a4)
{
  unsigned int v6; // esi
  __int64 v8; // rcx
  RawInputProvidersContinuousTracing *v9; // rcx
  int v10; // eax
  const char *v11; // r9
  int v13[2]; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+3Ch] [rbp-1Ch]
  int v15; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = a2;
  if ( RawInputProvidersContinuousTracing::IsEnabled((unsigned __int8)this, a2) )
  {
    wil::details::static_lazy<RawInputProvidersContinuousTracing>::get(
      v8,
      _lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_);
    RawInputProvidersContinuousTracing::InputReportReceived_(v9, v6, a4);
  }
  if ( *((_QWORD *)this + 354) )
  {
    SpatialRimDeviceCollectionCallbacks::SpatialRimDeviceCollectionCallbacks(
      (SpatialRimDeviceCollectionCallbacks *)v13,
      this);
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *, _QWORD))(**((_QWORD **)this + 354) + 64LL))(
            *((_QWORD *)this + 354),
            v6,
            a3,
            a4);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x277,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)(unsigned int)v10,
        (int)v13);
    *(_QWORD *)v13 = &SpatialRimDeviceCollectionCallbacks::`vftable';
    if ( v15 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x45,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        v11);
    v14 = -1073741823;
  }
  return 0LL;
}
