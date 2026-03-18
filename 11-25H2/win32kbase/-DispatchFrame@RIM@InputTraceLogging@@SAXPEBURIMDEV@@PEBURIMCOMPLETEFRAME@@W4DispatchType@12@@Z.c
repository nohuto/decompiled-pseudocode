/*
 * XREFs of ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1400EE000
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x140183228 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessCompleteFrame @ 0x140183590 (rimProcessCompleteFrame.c)
 *     rimFindOtherQueuedFrames @ 0x1401F0EC0 (rimFindOtherQueuedFrames.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x1400EE138 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@-.c)
 */

void __fastcall InputTraceLogging::RIM::DispatchFrame(__int64 a1, int *a2, int a3)
{
  int v3; // r9d
  __int64 v4; // r10
  __int64 v6; // rcx
  const char *v7; // rax
  int v8; // [rsp+70h] [rbp+27h] BYREF
  int v9; // [rsp+74h] [rbp+2Bh] BYREF
  int v10; // [rsp+78h] [rbp+2Fh] BYREF
  const char *v11; // [rsp+80h] [rbp+37h] BYREF
  __int64 v12; // [rsp+88h] [rbp+3Fh] BYREF
  __int64 v13; // [rsp+90h] [rbp+47h] BYREF
  __int64 v14; // [rsp+98h] [rbp+4Fh] BYREF
  int v15; // [rsp+B8h] [rbp+6Fh] BYREF
  int v16; // [rsp+C8h] [rbp+7Fh] BYREF

  v3 = a2[6];
  v4 = 0LL;
  if ( v3 )
    v4 = *(_QWORD *)(*((_QWORD *)a2 + 29) + 96LL);
  if ( (unsigned int)dword_14029EE20 > 4
    && (qword_14029EE30 & 0x100) != 0
    && (qword_14029EE38 & 0x100) == qword_14029EE38 )
  {
    v6 = *(_QWORD *)(a1 + 448);
    v15 = *(unsigned __int16 *)(v6 + 18);
    v16 = *(unsigned __int16 *)(v6 + 16);
    v8 = *a2;
    v9 = a2[49];
    v10 = v3;
    if ( a3 )
    {
      if ( a3 == 1 )
        v7 = "Queued";
      else
        v7 = "UNKNOWN";
    }
    else
    {
      v7 = "Immediate";
    }
    v11 = v7;
    v12 = *((_QWORD *)a2 + 6);
    v13 = v4;
    v14 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_14029EE20,
      (unsigned int)&unk_14027C769,
      a3,
      v3,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v16,
      (__int64)&v15);
  }
}
