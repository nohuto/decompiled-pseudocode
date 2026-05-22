/*
 * XREFs of ?OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUHitTestInfo@@PEBGW4ContextualProcessorState@@@Z @ 0x1800166C0
 * Callers:
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x180015E20 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapSz@G@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapSz@G@@5@Z @ 0x18000B43C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapSz@G@@.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800165E0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x1800737A4 (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 *     ?ProcessorStateToString@InputTraceLogging@@CAPEBDW4ContextualProcessorState@@@Z @ 0x18007B034 (-ProcessorStateToString@InputTraceLogging@@CAPEBDW4ContextualProcessorState@@@Z.c)
 */

__int64 __fastcall InputTraceLogging::ContextualProcessing::OnHitTest(
        unsigned int *a1,
        const WCHAR *a2,
        unsigned int a3)
{
  __int64 result; // rax
  __int64 v7; // r9
  const unsigned __int16 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // [rsp+50h] [rbp-38h] BYREF
  const unsigned __int16 *v13; // [rsp+58h] [rbp-30h] BYREF
  const WCHAR *v14; // [rsp+60h] [rbp-28h] BYREF
  const unsigned __int16 *v15; // [rsp+68h] [rbp-20h] BYREF
  __int64 v16; // [rsp+70h] [rbp-18h] BYREF
  unsigned int v17; // [rsp+A8h] [rbp+20h] BYREF

  result = (__int64)InputTraceLogging::Provider();
  v7 = result;
  if ( *(_DWORD *)result > 4u )
  {
    result = *(unsigned int *)(result + 16);
    if ( (result & 0x400) != 0 )
    {
      result = *(_QWORD *)(v7 + 24) & 0x400LL;
      if ( result == *(_QWORD *)(v7 + 24) )
      {
        v8 = (const unsigned __int16 *)InputTraceLogging::ProcessorStateToString(a3);
        v9 = *a1;
        v13 = v8;
        v17 = a1[1];
        v14 = a2;
        v15 = (const unsigned __int16 *)InputTraceLogging::InputTypeToString(v9);
        v12 = a1[10];
        v16 = *((_QWORD *)a1 + 2);
        return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
                 v11,
                 (__int64)&unk_180229B48,
                 v10,
                 v11,
                 (__int64)&v16,
                 (__int64)&v12,
                 &v15,
                 (__int64)&v17,
                 &v14,
                 &v13);
      }
    }
  }
  return result;
}
