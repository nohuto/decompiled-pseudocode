/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U6@U6@U5@U3@U3@U3@U5@U5@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@8875557755@Z @ 0x140004D44
 * Callers:
 *     ?LogNonPointerDeviceStateChange@RimTelemetry@@CAXHGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH@Z @ 0x1401AE058 (-LogNonPointerDeviceStateChange@RimTelemetry@@CAXHGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const WCHAR **a7,
        const WCHAR **a8,
        __int64 a9,
        const WCHAR **a10,
        __int64 *a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23)
{
  __int64 v24; // rcx
  const WCHAR *v25; // rdx
  __int64 v26; // rax
  int v27; // eax
  const WCHAR *v28; // rdx
  __int64 v29; // rax
  int v30; // eax
  const WCHAR *v31; // rdx
  int v32; // ecx
  _BYTE v34[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+58h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-A0h]
  __int64 v38; // [rsp+68h] [rbp-98h]
  const WCHAR *v39; // [rsp+70h] [rbp-90h]
  int v40; // [rsp+78h] [rbp-88h]
  int v41; // [rsp+7Ch] [rbp-84h]
  const WCHAR *v42; // [rsp+80h] [rbp-80h]
  int v43; // [rsp+88h] [rbp-78h]
  int v44; // [rsp+8Ch] [rbp-74h]
  __int64 v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  const WCHAR *v47; // [rsp+A0h] [rbp-60h]
  int v48; // [rsp+A8h] [rbp-58h]
  int v49; // [rsp+ACh] [rbp-54h]
  __int64 v50; // [rsp+B0h] [rbp-50h]
  __int64 v51; // [rsp+B8h] [rbp-48h]
  __int64 v52; // [rsp+C0h] [rbp-40h]
  __int64 v53; // [rsp+C8h] [rbp-38h]
  __int64 v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+D8h] [rbp-28h]
  __int64 v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  __int64 v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  __int64 v60; // [rsp+100h] [rbp+0h]
  __int64 v61; // [rsp+108h] [rbp+8h]
  __int64 v62; // [rsp+110h] [rbp+10h]
  __int64 v63; // [rsp+118h] [rbp+18h]
  __int64 v64; // [rsp+120h] [rbp+20h]
  __int64 v65; // [rsp+128h] [rbp+28h]
  __int64 v66; // [rsp+130h] [rbp+30h]
  __int64 v67; // [rsp+138h] [rbp+38h]
  __int64 v68; // [rsp+140h] [rbp+40h]
  __int64 v69; // [rsp+148h] [rbp+48h]
  __int64 v70; // [rsp+150h] [rbp+50h]
  __int64 v71; // [rsp+158h] [rbp+58h]
  __int64 v72; // [rsp+160h] [rbp+60h]
  __int64 v73; // [rsp+168h] [rbp+68h]
  __int64 v74; // [rsp+170h] [rbp+70h]
  __int64 v75; // [rsp+178h] [rbp+78h]

  v74 = a23;
  v72 = a22;
  v70 = a21;
  v68 = a20;
  v66 = a19;
  v64 = a18;
  v62 = a17;
  v60 = a16;
  v58 = a15;
  v56 = a14;
  v54 = a13;
  v52 = a12;
  v75 = 4LL;
  v73 = 4LL;
  v71 = 8LL;
  v50 = *a11;
  v24 = -1LL;
  v69 = 8LL;
  v67 = 4LL;
  v25 = *a10;
  v65 = 4LL;
  v63 = 4LL;
  v61 = 8LL;
  v59 = 1LL;
  v57 = 1LL;
  v55 = 1LL;
  v53 = 8LL;
  v51 = 16LL;
  if ( v25 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v25[v26] );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v25 = &word_14026AF94;
    v27 = 2;
  }
  v48 = v27;
  v45 = a9;
  v47 = v25;
  v49 = 0;
  v46 = 4LL;
  v28 = *a8;
  if ( *a8 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v28[v29] );
    v30 = 2 * v29 + 2;
  }
  else
  {
    v28 = &word_14026AF94;
    v30 = 2;
  }
  v43 = v30;
  v42 = v28;
  v44 = 0;
  v31 = *a7;
  if ( *a7 )
  {
    do
      ++v24;
    while ( v31[v24] );
    v32 = 2 * v24 + 2;
  }
  else
  {
    v31 = &word_14026AF94;
    v32 = 2;
  }
  v37 = a6;
  v35 = a5;
  v39 = v31;
  v40 = v32;
  v38 = 2LL;
  v36 = 2LL;
  v41 = 0;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_1402A9E78, a2, 0LL, 0LL, 21, v34);
}
