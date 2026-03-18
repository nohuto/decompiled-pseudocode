/*
 * XREFs of ?BindToInputSpace@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@@Z @ 0x14002D814
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x14002D684 (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U1@U2@U2@U2@U2@U1@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4443444434444@Z @ 0x14000498C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U1@U2@U2@U2@U2@U1@U2@U2@U.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1400F3920 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall InputTraceLogging::Pointer::BindToInputSpace(
        const struct RIMDEV *a1,
        const struct tagHID_POINTER_DEVICE_INFO *a2,
        const struct INPUT_SPACE *a3,
        const struct INPUT_SPACE_REGION *a4)
{
  __int64 *v4; // r8
  int *v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // r11
  int v11; // [rsp+A0h] [rbp+7h] BYREF
  int v12; // [rsp+A4h] [rbp+Bh] BYREF
  int v13; // [rsp+A8h] [rbp+Fh] BYREF
  int v14; // [rsp+ACh] [rbp+13h] BYREF
  int v15; // [rsp+B0h] [rbp+17h] BYREF
  int v16; // [rsp+B4h] [rbp+1Bh] BYREF
  int v17; // [rsp+B8h] [rbp+1Fh] BYREF
  int v18; // [rsp+BCh] [rbp+23h] BYREF
  int v19; // [rsp+C0h] [rbp+27h] BYREF
  int v20; // [rsp+C4h] [rbp+2Bh] BYREF
  int v21; // [rsp+C8h] [rbp+2Fh] BYREF
  __int64 v22; // [rsp+D0h] [rbp+37h] BYREF
  __int64 v23; // [rsp+D8h] [rbp+3Fh] BYREF
  __int64 v24; // [rsp+E0h] [rbp+47h] BYREF
  __int64 v25; // [rsp+E8h] [rbp+4Fh] BYREF
  __int64 v26; // [rsp+110h] [rbp+77h] BYREF

  if ( a3 && a4 )
  {
    if ( (unsigned int)dword_14029EE20 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_14029EE20, 32LL, a3) )
      {
        LODWORD(v26) = v5[3];
        v11 = v5[2];
        v12 = v5[1];
        v13 = *v5;
        v22 = *v4;
        v14 = *(_DWORD *)(v6 + 264);
        v15 = *(_DWORD *)(v6 + 260);
        v16 = *(_DWORD *)(v6 + 256);
        v17 = *(_DWORD *)(v6 + 252);
        v23 = *(_QWORD *)(v6 + 240);
        v18 = *(_DWORD *)(v6 + 172);
        v19 = *(_DWORD *)(v6 + 168);
        v20 = *(_DWORD *)(v6 + 164);
        v21 = *(_DWORD *)(v6 + 160);
        v24 = *(_QWORD *)(v6 + 228);
        v25 = v7;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_14029EE20,
          (__int64)&unk_14027B24A,
          (__int64)v4,
          (__int64)v5,
          (__int64)&v25,
          (__int64)&v24,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v23,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v22,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)&v26);
      }
    }
  }
  else if ( (unsigned int)dword_14029EE20 > 4 && (unsigned __int8)tlgKeywordOn(&dword_14029EE20, 32LL, a3) )
  {
    v26 = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      (unsigned int)&dword_14029EE20,
      (unsigned int)&unk_14027B338,
      v8,
      v9,
      (__int64)&v26);
  }
}
