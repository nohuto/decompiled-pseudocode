/*
 * XREFs of ??0CRenderThreadWaitTick@@QEAA@PEC_K@Z @ 0x180202DC0
 * Callers:
 *     ?WaitForWork@CScheduler@@QEAAXPEAUIMessageLoopExtensions@@@Z @ 0x18002F990 (-WaitForWork@CScheduler@@QEAAXPEAUIMessageLoopExtensions@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800AB2A8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801DDCBC (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

CRenderThreadWaitTick *__fastcall CRenderThreadWaitTick::CRenderThreadWaitTick(
        CRenderThreadWaitTick *this,
        volatile unsigned __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = qword_1803DE848;
  *(_QWORD *)this = &qword_1803DE848;
  qword_1803DE848 = 0LL;
  v3 = *((_QWORD *)this + 1);
  if ( v3
    && GetTickCount64() - v3 > (unsigned int)CCommonRegistryData::RenderThreadTimeoutMilliseconds
    && !IsDebuggerPresent()
    && !(unsigned int)IsKernelDebuggerPresent()
    && (unsigned int)dword_1803DC810 > 5
    && tlgKeywordOn((__int64)&dword_1803DC810, 0x400000000000LL) )
  {
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v4,
      (__int64)&unk_1803B2A5A);
  }
  return this;
}
