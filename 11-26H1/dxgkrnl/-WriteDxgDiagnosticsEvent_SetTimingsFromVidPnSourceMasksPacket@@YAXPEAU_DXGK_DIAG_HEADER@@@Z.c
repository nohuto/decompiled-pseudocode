/*
 * XREFs of ?WriteDxgDiagnosticsEvent_SetTimingsFromVidPnSourceMasksPacket@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140047898
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14000B688 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@555555555555555@Z @ 0x140047EB4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U3@U3@U3@U3@.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_SetTimingsFromVidPnSourceMasksPacket(struct _DXGK_DIAG_HEADER *a1)
{
  char v1; // [rsp+B0h] [rbp+37h] BYREF
  char v2; // [rsp+B1h] [rbp+38h] BYREF
  char v3; // [rsp+B2h] [rbp+39h] BYREF
  char v4; // [rsp+B3h] [rbp+3Ah] BYREF
  char v5; // [rsp+B4h] [rbp+3Bh] BYREF
  char v6; // [rsp+B5h] [rbp+3Ch] BYREF
  char v7; // [rsp+B6h] [rbp+3Dh] BYREF
  char v8; // [rsp+B7h] [rbp+3Eh] BYREF
  char v9; // [rsp+B8h] [rbp+3Fh] BYREF
  char v10; // [rsp+B9h] [rbp+40h] BYREF
  char v11; // [rsp+BAh] [rbp+41h] BYREF
  char v12; // [rsp+BBh] [rbp+42h] BYREF
  int v13; // [rsp+BCh] [rbp+43h] BYREF
  __int64 v14; // [rsp+C0h] [rbp+47h] BYREF
  char v15; // [rsp+E0h] [rbp+67h] BYREF
  char v16; // [rsp+E8h] [rbp+6Fh] BYREF
  char v17; // [rsp+F0h] [rbp+77h] BYREF
  char v18; // [rsp+F8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1401665F0 > 4
    && (qword_140166600 & 0x200000000800LL) != 0
    && (qword_140166608 & 0x200000000800LL) == qword_140166608
    && (qword_140166600 & 0x200000000001LL) != 0
    && (qword_140166608 & 0x200000000001LL) == qword_140166608 )
  {
    v15 = *((_BYTE *)a1 + 63);
    v16 = *((_BYTE *)a1 + 62);
    v17 = *((_BYTE *)a1 + 61);
    v18 = *((_BYTE *)a1 + 60);
    v1 = *((_BYTE *)a1 + 59);
    v2 = *((_BYTE *)a1 + 58);
    v3 = *((_BYTE *)a1 + 57);
    v4 = *((_BYTE *)a1 + 56);
    v5 = *((_BYTE *)a1 + 55);
    v6 = *((_BYTE *)a1 + 54);
    v7 = *((_BYTE *)a1 + 53);
    v8 = *((_BYTE *)a1 + 52);
    v9 = *((_BYTE *)a1 + 51);
    v10 = *((_BYTE *)a1 + 50);
    v11 = *((_BYTE *)a1 + 49);
    v12 = *((_BYTE *)a1 + 48);
    v13 = *((_DWORD *)a1 + 10);
    v14 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      (_DWORD)a1,
      (unsigned int)&unk_14014265F,
      qword_140166600,
      1,
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
      (__int64)&v4,
      (__int64)&v3,
      (__int64)&v2,
      (__int64)&v1,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15);
  }
}
