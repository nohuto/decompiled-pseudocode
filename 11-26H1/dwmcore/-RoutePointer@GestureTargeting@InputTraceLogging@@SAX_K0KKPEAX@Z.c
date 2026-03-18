/*
 * XREFs of ?RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z @ 0x1801146E8
 * Callers:
 *     ?RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180114240 (-RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180094B5C (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@43@Z @ 0x1801DDF40 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::RoutePointer(__int64 a1, __int64 a2, int a3, int a4, void *a5)
{
  const struct _tlgProvider_t *v9; // rax
  int v10; // r9d
  __int64 v11; // r8
  int v12; // [rsp+50h] [rbp-28h] BYREF
  int v13; // [rsp+54h] [rbp-24h] BYREF
  void *v14; // [rsp+58h] [rbp-20h] BYREF
  __int64 v15; // [rsp+60h] [rbp-18h] BYREF
  __int64 v16; // [rsp+68h] [rbp-10h] BYREF

  v9 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v9 > 4u && (*((_DWORD *)v9 + 4) & 0x800LL) != 0 )
  {
    v11 = *((_QWORD *)v9 + 3) & 0x800LL;
    if ( v11 == *((_QWORD *)v9 + 3) )
    {
      v14 = a5;
      v12 = a4;
      v13 = a3;
      v15 = a2;
      v16 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (_DWORD)v9,
        (unsigned int)&unk_1803B03AA,
        v11,
        v10,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v14);
    }
  }
}
