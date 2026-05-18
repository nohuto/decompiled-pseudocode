/*
 * XREFs of ?RecordReturn@details@wil@@YAHJ@Z @ 0x180006054
 * Callers:
 *     ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x180004354 (--$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::RecordReturn(wil::details *this)
{
  `wil::details::RecordReturn'::`2'::s_hrErrorLast = (int)this;
  return (unsigned int)_InterlockedIncrement(&`wil::details::RecordReturn'::`2'::s_cErrorCount);
}
