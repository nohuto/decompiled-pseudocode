/*
 * XREFs of ?SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x14019F304
 * Callers:
 *     rimSignalReadComplete @ 0x140035980 (rimSignalReadComplete.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1400021AC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x140005FB8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWrit.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x140078E58 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1400F3920 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall InputTraceLogging::RIM::SkipReadComplete(
        const struct RawInputManagerObject *a1,
        const struct RIMDEV *a2)
{
  int v2; // eax
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int8 *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // [rsp+50h] [rbp-20h] BYREF
  __int64 v16; // [rsp+58h] [rbp-18h] BYREF
  _QWORD v17[2]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v18; // [rsp+88h] [rbp+18h] BYREF
  int v19; // [rsp+90h] [rbp+20h] BYREF
  const char *v20; // [rsp+98h] [rbp+28h] BYREF

  v2 = *((_DWORD *)a2 + 12);
  if ( v2 )
  {
    if ( v2 == 2 )
    {
      if ( (*((_DWORD *)a2 + 46) & 0x80u) == 0 )
      {
        if ( (unsigned int)dword_14029EE20 > 4 && tlgKeywordOn((__int64)&dword_14029EE20, 256LL) )
        {
          v14 = *(_QWORD *)(v12 + 448);
          LODWORD(v18) = *(unsigned __int16 *)(v14 + 18);
          v19 = *(unsigned __int16 *)(v14 + 16);
          v20 = *(const char **)(v12 + 16);
          v17[0] = v13;
          v16 = v12;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)&dword_14029EE20,
            (__int64)&unk_14027CC47,
            v12,
            v13,
            (__int64)&v16,
            (__int64)v17,
            (__int64)&v20,
            (__int64)&v19,
            (__int64)&v18);
        }
      }
      else if ( (unsigned int)dword_14029EE20 > 4 && tlgKeywordOn((__int64)&dword_14029EE20, 256LL) )
      {
        v7 = *(_QWORD *)(v6 + 448);
        LODWORD(v18) = *(unsigned __int16 *)(v7 + 18);
        v8 = *(unsigned __int16 *)(v7 + 16);
        v9 = *(_QWORD *)(v6 + 456);
        v19 = v8;
        v20 = InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(v9 + 24));
        v15 = *(_QWORD *)(v10 + 16);
        v16 = v11;
        v17[0] = v10;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_14029EE20,
          (__int64)&unk_14027CBD7,
          v10,
          v11,
          (__int64)v17,
          (__int64)&v16,
          (__int64)&v15,
          (void **)&v20,
          (__int64)&v19,
          (__int64)&v18);
      }
    }
    else if ( v2 == 1 && (unsigned int)dword_14029EE20 > 4 && tlgKeywordOn((__int64)&dword_14029EE20, 256LL) )
    {
      v5 = (unsigned __int8 *)&unk_14027CB23;
      goto LABEL_17;
    }
  }
  else if ( (unsigned int)dword_14029EE20 > 4 && tlgKeywordOn((__int64)&dword_14029EE20, 256LL) )
  {
    v5 = (unsigned __int8 *)&unk_14027CBA4;
LABEL_17:
    v18 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      (__int64)&dword_14029EE20,
      v5,
      v3,
      v4,
      (__int64)&v18);
  }
}
