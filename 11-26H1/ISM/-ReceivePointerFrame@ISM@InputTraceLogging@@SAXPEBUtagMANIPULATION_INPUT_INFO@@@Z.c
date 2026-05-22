/*
 * XREFs of ?ReceivePointerFrame@ISM@InputTraceLogging@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1800111F4
 * Callers:
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180010D88 (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x180004D68 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemp.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U1@U2@U1@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444444444443343444@Z @ 0x180004FA4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800165E0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::ISM::ReceivePointerFrame(const struct tagMANIPULATION_INPUT_INFO *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r8
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // cf
  unsigned __int64 v8; // rsi
  char *v9; // rdi
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ecx
  int v14; // [rsp+D0h] [rbp-80h] BYREF
  int v15; // [rsp+D4h] [rbp-7Ch] BYREF
  int v16; // [rsp+D8h] [rbp-78h] BYREF
  int v17; // [rsp+DCh] [rbp-74h] BYREF
  int v18; // [rsp+E0h] [rbp-70h] BYREF
  int v19; // [rsp+E4h] [rbp-6Ch] BYREF
  int v20; // [rsp+E8h] [rbp-68h] BYREF
  int v21; // [rsp+ECh] [rbp-64h] BYREF
  int v22; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v23; // [rsp+F8h] [rbp-58h] BYREF
  __int64 v24; // [rsp+100h] [rbp-50h] BYREF
  __int64 v25; // [rsp+108h] [rbp-48h] BYREF
  __int64 v26; // [rsp+110h] [rbp-40h] BYREF
  __int64 v27; // [rsp+118h] [rbp-38h] BYREF
  __int64 v28; // [rsp+120h] [rbp-30h] BYREF
  __int64 v29; // [rsp+128h] [rbp-28h] BYREF
  __int64 v30; // [rsp+130h] [rbp-20h] BYREF
  _QWORD v31[5]; // [rsp+138h] [rbp-18h] BYREF
  int v32; // [rsp+178h] [rbp+28h] BYREF
  int v33; // [rsp+180h] [rbp+30h] BYREF
  int v34; // [rsp+188h] [rbp+38h] BYREF

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 && (unsigned __int8)tlgKeywordOn(v2, 512LL, v3) )
  {
    v4 = InputTraceLogging::Provider();
    if ( *(_DWORD *)v4 > 4u && (unsigned __int8)tlgKeywordOn(v4, 512LL, v4) )
    {
      v7 = *((_DWORD *)a1 + 38) & 1;
      v32 = *((_DWORD *)a1 + 39);
      v33 = -v7;
      v34 = *((_DWORD *)a1 + 37);
      v14 = *((_DWORD *)a1 + 42);
      v27 = *((_QWORD *)a1 + 17);
      v26 = *((_QWORD *)a1 + 9);
      v25 = *((_QWORD *)a1 + 8);
      v24 = *(_QWORD *)a1;
      v23 = *((_QWORD *)a1 + 30);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v5,
        (__int64)&unk_1802174D3,
        v5,
        v6,
        (__int64)&v23,
        (__int64)&v24,
        (__int64)&v25,
        (__int64)&v26,
        (__int64)&v27,
        (__int64)&v14,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32);
    }
    v8 = 0LL;
    if ( *((_DWORD *)a1 + 37) )
    {
      v9 = (char *)a1 + 236;
      do
      {
        v10 = InputTraceLogging::Provider();
        if ( *(_DWORD *)v10 > 4u )
        {
          if ( (unsigned __int8)tlgKeywordOn(v10, 512LL, v10) )
          {
            v13 = *((_DWORD *)v9 + 3);
            v34 = *((_DWORD *)v9 - 2);
            v28 = *(_QWORD *)(v9 + 4);
            v31[0] = v28;
            v32 = v13;
            v33 = *(_DWORD *)v9;
            v14 = *((_DWORD *)v9 - 3);
            v29 = *(_QWORD *)(v9 - 52);
            v30 = *(_QWORD *)(v9 - 60);
            v15 = *((_DWORD *)v9 - 1);
            v16 = *((_DWORD *)v9 - 4);
            v17 = *((_DWORD *)v9 - 5);
            v18 = *((_DWORD *)v9 - 8);
            v19 = *((_DWORD *)v9 - 9);
            v20 = *((_DWORD *)v9 - 6);
            v21 = *((_DWORD *)v9 - 7);
            v22 = *((_DWORD *)v9 - 10);
            LODWORD(v23) = *((_DWORD *)v9 - 11);
            LODWORD(v24) = *((_DWORD *)v9 - 16);
            LODWORD(v25) = *((_DWORD *)v9 - 19);
            LODWORD(v26) = *((_DWORD *)v9 - 17);
            LODWORD(v27) = *((_DWORD *)v9 - 18);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v11,
              (__int64)&unk_180217643,
              v11,
              v12,
              (__int64)v31,
              (__int64)&v27,
              (__int64)&v26,
              (__int64)&v25,
              (__int64)&v24,
              (__int64)&v23,
              (__int64)&v22,
              (__int64)&v21,
              (__int64)&v20,
              (__int64)&v19,
              (__int64)&v18,
              (__int64)&v17,
              (__int64)&v16,
              (__int64)&v15,
              (__int64)&v30,
              (__int64)&v29,
              (__int64)&v14,
              (__int64)&v28,
              (__int64)&v34,
              (__int64)&v33,
              (__int64)&v32);
          }
        }
        ++v8;
        v9 += 240;
      }
      while ( v8 < *((unsigned int *)a1 + 37) );
    }
  }
}
