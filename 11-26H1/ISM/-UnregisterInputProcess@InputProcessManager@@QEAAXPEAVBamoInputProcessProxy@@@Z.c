/*
 * XREFs of ?UnregisterInputProcess@InputProcessManager@@QEAAXPEAVBamoInputProcessProxy@@@Z @ 0x1801A0550
 * Callers:
 *     ?OnDisconnected@InputProcessProxy@@MEAAJXZ @ 0x18019F2E0 (-OnDisconnected@InputProcessProxy@@MEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180003D90 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BDDC (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StartProcess@InputProcessManager@@QEAAXXZ @ 0x1801A0198 (-StartProcess@InputProcessManager@@QEAAXXZ.c)
 *     ?UnregisterProcess@InputProcessManager@InputTraceLogging@@SAXPEBX@Z @ 0x1801A0600 (-UnregisterProcess@InputProcessManager@InputTraceLogging@@SAXPEBX@Z.c)
 */

void __fastcall InputProcessManager::UnregisterInputProcess(
        InputProcessManager *this,
        struct BamoInputProcessProxy *a2)
{
  __int64 v3; // rcx
  BOOL v4; // [rsp+50h] [rbp+8h] BYREF
  int v5; // [rsp+60h] [rbp+18h] BYREF
  __int64 v6; // [rsp+68h] [rbp+20h] BYREF

  InputTraceLogging::InputProcessManager::UnregisterProcess(a2);
  Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)this + 7);
  if ( (unsigned int)dword_180251248 > 5 && tlgKeywordOn((__int64)&dword_180251248, 0x400000000000LL) )
  {
    v6 = 0x1000000LL;
    v4 = *((_QWORD *)this + 10) != 0LL;
    v5 = *((unsigned __int8 *)this + 64);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v3,
      (__int64)&unk_180229321,
      0LL,
      0LL,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v4);
  }
  if ( *((_BYTE *)this + 64) )
  {
    if ( !*((_QWORD *)this + 10) )
      InputProcessManager::StartProcess(this);
  }
}
