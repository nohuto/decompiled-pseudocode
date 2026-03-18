/*
 * XREFs of ?QueueFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x140132154
 * Callers:
 *     rimQueueCompleteFrame @ 0x1401836BC (rimQueueCompleteFrame.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x140132254 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplat.c)
 */

void __fastcall InputTraceLogging::RIM::QueueFrame(const struct RIMDEV *a1, const struct RIMCOMPLETEFRAME *a2)
{
  int v2; // r9d
  __int64 v3; // r8
  __int64 v5; // rcx
  int v6; // [rsp+60h] [rbp+27h] BYREF
  __int64 v7; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v8; // [rsp+70h] [rbp+37h] BYREF
  __int64 v9; // [rsp+78h] [rbp+3Fh] BYREF
  const struct RIMDEV *v10; // [rsp+80h] [rbp+47h] BYREF
  int v11; // [rsp+A8h] [rbp+6Fh] BYREF
  int v12; // [rsp+B0h] [rbp+77h] BYREF
  int v13; // [rsp+B8h] [rbp+7Fh] BYREF

  v2 = *((_DWORD *)a2 + 6);
  v3 = 0LL;
  if ( v2 )
    v3 = *(_QWORD *)(*((_QWORD *)a2 + 29) + 96LL);
  if ( (unsigned int)dword_14029EE20 > 4
    && (qword_14029EE30 & 0x100) != 0
    && (qword_14029EE38 & 0x100) == qword_14029EE38 )
  {
    v5 = *((_QWORD *)a1 + 56);
    v11 = *(unsigned __int16 *)(v5 + 18);
    v12 = *(unsigned __int16 *)(v5 + 16);
    v13 = *((_DWORD *)a2 + 49);
    v7 = *((_QWORD *)a1 + 22);
    v8 = *((_QWORD *)a2 + 6);
    v6 = v2;
    v9 = v3;
    v10 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_14029EE20,
      (unsigned int)&unk_14027CAA9,
      v3,
      v2,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11);
  }
}
