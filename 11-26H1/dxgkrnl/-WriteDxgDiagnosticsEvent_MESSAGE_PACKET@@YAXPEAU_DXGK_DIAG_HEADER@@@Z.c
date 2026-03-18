/*
 * XREFs of ?WriteDxgDiagnosticsEvent_MESSAGE_PACKET@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14007B290
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14000B688 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU_tlgWrapperBinary@@@Z @ 0x1400490C0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_MESSAGE_PACKET(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // [rsp+40h] [rbp-18h] BYREF
  __int16 v5; // [rsp+48h] [rbp-10h]
  int v6; // [rsp+68h] [rbp+10h] BYREF
  int v7; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1401665F0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1401665F0, 0x200000000800LL) )
    {
      v5 = *(_WORD *)(v3 + 4);
      v6 = *(_DWORD *)(v3 + 40);
      v4 = v3;
      v7 = 8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        v1,
        (__int64)&unk_1401432A3,
        v2,
        v3,
        (__int64)&v7,
        (__int64)&v6,
        &v4);
    }
  }
}
