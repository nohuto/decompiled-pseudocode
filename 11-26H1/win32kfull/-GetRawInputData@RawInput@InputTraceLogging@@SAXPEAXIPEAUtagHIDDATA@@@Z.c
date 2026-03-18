/*
 * XREFs of ?GetRawInputData@RawInput@InputTraceLogging@@SAXPEAXIPEAUtagHIDDATA@@@Z @ 0x140093820
 * Callers:
 *     NtUserGetRawInputData @ 0x1400935E0 (NtUserGetRawInputData.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1400013D8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x140090B44 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U3@U3@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@55444@Z @ 0x140093508 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$01@@U3@U3@U2@U2@.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@44@Z @ 0x14024CE88 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$01@@U2@U2@@-$_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x14024EDB8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall InputTraceLogging::RawInput::GetRawInputData(void *a1, int a2, struct tagHIDDATA *a3)
{
  __int64 v5; // r9
  int v6; // r11d
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // r11d
  __int64 v10; // r8
  __int64 v11; // r9
  __int16 v12; // [rsp+60h] [rbp-20h] BYREF
  __int16 v13; // [rsp+62h] [rbp-1Eh] BYREF
  int v14; // [rsp+64h] [rbp-1Ch] BYREF
  int v15; // [rsp+68h] [rbp-18h] BYREF
  int v16; // [rsp+6Ch] [rbp-14h] BYREF
  void *v17; // [rsp+70h] [rbp-10h] BYREF
  void *v18; // [rsp+78h] [rbp-8h] BYREF
  int v19; // [rsp+A8h] [rbp+28h] BYREF

  if ( dword_1403AA9C0 )
  {
    if ( (qword_1403AA9D0 & 0x40000) != 0 )
    {
      v5 = qword_1403AA9D8 & 0x40000;
      if ( (qword_1403AA9D8 & 0x40000) == qword_1403AA9D8 )
      {
        if ( a3 )
        {
          v6 = *((_DWORD *)a3 + 14);
          if ( v6 )
          {
            if ( v6 == 1 )
            {
              if ( (unsigned int)dword_1403AA9C0 > 4 && v5 == qword_1403AA9D8 )
              {
                LODWORD(v17) = *((_DWORD *)a3 + 23);
                v16 = *((_DWORD *)a3 + 22);
                LOWORD(v19) = *((_WORD *)a3 + 41);
                v15 = a2;
                v18 = a1;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                  (unsigned int)&dword_1403AA9C0,
                  (unsigned int)&unk_140375D3C,
                  (_DWORD)a3,
                  v5,
                  (__int64)&v18,
                  (__int64)&v15,
                  (__int64)&v19,
                  (__int64)&v16,
                  (__int64)&v17);
              }
            }
            else if ( v6 == 2 )
            {
              if ( (unsigned int)dword_1403AA9C0 > 4 && v5 == qword_1403AA9D8 )
              {
                v19 = *((_DWORD *)a3 + 21);
                LODWORD(v17) = *((_DWORD *)a3 + 20);
                v16 = a2;
                v18 = a1;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                  (unsigned int)&dword_1403AA9C0,
                  (unsigned int)&unk_140375DE8,
                  (_DWORD)a3,
                  v5,
                  (__int64)&v18,
                  (__int64)&v16,
                  (__int64)&v17,
                  (__int64)&v19);
              }
            }
            else if ( (unsigned int)dword_1403AA9C0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1403AA9C0, 0x40000LL) )
            {
              v19 = v9;
              LODWORD(v17) = a2;
              v18 = a1;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                (__int64)&dword_1403AA9C0,
                (__int64)&unk_140375E34,
                v7,
                v8,
                (__int64)&v18,
                (__int64)&v17,
                (__int64)&v19);
            }
          }
          else if ( (unsigned int)dword_1403AA9C0 > 4 && v5 == qword_1403AA9D8 )
          {
            v14 = *((_DWORD *)a3 + 25);
            v15 = *((_DWORD *)a3 + 24);
            v16 = *((_DWORD *)a3 + 23);
            LOWORD(v19) = *((_WORD *)a3 + 43);
            v12 = *((_WORD *)a3 + 42);
            v13 = *((_WORD *)a3 + 40);
            LODWORD(v17) = a2;
            v18 = a1;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (__int64)&dword_1403AA9C0,
              byte_140375CB8,
              (__int64)a3,
              v5,
              (__int64)&v18,
              (__int64)&v17,
              (__int64)&v13,
              (__int64)&v12,
              (__int64)&v19,
              (__int64)&v16,
              (__int64)&v15,
              (__int64)&v14);
          }
        }
        else if ( (unsigned int)dword_1403AA9C0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1403AA9C0, 0x40000LL) )
        {
          v19 = a2;
          v17 = a1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1403AA9C0,
            (__int64)&unk_140375DA3,
            v10,
            v11,
            (__int64)&v17,
            (__int64)&v19);
        }
      }
    }
  }
}
