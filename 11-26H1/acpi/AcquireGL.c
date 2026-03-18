/*
 * XREFs of AcquireGL @ 0x14000CF90
 * Callers:
 *     AccFieldUnit @ 0x14000ACF0 (AccFieldUnit.c)
 *     ParseAcquire @ 0x14000D400 (ParseAcquire.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AcquireGL(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // eax

  v1 = 0;
  if ( ghGlobalLock )
  {
    v3 = ghGlobalLock(5LL, 0LL, qword_14008EAD0, RestartCtxtCallback, a1 + 328);
    v1 = v3;
    if ( v3 == 259 )
    {
      return 32772;
    }
    else if ( v3 )
    {
      v1 = -1072431086;
      LogError(-1072431086);
      AcpiDiagTraceAmlError(a1, -1072431086);
      PrintDebugMessage(6u, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return v1;
}
