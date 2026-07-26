/*
 * XREFs of ??1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ @ 0x1400E6DE4
 * Callers:
 *     ?ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008DB30 (-ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ??_GMiniportRemoveDeviceTelemetry@AzTelemetry@@UEAAPEAXI@Z @ 0x14009F080 (--_GMiniportRemoveDeviceTelemetry@AzTelemetry@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1400044B0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWr_ea_1400044B0.c)
 *     _tlgKeywordOn @ 0x140075790 (_tlgKeywordOn.c)
 *     ?Stop@KStopwatch@@QEAA_KXZ @ 0x140079BF0 (-Stop@KStopwatch@@QEAA_KXZ.c)
 */

void __fastcall AzTelemetry::MiniportRemoveDeviceTelemetry::~MiniportRemoveDeviceTelemetry(LARGE_INTEGER *this)
{
  unsigned __int64 v2; // rax
  LARGE_INTEGER v3; // r8
  __int64 v4; // rcx
  __int64 v5; // r9
  unsigned __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int16 *v7; // [rsp+58h] [rbp+10h] BYREF
  LONGLONG v8; // [rsp+60h] [rbp+18h] BYREF

  this->QuadPart = (LONGLONG)&AzTelemetry::MiniportRemoveDeviceTelemetry::`vftable';
  if ( (unsigned int)dword_14011C6C0 > 5 && tlgKeywordOn((__int64)&dword_14011C6C0, 512LL) )
  {
    v2 = KStopwatch::Stop(this + 3);
    v3 = this[2];
    v6 = v2;
    v7 = *(unsigned __int16 **)(v3.QuadPart + 3856);
    v8 = v3.QuadPart + 4008;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>>(
      v4,
      (__int64)&unk_1401053CB,
      v3.QuadPart + 6068,
      v5,
      &v8,
      &v7,
      (__int64)&v6);
  }
}
