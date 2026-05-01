/*
 * XREFs of ?HostInvokedMethod_@TouchKeyboardTelemetry@@QEAAXPEBG00AEBURect@Foundation@Windows@@10U_GUID@@_N33333333300000000333H3@Z @ 0x180483CB8
 * Callers:
 *     ??$HostInvokedMethod@PEBGPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEBU123@AEAY07$$CBGAEBU_GUID@@_N_N_N_NAEB_NAEB_N_N_N_N_NPEBGPEBGPEBGPEBGPEBGPEBGPEBGPEBG_NAEA_NAEAU?$atomic@_N@std@@HAEA_N@TouchKeyboardTelemetry@@SAX$$QEAPEBG0AEAY07$$CBGAEAURect@Foundation@Windows@@AEBU123@1AEBU_GUID@@$$QEA_N555AEB_N65555000000005AEA_NAEAU?$atomic@_N@std@@$$QEAH7@Z @ 0x180482324 (--$HostInvokedMethod@PEBGPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEBU123@AEAY07$$CBGAEBU_GUI.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U5@U5@U5@U5@U5@U5@U5@U5@U5@U2@U2@U2@U2@U2@U2@U2@U2@U5@U5@U5@U3@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@44AEBU?$_tlgWrapperByVal@$03@@55555554AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@7777777774444444477757@Z @ 0x1800091D4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U2@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTouchKeyboardTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardTraceLogging@@P6AXXZ@Z @ 0x180485B90 (-get@-$static_lazy@VTouchKeyboardTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardTraceLogging@@.c)
 */

void __fastcall TouchKeyboardTelemetry::HostInvokedMethod_(
        TouchKeyboardTelemetry *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        const struct Windows::Foundation::Rect *a5,
        const struct Windows::Foundation::Rect *a6,
        const unsigned __int16 *a7,
        struct _GUID *a8,
        bool a9,
        bool a10,
        bool a11,
        bool a12,
        bool a13,
        bool a14,
        bool a15,
        bool a16,
        bool a17,
        bool a18,
        const unsigned __int16 *a19,
        const unsigned __int16 *a20,
        const unsigned __int16 *a21,
        const unsigned __int16 *a22,
        const unsigned __int16 *a23,
        const unsigned __int16 *a24,
        const unsigned __int16 *a25,
        const unsigned __int16 *a26,
        bool a27,
        bool a28,
        bool a29,
        int a30)
{
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r10
  float v37; // xmm0_4
  float v38; // xmm1_4
  float v39; // xmm0_4
  float v40; // xmm1_4
  bool v41; // [rsp+15Bh] [rbp-7Dh] BYREF
  bool v42; // [rsp+15Ch] [rbp-7Ch] BYREF
  bool v43; // [rsp+15Dh] [rbp-7Bh] BYREF
  bool v44; // [rsp+15Eh] [rbp-7Ah] BYREF
  bool v45; // [rsp+15Fh] [rbp-79h] BYREF
  bool v46; // [rsp+160h] [rbp-78h] BYREF
  bool v47; // [rsp+161h] [rbp-77h] BYREF
  bool v48; // [rsp+162h] [rbp-76h] BYREF
  bool v49; // [rsp+163h] [rbp-75h] BYREF
  bool v50[4]; // [rsp+164h] [rbp-74h] BYREF
  int v51; // [rsp+168h] [rbp-70h]
  float v52; // [rsp+16Ch] [rbp-6Ch] BYREF
  float v53; // [rsp+170h] [rbp-68h] BYREF
  int v54; // [rsp+174h] [rbp-64h] BYREF
  float v55; // [rsp+178h] [rbp-60h] BYREF
  float v56; // [rsp+17Ch] [rbp-5Ch] BYREF
  float v57; // [rsp+180h] [rbp-58h] BYREF
  int v58; // [rsp+184h] [rbp-54h] BYREF
  float v59; // [rsp+188h] [rbp-50h] BYREF
  const unsigned __int16 *v60; // [rsp+190h] [rbp-48h] BYREF
  const unsigned __int16 *v61; // [rsp+198h] [rbp-40h] BYREF
  const unsigned __int16 *v62; // [rsp+1A0h] [rbp-38h] BYREF
  const unsigned __int16 *v63; // [rsp+1A8h] [rbp-30h] BYREF
  const unsigned __int16 *v64; // [rsp+1B0h] [rbp-28h] BYREF
  const unsigned __int16 *v65; // [rsp+1B8h] [rbp-20h] BYREF
  const unsigned __int16 *v66; // [rsp+1C0h] [rbp-18h] BYREF
  const unsigned __int16 *v67; // [rsp+1C8h] [rbp-10h] BYREF
  struct _GUID *v68; // [rsp+1D0h] [rbp-8h] BYREF
  const unsigned __int16 *v69; // [rsp+1D8h] [rbp+0h] BYREF
  const unsigned __int16 *v70; // [rsp+1E0h] [rbp+8h] BYREF
  const unsigned __int16 *v71; // [rsp+1E8h] [rbp+10h] BYREF
  const unsigned __int16 *v72; // [rsp+1F0h] [rbp+18h] BYREF
  __int64 v73; // [rsp+1F8h] [rbp+20h] BYREF

  v33 = wil::details::static_lazy<TouchKeyboardTraceLogging>::get(
          this,
          _lambda_1ac898bd3d40bc28a50fe4f0aa1b56f0_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v33 + 8) > 5u )
  {
    if ( tlgKeywordOn(*(_QWORD *)(v33 + 8), 0x400000000000LL) )
    {
      v37 = *((float *)a6 + 3) + *((float *)a6 + 1);
      v38 = *((float *)a6 + 2) + *(float *)a6;
      v51 = a30;
      v60 = a26;
      v61 = a25;
      v62 = a24;
      v63 = a23;
      v64 = a22;
      v65 = a21;
      v66 = a20;
      v67 = a19;
      v41 = a18;
      v42 = a17;
      v43 = a16;
      v44 = a15;
      v45 = a14;
      v46 = a13;
      v47 = a12;
      v48 = a11;
      v49 = a10;
      v50[0] = a9;
      v68 = a8;
      v69 = a7;
      v54 = *((_DWORD *)a6 + 1);
      v55 = *(float *)a6;
      v52 = v37;
      v53 = v38;
      v39 = *((float *)a5 + 3) + *((float *)a5 + 1);
      v40 = *((float *)a5 + 2) + *(float *)a5;
      v58 = *((_DWORD *)a5 + 1);
      v59 = *(float *)a5;
      v56 = v39;
      v57 = v40;
      v70 = a4;
      v71 = a3;
      v72 = a2;
      v73 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v36,
        (__int64)&unk_18080FF55,
        v34,
        v35,
        (__int64)&v73,
        &v72,
        &v71,
        &v70,
        (__int64)&v59,
        (__int64)&v58,
        (__int64)&v57,
        (__int64)&v56,
        (__int64)&v55,
        (__int64)&v54,
        (__int64)&v53,
        (__int64)&v52,
        &v69,
        (__int64)&v68,
        (__int64)v50,
        (__int64)&v49,
        (__int64)&v48,
        (__int64)&v47,
        (__int64)&v46,
        (__int64)&v45,
        (__int64)&v44,
        (__int64)&v43,
        (__int64)&v42,
        (__int64)&v41,
        &v67,
        &v66,
        &v65,
        &v64,
        &v63,
        &v62,
        &v61,
        &v60);
    }
  }
}
