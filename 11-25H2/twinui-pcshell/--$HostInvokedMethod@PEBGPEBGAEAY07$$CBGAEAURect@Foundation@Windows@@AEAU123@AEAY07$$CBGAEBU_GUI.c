/*
 * XREFs of ??$HostInvokedMethod@PEBGPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEAU123@AEAY07$$CBGAEBU_GUID@@_N_N_N_NAEB_NAEB_N_N_N_N_NPEBGPEBGPEBGPEBGPEBGPEBGPEBGPEBG_NAEA_NAEAU?$atomic@_N@std@@HAEA_N@TouchKeyboardTelemetry@@SAX$$QEAPEBG0AEAY07$$CBGAEAURect@Foundation@Windows@@21AEBU_GUID@@$$QEA_N444AEB_N54444000000004AEA_NAEAU?$atomic@_N@std@@$$QEAH6@Z @ 0x180473460
 * Callers:
 *     ?LogPrimaryViewShowRequestInfo@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z @ 0x180474EB0 (-LogPrimaryViewShowRequestInfo@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C5854 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ?HostInvokedMethod_@TouchKeyboardTelemetry@@QEAAXPEBG00AEAURect@Foundation@Windows@@10U_GUID@@_N33333333300000000333H3@Z @ 0x180474A00 (-HostInvokedMethod_@TouchKeyboardTelemetry@@QEAAXPEBG00AEAURect@Foundation@Windows@@10U_GUID@@_N.c)
 *     ?IsEnabled@TouchKeyboardTelemetry@@SA_NE_K@Z @ 0x180474D78 (-IsEnabled@TouchKeyboardTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VTouchKeyboardTelemetry@@@details@wil@@QEAAPEAVTouchKeyboardTelemetry@@P6AXXZ@Z @ 0x180476114 (-get@-$static_lazy@VTouchKeyboardTelemetry@@@details@wil@@QEAAPEAVTouchKeyboardTelemetry@@P6AXXZ.c)
 */

void __fastcall TouchKeyboardTelemetry::HostInvokedMethod<unsigned short const *,unsigned short const *,unsigned short const (&)[8],Windows::Foundation::Rect &,Windows::Foundation::Rect &,unsigned short const (&)[8],_GUID const &,bool,bool,bool,bool,bool const &,bool const &,bool,bool,bool,bool,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,bool,bool &,std::atomic<bool> &,int,bool &>(
        const unsigned __int16 **a1,
        const unsigned __int16 **a2,
        __int64 a3,
        struct Windows::Foundation::Rect *a4,
        struct Windows::Foundation::Rect *a5,
        __int64 a6,
        __int64 a7,
        bool *a8,
        bool *a9,
        bool *a10,
        bool *a11,
        bool *a12,
        bool *a13,
        bool *a14,
        bool *a15,
        bool *a16,
        bool *a17,
        const unsigned __int16 **a18,
        const unsigned __int16 **a19,
        const unsigned __int16 **a20,
        const unsigned __int16 **a21,
        const unsigned __int16 **a22,
        const unsigned __int16 **a23,
        const unsigned __int16 **a24,
        const unsigned __int16 **a25,
        bool *a26,
        bool *a27,
        __int64 a28)
{
  __int64 v31; // rcx
  char v32; // al
  unsigned __int16 *v33; // rcx
  int v34; // r8d
  bool v35; // r10
  struct _GUID v36; // [rsp+100h] [rbp-18h] BYREF

  if ( TouchKeyboardTelemetry::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    wil::details::static_lazy<TouchKeyboardTelemetry>::get(
      v31,
      _lambda_1bb754991d9aec61d6443053699089ac_::_lambda_invoker_cdecl_);
    v32 = std::_Atomic_storage<bool,1>::load(a28);
    v36 = GUID_NULL;
    v33 = (unsigned __int16 *)*a18;
    LOBYTE(v33) = *a8;
    TouchKeyboardTelemetry::HostInvokedMethod_(
      (TouchKeyboardTelemetry *)v33,
      *a1,
      *a2,
      L"UNKNOWN",
      a4,
      a5,
      L"Unknown",
      &v36,
      *a8,
      *a9,
      *a10,
      *a11,
      *a12,
      *a13,
      *a14,
      *a15,
      *a16,
      *a17,
      *a18,
      *a19,
      *a20,
      *a21,
      *a22,
      *a23,
      *a24,
      *a25,
      *a26,
      *a27,
      v32,
      v34,
      v35);
  }
}
