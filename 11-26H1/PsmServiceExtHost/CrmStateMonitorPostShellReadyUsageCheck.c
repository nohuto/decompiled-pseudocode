/*
 * XREFs of CrmStateMonitorPostShellReadyUsageCheck @ 0x180063830
 * Callers:
 *     CrmStateMonitorPostShellReadyUsageCallback @ 0x180063770 (CrmStateMonitorPostShellReadyUsageCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateMonitorPostShellReadyUsageCheck(__int64 a1)
{
  __int64 result; // rax
  unsigned int i; // edx

  if ( *(_DWORD *)(a1 + 160) < 4u || *(_DWORD *)(a1 + 180) < 4u )
    return 0LL;
  result = 0LL;
  for ( i = 0; i < 4; ++i )
  {
    if ( *(_DWORD *)(a1 + 4LL * i + 144) > 0x1Eu || *(_DWORD *)(a1 + 4LL * i + 164) > 0x1Eu )
      return result;
  }
  return 1LL;
}
