/*
 * XREFs of ?TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z @ 0x14017333C
 * Callers:
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x140160DC0 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapSz@G@@U2@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333333333333AEBU?$_tlgWrapSz@G@@4333333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140173534 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapSz@G@@U2@.c)
 */

void __fastcall TraceLoggingPTPSettingsConfigEvent(
        struct tagTPSETTINGS *a1,
        int a2,
        int a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        int a6,
        int a7,
        struct tagRECT *a8,
        struct tagRECT *a9)
{
  LONG right; // [rsp+E8h] [rbp-80h] BYREF
  LONG bottom; // [rsp+ECh] [rbp-7Ch] BYREF
  LONG v11; // [rsp+F0h] [rbp-78h] BYREF
  LONG v12; // [rsp+F4h] [rbp-74h] BYREF
  int v13; // [rsp+F8h] [rbp-70h] BYREF
  int v14; // [rsp+FCh] [rbp-6Ch] BYREF
  int v15; // [rsp+100h] [rbp-68h] BYREF
  int v16; // [rsp+104h] [rbp-64h] BYREF
  int v17; // [rsp+108h] [rbp-60h] BYREF
  int v18; // [rsp+10Ch] [rbp-5Ch] BYREF
  int v19; // [rsp+110h] [rbp-58h] BYREF
  int v20; // [rsp+114h] [rbp-54h] BYREF
  int v21; // [rsp+118h] [rbp-50h] BYREF
  int v22; // [rsp+11Ch] [rbp-4Ch] BYREF
  int v23; // [rsp+120h] [rbp-48h] BYREF
  int v24; // [rsp+124h] [rbp-44h] BYREF
  int v25; // [rsp+128h] [rbp-40h] BYREF
  int v26; // [rsp+12Ch] [rbp-3Ch] BYREF
  int v27; // [rsp+130h] [rbp-38h] BYREF
  int v28; // [rsp+134h] [rbp-34h] BYREF
  int v29; // [rsp+138h] [rbp-30h] BYREF
  __int64 v30; // [rsp+140h] [rbp-28h] BYREF
  unsigned __int16 *v31; // [rsp+148h] [rbp-20h] BYREF
  unsigned __int16 *v32; // [rsp+150h] [rbp-18h] BYREF

  if ( (unsigned int)dword_1402A9E78 > 5
    && (qword_1402A9E88 & 0x800000000000LL) != 0
    && (qword_1402A9E90 & 0x800000000000LL) == qword_1402A9E90 )
  {
    v30 = 2048LL;
    v32 = a4;
    v15 = a3;
    right = a9->right;
    bottom = a9->bottom;
    v16 = a2;
    v11 = a8->right;
    v12 = a8->bottom;
    v13 = a7;
    v14 = a6;
    v31 = a5;
    v17 = *((_DWORD *)a1 + 12);
    v18 = *((_DWORD *)a1 + 11);
    v19 = *((_DWORD *)a1 + 10);
    v20 = *((_DWORD *)a1 + 9);
    v21 = *((_DWORD *)a1 + 8);
    v22 = *((_DWORD *)a1 + 7);
    v23 = *((_DWORD *)a1 + 6);
    v24 = *((_DWORD *)a1 + 2);
    v25 = *((_DWORD *)a1 + 5);
    v26 = *((_DWORD *)a1 + 4);
    v27 = *((_DWORD *)a1 + 3);
    v28 = *((_DWORD *)a1 + 1);
    v29 = *(_DWORD *)a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (_DWORD)a8,
      (unsigned int)&unk_14028AD13,
      a3,
      (_DWORD)a4,
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
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&bottom,
      (__int64)&right,
      (__int64)&v30);
  }
}
