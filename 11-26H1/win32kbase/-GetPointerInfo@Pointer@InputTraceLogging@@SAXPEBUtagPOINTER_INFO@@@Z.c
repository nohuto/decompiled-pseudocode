/*
 * XREFs of ?GetPointerInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_INFO@@@Z @ 0x140051318
 * Callers:
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x140050DAC (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 * Callees:
 *     ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400F4E24 (-PointerTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?ButtonChangeTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x1400F4E94 (-ButtonChangeTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U1@U2@U1@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@44444444443343445@Z @ 0x14017DBA4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U2@U_ea_14017DBA4.c)
 */

void __fastcall InputTraceLogging::Pointer::GetPointerInfo(const struct tagPOINTER_INFO *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  unsigned int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // r9d
  int v9; // [rsp+D0h] [rbp-80h] BYREF
  int v10; // [rsp+D4h] [rbp-7Ch] BYREF
  int v11; // [rsp+D8h] [rbp-78h] BYREF
  int v12; // [rsp+DCh] [rbp-74h] BYREF
  int v13; // [rsp+E0h] [rbp-70h] BYREF
  int v14; // [rsp+E4h] [rbp-6Ch] BYREF
  int v15; // [rsp+E8h] [rbp-68h] BYREF
  int v16; // [rsp+ECh] [rbp-64h] BYREF
  int v17; // [rsp+F0h] [rbp-60h] BYREF
  int v18; // [rsp+F4h] [rbp-5Ch] BYREF
  int v19; // [rsp+F8h] [rbp-58h] BYREF
  int v20; // [rsp+FCh] [rbp-54h] BYREF
  __int64 v21; // [rsp+100h] [rbp-50h] BYREF
  __int64 v22; // [rsp+108h] [rbp-48h] BYREF
  __int64 v23; // [rsp+110h] [rbp-40h] BYREF
  __int64 v24; // [rsp+118h] [rbp-38h] BYREF
  const char *v25; // [rsp+120h] [rbp-30h] BYREF
  __int64 v26; // [rsp+128h] [rbp-28h] BYREF
  int v27; // [rsp+148h] [rbp-8h] BYREF
  int v28; // [rsp+150h] [rbp+0h] BYREF
  int v29; // [rsp+158h] [rbp+8h] BYREF

  if ( (unsigned int)dword_1402A9E40 > 5 && (qword_1402A9E50 & 0x20) != 0 && (qword_1402A9E58 & 0x20) == qword_1402A9E58 )
  {
    v2 = InputTraceLogging::ButtonChangeTypeToString(*((unsigned int *)a1 + 22), a2, a1);
    v4 = *(_QWORD *)(v3 + 80);
    v5 = *(_DWORD *)v3;
    v21 = v2;
    v27 = *(_DWORD *)(v3 + 76);
    v28 = *(_DWORD *)(v3 + 68);
    v29 = *(_DWORD *)(v3 + 64);
    v23 = *(_QWORD *)(v3 + 24);
    v24 = *(_QWORD *)(v3 + 16);
    v9 = *(_DWORD *)(v3 + 72);
    v10 = *(_DWORD *)(v3 + 60);
    v11 = *(_DWORD *)(v3 + 56);
    v12 = *(_DWORD *)(v3 + 44);
    v13 = *(_DWORD *)(v3 + 40);
    v14 = *(_DWORD *)(v3 + 52);
    v15 = *(_DWORD *)(v3 + 48);
    v16 = *(_DWORD *)(v3 + 36);
    v17 = *(_DWORD *)(v3 + 32);
    v18 = *(_DWORD *)(v3 + 12);
    v22 = v4;
    v25 = InputTraceLogging::PointerTypeToString(v5);
    v19 = *(_DWORD *)(v6 + 8);
    v20 = *(_DWORD *)(v6 + 4);
    v26 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (unsigned int)&dword_1402A9E40,
      (unsigned int)&unk_1402888B6,
      v6,
      v8,
      (__int64)&v26,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v25,
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
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v29,
      (__int64)&v22,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v21);
  }
}
