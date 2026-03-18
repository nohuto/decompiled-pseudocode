/*
 * XREFs of ?RawInputListener@RawInput@InputTraceLogging@@SAXPEBUtagPROCESS_HID_TABLE@@@Z @ 0x140170460
 * Callers:
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1400F77EC (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 *     _RegisterRawInputDevices @ 0x14016FDF8 (_RegisterRawInputDevices.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@43333333333333@Z @ 0x14016F3F8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140170F70 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplat.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::RawInput::RawInputListener(
        const struct tagPROCESS_HID_TABLE *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // r9d
  __int64 v5; // rdx
  int v6; // ecx
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int64 *i; // rbx
  _QWORD *v10; // rax
  int v11; // ecx
  __int64 v12; // rax
  __int64 *j; // rbx
  __int64 *k; // rbx
  int v15; // r8d
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rax
  int v22; // [rsp+A0h] [rbp-9h] BYREF
  int v23; // [rsp+A4h] [rbp-5h] BYREF
  int v24; // [rsp+A8h] [rbp-1h] BYREF
  int v25; // [rsp+ACh] [rbp+3h] BYREF
  _QWORD *v26; // [rsp+B0h] [rbp+7h] BYREF
  int v27; // [rsp+B8h] [rbp+Fh] BYREF
  int v28; // [rsp+BCh] [rbp+13h] BYREF
  int v29; // [rsp+C0h] [rbp+17h] BYREF
  int v30; // [rsp+C4h] [rbp+1Bh] BYREF
  int v31; // [rsp+C8h] [rbp+1Fh] BYREF
  int v32; // [rsp+CCh] [rbp+23h] BYREF
  int v33; // [rsp+D0h] [rbp+27h] BYREF
  _QWORD *v34; // [rsp+D8h] [rbp+2Fh] BYREF
  int v35; // [rsp+118h] [rbp+6Fh] BYREF
  int v36; // [rsp+120h] [rbp+77h] BYREF
  int v37; // [rsp+128h] [rbp+7Fh] BYREF

  v3 = dword_1403AA9C0;
  if ( dword_1403AA9C0 )
  {
    if ( (qword_1403AA9D0 & 0x40000) != 0 )
    {
      v5 = qword_1403AA9D8;
      if ( (qword_1403AA9D8 & 0x40000) == qword_1403AA9D8 )
      {
        if ( (unsigned int)dword_1403AA9C0 > 4 && (qword_1403AA9D8 & 0x40000) == qword_1403AA9D8 )
        {
          v6 = *((_DWORD *)a1 + 25);
          v35 = -__CFSHR__(v6, 13);
          v36 = -__CFSHR__(v6, 11);
          v37 = -__CFSHR__(v6, 10);
          v27 = -__CFSHR__(v6, 8);
          v28 = -__CFSHR__(v6, 7);
          v29 = -__CFSHR__(v6, 6);
          v30 = -__CFSHR__(v6, 5);
          v31 = -__CFSHR__(v6, 12);
          v32 = -__CFSHR__(v6, 9);
          v33 = -__CFSHR__(v6, 4);
          v22 = -__CFSHR__(v6, 3);
          v23 = -__CFSHR__(v6, 2);
          v7 = (_QWORD *)*((_QWORD *)a1 + 9);
          v24 = -(v6 & 1);
          if ( v7 )
            v7 = (_QWORD *)*v7;
          v34 = v7;
          v8 = (_QWORD *)*((_QWORD *)a1 + 8);
          if ( v8 )
            v8 = (_QWORD *)*v8;
          v26 = v8;
          v25 = *(_DWORD *)(*((_QWORD *)a1 + 13) + 56LL);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1403AA9C0,
            byte_140373736,
            a3,
            (unsigned int)dword_1403AA9C0,
            (__int64)&v25,
            (__int64)&v26,
            (__int64)&v34,
            (__int64)&v24,
            (__int64)&v23,
            (__int64)&v22,
            (__int64)&v33,
            (__int64)&v32,
            (__int64)&v31,
            (__int64)&v30,
            (__int64)&v29,
            (__int64)&v28,
            (__int64)&v27,
            (__int64)&v37,
            (__int64)&v36,
            (__int64)&v35);
          v5 = qword_1403AA9D8;
          v3 = dword_1403AA9C0;
        }
        for ( i = (__int64 *)*((_QWORD *)a1 + 2); i != (__int64 *)((char *)a1 + 16); i = (__int64 *)*i )
        {
          if ( v3 > 4 && (qword_1403AA9D0 & 0x40000) != 0 && (v5 & 0x40000) == v5 )
          {
            v10 = (_QWORD *)i[4];
            if ( v10 )
              v10 = (_QWORD *)*v10;
            v11 = *((_DWORD *)i + 5);
            v26 = v10;
            v35 = -__CFSHR__(v11, 4);
            v36 = -__CFSHR__(v11, 3);
            v37 = -__CFSHR__(v11, 2);
            v24 = *((unsigned __int16 *)i + 9);
            v23 = *((unsigned __int16 *)i + 8);
            v12 = *((_QWORD *)a1 + 13);
            v25 = -(v11 & 1);
            v22 = *(_DWORD *)(v12 + 56);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              (unsigned int)&dword_1403AA9C0,
              (unsigned int)&unk_1403736A9,
              a3,
              v3,
              (__int64)&v22,
              (__int64)&v23,
              (__int64)&v24,
              (__int64)&v25,
              (__int64)&v37,
              (__int64)&v36,
              (__int64)&v35,
              (__int64)&v26);
            v5 = qword_1403AA9D8;
            v3 = dword_1403AA9C0;
          }
        }
        for ( j = (__int64 *)*((_QWORD *)a1 + 4); j != (__int64 *)((char *)a1 + 32); j = (__int64 *)*j )
        {
          if ( v3 > 4 && (qword_1403AA9D0 & 0x40000) != 0 && (v5 & 0x40000) == v5 )
          {
            v17 = (_QWORD *)j[4];
            if ( v17 )
              v17 = (_QWORD *)*v17;
            v18 = *((_DWORD *)j + 5);
            v26 = v17;
            v35 = -__CFSHR__(v18, 4);
            v36 = -__CFSHR__(v18, 3);
            v37 = -__CFSHR__(v18, 2);
            v24 = *((unsigned __int16 *)j + 9);
            v23 = *((unsigned __int16 *)j + 8);
            v19 = *((_QWORD *)a1 + 13);
            v25 = -(v18 & 1);
            v22 = *(_DWORD *)(v19 + 56);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              (unsigned int)&dword_1403AA9C0,
              (unsigned int)&unk_1403738E0,
              a3,
              v3,
              (__int64)&v22,
              (__int64)&v23,
              (__int64)&v24,
              (__int64)&v25,
              (__int64)&v37,
              (__int64)&v36,
              (__int64)&v35,
              (__int64)&v26);
            v5 = qword_1403AA9D8;
            v3 = dword_1403AA9C0;
          }
        }
        for ( k = (__int64 *)*((_QWORD *)a1 + 6); k != (__int64 *)((char *)a1 + 48); k = (__int64 *)*k )
        {
          if ( v3 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1403AA9C0, 0x40000LL) )
          {
            v16 = (_QWORD *)k[4];
            if ( v16 )
              v16 = (_QWORD *)*v16;
            v20 = *((_DWORD *)k + 5);
            v26 = v16;
            v35 = -__CFSHR__(v20, 4);
            v36 = -__CFSHR__(v20, 3);
            v37 = -__CFSHR__(v20, 2);
            v24 = *((unsigned __int16 *)k + 9);
            v23 = *((unsigned __int16 *)k + 8);
            v21 = *((_QWORD *)a1 + 13);
            v25 = -(v20 & 1);
            v22 = *(_DWORD *)(v21 + 56);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              (unsigned int)&dword_1403AA9C0,
              (unsigned int)&unk_140373853,
              v15,
              v3,
              (__int64)&v22,
              (__int64)&v23,
              (__int64)&v24,
              (__int64)&v25,
              (__int64)&v37,
              (__int64)&v36,
              (__int64)&v35,
              (__int64)&v26);
            v3 = dword_1403AA9C0;
          }
        }
      }
    }
  }
}
