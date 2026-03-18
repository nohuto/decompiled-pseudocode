/*
 * XREFs of ?GetPointerTouchInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z @ 0x140050F14
 * Callers:
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x140050DAC (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 * Callees:
 *     ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400F4E24 (-PointerTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?ButtonChangeTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x1400F4E94 (-ButtonChangeTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U1@U2@U1@U2@U2@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@44444444443343445444444444444@Z @ 0x1401995B0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U2@U_ea_1401995B0.c)
 */

void __fastcall InputTraceLogging::Pointer::GetPointerTouchInfo(const struct tagPOINTER_TOUCH_INFO *a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // r9d
  int v12; // [rsp+130h] [rbp-80h] BYREF
  int v13; // [rsp+134h] [rbp-7Ch] BYREF
  int v14; // [rsp+138h] [rbp-78h] BYREF
  int v15; // [rsp+13Ch] [rbp-74h] BYREF
  int v16; // [rsp+140h] [rbp-70h] BYREF
  int v17; // [rsp+144h] [rbp-6Ch] BYREF
  int v18; // [rsp+148h] [rbp-68h] BYREF
  int v19; // [rsp+14Ch] [rbp-64h] BYREF
  int v20; // [rsp+150h] [rbp-60h] BYREF
  int v21; // [rsp+154h] [rbp-5Ch] BYREF
  int v22; // [rsp+158h] [rbp-58h] BYREF
  int v23; // [rsp+15Ch] [rbp-54h] BYREF
  int v24; // [rsp+160h] [rbp-50h] BYREF
  int v25; // [rsp+164h] [rbp-4Ch] BYREF
  int v26; // [rsp+168h] [rbp-48h] BYREF
  int v27; // [rsp+16Ch] [rbp-44h] BYREF
  int v28; // [rsp+170h] [rbp-40h] BYREF
  int v29; // [rsp+174h] [rbp-3Ch] BYREF
  int v30; // [rsp+178h] [rbp-38h] BYREF
  int v31; // [rsp+17Ch] [rbp-34h] BYREF
  int v32; // [rsp+180h] [rbp-30h] BYREF
  int v33; // [rsp+184h] [rbp-2Ch] BYREF
  int v34; // [rsp+188h] [rbp-28h] BYREF
  int v35; // [rsp+18Ch] [rbp-24h] BYREF
  __int64 v36; // [rsp+190h] [rbp-20h] BYREF
  __int64 v37; // [rsp+198h] [rbp-18h] BYREF
  __int64 v38; // [rsp+1A0h] [rbp-10h] BYREF
  __int64 v39; // [rsp+1A8h] [rbp-8h] BYREF
  const char *v40; // [rsp+1B0h] [rbp+0h] BYREF
  __int64 v41; // [rsp+1B8h] [rbp+8h] BYREF
  int v42; // [rsp+1D8h] [rbp+28h] BYREF
  int v43; // [rsp+1E0h] [rbp+30h] BYREF
  int v44; // [rsp+1E8h] [rbp+38h] BYREF

  if ( (unsigned int)dword_1402A9E40 > 5 && (qword_1402A9E50 & 0x20) != 0 && (qword_1402A9E58 & 0x20) == qword_1402A9E58 )
  {
    v42 = *((_DWORD *)a1 + 35);
    v43 = *((_DWORD *)a1 + 34);
    v44 = *((_DWORD *)a1 + 33);
    v12 = *((_DWORD *)a1 + 32);
    v13 = *((_DWORD *)a1 + 31);
    v14 = *((_DWORD *)a1 + 30);
    v15 = *((_DWORD *)a1 + 29);
    v16 = *((_DWORD *)a1 + 28);
    v17 = *((_DWORD *)a1 + 27);
    v18 = *((_DWORD *)a1 + 26);
    v19 = *((_DWORD *)a1 + 25);
    v3 = *((_DWORD *)a1 + 24);
    v4 = *((unsigned int *)a1 + 22);
    v20 = v3;
    v5 = InputTraceLogging::ButtonChangeTypeToString(v4, a2, a1);
    v7 = *(_QWORD *)(v6 + 80);
    v8 = *(_DWORD *)v6;
    v36 = v5;
    v21 = *(_DWORD *)(v6 + 76);
    v22 = *(_DWORD *)(v6 + 68);
    v23 = *(_DWORD *)(v6 + 64);
    v38 = *(_QWORD *)(v6 + 24);
    v39 = *(_QWORD *)(v6 + 16);
    v24 = *(_DWORD *)(v6 + 72);
    v25 = *(_DWORD *)(v6 + 60);
    v26 = *(_DWORD *)(v6 + 56);
    v27 = *(_DWORD *)(v6 + 44);
    v28 = *(_DWORD *)(v6 + 40);
    v29 = *(_DWORD *)(v6 + 52);
    v30 = *(_DWORD *)(v6 + 48);
    v31 = *(_DWORD *)(v6 + 36);
    v32 = *(_DWORD *)(v6 + 32);
    v33 = *(_DWORD *)(v6 + 12);
    v37 = v7;
    v40 = InputTraceLogging::PointerTypeToString(v8);
    v34 = *(_DWORD *)(v9 + 8);
    v35 = *(_DWORD *)(v9 + 4);
    v41 = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1402A9E40,
      (unsigned int)&unk_140288B46,
      v9,
      v11,
      (__int64)&v41,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v40,
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
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v23,
      (__int64)&v37,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v36,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42);
  }
}
