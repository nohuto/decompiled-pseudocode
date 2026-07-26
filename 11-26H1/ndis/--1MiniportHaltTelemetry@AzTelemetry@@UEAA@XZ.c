/*
 * XREFs of ??1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ @ 0x140070410
 * Callers:
 *     ??_EMiniportHaltTelemetry@AzTelemetry@@UEAAPEAXI@Z @ 0x1400E6F80 (--_EMiniportHaltTelemetry@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ?ndisMInvokeHalt@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z @ 0x140168370 (-ndisMInvokeHalt@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1400043FC (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$0.c)
 *     _tlgKeywordOn @ 0x140075790 (_tlgKeywordOn.c)
 *     ?Stop@KStopwatch@@QEAA_KXZ @ 0x140079BF0 (-Stop@KStopwatch@@QEAA_KXZ.c)
 */

void __fastcall AzTelemetry::MiniportHaltTelemetry::~MiniportHaltTelemetry(
        AzTelemetry::MiniportHaltTelemetry *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int16 *v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  *(_QWORD *)this = &AzTelemetry::MiniportHaltTelemetry::`vftable';
  if ( (unsigned int)dword_14011C6C0 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_14011C6C0, 512LL, a3, a4) )
    {
      v5 = KStopwatch::Stop((AzTelemetry::MiniportHaltTelemetry *)((char *)this + 24));
      v6 = *((_QWORD *)this + 2);
      v10 = v5;
      v9 = *((_DWORD *)this + 12);
      v11 = *(unsigned __int16 **)(v6 + 3856);
      v12 = v6 + 4008;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v7,
        (__int64)&unk_14010551A,
        v6 + 6068,
        v8,
        &v12,
        &v11,
        (__int64)&v9,
        (__int64)&v10);
    }
  }
}
