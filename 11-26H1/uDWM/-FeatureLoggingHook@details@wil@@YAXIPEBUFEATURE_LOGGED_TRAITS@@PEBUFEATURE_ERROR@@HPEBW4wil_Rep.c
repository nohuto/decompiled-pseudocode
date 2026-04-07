/*
 * XREFs of ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x18006F350
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@D@@U2@U3@U3@U3@U2@U3@U3@U3@U3@U1@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@D@@455545555353@Z @ 0x180001100 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapSz@D@@U2@U3@U3@U3.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@35AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800013DC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U3@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800014B4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U-$.c)
 *     _tlgKeywordOn @ 0x18006E790 (_tlgKeywordOn.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18006F78C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x18006F7C0 (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 */

void __fastcall wil::details::FeatureLoggingHook(
        wil::details *this,
        unsigned __int16 *a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        const struct FEATURE_ERROR *a4,
        int *a5,
        const enum wil_ReportingKind *a6,
        const enum wil_VariantReportingKind *a7,
        __int64 a8)
{
  int v8; // r14d
  int v11; // r15d
  wil::TraceLoggingProvider *v12; // rax
  unsigned __int8 v13; // dl
  unsigned __int64 v14; // r8
  _DWORD *v15; // rcx
  int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  int v20; // eax
  _DWORD *v21; // rcx
  int v22; // ecx
  __int64 v23; // r8
  __int64 v24; // r9
  _DWORD *v25; // rcx
  int v26; // ecx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // eax
  _DWORD *v30; // rcx
  int v31; // ecx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  _WORD v35[2]; // [rsp+B0h] [rbp-80h] BYREF
  int v36; // [rsp+B4h] [rbp-7Ch] BYREF
  int v37; // [rsp+B8h] [rbp-78h] BYREF
  int v38; // [rsp+BCh] [rbp-74h] BYREF
  int v39; // [rsp+C0h] [rbp-70h] BYREF
  int v40; // [rsp+C4h] [rbp-6Ch] BYREF
  int v41; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v42; // [rsp+D0h] [rbp-60h] BYREF
  int v43; // [rsp+D8h] [rbp-58h] BYREF
  const unsigned __int16 *v44; // [rsp+E0h] [rbp-50h] BYREF
  const unsigned __int16 *v45; // [rsp+E8h] [rbp-48h] BYREF
  const unsigned __int16 *v46; // [rsp+F0h] [rbp-40h] BYREF
  const unsigned __int16 *v47; // [rsp+F8h] [rbp-38h] BYREF
  const unsigned __int16 *v48; // [rsp+100h] [rbp-30h] BYREF
  const unsigned __int16 *v49; // [rsp+108h] [rbp-28h] BYREF
  const unsigned __int16 *v50; // [rsp+110h] [rbp-20h] BYREF
  const unsigned __int16 *v51; // [rsp+118h] [rbp-18h] BYREF
  const unsigned __int16 *v52; // [rsp+120h] [rbp-10h] BYREF

  v8 = (int)a4;
  v11 = (int)this;
  v12 = (wil::TraceLoggingProvider *)wil::details::static_lazy<wil::details::FeatureLogging>::get();
  if ( wil::TraceLoggingProvider::IsEnabled_(v12, v13, v14) )
  {
    if ( a5 )
    {
      v15 = *(_DWORD **)(wil::details::static_lazy<wil::details::FeatureLogging>::get() + 8);
      if ( *v15 > 5u && tlgKeywordOn((__int64)v15, 2LL) )
      {
        v19 = *a5;
        v42 = a8;
        LOBYTE(v35[0]) = v8 != 0;
        v37 = v19;
        if ( a2 )
        {
          LOWORD(v38) = *((unsigned __int8 *)a2 + 4);
          v36 = a2[1];
          v20 = *a2;
        }
        else
        {
          v36 = -1;
          LOWORD(v38) = -1;
          v20 = -1;
        }
        v39 = v20;
        v40 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v16,
          (int)&unk_1800FE94A,
          v17,
          v18,
          (__int64)&v40,
          (__int64)&v39,
          (__int64)&v36,
          (__int64)&v38,
          (__int64)v35,
          (__int64)&v37,
          (__int64)&v42);
      }
      if ( a2 )
      {
        if ( *((_BYTE *)a2 + 4) == 1 )
        {
          if ( v8 )
          {
            v21 = *(_DWORD **)(wil::details::static_lazy<wil::details::FeatureLogging>::get() + 8);
            if ( *v21 > 5u )
            {
              if ( tlgKeywordOn((__int64)v21, 10LL) )
              {
                v40 = *a5;
                LOWORD(v36) = *((unsigned __int8 *)a2 + 4);
                v39 = a2[1];
                v37 = *a2;
                v42 = a8;
                LOBYTE(v35[0]) = 1;
                v38 = v11;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                  v22,
                  (int)&unk_1800FEB63,
                  v23,
                  v24,
                  (__int64)&v38,
                  (__int64)&v37,
                  (__int64)&v39,
                  (__int64)&v36,
                  (__int64)v35,
                  (__int64)&v40,
                  (__int64)&v42);
              }
            }
          }
        }
      }
    }
    else if ( a6 )
    {
      v25 = *(_DWORD **)(wil::details::static_lazy<wil::details::FeatureLogging>::get() + 8);
      if ( *v25 > 5u && tlgKeywordOn((__int64)v25, 4LL) )
      {
        v42 = a8;
        LOBYTE(v38) = v8 != 0;
        LOBYTE(v35[0]) = (_BYTE)a7;
        v40 = *(_DWORD *)a6;
        if ( a2 )
        {
          LOWORD(v36) = *((unsigned __int8 *)a2 + 4);
          v37 = a2[1];
          v29 = *a2;
        }
        else
        {
          v37 = -1;
          LOWORD(v36) = -1;
          v29 = -1;
        }
        v39 = v29;
        v41 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
          v26,
          (int)&unk_1800FE9BB,
          v27,
          v28,
          (__int64)&v41,
          (__int64)&v39,
          (__int64)&v37,
          (__int64)&v36,
          (__int64)&v38,
          (__int64)&v40,
          (__int64)v35,
          (__int64)&v42);
      }
    }
    else if ( a3 )
    {
      v30 = *(_DWORD **)(wil::details::static_lazy<wil::details::FeatureLogging>::get() + 8);
      if ( *v30 > 2u )
      {
        if ( tlgKeywordOn((__int64)v30, 1LL) )
        {
          v41 = *((_DWORD *)a3 + 20);
          v44 = (const unsigned __int16 *)*((_QWORD *)a3 + 11);
          v40 = *((_DWORD *)a3 + 8);
          v45 = (const unsigned __int16 *)*((_QWORD *)a3 + 5);
          v46 = (const unsigned __int16 *)*((_QWORD *)a3 + 6);
          v47 = (const unsigned __int16 *)*((_QWORD *)a3 + 12);
          v48 = (const unsigned __int16 *)*((_QWORD *)a3 + 9);
          LOWORD(v38) = *((_WORD *)a3 + 28);
          v49 = (const unsigned __int16 *)*((_QWORD *)a3 + 8);
          v50 = (const unsigned __int16 *)*((_QWORD *)a3 + 2);
          v51 = (const unsigned __int16 *)*((_QWORD *)a3 + 3);
          v35[0] = *((_WORD *)a3 + 2);
          v52 = (const unsigned __int16 *)*((_QWORD *)a3 + 1);
          v39 = *(_DWORD *)a3;
          if ( a2 )
          {
            LOWORD(v36) = *((unsigned __int8 *)a2 + 4);
            v37 = a2[1];
            v34 = *a2;
          }
          else
          {
            v37 = -1;
            LOWORD(v36) = -1;
            v34 = -1;
          }
          v43 = v34;
          LODWORD(v42) = v11;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            v31,
            (int)&unk_1800FEA43,
            v32,
            v33,
            (__int64)&v42,
            (__int64)&v43,
            (__int64)&v37,
            (__int64)&v36,
            (__int64)&v39,
            &v52,
            (__int64)v35,
            &v51,
            &v50,
            &v49,
            (__int64)&v38,
            &v48,
            &v47,
            &v46,
            &v45,
            (__int64)&v40,
            &v44,
            (__int64)&v41);
        }
      }
    }
  }
}
