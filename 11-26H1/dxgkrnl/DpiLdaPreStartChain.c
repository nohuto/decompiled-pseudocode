/*
 * XREFs of DpiLdaPreStartChain @ 0x14009378C
 * Callers:
 *     DpiLdaStartAdapterInChain @ 0x140254BB0 (DpiLdaStartAdapterInChain.c)
 * Callees:
 *     DpiFdoCreateSysMmAdapter @ 0x14023FEBC (DpiFdoCreateSysMmAdapter.c)
 */

__int64 __fastcall DpiLdaPreStartChain(__int64 a1)
{
  int SysMmAdapter; // ebx

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 64) + 5824LL) )
    return 0LL;
  SysMmAdapter = DpiFdoCreateSysMmAdapter();
  if ( SysMmAdapter >= 0 )
    return 0LL;
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 681;
  return (unsigned int)SysMmAdapter;
}
