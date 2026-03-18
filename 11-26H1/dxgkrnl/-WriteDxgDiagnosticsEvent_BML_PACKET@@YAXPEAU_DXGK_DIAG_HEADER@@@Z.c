/*
 * XREFs of ?WriteDxgDiagnosticsEvent_BML_PACKET@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1400476AC
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14000B688 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU_tlgWrapperBinary@@@Z @ 0x1400490C0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_BML_PACKET(struct _DXGK_DIAG_HEADER *a1, __int64 a2, __int64 a3, int a4)
{
  struct _DXGK_DIAG_HEADER *v4; // [rsp+40h] [rbp-18h] BYREF
  __int16 v5; // [rsp+48h] [rbp-10h]
  int v6; // [rsp+68h] [rbp+10h] BYREF
  int v7; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1401665F0 > 4
    && (qword_140166600 & 0x200000000080LL) != 0
    && (qword_140166608 & 0x200000000080LL) == qword_140166608 )
  {
    v5 = *((_WORD *)a1 + 2);
    v6 = *((_DWORD *)a1 + 10);
    v4 = a1;
    v7 = 8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
      (_DWORD)a1,
      (unsigned int)&unk_140142C23,
      128,
      a4,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v4);
  }
}
