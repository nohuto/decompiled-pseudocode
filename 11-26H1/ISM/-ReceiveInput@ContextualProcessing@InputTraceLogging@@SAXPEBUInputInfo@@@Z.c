/*
 * XREFs of ?ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x18000F758
 * Callers:
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@KV?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x18000F4CC (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@KV-$function@$$A6AXPEAVInputCo.c)
 *     ?DeliverRawMouseToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x1800223E4 (-DeliverRawMouseToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAV.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180003350 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800165E0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x1800737A4 (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 */

void __fastcall InputTraceLogging::ContextualProcessing::ReceiveInput(const struct InputInfo *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // [rsp+58h] [rbp+10h] BYREF
  const unsigned __int16 *v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u
    && (*((_DWORD *)v2 + 4) & 0x400LL) != 0
    && (*((_QWORD *)v2 + 3) & 0x400LL) == *((_QWORD *)v2 + 3) )
  {
    v3 = *(unsigned int *)a1;
    v6 = *((_DWORD *)a1 + 1);
    v7 = (const unsigned __int16 *)InputTraceLogging::InputTypeToString(v3);
    v8 = *((_QWORD *)a1 + 2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      v4,
      (__int64)&unk_180217331,
      v4,
      v5,
      (__int64)&v8,
      &v7,
      (__int64)&v6);
  }
}
