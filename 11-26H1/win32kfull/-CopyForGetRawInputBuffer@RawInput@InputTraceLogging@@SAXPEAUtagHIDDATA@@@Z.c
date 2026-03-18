/*
 * XREFs of ?CopyForGetRawInputBuffer@RawInput@InputTraceLogging@@SAXPEAUtagHIDDATA@@@Z @ 0x140053FB8
 * Callers:
 *     ?GRIB_CopyHidData@@YAIQEAUtagHIDDATA@@PEAI1PEAPEAUtagRAWINPUT@@I@Z @ 0x140053EE4 (-GRIB_CopyHidData@@YAIQEAUtagHIDDATA@@PEAI1PEAPEAUtagRAWINPUT@@I@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1400013D8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x140002EB4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x140090B44 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x14025C0F8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U2@U2@U-$_tlgWrapperByVal@$03@@U3@U3@.c)
 */

void __fastcall InputTraceLogging::RawInput::CopyForGetRawInputBuffer(struct tagHIDDATA *a1)
{
  int v1; // r10d
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // r8d
  __int64 *v5; // r9
  __int64 v6; // r8
  __int64 *v7; // r9
  int v8; // r10d
  int v9; // [rsp+60h] [rbp-20h] BYREF
  int v10; // [rsp+64h] [rbp-1Ch] BYREF
  int v11; // [rsp+68h] [rbp-18h] BYREF
  _QWORD v12[2]; // [rsp+70h] [rbp-10h] BYREF
  int v13; // [rsp+98h] [rbp+18h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+28h] BYREF

  if ( dword_1403AA9C0 && (qword_1403AA9D0 & 0x40000) != 0 && (qword_1403AA9D8 & 0x40000) == qword_1403AA9D8 )
  {
    v1 = *((_DWORD *)a1 + 14);
    if ( v1 )
    {
      if ( v1 == 1 )
      {
        if ( (unsigned int)dword_1403AA9C0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1403AA9C0, 0x40000LL) )
        {
          LODWORD(v14) = *(_DWORD *)(v3 + 92);
          LODWORD(v15) = *(_DWORD *)(v3 + 88);
          LOWORD(v13) = *(_WORD *)(v3 + 82);
          v12[0] = *(_QWORD *)v3;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1403AA9C0,
            (__int64)&unk_140375BBC,
            v2,
            v3,
            (__int64)v12,
            (__int64)&v13,
            (__int64)&v15,
            (__int64)&v14);
        }
      }
      else if ( v1 == 2 )
      {
        if ( (unsigned int)dword_1403AA9C0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1403AA9C0, 0x40000LL) )
        {
          v13 = *((_DWORD *)v5 + 21);
          LODWORD(v14) = *((_DWORD *)v5 + 20);
          v15 = *v5;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1403AA9C0,
            (unsigned int)&unk_140375C23,
            v4,
            (_DWORD)v5,
            (__int64)&v15,
            (__int64)&v14,
            (__int64)&v13);
        }
      }
      else if ( (unsigned int)dword_1403AA9C0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1403AA9C0, 0x40000LL) )
      {
        v14 = *v7;
        v13 = v8;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1403AA9C0,
          (__int64)&unk_140375C6F,
          v6,
          (__int64)v7,
          (__int64)&v14,
          (__int64)&v13);
      }
    }
    else if ( (unsigned int)dword_1403AA9C0 > 4 && (qword_1403AA9D8 & 0x40000) == qword_1403AA9D8 )
    {
      v9 = *((_DWORD *)a1 + 25);
      v10 = *((_DWORD *)a1 + 24);
      v11 = *((_DWORD *)a1 + 23);
      LOWORD(v13) = *((_WORD *)a1 + 43);
      LOWORD(v14) = *((_WORD *)a1 + 42);
      LOWORD(v15) = *((_WORD *)a1 + 40);
      v12[0] = *(_QWORD *)a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1403AA9C0,
        (unsigned int)&unk_140375B38,
        0x40000,
        (_DWORD)a1,
        (__int64)v12,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9);
    }
  }
}
