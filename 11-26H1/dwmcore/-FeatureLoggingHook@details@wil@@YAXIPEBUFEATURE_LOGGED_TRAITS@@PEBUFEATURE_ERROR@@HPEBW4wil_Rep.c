/*
 * XREFs of ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x180098A70
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@D@@U2@U3@U3@U3@U2@U3@U3@U3@U3@U1@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@D@@455545555353@Z @ 0x1800018FC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapSz@D@@U2@U3@U3@U3.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@35AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800020B4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U3@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18000218C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U-$.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ?IsEnabled@FeatureLogging@details@wil@@SA_NE_K@Z @ 0x180098EB4 (-IsEnabled@FeatureLogging@details@wil@@SA_NE_K@Z.c)
 *     ?Provider@FeatureLogging@details@wil@@SAPEBU_tlgProvider_t@@XZ @ 0x180223904 (-Provider@FeatureLogging@details@wil@@SAPEBU_tlgProvider_t@@XZ.c)
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
  const struct _tlgProvider_t *v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  const struct _tlgProvider_t *v16; // rax
  __int64 v17; // r8
  int v18; // ecx
  const struct _tlgProvider_t *v19; // rax
  __int64 v20; // r8
  int v21; // eax
  int v22; // eax
  const struct _tlgProvider_t *v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // ecx
  int v27; // eax
  __int16 v28[2]; // [rsp+B0h] [rbp-80h] BYREF
  int v29; // [rsp+B4h] [rbp-7Ch] BYREF
  int v30; // [rsp+B8h] [rbp-78h] BYREF
  int v31; // [rsp+BCh] [rbp-74h] BYREF
  int v32; // [rsp+C0h] [rbp-70h] BYREF
  int v33; // [rsp+C4h] [rbp-6Ch] BYREF
  int v34; // [rsp+C8h] [rbp-68h]
  __int64 v35; // [rsp+D0h] [rbp-60h] BYREF
  int v36; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v37; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v38; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v39; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v40; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v41; // [rsp+100h] [rbp-30h] BYREF
  __int64 v42; // [rsp+108h] [rbp-28h] BYREF
  __int64 v43; // [rsp+110h] [rbp-20h] BYREF
  __int64 v44; // [rsp+118h] [rbp-18h] BYREF
  __int64 v45; // [rsp+120h] [rbp-10h] BYREF

  v8 = (int)a4;
  v11 = (int)this;
  if ( wil::details::FeatureLogging::IsEnabled((unsigned __int8)this, (unsigned __int64)a2) )
  {
    if ( a5 )
    {
      v12 = wil::details::FeatureLogging::Provider();
      if ( *(_DWORD *)v12 > 5u && tlgKeywordOn((__int64)v12, 2LL) )
      {
        v14 = *a5;
        v35 = a8;
        LOBYTE(v28[0]) = v8 != 0;
        v30 = v14;
        if ( a2 )
        {
          LOWORD(v31) = *((unsigned __int8 *)a2 + 4);
          v29 = a2[1];
          v15 = *a2;
        }
        else
        {
          v29 = -1;
          LOWORD(v31) = -1;
          v15 = -1;
        }
        v32 = v15;
        v33 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v13,
          (__int64)&unk_1803AE68A);
      }
      if ( a2 )
      {
        if ( *((_BYTE *)a2 + 4) == 1 )
        {
          if ( v8 )
          {
            v16 = wil::details::FeatureLogging::Provider();
            if ( *(_DWORD *)v16 > 5u && tlgKeywordOn((__int64)v16, 10LL) )
            {
              v18 = *a5;
              LOWORD(v29) = *((unsigned __int8 *)a2 + 4);
              v32 = a2[1];
              v30 = *a2;
              v33 = v18;
              v35 = a8;
              LOBYTE(v28[0]) = 1;
              v31 = v11;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                v17,
                (__int64)&unk_1803AE8A3);
            }
          }
        }
      }
    }
    else if ( a6 )
    {
      v19 = wil::details::FeatureLogging::Provider();
      if ( *(_DWORD *)v19 > 5u && tlgKeywordOn((__int64)v19, 4LL) )
      {
        LOBYTE(v31) = v8 != 0;
        LOBYTE(v28[0]) = (_BYTE)a7;
        v21 = *(_DWORD *)a6;
        v35 = a8;
        v33 = v21;
        if ( a2 )
        {
          LOWORD(v29) = *((unsigned __int8 *)a2 + 4);
          v30 = a2[1];
          v22 = *a2;
        }
        else
        {
          v30 = -1;
          LOWORD(v29) = -1;
          v22 = -1;
        }
        v32 = v22;
        v34 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
          v20,
          (__int64)&unk_1803AE6FB);
      }
    }
    else if ( a3 )
    {
      v23 = wil::details::FeatureLogging::Provider();
      if ( *(_DWORD *)v23 > 2u && tlgKeywordOn((__int64)v23, 1LL) )
      {
        v26 = *((_DWORD *)a3 + 20);
        v37 = *((_QWORD *)a3 + 11);
        v33 = *((_DWORD *)a3 + 8);
        v38 = *((_QWORD *)a3 + 5);
        v39 = *((_QWORD *)a3 + 6);
        v40 = *((_QWORD *)a3 + 12);
        v41 = *((_QWORD *)a3 + 9);
        LOWORD(v31) = *((_WORD *)a3 + 28);
        v42 = *((_QWORD *)a3 + 8);
        v43 = *((_QWORD *)a3 + 2);
        v44 = *((_QWORD *)a3 + 3);
        v28[0] = *((_WORD *)a3 + 2);
        v45 = *((_QWORD *)a3 + 1);
        v32 = *(_DWORD *)a3;
        v34 = v26;
        if ( a2 )
        {
          LOWORD(v29) = *((unsigned __int8 *)a2 + 4);
          v30 = a2[1];
          v27 = *a2;
        }
        else
        {
          v30 = -1;
          LOWORD(v29) = -1;
          v27 = -1;
        }
        v36 = v27;
        LODWORD(v35) = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          v24,
          (__int64)&unk_1803AE783,
          v24,
          v25,
          (__int64)&v35,
          (__int64)&v36,
          (__int64)&v30,
          (__int64)&v29,
          (__int64)&v32,
          &v45,
          (__int64)v28,
          &v44,
          &v43,
          &v42,
          (__int64)&v31,
          &v41,
          &v40,
          &v39,
          &v38,
          (__int64)&v33,
          &v37);
      }
    }
  }
}
