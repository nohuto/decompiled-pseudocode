/*
 * XREFs of SshpEtwEnableCallback @ 0x140B13E20
 * Callers:
 *     <none>
 * Callees:
 *     SshpTracingRundownBlockerState @ 0x140B13E44 (SshpTracingRundownBlockerState.c)
 *     SshpTracingRundownCollectionState @ 0x140B13F74 (SshpTracingRundownCollectionState.c)
 */

void __fastcall SshpEtwEnableCallback(LPCGUID SourceId, __int64 ControlCode, __int64 Level, ULONGLONG MatchAnyKeyword)
{
  if ( (_DWORD)ControlCode == 2 )
  {
    SshpTracingRundownBlockerState(SourceId, ControlCode, Level, MatchAnyKeyword);
    SshpTracingRundownCollectionState();
  }
}
