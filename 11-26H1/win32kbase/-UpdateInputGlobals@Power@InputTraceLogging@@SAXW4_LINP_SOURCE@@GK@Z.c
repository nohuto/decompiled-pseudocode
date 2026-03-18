/*
 * XREFs of ?UpdateInputGlobals@Power@InputTraceLogging@@SAXW4_LINP_SOURCE@@GK@Z @ 0x1400D3CC4
 * Callers:
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x14009C8D4 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D36E0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1400D4FD0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?LinpSourceToString@InputTraceLogging@@CAPEBDW4_LINP_SOURCE@@@Z @ 0x1400D5094 (-LinpSourceToString@InputTraceLogging@@CAPEBDW4_LINP_SOURCE@@@Z.c)
 */

void __fastcall InputTraceLogging::Power::UpdateInputGlobals(__int64 a1, unsigned __int16 a2, int a3)
{
  int v3; // r8d
  int v4; // r9d
  int v5; // [rsp+40h] [rbp-18h] BYREF
  __int64 v6; // [rsp+48h] [rbp-10h] BYREF
  int v7; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1402A9E40 > 4 && (qword_1402A9E50 & 2) != 0 && (qword_1402A9E58 & 2) == qword_1402A9E58 )
  {
    v7 = a2;
    v5 = a3;
    v6 = InputTraceLogging::LinpSourceToString();
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1402A9E40,
      (unsigned int)&unk_14028B3DE,
      v3,
      v4,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v7);
  }
}
