/*
 * XREFs of ?NdisTraceLoggingStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1400B28F4
 * Callers:
 *     ?ndisNblTrackerNotifyStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1400A4754 (-ndisNblTrackerNotifyStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x140002D40 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U_tlgWrapperBinary@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU_tlgWrapperBinary@@5@Z @ 0x140002E80 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U_tlgWrapperBinary@@U3@@-$_tlgWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14001DD30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140075790 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingStuckNbl(struct _NDIS_NBL_TRACKER *a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  void *v4; // rdx
  __int64 v5; // rax
  int v6; // r8d
  __int64 v7; // r9
  int v8; // r11d
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  __int16 v14; // ax
  __int64 v15; // r10
  int v16; // [rsp+40h] [rbp-39h] BYREF
  __int64 v17; // [rsp+48h] [rbp-31h] BYREF
  __int64 v18; // [rsp+50h] [rbp-29h] BYREF
  __int16 v19; // [rsp+58h] [rbp-21h]
  __int64 v20; // [rsp+60h] [rbp-19h] BYREF
  __int16 v21; // [rsp+68h] [rbp-11h]
  _EVENT_DATA_DESCRIPTOR v22; // [rsp+70h] [rbp-9h] BYREF
  int *v23; // [rsp+90h] [rbp+17h]
  __int64 v24; // [rsp+98h] [rbp+1Fh]
  _DWORD *v25; // [rsp+A0h] [rbp+27h]
  __int64 v26; // [rsp+A8h] [rbp+2Fh]
  __int64 v27; // [rsp+B0h] [rbp+37h]
  _DWORD v28[2]; // [rsp+B8h] [rbp+3Fh] BYREF

  if ( !*((_WORD *)a1 + 8) )
  {
LABEL_6:
    if ( (unsigned int)dword_14011C6F8 > 5 && tlgKeywordOn((__int64)&dword_14011C6F8, 0x400000000000LL) )
    {
      v4 = &unk_14010402C;
      v5 = *(_QWORD *)(v3 + 24) + 4008LL;
LABEL_9:
      v17 = v5;
      v16 = v2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        v1,
        (__int64)v4,
        v2,
        v3,
        (__int64)&v16,
        &v17);
      return;
    }
    return;
  }
  if ( *((_WORD *)a1 + 8) != 1 )
  {
    if ( *((_WORD *)a1 + 8) == 2 )
    {
      if ( (unsigned int)dword_14011C6F8 > 5 && tlgKeywordOn((__int64)&dword_14011C6F8, 0x400000000000LL) )
      {
        v9 = *(_QWORD *)(v7 + 24);
        v16 = v6;
        v26 = 2LL;
        v28[1] = v8;
        v10 = *(_QWORD *)(v9 + 24);
        v25 = v28;
        v24 = 4LL;
        v27 = *(_QWORD *)(v10 + 80);
        v28[0] = *(_WORD *)(v10 + 72) & 0xFFFE;
        v23 = &v16;
        tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14011C6F8, byte_140103F64, 0LL, 0LL, 5u, &v22);
      }
      return;
    }
    if ( *((_WORD *)a1 + 8) != 3 && (unsigned int)(*((__int16 *)a1 + 8) - 4) > 1 )
      return;
    goto LABEL_6;
  }
  if ( *((_QWORD *)a1->Context + 2) )
  {
    if ( (unsigned int)dword_14011C6F8 > 5 && tlgKeywordOn((__int64)&dword_14011C6F8, 0x400000000000LL) )
    {
      v18 = *(_QWORD *)(v12 + 152);
      v19 = *(_WORD *)(v12 + 144) & 0xFFFE;
      v20 = *(_QWORD *)(v12 + 120);
      v14 = *(_WORD *)(v12 + 112) & 0xFFFE;
      v16 = v11;
      v21 = v14;
      v17 = v13 + 664;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperBinary,_tlgWrapperBinary>(
        65534LL,
        (__int64)&unk_140103FCD,
        v11,
        v12,
        (__int64)&v16,
        &v17,
        &v20,
        &v18);
    }
  }
  else if ( (unsigned int)dword_14011C6F8 > 5 && tlgKeywordOn((__int64)&dword_14011C6F8, 0x400000000000LL) )
  {
    v5 = v15 + 664;
    v4 = &unk_140103F95;
    goto LABEL_9;
  }
}
