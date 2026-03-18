/*
 * XREFs of ?CaptureContact@VirtualTouchpad@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@UVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x1401C4084
 * Callers:
 *     ?FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPointerInfoNode@@PEAPEAVVPTPTouchpad@@PEAPEAVVPTPContact@@@Z @ 0x140220C4C (-FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPoi.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444444444444444444444444444444444444@Z @ 0x140001208 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 */

__int64 __fastcall InputTraceLogging::VirtualTouchpad::CaptureContact(__int64 a1, int a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // [rsp+168h] [rbp-80h] BYREF
  int v6; // [rsp+16Ch] [rbp-7Ch] BYREF
  int v7; // [rsp+170h] [rbp-78h] BYREF
  int v8; // [rsp+174h] [rbp-74h] BYREF
  int v9; // [rsp+178h] [rbp-70h] BYREF
  int v10; // [rsp+17Ch] [rbp-6Ch] BYREF
  int v11; // [rsp+180h] [rbp-68h] BYREF
  int v12; // [rsp+184h] [rbp-64h] BYREF
  int v13; // [rsp+188h] [rbp-60h] BYREF
  int v14; // [rsp+18Ch] [rbp-5Ch] BYREF
  int v15; // [rsp+190h] [rbp-58h] BYREF
  int v16; // [rsp+194h] [rbp-54h] BYREF
  int v17; // [rsp+198h] [rbp-50h] BYREF
  int v18; // [rsp+19Ch] [rbp-4Ch] BYREF
  int v19; // [rsp+1A0h] [rbp-48h] BYREF
  int v20; // [rsp+1A4h] [rbp-44h] BYREF
  int v21; // [rsp+1A8h] [rbp-40h] BYREF
  int v22; // [rsp+1ACh] [rbp-3Ch] BYREF
  int v23; // [rsp+1B0h] [rbp-38h] BYREF
  int v24; // [rsp+1B4h] [rbp-34h] BYREF
  int v25; // [rsp+1B8h] [rbp-30h] BYREF
  int v26; // [rsp+1BCh] [rbp-2Ch] BYREF
  int v27; // [rsp+1C0h] [rbp-28h] BYREF
  int v28; // [rsp+1C4h] [rbp-24h] BYREF
  int v29; // [rsp+1C8h] [rbp-20h] BYREF
  int v30; // [rsp+1CCh] [rbp-1Ch] BYREF
  int v31; // [rsp+1D0h] [rbp-18h] BYREF
  int v32; // [rsp+1D4h] [rbp-14h] BYREF
  int v33; // [rsp+1D8h] [rbp-10h] BYREF
  int v34; // [rsp+1DCh] [rbp-Ch] BYREF
  int v35; // [rsp+1E0h] [rbp-8h] BYREF
  int v36; // [rsp+1E4h] [rbp-4h] BYREF
  int v37; // [rsp+1E8h] [rbp+0h] BYREF
  int v38; // [rsp+1ECh] [rbp+4h] BYREF
  int v39; // [rsp+1F0h] [rbp+8h] BYREF
  int v40; // [rsp+1F4h] [rbp+Ch] BYREF
  int v41; // [rsp+1F8h] [rbp+10h] BYREF
  __int64 v42; // [rsp+200h] [rbp+18h] BYREF
  int v43; // [rsp+230h] [rbp+48h] BYREF

  if ( (unsigned int)dword_1402A9E40 > 4 && (qword_1402A9E50 & 0x20) != 0 )
  {
    result = qword_1402A9E58 & 0x20;
    if ( result == qword_1402A9E58 )
    {
      v43 = a3[20];
      v5 = a3[19];
      v6 = a3[18];
      v7 = a3[17];
      v8 = a3[16];
      v9 = a3[15];
      v10 = a3[14];
      v11 = a3[13];
      v12 = a3[12];
      v13 = a3[11];
      v14 = a3[10];
      v15 = a3[9];
      v16 = a3[8];
      v17 = a3[7];
      v18 = a3[6];
      v19 = a3[5];
      v20 = a3[37];
      v21 = a3[36];
      v22 = a3[35];
      v23 = a3[34];
      v24 = a3[33];
      v25 = a3[32];
      v26 = a3[31];
      v27 = a3[30];
      v28 = a3[28];
      v29 = a3[27];
      v30 = a3[26];
      v31 = a3[25];
      v32 = a3[24];
      v33 = a3[23];
      v34 = a3[22];
      v35 = a3[21];
      v36 = a3[4];
      v37 = a3[3];
      v38 = a3[2];
      v39 = a3[1];
      v41 = *(_DWORD *)(a1 + 4);
      v42 = *(_QWORD *)(a1 + 80);
      v40 = a2;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
               (__int64)&dword_1402A9E40,
               (__int64)&unk_14028BA87,
               (__int64)a3,
               a4,
               (__int64)&v42,
               (__int64)&v41,
               (__int64)&v40,
               (__int64)&v39,
               (__int64)&v38,
               (__int64)&v37,
               (__int64)&v36,
               (__int64)&v35,
               (__int64)&v34,
               (__int64)&v33,
               (__int64)&v32,
               (__int64)&v31,
               (__int64)&v30,
               (__int64)&v29,
               (__int64)&v28,
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
               (__int64)&v14,
               (__int64)&v13,
               (__int64)&v12,
               (__int64)&v11,
               (__int64)&v10,
               (__int64)&v9,
               (__int64)&v8,
               (__int64)&v7,
               (__int64)&v6,
               (__int64)&v5,
               (__int64)&v43);
    }
  }
  return result;
}
