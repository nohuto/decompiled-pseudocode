/*
 * XREFs of InitAcpiIdleStateSupport @ 0x140043170
 * Callers:
 *     <none>
 * Callees:
 *     InitMonitorMWaitSupport @ 0x14002356C (InitMonitorMWaitSupport.c)
 */

__int64 __fastcall InitAcpiIdleStateSupport(__int64 a1)
{
  if ( (*(_QWORD *)(a1 + 280) & 0x2000007F000LL) == 0 || (int)InitMonitorMWaitSupport(a1) < 0 )
  {
    *(_QWORD *)(a1 + 200) = 0LL;
    *(_QWORD *)(a1 + 280) &= 0xFFFFFDFFFFF80FFFuLL;
  }
  return 0LL;
}
