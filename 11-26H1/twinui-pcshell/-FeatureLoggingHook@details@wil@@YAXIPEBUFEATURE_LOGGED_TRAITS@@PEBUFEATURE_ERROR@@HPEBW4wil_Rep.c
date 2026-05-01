/*
 * XREFs of ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x1801AAC30
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@D@@U2@U3@U3@U3@U2@U3@U3@U3@U3@U1@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@D@@455545555353@Z @ 0x18000153C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapSz@D@@U2@U3@U3@U3.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@35AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001818 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U3@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800018F0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U-$.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x1801AB088 (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 *     ?Provider@FeatureLogging@details@wil@@SAPEBU_tlgProvider_t@@XZ @ 0x1802D6634 (-Provider@FeatureLogging@details@wil@@SAPEBU_tlgProvider_t@@XZ.c)
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
  int v9; // r14d
  int v11; // r15d
  _DWORD *v12; // rdx
  const struct _tlgProvider_t *v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  const struct _tlgProvider_t *v17; // rax
  __int64 v18; // r9
  int v19; // ecx
  const struct _tlgProvider_t *v20; // rax
  __int64 v21; // r9
  int v22; // eax
  int v23; // eax
  const struct _tlgProvider_t *v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // ecx
  int v28; // eax
  __int16 v29[2]; // [rsp+B0h] [rbp-80h] BYREF
  int v30; // [rsp+B4h] [rbp-7Ch] BYREF
  int v31; // [rsp+B8h] [rbp-78h] BYREF
  int v32; // [rsp+BCh] [rbp-74h] BYREF
  int v33; // [rsp+C0h] [rbp-70h] BYREF
  int v34; // [rsp+C4h] [rbp-6Ch] BYREF
  int v35; // [rsp+C8h] [rbp-68h]
  __int64 v36; // [rsp+D0h] [rbp-60h] BYREF
  int v37; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v38; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v39; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v40; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v41; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v42; // [rsp+100h] [rbp-30h] BYREF
  __int64 v43; // [rsp+108h] [rbp-28h] BYREF
  __int64 v44; // [rsp+110h] [rbp-20h] BYREF
  __int64 v45; // [rsp+118h] [rbp-18h] BYREF
  __int64 v46; // [rsp+120h] [rbp-10h] BYREF

  v9 = (int)a4;
  v11 = (int)this;
  v12 = *(_DWORD **)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                       this,
                       _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                   + 8);
  if ( v12 && *v12 )
  {
    if ( a5 )
    {
      v13 = wil::details::FeatureLogging::Provider();
      if ( *(_DWORD *)v13 > 5u && tlgKeywordOn((__int64)v13, 2LL) )
      {
        v15 = *a5;
        v36 = a8;
        LOBYTE(v29[0]) = v9 != 0;
        v31 = v15;
        if ( a2 )
        {
          LOWORD(v32) = *((unsigned __int8 *)a2 + 4);
          v30 = a2[1];
          v16 = *a2;
        }
        else
        {
          v30 = -1;
          LOWORD(v32) = -1;
          v16 = -1;
        }
        v33 = v16;
        v34 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v14,
          (__int64)&unk_1807E2758);
      }
      if ( a2 )
      {
        if ( *((_BYTE *)a2 + 4) == 1 )
        {
          if ( v9 )
          {
            v17 = wil::details::FeatureLogging::Provider();
            if ( *(_DWORD *)v17 > 5u )
            {
              if ( tlgKeywordOn((__int64)v17, 10LL) )
              {
                v19 = *a5;
                LOWORD(v30) = *((unsigned __int8 *)a2 + 4);
                v33 = a2[1];
                v31 = *a2;
                v34 = v19;
                v36 = a8;
                LOBYTE(v29[0]) = 1;
                v32 = v11;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                  v18,
                  (__int64)&unk_1807E2971);
              }
            }
          }
        }
      }
    }
    else if ( a6 )
    {
      v20 = wil::details::FeatureLogging::Provider();
      if ( *(_DWORD *)v20 > 5u && tlgKeywordOn((__int64)v20, 4LL) )
      {
        LOBYTE(v32) = v9 != 0;
        LOBYTE(v29[0]) = (_BYTE)a7;
        v22 = *(_DWORD *)a6;
        v36 = a8;
        v34 = v22;
        if ( a2 )
        {
          LOWORD(v30) = *((unsigned __int8 *)a2 + 4);
          v31 = a2[1];
          v23 = *a2;
        }
        else
        {
          v31 = -1;
          LOWORD(v30) = -1;
          v23 = -1;
        }
        v33 = v23;
        v35 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
          v21,
          (__int64)&unk_1807E27C9);
      }
    }
    else if ( a3 )
    {
      v24 = wil::details::FeatureLogging::Provider();
      if ( *(_DWORD *)v24 > 2u )
      {
        if ( tlgKeywordOn((__int64)v24, 1LL) )
        {
          v27 = *((_DWORD *)a3 + 20);
          v38 = *((_QWORD *)a3 + 11);
          v34 = *((_DWORD *)a3 + 8);
          v39 = *((_QWORD *)a3 + 5);
          v40 = *((_QWORD *)a3 + 6);
          v41 = *((_QWORD *)a3 + 12);
          v42 = *((_QWORD *)a3 + 9);
          LOWORD(v32) = *((_WORD *)a3 + 28);
          v43 = *((_QWORD *)a3 + 8);
          v44 = *((_QWORD *)a3 + 2);
          v45 = *((_QWORD *)a3 + 3);
          v29[0] = *((_WORD *)a3 + 2);
          v46 = *((_QWORD *)a3 + 1);
          v33 = *(_DWORD *)a3;
          v35 = v27;
          if ( a2 )
          {
            LOWORD(v30) = *((unsigned __int8 *)a2 + 4);
            v31 = a2[1];
            v28 = *a2;
          }
          else
          {
            v31 = -1;
            LOWORD(v30) = -1;
            v28 = -1;
          }
          v37 = v28;
          LODWORD(v36) = v11;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            v26,
            (__int64)&unk_1807E2851,
            v25,
            v26,
            (__int64)&v36,
            (__int64)&v37,
            (__int64)&v31,
            (__int64)&v30,
            (__int64)&v33,
            &v46,
            (__int64)v29,
            &v45,
            &v44,
            &v43,
            (__int64)&v32,
            &v42,
            &v41,
            &v40,
            &v39,
            (__int64)&v34,
            &v38);
        }
      }
    }
  }
}
