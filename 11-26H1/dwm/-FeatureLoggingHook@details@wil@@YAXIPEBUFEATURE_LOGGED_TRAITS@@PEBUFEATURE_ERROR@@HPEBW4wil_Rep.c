/*
 * XREFs of ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x140007B70
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@D@@U2@U3@U3@U3@U2@U3@U3@U3@U3@U1@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@D@@455545555353@Z @ 0x140001008 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapSz@D@@U2@U3@U3@U3.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@35AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1400012E4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U3@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1400013BC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U-$.c)
 *     _tlgKeywordOn @ 0x140001B80 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x14000BB6C (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
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
  _DWORD *v12; // rdx
  _DWORD *v13; // rcx
  int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // rcx
  int v20; // ecx
  __int64 v21; // r8
  __int64 v22; // r9
  _DWORD *v23; // rcx
  int v24; // ecx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  _DWORD *v28; // rcx
  int v29; // ecx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // eax
  _WORD v33[2]; // [rsp+B0h] [rbp-80h] BYREF
  int v34; // [rsp+B4h] [rbp-7Ch] BYREF
  int v35; // [rsp+B8h] [rbp-78h] BYREF
  int v36; // [rsp+BCh] [rbp-74h] BYREF
  int v37; // [rsp+C0h] [rbp-70h] BYREF
  int v38; // [rsp+C4h] [rbp-6Ch] BYREF
  int v39; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v40; // [rsp+D0h] [rbp-60h] BYREF
  int v41; // [rsp+D8h] [rbp-58h] BYREF
  const unsigned __int16 *v42; // [rsp+E0h] [rbp-50h] BYREF
  const unsigned __int16 *v43; // [rsp+E8h] [rbp-48h] BYREF
  const unsigned __int16 *v44; // [rsp+F0h] [rbp-40h] BYREF
  const unsigned __int16 *v45; // [rsp+F8h] [rbp-38h] BYREF
  const unsigned __int16 *v46; // [rsp+100h] [rbp-30h] BYREF
  const unsigned __int16 *v47; // [rsp+108h] [rbp-28h] BYREF
  const unsigned __int16 *v48; // [rsp+110h] [rbp-20h] BYREF
  const unsigned __int16 *v49; // [rsp+118h] [rbp-18h] BYREF
  const unsigned __int16 *v50; // [rsp+120h] [rbp-10h] BYREF

  v8 = (int)a4;
  v11 = (int)this;
  v12 = *(_DWORD **)(wil::details::static_lazy<wil::details::FeatureLogging>::get() + 8);
  if ( v12 && *v12 )
  {
    if ( a5 )
    {
      v13 = *(_DWORD **)(wil::details::static_lazy<wil::details::FeatureLogging>::get() + 8);
      if ( *v13 > 5u && tlgKeywordOn((__int64)v13, 2LL) )
      {
        v17 = *a5;
        v40 = a8;
        LOBYTE(v33[0]) = v8 != 0;
        v35 = v17;
        if ( a2 )
        {
          LOWORD(v36) = *((unsigned __int8 *)a2 + 4);
          v34 = a2[1];
          v18 = *a2;
        }
        else
        {
          v34 = -1;
          LOWORD(v36) = -1;
          v18 = -1;
        }
        v37 = v18;
        v38 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v14,
          (int)&unk_140013AAA,
          v15,
          v16,
          (__int64)&v38,
          (__int64)&v37,
          (__int64)&v34,
          (__int64)&v36,
          (__int64)v33,
          (__int64)&v35,
          (__int64)&v40);
      }
      if ( a2 )
      {
        if ( *((_BYTE *)a2 + 4) == 1 )
        {
          if ( v8 )
          {
            v19 = *(_DWORD **)(wil::details::static_lazy<wil::details::FeatureLogging>::get() + 8);
            if ( *v19 > 5u )
            {
              if ( tlgKeywordOn((__int64)v19, 10LL) )
              {
                v38 = *a5;
                LOWORD(v34) = *((unsigned __int8 *)a2 + 4);
                v37 = a2[1];
                v35 = *a2;
                v40 = a8;
                LOBYTE(v33[0]) = 1;
                v36 = v11;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                  v20,
                  (int)&unk_140013CC3,
                  v21,
                  v22,
                  (__int64)&v36,
                  (__int64)&v35,
                  (__int64)&v37,
                  (__int64)&v34,
                  (__int64)v33,
                  (__int64)&v38,
                  (__int64)&v40);
              }
            }
          }
        }
      }
    }
    else if ( a6 )
    {
      v23 = *(_DWORD **)(wil::details::static_lazy<wil::details::FeatureLogging>::get() + 8);
      if ( *v23 > 5u && tlgKeywordOn((__int64)v23, 4LL) )
      {
        v40 = a8;
        LOBYTE(v36) = v8 != 0;
        LOBYTE(v33[0]) = (_BYTE)a7;
        v38 = *(_DWORD *)a6;
        if ( a2 )
        {
          LOWORD(v34) = *((unsigned __int8 *)a2 + 4);
          v35 = a2[1];
          v27 = *a2;
        }
        else
        {
          v35 = -1;
          LOWORD(v34) = -1;
          v27 = -1;
        }
        v37 = v27;
        v39 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
          v24,
          (int)&unk_140013B1B,
          v25,
          v26,
          (__int64)&v39,
          (__int64)&v37,
          (__int64)&v35,
          (__int64)&v34,
          (__int64)&v36,
          (__int64)&v38,
          (__int64)v33,
          (__int64)&v40);
      }
    }
    else if ( a3 )
    {
      v28 = *(_DWORD **)(wil::details::static_lazy<wil::details::FeatureLogging>::get() + 8);
      if ( *v28 > 2u )
      {
        if ( tlgKeywordOn((__int64)v28, 1LL) )
        {
          v39 = *((_DWORD *)a3 + 20);
          v42 = (const unsigned __int16 *)*((_QWORD *)a3 + 11);
          v38 = *((_DWORD *)a3 + 8);
          v43 = (const unsigned __int16 *)*((_QWORD *)a3 + 5);
          v44 = (const unsigned __int16 *)*((_QWORD *)a3 + 6);
          v45 = (const unsigned __int16 *)*((_QWORD *)a3 + 12);
          v46 = (const unsigned __int16 *)*((_QWORD *)a3 + 9);
          LOWORD(v36) = *((_WORD *)a3 + 28);
          v47 = (const unsigned __int16 *)*((_QWORD *)a3 + 8);
          v48 = (const unsigned __int16 *)*((_QWORD *)a3 + 2);
          v49 = (const unsigned __int16 *)*((_QWORD *)a3 + 3);
          v33[0] = *((_WORD *)a3 + 2);
          v50 = (const unsigned __int16 *)*((_QWORD *)a3 + 1);
          v37 = *(_DWORD *)a3;
          if ( a2 )
          {
            LOWORD(v34) = *((unsigned __int8 *)a2 + 4);
            v35 = a2[1];
            v32 = *a2;
          }
          else
          {
            v35 = -1;
            LOWORD(v34) = -1;
            v32 = -1;
          }
          v41 = v32;
          LODWORD(v40) = v11;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            v29,
            (int)&unk_140013BA3,
            v30,
            v31,
            (__int64)&v40,
            (__int64)&v41,
            (__int64)&v35,
            (__int64)&v34,
            (__int64)&v37,
            &v50,
            (__int64)v33,
            &v49,
            &v48,
            &v47,
            (__int64)&v36,
            &v46,
            &v45,
            &v44,
            &v43,
            (__int64)&v38,
            &v42,
            (__int64)&v39);
        }
      }
    }
  }
}
